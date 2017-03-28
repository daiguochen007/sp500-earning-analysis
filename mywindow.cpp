#include "mywindow.h"
#include "stdafx.h"
#include <QMessageBox>
#include <sstream>
#include <iomanip>
#include <iostream>
#include <string>
#include "get_all_data.h"
#include "display_excel.h"
using namespace std;

//declare
AllDataStruct alldata;
void DataThreadQ3::run()
{
	get_SPX_data_all(alldata.SPXmap);
	get_all_data(alldata,"Q3");
}

void DataThreadQ2::run()
{
	get_SPX_data_all(alldata.SPXmap);
	get_all_data(alldata, "Q2");
}

void DataThreadQ4::run()
{
	get_SPX_data_all(alldata.SPXmap);
	get_all_data(alldata, "Q4");
}

MyWindow::MyWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	setFixedSize(1112, 789);
	//setStyleSheet("background-color: rgb(255, 255, 255);");
	createConnects();
}

MyWindow::~MyWindow()
{

}

//create connections
void MyWindow::createConnects(){

	QObject::connect(ui.actionGet_all_stock_data, SIGNAL(triggered()), this, SLOT(menu_first_1()));//1.2     download data for 2015 Q3
	QObject::connect(ui.actionGet_stock_data_for_2015_Q3, SIGNAL(triggered()), this, SLOT(menu_first_2()));//1.1     download data for 2015 Q2
	QObject::connect(ui.actionGet_stock_data_for_2015_Q4, SIGNAL(triggered()), this, SLOT(menu_first_3()));//1.3     download data for 2015 Q4

	QObject::connect(ui.actionGet_stock, SIGNAL(triggered()), this, SLOT(menu_second_1())); //2.1     get stock info
	QObject::connect(ui.listWidget, SIGNAL(itemDoubleClicked(QListWidgetItem *)), this, SLOT(menu_second_1()));//2.1 get stock info when double-click

	QObject::connect(ui.actionDisplay_stock_price_in_Excel, SIGNAL(triggered()), this, SLOT(menu_second_2()));//2.2 display price in excel

	QObject::connect(ui.actionAAR, SIGNAL(triggered()), this, SLOT(menu_third_1_1())); //3.1.1  BEAT
	QObject::connect(ui.actionCAAR, SIGNAL(triggered()), this, SLOT(menu_third_1_2())); //3.1.2  BEAT
	QObject::connect(ui.actionAAR_2, SIGNAL(triggered()), this, SLOT(menu_third_2_1())); //3.2.1  MEET
	QObject::connect(ui.actionCAAR_2, SIGNAL(triggered()), this, SLOT(menu_third_2_2())); //3.2.2  MEET
	QObject::connect(ui.actionAAR_3, SIGNAL(triggered()), this, SLOT(menu_third_3_1())); //3.3.1  MISS
	QObject::connect(ui.actionCAAR_3, SIGNAL(triggered()), this, SLOT(menu_third_3_2())); //3.3.2  MISS

	QObject::connect(ui.actionShow_excel_for_CAAR, SIGNAL(triggered()), this, SLOT(menu_fourth()));  //4  display CAAR in excel

	QObject::connect(ui.actionExit_Program, SIGNAL(triggered()), this, SLOT(menu_exit()));      //5 exit
	QObject::connect(ui.actionClear_screen, SIGNAL(triggered()), this, SLOT(clear()));      //5 clear screen
}

//implement slots
void MyWindow::menu_exit(){
	QMessageBox msg;
	msg.setWindowTitle("Farewell");
	msg.setStyleSheet(QLatin1String("font: 75 italic 10pt \"Georgia\";\n""color:rgb(0, 0, 0)\n"""));
	msg.setText("Bye Bye~    >_<");
	msg.exec();
	close();
};

void MyWindow::msgClick(){
	QMessageBox msg;
	msg.setText("Still Working on it! ^_^");
	msg.exec();
}

void MyWindow::clear(){
	ui.listWidget->clear();
	ui.textBrowser->clear();
}

void MyWindow::help(){
	QMessageBox msg;
	msg.setWindowTitle("Help");
	msg.setStyleSheet(QLatin1String("font: 75 italic 9pt \"Georgia\";\n""color:rgb(0, 0, 127)\n"""));
	msg.setText("                   Program menu\n No.1 Retrieve historical price data for 120 stocks picked in S&P500.\n No.2 Get information for one stock within stock pool.\n No.3 Show AAR or CAAR for chosen group.\n No.4 Show Excel graph with CAAR for all 3 groups\n No.5 Exit Program.");
	msg.exec();
};

