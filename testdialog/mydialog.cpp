#include "mydialog.h"
#include "ui_mydialog.h"

MyDialog::MyDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyDialog)
{
    ui->setupUi(this);
}

MyDialog::~MyDialog()
{
    delete ui;
}


QString MyDialog::getText2()
{
    return ui->lineEdit_2->text();
}

void MyDialog::setText1(QString text1)
{
    ui->lineEdit->setText(text1);
}
