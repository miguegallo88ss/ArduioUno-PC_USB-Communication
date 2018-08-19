#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "QCloseEvent"
#include "about.h"
#include "var.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}

void MainWindow::on_actionAbout_2_triggered()
{
//    About about_button;         // Whn open teh About window, previous windows is desabled from clicking
//    about_button.setModal(true);
//    about_button.exec();
    about =new About(this);        // Open one window independent of the previous one.
    about->show();
}

void MainWindow::on_baud_300_triggered()
{
    bud_rate = 300;
}


void MainWindow::on_baud_1200_triggered()
{
    bud_rate = 1200;
}

void MainWindow::on_baud_2400_triggered()
{
    bud_rate = 2400;
}

void MainWindow::on_baud_4800_triggered()
{
    bud_rate = 4800;
}

void MainWindow::on_baud_9600_triggered()
{
    bud_rate = 9600;
}

void MainWindow::on_baud_19200_triggered()
{
    bud_rate = 19200;
}

void MainWindow::on_baud_38400_triggered()
{
    bud_rate = 38400;
}

void MainWindow::on_baud_57600_triggered()
{
    bud_rate = 57600;
}

void MainWindow::on_baud_115200_triggered()
{
    bud_rate = 115200;
}
