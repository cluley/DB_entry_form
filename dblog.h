#ifndef DBLOG_H
#define DBLOG_H

#include <QDialog>

namespace Ui {
class DBLog;
}

class DBLog : public QDialog
{
    Q_OBJECT

public:
    explicit DBLog(QWidget *parent = nullptr);
    ~DBLog();

private:
    Ui::DBLog *ui;
};

#endif // DBLOG_H
