#ifndef ADMIN_H
#define ADMIN_H

#include <QDialog>
#include <QSqlDatabase>
#include "mainwindow.h"

namespace Ui {
class admin;
}

class admin : public QDialog
{
    Q_OBJECT

public:
    explicit admin(QWidget *parent = nullptr);

    ~admin();

private slots:
    void on_btnClient_clicked();

    void on_btnCompany_clicked();

    void on_btnOrder_clicked();

    void on_btnRep_ord_new_clicked();

    void on_btnEmp_clicked();

    void on_btnStock_clicked();

    void on_btnOrder_product_clicked();

    void on_btnAuthorization_clicked();


    void on_btnProduct_clicked();

private:
    Ui::admin *ui;
    QString current_user= "Администратор";
};

#endif // ADMIN_H
