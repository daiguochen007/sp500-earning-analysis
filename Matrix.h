#ifndef Matrix_h
#define Matrix_h

#include <vector>
using namespace std;

typedef vector<vector<double>> matrix;


vector<double> operator*(const double& a,const vector<double>&V);

vector<double> operator+(const vector<double>&V, const vector<double>&W);

//rbind matrix and vec
matrix operator+(const matrix& C, const vector<double>&V);



#endif
