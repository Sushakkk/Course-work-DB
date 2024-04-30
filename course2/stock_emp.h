#ifndef STOCK_EMP_H
#define STOCK_EMP_H

#include "mainwindow.h"

namespace Ui {
class stock_emp;
}

class stock_emp : public QDialog
{
    Q_OBJECT

public:
    explicit stock_emp(QWidget *parent = nullptr);
    ~stock_emp();

private slots:
    void on_btnStock_clicked();

    void on_btnProduct_clicked();

    void on_btnOrder_product_clicked();

    void on_btnAuthorization_clicked();

private:
    Ui::stock_emp *ui;
    QString current_user= "Сотрудник склада";
};

#endif // STOCK_EMP_H
