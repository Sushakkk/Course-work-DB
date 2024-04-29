#ifndef ORDER_NEW_H
#define ORDER_NEW_H

#include <QDialog>
#include <QSqlDatabase>
#include <QLineEdit>


namespace Ui {
class order_new;
}

class order_new : public QDialog
{
    Q_OBJECT

public:
    explicit order_new(QWidget *parent = nullptr);
    ~order_new();

private slots:

    void dbconnect();
    void selectAll();
   //  void add();

   //  void del();
    void edit();
    void on_twOrg_itemSelectionChanged();
 void remove();
    void back();

private:
    Ui::order_new *ui;
    QSqlDatabase dbconn;
    QString tableName= "orders_view";
    QList<QWidget*> fieldWidgets;
    QStringList fieldNames= { "order_number","order_date", "client_fio", "emp_fio", "order_pay" };

};

#endif

