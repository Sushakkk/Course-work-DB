#ifndef STOCK_H
#define STOCK_H

#include <QDialog>
#include <QSqlDatabase>
#include <QLineEdit>


namespace Ui {
class stock;
}

class stock : public QDialog
{
    Q_OBJECT

public:
    explicit stock(QWidget *parent = nullptr, const QString &user = "");
    ~stock();
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
    Ui::stock *ui;
    QSqlDatabase dbconn;
    QString tableName= "stock";
    QStringList fieldNames= { "stock_ID","stock_address" };
    QList<QWidget*> fieldWidgets;
    QString current_user;
};

#endif // COMPANY_H
