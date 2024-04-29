#ifndef ORDER_H
#define ORDER_H

#include <QDialog>
#include <QSqlDatabase>
#include <QLineEdit>
#include "order_product.h"

namespace Ui {
class order;
}

class order : public QDialog
{
    Q_OBJECT

public:
    explicit order(QWidget *parent = nullptr, const QString &user = "");
    QString currentId;
    ~order();
private slots:

    void dbconnect();
    void selectAll();
    void add();
    void remove();
    void del();
    void edit();
    void on_twOrg_itemSelectionChanged();
    void back();
    void on_btnReport_order_clicked();

private:
    Ui::order *ui;
    QSqlDatabase dbconn;
    QString tableName= "orders_view";
    QList<QWidget*> fieldWidgets;
    QStringList fieldNames= { "order_number","order_date", "client_fio", "emp_fio", "order_pay" };
    QString current_user;



};

#endif
