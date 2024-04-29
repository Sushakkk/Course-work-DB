#ifndef ADD_PRODUCT_H
#define ADD_PRODUCT_H

#include <QDialog>
#include <QSqlDatabase>
#include <QLineEdit>

namespace Ui {
class add_product;
}

class add_product : public QDialog
{
    Q_OBJECT

public:
    explicit add_product(QWidget *parent = nullptr);
    ~add_product();

private slots:

    void dbconnect();
    void selectAll();
    void add();
    void remove();
    void del();
    void edit();
    void on_twOrg_itemSelectionChanged();
    void del_table();



    void on_btnAdd_clicked();

private:
    Ui::add_product *ui;
    QSqlDatabase dbconn;
    QString tableName= "add_product";
    QList<QWidget*> fieldWidgets;
    QStringList fieldNames= { "op_id","Pr_name","Pr_price"};

};

#endif

