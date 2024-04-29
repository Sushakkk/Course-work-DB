#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QDialog>
#include <QLineEdit>
#include <QDialog>
#include <QPixmap>
#include "client.h"
#include "company.h"
#include "order_new.h"
#include "order.h"
#include "clientorder.h"
#include "employee.h"
#include "stock.h"
#include "order_new.h"
#include "authorization.h"
#include "order_product.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    QString user;
    ~MainWindow();

private slots:
    void on_btnEntry_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase dbconn;
    QStringList users = {"Администратор", "Менеджер по продажам", "Сотрудник склада", "Финансовый менеджер"};
    QStringList user_password = {"1", "2", "3", "4"};
};
#endif // MAINWINDOW_H
