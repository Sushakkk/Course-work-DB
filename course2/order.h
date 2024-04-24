#ifndef ORDER_H
#define ORDER_H

#include <QDialog>
#include <QSqlDatabase>
#include <QLineEdit>

namespace Ui {
class order;
}

class order : public QDialog
{
    Q_OBJECT

public:
    explicit order(QWidget *parent = nullptr);
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

private:
    Ui::order *ui;
    QSqlDatabase dbconn;
    QString tableName= "orders";
    QStringList fieldNames= { "order_number","order_date", "client_id", "emp_id", "order_pay" };
    QList<QLineEdit*> fieldWidgets;
};

#endif

