#ifndef COMPANY_PROFIT_H
#define COMPANY_PROFIT_H

#include "mainwindow.h"

namespace Ui {
class company_profit;
}

class company_profit : public QDialog
{
    Q_OBJECT

public:
    explicit company_profit(QWidget *parent = nullptr, const QString &user = "");
    ~company_profit();

private slots:

    void dbconnect();
    void selectAll();
    void on_twOrg_itemSelectionChanged();

    void back();

    void on_btnReport_orders_clicked();

private:
    Ui::company_profit *ui;
    QSqlDatabase dbconn;
    QString tableName= "company_orders_count";
    QStringList fieldNames= { "Company_ID","Company_name", "order_count", "sum_orders" };
    QList<QWidget*> fieldWidgets;
    QString current_user;
};
#endif // COMPANY_PROFIT_H
