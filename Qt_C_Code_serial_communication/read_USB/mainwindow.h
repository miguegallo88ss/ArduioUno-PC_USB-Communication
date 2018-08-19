#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include  "about.h"
#include <QTextStream>
#include "iostream"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionExit_triggered();
    void on_actionAbout_2_triggered();

    void on_baud_300_triggered();

    void on_baud_4800_triggered();

    void on_baud_1200_triggered();

    void on_baud_2400_triggered();

    void on_baud_19200_triggered();

    void on_baud_9600_triggered();

    void on_baud_38400_triggered();

    void on_baud_57600_triggered();

    void on_baud_115200_triggered();

private:
    Ui::MainWindow *ui;
    About *about;
};

#endif // MAINWINDOW_H
