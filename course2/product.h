#ifndef PRODUCT_H
#define PRODUCT_H

#include "mainwindow.h"

namespace Ui {
class product;
}

class product : public QDialog
{
    Q_OBJECT

public:
    explicit product(QWidget *parent = nullptr, const QString &user = "");
    QString currentId;
    ~product();
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
    Ui::product *ui;
    QSqlDatabase dbconn;
    QString tableName= "product_view";
    QList<QWidget*> fieldWidgets;
    QStringList fieldNames= { "pr_id","pr_name", "pr_price", "pr_quantity", "pr_avail_status" , "stock_address"};
    QString current_user;



};

#endif
