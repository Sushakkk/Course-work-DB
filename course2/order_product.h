#ifndef ORDER_PRODUCT_H
#define ORDER_PRODUCT_H

#include <QDialog>
#include <QSqlDatabase>
#include <QLineEdit>



namespace Ui {
class order_product;
}

class order_product : public QDialog
{
    Q_OBJECT

public:
    explicit order_product(QWidget *parent = nullptr, const QString &user="", const QString &currentId = "");
    ~order_product();

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
    Ui::order_product *ui;
    QSqlDatabase dbconn;
    QString tableName= "orderproduct_view";
    QStringList fieldNames= { "or_pr","order_number","pr_name","pr_quantity" };
    QList<QWidget*> fieldWidgets;
    bool flag_for_order =false;
    QString current_user;
};

#endif
