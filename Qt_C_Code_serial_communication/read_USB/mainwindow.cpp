#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "QCloseEvent"
#include "about.h"

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
    About about_button;
    about_button.setModal(true);
    about_button.exec();
}

void MainWindow::on_baud_300_triggered()
{

}


void MainWindow::on_baud_1200_triggered()
{

}

void MainWindow::on_baud_2400_triggered()
{

}

void MainWindow::on_baud_4800_triggered()
{

}

void MainWindow::on_baud_9600_triggered()
{

}

void MainWindow::on_baud_19200_triggered()
{

}

void MainWindow::on_baud_38400_triggered()
{

}

void MainWindow::on_baud_57600_triggered()
{

}

void MainWindow::on_baud_115200_triggered()
{

}