void MyWindow::menu_first_1(){
	ui.textBrowser->clear();
	ui.listWidget->clear();

	DataThreadQ3 datathread;
	datathread.start();
	//message before thread end
	QMessageBox msg;
	msg.setWindowTitle("Downloading");
	msg.setText("Start downloading data! Please wait...");
	msg.exec();
	datathread.wait();

	map<string, stock>::iterator itr;
	for (itr = alldata.stockmap.begin(); itr != alldata.stockmap.end(); itr++){
		new QListWidgetItem(tr(itr->first.c_str()), ui.listWidget);
	}
	ui.listWidget->setCurrentRow(0);

	ostringstream oss;
	oss << "Data is ready!";
	string mystr = oss.str();
	QString qstr = QString::fromStdString(mystr);
	ui.textBrowser->append(qstr);
}

void MyWindow::menu_first_2(){
	ui.textBrowser->clear();
	ui.listWidget->clear();

	DataThreadQ2 datathread;
	datathread.start();
	//message before thread end
	QMessageBox msg;
	msg.setWindowTitle("Downloading");
	msg.setText("Start downloading data! Please wait...");
	msg.exec();
	datathread.wait();

	map<string, stock>::iterator itr;
	for (itr = alldata.stockmap.begin(); itr != alldata.stockmap.end(); itr++){
		new QListWidgetItem(tr(itr->first.c_str()), ui.listWidget);
	}
	ui.listWidget->setCurrentRow(0);

	ostringstream oss;
	oss << "Data is ready!";
	string mystr = oss.str();
	QString qstr = QString::fromStdString(mystr);
	ui.textBrowser->append(qstr);
}

void MyWindow::menu_first_3(){
	ui.textBrowser->clear();
	ui.listWidget->clear();

	DataThreadQ4 datathread;
	datathread.start();
	//message before thread end
	QMessageBox msg;
	msg.setWindowTitle("Downloading");
	msg.setText("Start downloading data! Please wait...");
	msg.exec();
	datathread.wait();

	map<string, stock>::iterator itr;
	for (itr = alldata.stockmap.begin(); itr != alldata.stockmap.end(); itr++){
		new QListWidgetItem(tr(itr->first.c_str()), ui.listWidget);
	}
	ui.listWidget->setCurrentRow(0);

	ostringstream oss;
	oss << "Data is ready!";
	string mystr = oss.str();
	QString qstr = QString::fromStdString(mystr);
	ui.textBrowser->append(qstr);
}

void MyWindow::menu_second_1(){
	ui.textBrowser->clear();

	if (ui.listWidget->count() != 0){
		ostringstream oss;
		map<string, stock>::iterator itr;
		itr = alldata.stockmap.find(ui.listWidget->currentItem()->text().toStdString());

		oss << "       Symbol: " << itr->first;
		oss << "\n Estimate EPS: " << itr->second.estim_EPS;
		oss << "\n   Actual EPS: " << itr->second.act_EPS;
		oss << "\nAnnounce Time: " << itr->second.ann_time;
		oss << "\n         Type: " << itr->second.typestring;
		oss << "\n   Start Date: " << itr->second.start;
		oss << "\n     End Date: " << itr->second.end << "\n";

		string mystr = oss.str();
		QString qstr = QString::fromStdString(mystr);
		ui.textBrowser->append(qstr);
		oss.str("");
	}
	else{
		QMessageBox msg;
		msg.setText("Need get stock data first!");
		msg.exec();
	}
}

void MyWindow::menu_second_2(){
	if (ui.listWidget->count() != 0){
		ostringstream oss;
		map<string, stock>::iterator itr;
		itr = alldata.stockmap.find(ui.listWidget->currentItem()->text().toStdString());

		oss << "Display " << itr->first << " price in Excel...\n";
		string mystr = oss.str();
		QString qstr = QString::fromStdString(mystr);
		ui.textBrowser->append(qstr);
		oss.str("");

		string usertitle;
		double rescale = 0;
		rescale = itr->second.price[0] / itr->second.price_SPX[0];
		usertitle = "Stock price of " + itr->first + " (" + itr->second.start + " - " + itr->second.end + ")";
		
		display_in_excel2(usertitle, itr->first, itr->second.price, rescale * itr->second.price_SPX);
	}
	else{
		QMessageBox msg;
		msg.setText("Need get stock data first!");
		msg.exec();
	}
}

//BEAT AAR
void MyWindow::menu_third_1_1(){
	ui.textBrowser->clear();
	if (ui.listWidget->count() != 0){
		ostringstream oss;
		oss << "   Type: Beat\n";
		oss << "    AAR:\n";
		for (int i = 0; i < alldata.resultmap.find(BEAT)->second.AAR.size(); i++)
		{
			oss << setw(18) << alldata.resultmap.find(BEAT)->second.AAR[i] << "\n";
		}

		string mystr = oss.str();
		QString qstr = QString::fromStdString(mystr);
		ui.textBrowser->append(qstr);
		oss.str("");
	}
	else{
		QMessageBox msg;
		msg.setText("Need get stock data first!");
		msg.exec();
	}
};

