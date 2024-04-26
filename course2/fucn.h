#ifndef FUCN_H
#define FUCN_H



#include <QTextEdit>
#include <QTableWidget>
#include <QStringList>
#include <QSqlDatabase>
#include <QDebug>
#include <QLineEdit> // Добавим для работы с QLineEdit

#include <QTimer>
#include <QComboBox>


// void remove_f1(QSqlDatabase &dbconn, QTextEdit *teResult, QTableWidget *tableWidget, const QString &tableName, int row, const QStringList &columnNames, const QList<QWidget*> &fieldWidgets);


void on_click_f1(QTableWidget *twOrg, QTextEdit *teResult, const QStringList &fieldNames, const QList<QWidget*> &fieldWidgets);


void edit_f1(QSqlDatabase &dbconn, QTextEdit *teResult, QTableWidget *tableWidget, const QStringList &columnNames, const QList<QWidget*> &fieldWidgets, int curRow, const QString &tableName);
 void del_f1(const QList<QWidget*> &fieldWidgets);
#endif // FUCN_H
