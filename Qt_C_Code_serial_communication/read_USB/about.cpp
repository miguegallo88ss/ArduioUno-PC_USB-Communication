#include "about.h"
#include "ui_about.h"
#include "var.h"

About::About(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::About)
{
    ui->setupUi(this);
    this->setFixedSize(QSize(400, 200));
}

About::~About()
{
    delete ui;
}

void About::on_about_ok_button_clicked()
{
    close();
}
