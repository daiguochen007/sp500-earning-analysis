#include <string>
#include <vector>
#include <stack>
#include <map>
#include "Matrix.h"
#include <cmath>
#include "stock_result.h"
using namespace std;

//Stock member function
void stock::get_type(){
	if (act_EPS / estim_EPS - 1 >= 0.03)
	{
		type = BEAT; typestring = "BEAT";
	}
	else if (act_EPS / estim_EPS - 1 <= -0.03)
	{
		type = MISS; typestring = "MISS";
	}
	else
	{
		type = MEET; typestring = "MEET";
	}
};

void stock::calculate_ret(){
	for (int i = 0; i < price.size()-1; i++){
		ret.push_back(price[i + 1] / price[i] - 1);
	}
};

void stock::calculate_ret_SPX(){
	for (int i = 0; i < price_SPX.size() - 1; i++){
		ret_SPX.push_back(price_SPX[i + 1] / price_SPX[i] - 1);
	}
};

void stock::calculate_abn_ret(){
	abn_ret=ret+(-1*ret_SPX);
};


//Result member function
void result::caculate_AAR(){
	int rows = abn_ret_mat.size();
	int days = abn_ret_mat[0].size();
	double sum = 0;

	for (int i = 0; i < days; i++){
		for (int j = 0; j < rows; j++){
			sum=sum+abn_ret_mat[j][i];
		}
		AAR.push_back(sum / rows);
		sum = 0;
	}
};

void result::caculate_CAAR(){
	int days = AAR.size();
	CAAR.push_back(*AAR.begin());
	for (int i = 1; i < days; i++){
		CAAR.push_back(AAR[i] + CAAR.back());
	}
};
