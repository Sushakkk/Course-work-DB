#ifndef FINANCIAL_MANAGER_H
#define FINANCIAL_MANAGER_H

#include "mainwindow.h"

namespace Ui {
class Financial_Manager;
}

class Financial_Manager : public QDialog
{
    Q_OBJECT

public:
    explicit Financial_Manager(QWidget *parent = nullptr);
    ~Financial_Manager();

private slots:
    void on_btnCompany_clicked();

    void on_btnCompany_orders_clicked();

    void on_btnAuthorization_clicked();

private:
    Ui::Financial_Manager *ui;
    QString current_user= "Финансовый менеджер";
};

#endif // FINANCIAL_MANAGER_H
