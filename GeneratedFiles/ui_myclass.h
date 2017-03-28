/********************************************************************************
** Form generated from reading UI file 'myclass.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYCLASS_H
#define UI_MYCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyClassClass
{
public:
    QAction *actionGet_all_stock_data;
    QAction *actionAAR;
    QAction *actionCAAR;
    QAction *actionAAR_2;
    QAction *actionCAAR_2;
    QAction *actionAAR_3;
    QAction *actionCAAR_3;
    QAction *actionShow_excel_for_CAAR;
    QAction *actionExit_Program;
    QAction *actionGet_stock;
    QAction *actionClear_screen;
    QAction *actionDisplay_stock_price_in_Excel;
    QAction *actionGet_stock_data_for_2015_Q3;
    QAction *actionGet_stock_data_for_2015_Q4;
    QWidget *centralWidget;
    QLabel *label;
    QTextBrowser *textBrowser;
    QListWidget *listWidget;
    QPushButton *pushButton;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QMenu *menu1;
    QMenu *menuNo_2;
    QMenu *menuNo_3;
    QMenu *menuBEAT;
    QMenu *menuMISS;
    QMenu *menuMEET;
    QMenu *menuNo_4;
    QMenu *menuNo_5;

    void setupUi(QMainWindow *MyClassClass)
    {
        if (MyClassClass->objectName().isEmpty())
            MyClassClass->setObjectName(QStringLiteral("MyClassClass"));
        MyClassClass->resize(1112, 789);
        MyClassClass->setMinimumSize(QSize(0, 0));
        actionGet_all_stock_data = new QAction(MyClassClass);
        actionGet_all_stock_data->setObjectName(QStringLiteral("actionGet_all_stock_data"));
        actionAAR = new QAction(MyClassClass);
        actionAAR->setObjectName(QStringLiteral("actionAAR"));
        actionCAAR = new QAction(MyClassClass);
        actionCAAR->setObjectName(QStringLiteral("actionCAAR"));
        actionAAR_2 = new QAction(MyClassClass);
        actionAAR_2->setObjectName(QStringLiteral("actionAAR_2"));
        actionCAAR_2 = new QAction(MyClassClass);
        actionCAAR_2->setObjectName(QStringLiteral("actionCAAR_2"));
        actionAAR_3 = new QAction(MyClassClass);
        actionAAR_3->setObjectName(QStringLiteral("actionAAR_3"));
        actionCAAR_3 = new QAction(MyClassClass);
        actionCAAR_3->setObjectName(QStringLiteral("actionCAAR_3"));
        actionShow_excel_for_CAAR = new QAction(MyClassClass);
        actionShow_excel_for_CAAR->setObjectName(QStringLiteral("actionShow_excel_for_CAAR"));
        actionExit_Program = new QAction(MyClassClass);
        actionExit_Program->setObjectName(QStringLiteral("actionExit_Program"));
        actionGet_stock = new QAction(MyClassClass);
        actionGet_stock->setObjectName(QStringLiteral("actionGet_stock"));
        actionClear_screen = new QAction(MyClassClass);
        actionClear_screen->setObjectName(QStringLiteral("actionClear_screen"));
        actionDisplay_stock_price_in_Excel = new QAction(MyClassClass);
        actionDisplay_stock_price_in_Excel->setObjectName(QStringLiteral("actionDisplay_stock_price_in_Excel"));
        actionGet_stock_data_for_2015_Q3 = new QAction(MyClassClass);
        actionGet_stock_data_for_2015_Q3->setObjectName(QStringLiteral("actionGet_stock_data_for_2015_Q3"));
        actionGet_stock_data_for_2015_Q4 = new QAction(MyClassClass);
        actionGet_stock_data_for_2015_Q4->setObjectName(QStringLiteral("actionGet_stock_data_for_2015_Q4"));
        centralWidget = new QWidget(MyClassClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(400, 700, 701, 41));
        label->setStyleSheet(QLatin1String("font: 75 italic 9pt \"Comic Sans MS\";\n"
"color: rgb(0, 170, 255);\n"
"text-decoration: underline;"));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(270, 10, 831, 641));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 10, 241, 641));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 700, 81, 41));
        pushButton->setStyleSheet(QLatin1String("font: 75 italic 8pt \"Georgia\";\n"
"color:rgb(0, 0, 127)\n"
""));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(890, 660, 191, 41));
        label_2->setStyleSheet(QLatin1String("font: 87 9pt \"Arial Black\";\n"
"color: rgb(0, 0, 127);"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(140, 700, 91, 41));
        MyClassClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MyClassClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1112, 37));
        menu1 = new QMenu(menuBar);
        menu1->setObjectName(QStringLiteral("menu1"));
        menuNo_2 = new QMenu(menuBar);
        menuNo_2->setObjectName(QStringLiteral("menuNo_2"));
        menuNo_3 = new QMenu(menuBar);
        menuNo_3->setObjectName(QStringLiteral("menuNo_3"));
        menuBEAT = new QMenu(menuNo_3);
        menuBEAT->setObjectName(QStringLiteral("menuBEAT"));
        menuMISS = new QMenu(menuNo_3);
        menuMISS->setObjectName(QStringLiteral("menuMISS"));
        menuMEET = new QMenu(menuNo_3);
        menuMEET->setObjectName(QStringLiteral("menuMEET"));
        menuNo_4 = new QMenu(menuBar);
        menuNo_4->setObjectName(QStringLiteral("menuNo_4"));
        menuNo_5 = new QMenu(menuBar);
        menuNo_5->setObjectName(QStringLiteral("menuNo_5"));
        MyClassClass->setMenuBar(menuBar);

        menuBar->addAction(menu1->menuAction());
        menuBar->addAction(menuNo_2->menuAction());
        menuBar->addAction(menuNo_3->menuAction());
        menuBar->addAction(menuNo_4->menuAction());
        menuBar->addAction(menuNo_5->menuAction());
        menu1->addAction(actionGet_stock_data_for_2015_Q3);
        menu1->addAction(actionGet_all_stock_data);
        menu1->addAction(actionGet_stock_data_for_2015_Q4);
        menuNo_2->addAction(actionGet_stock);
        menuNo_2->addAction(actionDisplay_stock_price_in_Excel);
        menuNo_3->addAction(menuBEAT->menuAction());
        menuNo_3->addAction(menuMEET->menuAction());
        menuNo_3->addAction(menuMISS->menuAction());
        menuBEAT->addAction(actionAAR);
        menuBEAT->addAction(actionCAAR);
        menuMISS->addAction(actionAAR_3);
        menuMISS->addAction(actionCAAR_3);
        menuMEET->addAction(actionAAR_2);
        menuMEET->addAction(actionCAAR_2);
        menuNo_4->addAction(actionShow_excel_for_CAAR);
        menuNo_5->addAction(actionClear_screen);
        menuNo_5->addAction(actionExit_Program);

        retranslateUi(MyClassClass);
        QObject::connect(pushButton, SIGNAL(clicked()), MyClassClass, SLOT(help()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), MyClassClass, SLOT(test()));

        QMetaObject::connectSlotsByName(MyClassClass);
    } // setupUi

    void retranslateUi(QMainWindow *MyClassClass)
    {
        MyClassClass->setWindowTitle(QApplication::translate("MyClassClass", "6883 Project 4.1", 0));
        actionGet_all_stock_data->setText(QApplication::translate("MyClassClass", "Get stock data for 2015 Q3", 0));
        actionAAR->setText(QApplication::translate("MyClassClass", "AAR", 0));
        actionCAAR->setText(QApplication::translate("MyClassClass", "CAAR", 0));
        actionAAR_2->setText(QApplication::translate("MyClassClass", "AAR", 0));
        actionCAAR_2->setText(QApplication::translate("MyClassClass", "CAAR", 0));
        actionAAR_3->setText(QApplication::translate("MyClassClass", "AAR", 0));
        actionCAAR_3->setText(QApplication::translate("MyClassClass", "CAAR", 0));
        actionShow_excel_for_CAAR->setText(QApplication::translate("MyClassClass", "Show excel for CAAR", 0));
        actionExit_Program->setText(QApplication::translate("MyClassClass", "Exit Program", 0));
        actionGet_stock->setText(QApplication::translate("MyClassClass", "Get stock infomation", 0));
        actionClear_screen->setText(QApplication::translate("MyClassClass", "Clear screen", 0));
        actionDisplay_stock_price_in_Excel->setText(QApplication::translate("MyClassClass", "Display stock price in Excel", 0));
        actionGet_stock_data_for_2015_Q3->setText(QApplication::translate("MyClassClass", "Get stock data for 2015 Q2", 0));
        actionGet_stock_data_for_2015_Q4->setText(QApplication::translate("MyClassClass", "Get stock data for 2015 Q4", 0));
        label->setText(QApplication::translate("MyClassClass", "<html><head/><body><p><span style=\" font-weight:600;\">Group Member: Guochen Dai, Yi Zhou, Yang Yi, Yifei Zhou</span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("MyClassClass", "Help", 0));
        label_2->setText(QApplication::translate("MyClassClass", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600; font-style:normal; color:#1a6ab4;\">6883 Project Version 4.1</span></p></body></html>", 0));
        pushButton_2->setText(QApplication::translate("MyClassClass", "Test", 0));
        menu1->setTitle(QApplication::translate("MyClassClass", "No.1", 0));
        menuNo_2->setTitle(QApplication::translate("MyClassClass", "No.2", 0));
        menuNo_3->setTitle(QApplication::translate("MyClassClass", "No.3", 0));
        menuBEAT->setTitle(QApplication::translate("MyClassClass", "BEAT", 0));
        menuMISS->setTitle(QApplication::translate("MyClassClass", "MISS", 0));
        menuMEET->setTitle(QApplication::translate("MyClassClass", "MEET", 0));
        menuNo_4->setTitle(QApplication::translate("MyClassClass", "No.4", 0));
        menuNo_5->setTitle(QApplication::translate("MyClassClass", "No.5", 0));
    } // retranslateUi

};

namespace Ui {
    class MyClassClass: public Ui_MyClassClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYCLASS_H
