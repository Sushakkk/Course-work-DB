/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QPushButton *btnConnect;
    QSpacerItem *verticalSpacer;
    QPushButton *btnSelectAll;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *lbGuest_id;
    QLineEdit *leguest;
    QLabel *lbfull_name;
    QLineEdit *lefull_name;
    QLabel *lbadress;
    QLineEdit *leaddress;
    QLabel *lbemail;
    QLineEdit *leemail;
    QLabel *lbphone;
    QLineEdit *lephone;
    QLabel *lbcredit_card_number;
    QLineEdit *lecredit_card_number;
    QPushButton *btnAdd;
    QPushButton *btnEdit;
    QPushButton *btnRemove;
    QPushButton *btnDelete;
    QTableWidget *twOrg;
    QTextEdit *teResult;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName("gridLayout_3");
        btnConnect = new QPushButton(centralwidget);
        btnConnect->setObjectName("btnConnect");

        gridLayout_3->addWidget(btnConnect, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(210, 28, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(verticalSpacer, 0, 2, 1, 1);

        btnSelectAll = new QPushButton(centralwidget);
        btnSelectAll->setObjectName("btnSelectAll");

        gridLayout_3->addWidget(btnSelectAll, 0, 3, 1, 1);

        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Plain);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName("gridLayout");
        lbGuest_id = new QLabel(frame);
        lbGuest_id->setObjectName("lbGuest_id");

        gridLayout->addWidget(lbGuest_id, 0, 0, 1, 2);

        leguest = new QLineEdit(frame);
        leguest->setObjectName("leguest");

        gridLayout->addWidget(leguest, 0, 2, 1, 3);

        lbfull_name = new QLabel(frame);
        lbfull_name->setObjectName("lbfull_name");

        gridLayout->addWidget(lbfull_name, 1, 0, 1, 1);

        lefull_name = new QLineEdit(frame);
        lefull_name->setObjectName("lefull_name");

        gridLayout->addWidget(lefull_name, 1, 1, 1, 6);

        lbadress = new QLabel(frame);
        lbadress->setObjectName("lbadress");

        gridLayout->addWidget(lbadress, 2, 0, 1, 2);

        leaddress = new QLineEdit(frame);
        leaddress->setObjectName("leaddress");

        gridLayout->addWidget(leaddress, 2, 2, 1, 5);

        lbemail = new QLabel(frame);
        lbemail->setObjectName("lbemail");

        gridLayout->addWidget(lbemail, 3, 0, 1, 2);

        leemail = new QLineEdit(frame);
        leemail->setObjectName("leemail");

        gridLayout->addWidget(leemail, 3, 2, 1, 5);

        lbphone = new QLabel(frame);
        lbphone->setObjectName("lbphone");

        gridLayout->addWidget(lbphone, 4, 0, 1, 3);

        lephone = new QLineEdit(frame);
        lephone->setObjectName("lephone");

        gridLayout->addWidget(lephone, 4, 3, 1, 4);

        lbcredit_card_number = new QLabel(frame);
        lbcredit_card_number->setObjectName("lbcredit_card_number");

        gridLayout->addWidget(lbcredit_card_number, 5, 0, 1, 4);

        lecredit_card_number = new QLineEdit(frame);
        lecredit_card_number->setObjectName("lecredit_card_number");

        gridLayout->addWidget(lecredit_card_number, 5, 5, 1, 2);

        btnAdd = new QPushButton(frame);
        btnAdd->setObjectName("btnAdd");

        gridLayout->addWidget(btnAdd, 6, 0, 1, 4);

        btnEdit = new QPushButton(frame);
        btnEdit->setObjectName("btnEdit");

        gridLayout->addWidget(btnEdit, 6, 4, 1, 2);

        btnRemove = new QPushButton(frame);
        btnRemove->setObjectName("btnRemove");

        gridLayout->addWidget(btnRemove, 6, 6, 1, 1);

        btnDelete = new QPushButton(frame);
        btnDelete->setObjectName("btnDelete");

        gridLayout->addWidget(btnDelete, 0, 6, 1, 1);


        gridLayout_3->addWidget(frame, 1, 0, 1, 1);

        twOrg = new QTableWidget(centralwidget);
        twOrg->setObjectName("twOrg");

        gridLayout_3->addWidget(twOrg, 1, 1, 1, 3);

        teResult = new QTextEdit(centralwidget);
        teResult->setObjectName("teResult");
        teResult->setReadOnly(true);

        gridLayout_3->addWidget(teResult, 2, 0, 1, 4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnConnect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        btnSelectAll->setText(QCoreApplication::translate("MainWindow", "Select All", nullptr));
        lbGuest_id->setText(QCoreApplication::translate("MainWindow", "\320\223\320\276\321\201\321\202\321\214", nullptr));
        lbfull_name->setText(QCoreApplication::translate("MainWindow", "\320\244\320\230\320\236", nullptr));
        lbadress->setText(QCoreApplication::translate("MainWindow", "\320\220\320\264\321\200\320\265\321\201", nullptr));
        lbemail->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\207\321\202\320\260", nullptr));
        lbphone->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275", nullptr));
        lbcredit_card_number->setText(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\270\320\264\320\270\321\202\320\275\320\260\321\217 \320\272\320\260\321\200\321\202\320\260", nullptr));
        btnAdd->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        btnEdit->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        btnRemove->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        btnDelete->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
