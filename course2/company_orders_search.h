#ifndef COMPANY_ORDERS_SEARCH_H
#define COMPANY_ORDERS_SEARCH_H

#include "mainwindow.h"

namespace Ui {
class company_orders_search;
}

class company_orders_search : public QDialog
{
    Q_OBJECT


public:
    explicit company_orders_search(QWidget *parent = nullptr, const QString &user = "",  const QString &name="");
    ~company_orders_search();

private slots:
    void dbconnect();

    void on_twOrg_itemSelectionChanged();
    void selectAll();

    void back();

    void on_btnReport_clicked();

private:
    Ui::company_orders_search *ui;
    QSqlDatabase dbconn;
    QString tableName= "company_orders_info";
    QStringList fieldNames= {"Company_name", "order_number", "order_date","client_name", "sum_orders"};
    QList<QWidget*> fieldWidgets;
    QString current_user;
    QString current_name;
};

#endif // COMPANY_ORDERS_SEARCH_H
