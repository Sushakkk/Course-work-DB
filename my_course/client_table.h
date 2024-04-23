#ifndef CLIENT_TABLE_H
#define CLIENT_TABLE_H

#include <QDialog>
#include <QSqlDatabase>

namespace Ui {
class client_table;
}

class client_table : public QDialog
{
    Q_OBJECT

public:
    explicit client_table(QWidget *parent = nullptr);
    ~client_table();

private slots:
    void selectAll();
    void add();
    void remove();
    void edit();
    void dbconnect();
    void del();
    void on_twOrg_itemSelectionChanged();

private:
    Ui::client_table *ui;
    QSqlDatabase dbconn;
};

#endif // CLIENT_TABLE_H
