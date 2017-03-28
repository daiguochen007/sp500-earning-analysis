#ifndef MYWINDOW_H
#define MYWINDOW_H

#include <QtWidgets/QMainWindow>
#include <QThread>
#include "ui_myclass.h"

class MyWindow : public QMainWindow
{
	Q_OBJECT

public:
	MyWindow(QWidget *parent = 0);
	~MyWindow();

private:
	Ui::MyClassClass ui;
	void createConnects();

private slots:
	void msgClick();
	void clear();
	void menu_first_1();
	void menu_first_2();
	void menu_first_3();
	void menu_second_1();
	void menu_second_2();
	void menu_third_1_1();
	void menu_third_1_2();
	void menu_third_2_1();
	void menu_third_2_2();
	void menu_third_3_1();
	void menu_third_3_2();
	void menu_fourth();
	void menu_exit();
	void help();
	void test();
};

class DataThreadQ3 : public QThread
{
	Q_OBJECT
protected:
	void run();
};

class DataThreadQ2 : public QThread
{
	Q_OBJECT
protected:
	void run();
};

class DataThreadQ4 : public QThread
{
	Q_OBJECT
protected:
	void run();
};
#endif // MYCLASS_H
