#include "mainwindow.h"
#include <QApplication>
#include "var.h"
#include <QString>
#include <QTextStream>
#include "iostream"
#include "stdio.h"



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

//    printf(bud_rate);
    std::cout << bud_rate << endl;
    return a.exec();
}
