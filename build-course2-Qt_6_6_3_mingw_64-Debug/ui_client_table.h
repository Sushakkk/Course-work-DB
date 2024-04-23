/********************************************************************************
** Form generated from reading UI file 'client_table.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_TABLE_H
#define UI_CLIENT_TABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_client_table
{
public:
    QWidget *centralwidget;
    QTableWidget *twOrg;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *lbEmail;
    QLineEdit *leFio;
    QLabel *lbID;
    QLabel *lbFIO;
    QPushButton *btnDel;
    QLineEdit *leID;
    QPushButton *btnRemove;
    QPushButton *btnEdit;
    QLineEdit *leEmail;
    QPushButton *btnAdd;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *client_table)
    {
        if (client_table->objectName().isEmpty())
            client_table->setObjectName("client_table");
        client_table->resize(800, 600);
        centralwidget = new QWidget(client_table);
        centralwidget->setObjectName("centralwidget");
        twOrg = new QTableWidget(centralwidget);
        twOrg->setObjectName("twOrg");
        twOrg->setGeometry(QRect(407, 110, 341, 341));
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(10, 110, 401, 341));
        frame->setMinimumSize(QSize(335, 326));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName("gridLayout");
        lbEmail = new QLabel(frame);
        lbEmail->setObjectName("lbEmail");

        gridLayout->addWidget(lbEmail, 2, 0, 1, 1);

        leFio = new QLineEdit(frame);
        leFio->setObjectName("leFio");

        gridLayout->addWidget(leFio, 1, 1, 1, 2);

        lbID = new QLabel(frame);
        lbID->setObjectName("lbID");

        gridLayout->addWidget(lbID, 0, 0, 1, 1);

        lbFIO = new QLabel(frame);
        lbFIO->setObjectName("lbFIO");

        gridLayout->addWidget(lbFIO, 1, 0, 1, 1);

        btnDel = new QPushButton(frame);
        btnDel->setObjectName("btnDel");

        gridLayout->addWidget(btnDel, 3, 2, 1, 1);

        leID = new QLineEdit(frame);
        leID->setObjectName("leID");

        gridLayout->addWidget(leID, 0, 1, 1, 1);

        btnRemove = new QPushButton(frame);
        btnRemove->setObjectName("btnRemove");

        gridLayout->addWidget(btnRemove, 3, 3, 1, 1);

        btnEdit = new QPushButton(frame);
        btnEdit->setObjectName("btnEdit");

        gridLayout->addWidget(btnEdit, 3, 1, 1, 1);

        leEmail = new QLineEdit(frame);
        leEmail->setObjectName("leEmail");

        gridLayout->addWidget(leEmail, 2, 1, 1, 2);

        btnAdd = new QPushButton(frame);
        btnAdd->setObjectName("btnAdd");

        gridLayout->addWidget(btnAdd, 3, 0, 1, 1);

        client_table->setCentralWidget(centralwidget);
        menubar = new QMenuBar(client_table);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        client_table->setMenuBar(menubar);
        statusbar = new QStatusBar(client_table);
        statusbar->setObjectName("statusbar");
        client_table->setStatusBar(statusbar);

        retranslateUi(client_table);

        QMetaObject::connectSlotsByName(client_table);
    } // setupUi

    void retranslateUi(QMainWindow *client_table)
    {
        client_table->setWindowTitle(QCoreApplication::translate("client_table", "MainWindow", nullptr));
        lbEmail->setText(QCoreApplication::translate("client_table", "Email", nullptr));
        lbID->setText(QCoreApplication::translate("client_table", "ID", nullptr));
        lbFIO->setText(QCoreApplication::translate("client_table", "\320\244\320\230\320\236", nullptr));
        btnDel->setText(QCoreApplication::translate("client_table", "Del", nullptr));
        btnRemove->setText(QCoreApplication::translate("client_table", "Remove", nullptr));
        btnEdit->setText(QCoreApplication::translate("client_table", "Edit", nullptr));
        btnAdd->setText(QCoreApplication::translate("client_table", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class client_table: public Ui_client_table {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_TABLE_H
