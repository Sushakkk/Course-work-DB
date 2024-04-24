#ifndef CLIENT_H
#define CLIENT_H

#include <QDialog>
#include <QSqlDatabase>

#include <QLineEdit> // Добавим для работы с QLineEdit


namespace Ui {
class Client;
}

class Client : public QDialog
{
    Q_OBJECT

public:
    explicit Client(QWidget *parent = nullptr);
    ~Client();

private slots:

    void dbconnect();
    void selectAll();
    void add();
    void remove();
    void del();
    void on_twOrg_itemSelectionChanged();

    void back();
    void edit();

private:
    Ui::Client *ui;
    QSqlDatabase dbconn;
    QString tableName= "client";
    QStringList fieldNames= { "client_ID", "client_fio", "cl_contact_inf" };
    QList<QLineEdit*> fieldWidgets;
};

#endif // CLIENT_H
