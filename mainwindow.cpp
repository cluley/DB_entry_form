#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    dblog = new DBLog(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pb_login_clicked()
{
    dblog->show();
}

