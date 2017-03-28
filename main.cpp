#include "mywindow.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	MyWindow window;
	//Qt::WindowFlags flags = 0;
	//flags |= Qt::FramelessWindowHint;
	//window.setWindowFlags(flags);
	window.show();

	return a.exec();
}
