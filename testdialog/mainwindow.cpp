#include "mainwindow.h"
#include "mydialog.h"
#include "ui_mainwindow.h"

class QLineEdit;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->lineEdit, SIGNAL(returnPressed()), this, SLOT(onLineEditReturnPressed()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onLineEditReturnPressed()
{
    MyDialog d(this);
    d.setText1(ui->lineEdit->text());
    if (d.exec())
    {
        ui->statusBar->showMessage(d.getText2());
    }
}
