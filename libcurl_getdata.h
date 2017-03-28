#ifndef libcurl_getdata_h
#define libcurl_getdata_h

#include <string>
#include <sstream>  
#include "curl.h"
#include <vector>
#include <stack>
#include "writedata.h"
using namespace std;

vector<double> *get_data(const char *url)
{
	vector<double>*pricedata = new vector<double>;

	struct MemoryStruct data;
	data.memory = NULL;
	data.size = 0;

	//create pointer of curl operation  
	CURL *curl;

	//indiactor that can be used to judge if opening url success or not  
	CURLcode res;

	//stack
	stack<double>mystack;

	//init  
	curl = curl_easy_init();
	if (curl)
	{

		curl_easy_setopt(curl, CURLOPT_URL, url);
		curl_easy_setopt(curl, CURLOPT_ENCODING, "");
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data2);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void *)&data);
		res = curl_easy_perform(curl);

		stringstream sData;
		sData.str(data.memory);
		string sValue;
		double dValue = 0;
		for (string line; getline(sData, line);) {
			sValue = line.substr(line.find_last_of(',') + 1);
			dValue = strtod(sValue.c_str(), NULL);
			//cout << sValue << " " << dValue << endl;
			//push dValue into stack
			mystack.push(dValue);
		}//change adjust close from str to double 

		//		int stksiz = mystack.size();
		while (!mystack.empty())
		{
			pricedata->push_back(mystack.top());
			mystack.pop();
		}
		pricedata->pop_back(); //remove last element 0

	}
	if (res == CURLE_OK)
	{
		curl_easy_cleanup(curl);
	}
	return pricedata;
};

//get url for stock
//format "AAPL" "2015/06/12" "2015/11/04"
string get_url(string symbol, string start, string end){
	string url;
	stringstream stst;

	int month_s = strtol(start.substr(5, 2).c_str(), NULL, 10) - 1;
	int month_e = strtol(end.substr(5, 2).c_str(), NULL, 10) - 1;

	stst << "http://ichart.yahoo.com/table.csv?s=" << symbol << "&a=" << month_s << "&b=" << start.substr(8, 2) << "&c=" << start.substr(0, 4)
		<< "&d=" << month_e << "&e=" << end.substr(8, 2) << "&f=" << end.substr(0, 4) << "&g=d&ignore=.csv";

	url = stst.str();
	return url;
};

//Get all SPY price and time from 2015/01/01 - 2016/03/31
void get_SPX_data_all(map<string, double>&SPXmap)
{
	SPXmap.clear();
	vector<double>pricedata;
	vector<string>timedata;

	struct MemoryStruct data;
	data.memory = NULL;
	data.size = 0;

	//create pointer of curl operation  
	CURL *curl;
	//file pointer to create file that store the data  
	//FILE *fp;  
	curl_global_init(CURL_GLOBAL_ALL);

	//indiactor that can be used to judge if opening url success or not  
	CURLcode res;

	//stack
	stack<double>mystack;
	stack<string>mystack2;

	//init  
	curl = curl_easy_init();
	if (curl)
	{
		const char *url = "http://real-chart.finance.yahoo.com/table.csv?s=SPY&d=02&e=31&f=2016&g=d&a=00&b=01&c=2015&ignore=.csv";
		curl_easy_setopt(curl, CURLOPT_URL, url);
		curl_easy_setopt(curl, CURLOPT_ENCODING, "");
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data2);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void *)&data);
		res = curl_easy_perform(curl);

		stringstream sData;
		sData.str(data.memory);
		string sValue;
		double dValue = 0;
		for (string line; getline(sData, line);) {
			sValue = line.substr(line.find_last_of(',') + 1);
			dValue = strtod(sValue.c_str(), NULL);
			sValue = line.substr(0,4)+'/'+line.substr(5,2)+'/'+line.substr(8,2);
			//push Value into stack
			mystack.push(dValue);
			mystack2.push(sValue);
		}//change adjust close from str to double 

		//		int stksiz = mystack.size();
		while (!mystack.empty())
		{
			pricedata.push_back(mystack.top());
			mystack.pop();
		}
		pricedata.pop_back(); //remove last element 0
		while (!mystack2.empty())
		{
			timedata.push_back(mystack2.top());
			mystack2.pop();
		}
		timedata.pop_back(); //remove last element "Date"

		for (int i = 0; i < pricedata.size(); i++)
		{
			SPXmap.insert(pair<string, double>(timedata[i], pricedata[i]));
		}
	}
	if (res == CURLE_OK)
	{
		curl_easy_cleanup(curl);
		curl_global_cleanup();
	}
};

//get data for SPY
vector<double> *get_SPX_data(string start, string end, map<string, double>&SPXmap){
	vector<double>*pricedata = new vector<double>;
	map<string, double>::iterator itr;
	map<string, double>::iterator itr_end = SPXmap.find(end);
	itr_end++;
	for (itr = SPXmap.find(start); itr != itr_end; itr++)
	{
	    pricedata->push_back(itr->second);
	}
	return pricedata;
};



#endif