#include "dblog.h"
#include "ui_dblog.h"

DBLog::DBLog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DBLog)
{
    ui->setupUi(this);
}

DBLog::~DBLog()
{
    delete ui;
}
