#include <windows.h>
#include <QThread>
#include <QtGui/QApplication>
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <cmath>
#include <time.h>
#include "mainwindow.h"
#include "QDebug"

int main(int argc, char** argv)
{
    QCoreApplication::setOrganizationName("Frank Buss");
    QCoreApplication::setOrganizationDomain("frank-buss.de");
    QCoreApplication::setApplicationName("MIDI Flash");

    QApplication a(argc, argv);
	MainWindow w;
	w.show();

	return a.exec();
}