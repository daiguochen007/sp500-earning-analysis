#ifndef stock_result_h
#define stock_result_h

#include <string>
#include <vector>
#include <stack>
#include <map>
#include "Matrix.h"
using namespace std;

enum StockType{BEAT,MISS,MEET};

class stock{
public:
	double estim_EPS;
	double act_EPS;
	string symbol;
	string ann_time;
	string start;
	string end;

	StockType type;
	string typestring;
	vector<double> price;
	vector<double> price_SPX;

	vector<double> ret;
	vector<double> ret_SPX;

	vector<double> abn_ret;

	void get_type();
	void calculate_ret();
	void calculate_ret_SPX();
	void calculate_abn_ret();
};


class result{
public:
	StockType type;
	string typestring;
	matrix abn_ret_mat;
	vector<double> AAR;
	vector<double> CAAR;

	void caculate_AAR();
	void caculate_CAAR();
    
	//constructor
	result(){};
	result(StockType type_, string typestring_){ 
		type = type_; 
		typestring = typestring_;
	};
};

#endif