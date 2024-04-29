#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QDialog>
#include <QSqlDatabase>
#include <QLineEdit>

namespace Ui {
class employee;
}

class employee : public QDialog
{
    Q_OBJECT

public:
    explicit employee(QWidget *parent = nullptr, const QString &user = "");
    ~employee();

private slots:

    void dbconnect();
    void selectAll();
    void add();
    void remove();
    void del();
    void edit();
    void on_twOrg_itemSelectionChanged();

    void back();

private:
    Ui::employee *ui;
    QSqlDatabase dbconn;
    QString tableName = "Employee_view";
    QStringList fieldNames= { "emp_ID","emp_fio", "company_name" };
    QList<QWidget*> fieldWidgets;
    QString current_user;
};

#endif // EMPLOYEE_H





