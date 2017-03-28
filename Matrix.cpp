#include "Matrix.h"
#include <cmath>



vector<double> operator+(const vector<double>&V, const vector<double>&W)
{
   int d = V.size();
   vector<double> U(d);
   for (int j=0; j<d; j++) U[j] = V[j] + W[j];
   return U;
}


vector<double> operator*(const double& a, const vector<double>&V)
{
   int d = V.size();
   vector<double> U(d);
   for (int j=0; j<d; j++) U[j] = a*V[j];
   return U;
}

//rbind matrix and vec
matrix operator+(const matrix& C, const vector<double>&V)
{
	int row = C.size();
	matrix mat(row+1);
	for (int i = 0; i<row; i++) mat[i]=C[i];
	mat[row] = V;

	return mat;
};