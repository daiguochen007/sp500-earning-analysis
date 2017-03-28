#ifndef get_all_data_h
#define get_all_data_h

#include <iostream>
#include <string>
#include <sstream>  
#include "curl.h"
#include <fstream>
#include <vector>
#include <stack>
#include <map>
#include <pthread.h>
#include "libcurl_getdata.h"
#include "stock_result.h"
using namespace std;

//number of threads
#define NUMT 3

struct AllDataStruct {
	map<string, stock>stockmap;
	map<StockType, result>resultmap;
	map<string, double>SPXmap;
};

struct DataStruct {
	string filename;
	map<string, stock>stockmap;
	result myresult;
	map<string, double>SPXmap;
};

static void *get_group_data(void *data_ptr){

	//transfer type
	DataStruct *data_p = (DataStruct *)data_ptr;
	//get stock infomation from file and get data using libcurl
	ifstream file(data_p->filename);
	//ifstream file("stockpool.csv");
	string stock_info;
	while (file.good())
	{
		getline(file, stock_info, '\n');
		if (stock_info != ""){

			stock *stk_ptr = new stock;
			stock mystock = *stk_ptr;

			mystock.symbol = stock_info.substr(0, stock_info.find("US Equity") - 2);
			mystock.ann_time = stock_info.substr(stock_info.find_first_of(",") + 1, 10);
			mystock.start = stock_info.substr(stock_info.find_first_of(",") + 12, 10);
			mystock.end = stock_info.substr(stock_info.find_first_of(",") + 23, 10);
			mystock.estim_EPS = strtod(stock_info.substr(stock_info.find_last_of(',') + 1).c_str(), NULL);
			mystock.act_EPS = strtod(stock_info.substr(stock_info.find_first_of(",") + 34, stock_info.find_last_of(',') - (stock_info.find_first_of(",") + 34)).c_str(), NULL);

			mystock.get_type();

			string url1 = get_url(mystock.symbol, mystock.start, mystock.end);

			mystock.price = *get_data(url1.c_str());
			mystock.price_SPX = *get_SPX_data(mystock.start, mystock.end, data_p->SPXmap);

			mystock.calculate_ret();
			mystock.calculate_ret_SPX();
			mystock.calculate_abn_ret();

			//-------stockmap
			data_p->stockmap.insert(pair<string, stock>(mystock.symbol, mystock));

			//output symbol
			cout << "Get Data for: " << mystock.symbol << endl;

			//-------myresult
			//bind matrix (overload operator + for matrix bind vector)
			data_p->myresult.abn_ret_mat.push_back(mystock.abn_ret);

			delete stk_ptr;
		}
	}
	return NULL;
}

void get_all_data(AllDataStruct &alldata, string Q){
	alldata.stockmap.clear();
	alldata.resultmap.clear();

	DataStruct data0;
	DataStruct data1;
	DataStruct data2;
	if (Q == "Q3"){
		data0.filename = "stockpoolBEATQ3.csv";
		data1.filename = "stockpoolMISSQ3.csv";
		data2.filename = "stockpoolMEETQ3.csv";
	}
	else if (Q == "Q2"){
		data0.filename = "stockpoolBEATQ2.csv";
		data1.filename = "stockpoolMISSQ2.csv";
		data2.filename = "stockpoolMEETQ2.csv";
	}
	else if (Q == "Q4"){
		data0.filename = "stockpoolBEATQ4.csv";
		data1.filename = "stockpoolMISSQ4.csv";
		data2.filename = "stockpoolMEETQ4.csv";
	}
	else{ return; }

	result myresult0(BEAT, "BEAT");
	data0.myresult=myresult0;
	data0.SPXmap = alldata.SPXmap;

	result myresult1(MISS, "MISS");
	data1.myresult = myresult1;
	data1.SPXmap = alldata.SPXmap;

	result myresult2(MEET, "MEET");
	data2.myresult = myresult2;
	data2.SPXmap = alldata.SPXmap;

	pthread_t tid[NUMT];

	//Must initialize libcurl before any threads are started
	curl_global_init(CURL_GLOBAL_ALL);

	int error1 = pthread_create(&tid[0], NULL, get_group_data, (void *)&data0);
	int error2 = pthread_create(&tid[1], NULL, get_group_data, (void *)&data1);
	int error3 = pthread_create(&tid[2], NULL, get_group_data, (void *)&data2);
	error1 = pthread_join(tid[0], NULL);
	error2 = pthread_join(tid[1], NULL);
	error3 = pthread_join(tid[2], NULL);

	curl_global_cleanup();

	data0.myresult.caculate_AAR();
	data0.myresult.caculate_CAAR();

	data2.myresult.caculate_AAR();
	data2.myresult.caculate_CAAR();

	////debug abn_ret not 61 
	//string aaaaa = "allare61";
	//map<string, stock>::iterator itr;
	//for (itr = data1.stockmap.begin(); itr != data1.stockmap.end(); itr++){
	//	if (itr->second.abn_ret.size() != 61){
	//		aaaaa = itr->first;
	//	}
	//}
	data1.myresult.caculate_AAR();    //problem here, delete one for MISS Q2 and Q3
	data1.myresult.caculate_CAAR();  


	alldata.resultmap.insert(pair<StockType, result>(data0.myresult.type, data0.myresult));
	alldata.resultmap.insert(pair<StockType, result>(data1.myresult.type, data1.myresult));
	alldata.resultmap.insert(pair<StockType, result>(data2.myresult.type, data2.myresult));

	map<string, stock>::iterator itr;
	for (itr = data0.stockmap.begin(); itr != data0.stockmap.end(); itr++){
		alldata.stockmap.insert(pair<string, stock>(itr->first,itr->second));
	}
	for (itr = data1.stockmap.begin(); itr != data1.stockmap.end(); itr++){
		alldata.stockmap.insert(pair<string, stock>(itr->first, itr->second));
	}
	for (itr = data2.stockmap.begin(); itr != data2.stockmap.end(); itr++){
		alldata.stockmap.insert(pair<string, stock>(itr->first, itr->second));
	}
}

#endif