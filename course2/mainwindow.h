#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include "admin.h"


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
    ~MainWindow();

private slots:
    void on_btnEntry_clicked();

private:
    Ui::MainWindow *ui;
    //admin *adminW;
    QSqlDatabase dbconn;  // Объект для работы с базой данных
};
#endif // MAINWINDOW_H
