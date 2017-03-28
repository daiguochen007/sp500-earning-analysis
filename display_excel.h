#ifndef display_excel_h
#define display_excel_h

#include <string>
#include "stdafx.h"
#include "BitsAndPieces\StringConversions.hpp"
#include "ExcelDriver.hpp"
#include "ExcelMechanisms.hpp"
#include "VectorsAndMatrices\NumericMatrix.cpp" // Template
#include "ExceptionClasses\DatasimException.hpp"
#include <windows.h>
using namespace std;

void display_in_excel3(vector<double>&CAAR1, vector<double>&CAAR2, vector<double>&CAAR3)
{
	long N = CAAR1.size();
	Vector<double, long> xarr(N);
	Vector<double, long> yarr(N);
	Vector<double, long> yarr2(N);
	Vector<double, long> yarr3(N);

	for (long i = 0; i < CAAR1.size(); i++)
	{
		xarr[i + 1] = i + 1;
		yarr[i + 1] = CAAR1[i];
	}
	for (long i = 0; i < CAAR2.size(); i++)
	{
		yarr2[i + 1] = CAAR2[i];
	}
	for (long i = 0; i < CAAR3.size(); i++)
	{
		yarr3[i + 1] = CAAR3[i];
	}

	list<string>labels;
	labels.push_back("MISS");
	labels.push_back("MEET");
	labels.push_back("BEAT");

	list<Vector<double, long>>PlotResult;
	PlotResult.push_back(yarr);
	PlotResult.push_back(yarr2);
	PlotResult.push_back(yarr3);

	//start excel
	ExcelDriver& excel = ExcelDriver::Instance();
	excel.MakeVisible(true);		// Default is INVISIBLE!

	try
	{
		//Sleep(1000)
		printInExcel(xarr, labels, PlotResult, "CAAR for 3 groups");
	}
	catch (DatasimException& e)
	{
		e.print();
	}
	catch (...)
	{
		// Catches everything else
	}
}

void display_in_excel2(string title, string lab, vector<double>&vec, vector<double>&vec2)
{
	long N = vec.size();
	Vector<double, long> xarr(N);
	Vector<double, long> yarr(N);
	Vector<double, long> yarr2(N);

	for (long i = 0; i < vec.size(); i++)
	{
		xarr[i + 1] = i + 1;
		yarr[i + 1] = vec[i];
		yarr2[i + 1] = vec2[i];
	}

	list<string>labels;
	labels.push_back(lab);
	labels.push_back("Rescaled SPY");

	list<Vector<double, long>>PlotResult;
	PlotResult.push_back(yarr);
	PlotResult.push_back(yarr2);

	//start excel
	ExcelDriver& excel = ExcelDriver::Instance();
	excel.MakeVisible(true);		// Default is INVISIBLE!

	try
	{
		Sleep(1000);
		printInExcel(xarr, labels, PlotResult, title);
	}
	catch (DatasimException& e)
	{
		e.print();
	}
	catch (...)
	{
		// Catches everything else
	}
}

void exceltest(){
	long N = 20;

	Vector<double, long> xarr(N + 1);
	Vector<double, long> yarr(N + 1);
	Vector<double, long> yarr2(N + 1);
	Vector<double, long> yarr3(N + 1);

	double h1 = 0.1;
	xarr[xarr.MinIndex()] = 0.0;
	for (long i = xarr.MinIndex() + 1; i <= xarr.MaxIndex(); i++)
	{
		xarr[i] = xarr[i - 1] + h1;
	}

	double h2 = 0.2;
	yarr[yarr.MinIndex()] = 0.0;
	for (long j = yarr.MinIndex() + 1; j <= yarr.MaxIndex(); j++)
	{
		yarr[j] = yarr[j - 1] + h2;
		yarr2[j] = yarr2[j - 1] + yarr[j];
		yarr3[j] = yarr3[j - 1] + yarr2[j];
	}

	list<std::string>labels;
	labels.push_back("MISS");
	labels.push_back("MEET");
	labels.push_back("BEAT");

	list<Vector<double, long>>PlotResult;
	PlotResult.push_back(yarr);
	PlotResult.push_back(yarr2);
	PlotResult.push_back(yarr3);

	//start excel
	ExcelDriver& excel = ExcelDriver::Instance();
	excel.MakeVisible(true);		// Default is INVISIBLE!

	//Sleep(1000);
	////add plot
	//printOneExcel(xarr, yarr, "myplot");

	try
	{
		//3 to 1 plot
		//sleep solve error, no error with break
		Sleep(2000);
		printInExcel(xarr, labels, PlotResult, "myplot_all");
	}
	catch (DatasimException& e)
	{
		e.print();
	}
	catch (...)
	{
		// Catches everything else
	}
}


#endif
