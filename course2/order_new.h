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

    void on_twOrg_itemSelectionChanged();

    void back();


private:
    Ui::order_new *ui;
    QSqlDatabase dbconn;
    QString tableName= "ClientOrder_view";
    QStringList fieldNames= { "order_number", "client_fio", "employee_fio",  "payment_status", "order_total", "order_date" };
    QList<QLineEdit*> fieldWidgets;
};

#endif // CLIENT_H