//BEAT CAAR
void MyWindow::menu_third_1_2(){
	ui.textBrowser->clear();
	if (ui.listWidget->count() != 0){
		ostringstream oss;
		oss << "   Type: Beat\n";
		oss << "   CAAR:\n";
		for (int i = 0; i < alldata.resultmap.find(BEAT)->second.CAAR.size(); i++)
		{
			oss << setw(18) << alldata.resultmap.find(BEAT)->second.CAAR[i] << "\n";
		}

		string mystr = oss.str();
		QString qstr = QString::fromStdString(mystr);
		ui.textBrowser->append(qstr);
		oss.str("");
	}
	else{
		QMessageBox msg;
		msg.setText("Need get stock data first!");
		msg.exec();
	}
};

//MEET AAR
void MyWindow::menu_third_2_1(){
	ui.textBrowser->clear();
	if (ui.listWidget->count() != 0){
		ostringstream oss;
		oss << "   Type: Meet\n";
		oss << "    AAR:\n";
		for (int i = 0; i < alldata.resultmap.find(MEET)->second.AAR.size(); i++)
		{
			oss << setw(18) << alldata.resultmap.find(MEET)->second.AAR[i] << "\n";
		}

		string mystr = oss.str();
		QString qstr = QString::fromStdString(mystr);
		ui.textBrowser->append(qstr);
		oss.str("");
	}
	else{
		QMessageBox msg;
		msg.setText("Need get stock data first!");
		msg.exec();
	}
};

//MEET CAAR
void MyWindow::menu_third_2_2(){
	ui.textBrowser->clear();
	if (ui.listWidget->count() != 0){
		ostringstream oss;
		oss << "   Type: Meet\n";
		oss << "   CAAR:\n";
		for (int i = 0; i < alldata.resultmap.find(MEET)->second.CAAR.size(); i++)
		{
			oss << setw(18) << alldata.resultmap.find(MEET)->second.CAAR[i] << "\n";
		}

		string mystr = oss.str();
		QString qstr = QString::fromStdString(mystr);
		ui.textBrowser->append(qstr);
		oss.str("");
	}
	else{
		QMessageBox msg;
		msg.setText("Need get stock data first!");
		msg.exec();
	}
};

//MISS AAR
void MyWindow::menu_third_3_1(){
	ui.textBrowser->clear();
	if (ui.listWidget->count() != 0){
		ostringstream oss;
		oss << "   Type: Miss\n";
		oss << "    AAR:\n";
		for (int i = 0; i < alldata.resultmap.find(MISS)->second.AAR.size(); i++)
		{
			oss << setw(18) << alldata.resultmap.find(MISS)->second.AAR[i] << "\n";
		}

		string mystr = oss.str();
		QString qstr = QString::fromStdString(mystr);
		ui.textBrowser->append(qstr);
		oss.str("");
	}
	else{
		QMessageBox msg;
		msg.setText("Need get stock data first!");
		msg.exec();
	}
};

//MISS CAAR
void MyWindow::menu_third_3_2(){
	ui.textBrowser->clear();
	if (ui.listWidget->count() != 0){
		ostringstream oss;
		oss << "   Type: Miss\n";
		oss << "   CAAR:\n";
		for (int i = 0; i < alldata.resultmap.find(MISS)->second.CAAR.size(); i++)
		{
			oss << setw(18) << alldata.resultmap.find(MISS)->second.CAAR[i] << "\n";
		}

		string mystr = oss.str();
		QString qstr = QString::fromStdString(mystr);
		ui.textBrowser->append(qstr);
		oss.str("");
	}
	else{
		QMessageBox msg;
		msg.setText("Need get stock data first!");
		msg.exec();
	}
};

void MyWindow::menu_fourth(){
	if (ui.listWidget->count() != 0){
		ui.textBrowser->clear();
		ostringstream oss;
		oss << "Display CAAR in Excel...\n";
		string mystr = oss.str();
		QString qstr = QString::fromStdString(mystr);
		ui.textBrowser->append(qstr);

		display_in_excel3((alldata.resultmap.find(MISS)->second).CAAR, (alldata.resultmap.find(MEET)->second).CAAR, (alldata.resultmap.find(BEAT)->second).CAAR);
	}
	else{
		QMessageBox msg;
		msg.setText("Need get stock data first!");
		msg.exec();
	}
};

void MyWindow::test(){
	//QMessageBox msg;
	//msg.setText("This is a test!");
	//msg.exec();
	exceltest();
}