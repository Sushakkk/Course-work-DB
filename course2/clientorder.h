#ifndef CLIENTORDER_H
#define CLIENTORDER_H

#include <QDialog>
#include <QSqlDatabase>
#include <QLineEdit>

namespace Ui {
class ClientOrder;
}

class ClientOrder : public QDialog
{
    Q_OBJECT

public:
    explicit ClientOrder(QWidget *parent = nullptr);
    ~ClientOrder();
private slots:

    void dbconnect();
    void selectAll();

    void on_twOrg_itemSelectionChanged();

    void back();

private:
    Ui::ClientOrder *ui;
    QSqlDatabase dbconn;
    QString tableName= "ClientOrder_view";
    QStringList fieldNames= { "order_number", "client_fio", "employee_fio",  "payment_status", "order_total", "order_date" };
    QList<QWidget*> fieldWidgets;
};

#endif

