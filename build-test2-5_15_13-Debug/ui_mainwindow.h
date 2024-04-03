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
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *lbID;
    QLineEdit *leID;
    QLabel *lbName;
    QLineEdit *leName;
    QLabel *lbINN;
    QLineEdit *leINN;
    QLabel *lbRequisites;
    QPushButton *btnAdd;
    QPushButton *btnEdit;
    QPushButton *btnDel;
    QTextEdit *teReq;
    QPushButton *btnSelectAll;
    QPushButton *btnConnect;
    QSpacerItem *horizontalSpacer;
    QTextEdit *teResult;
    QTableWidget *twOrg;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 656);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(335, 326));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName("gridLayout");
        lbID = new QLabel(frame);
        lbID->setObjectName("lbID");

        gridLayout->addWidget(lbID, 0, 0, 1, 1);

        leID = new QLineEdit(frame);
        leID->setObjectName("leID");

        gridLayout->addWidget(leID, 0, 1, 1, 2);

        lbName = new QLabel(frame);
        lbName->setObjectName("lbName");

        gridLayout->addWidget(lbName, 1, 0, 1, 1);

        leName = new QLineEdit(frame);
        leName->setObjectName("leName");

        gridLayout->addWidget(leName, 1, 1, 1, 3);

        lbINN = new QLabel(frame);
        lbINN->setObjectName("lbINN");

        gridLayout->addWidget(lbINN, 2, 0, 1, 1);

        leINN = new QLineEdit(frame);
        leINN->setObjectName("leINN");

        gridLayout->addWidget(leINN, 2, 1, 1, 3);

        lbRequisites = new QLabel(frame);
        lbRequisites->setObjectName("lbRequisites");

        gridLayout->addWidget(lbRequisites, 3, 0, 1, 1);

        btnAdd = new QPushButton(frame);
        btnAdd->setObjectName("btnAdd");

        gridLayout->addWidget(btnAdd, 4, 0, 1, 2);

        btnEdit = new QPushButton(frame);
        btnEdit->setObjectName("btnEdit");

        gridLayout->addWidget(btnEdit, 4, 2, 1, 1);

        btnDel = new QPushButton(frame);
        btnDel->setObjectName("btnDel");

        gridLayout->addWidget(btnDel, 4, 3, 1, 1);

        teReq = new QTextEdit(frame);
        teReq->setObjectName("teReq");

        gridLayout->addWidget(teReq, 3, 1, 1, 3);


        gridLayout_2->addWidget(frame, 1, 0, 1, 3);

        btnSelectAll = new QPushButton(centralwidget);
        btnSelectAll->setObjectName("btnSelectAll");

        gridLayout_2->addWidget(btnSelectAll, 0, 3, 1, 1);

        btnConnect = new QPushButton(centralwidget);
        btnConnect->setObjectName("btnConnect");

        gridLayout_2->addWidget(btnConnect, 0, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(345, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 2, 1, 1);

        teResult = new QTextEdit(centralwidget);
        teResult->setObjectName("teResult");
        teResult->setReadOnly(true);

        gridLayout_2->addWidget(teResult, 2, 0, 1, 4);

        twOrg = new QTableWidget(centralwidget);
        twOrg->setObjectName("twOrg");

        gridLayout_2->addWidget(twOrg, 1, 3, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
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
        lbID->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        lbName->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        lbINN->setText(QCoreApplication::translate("MainWindow", "INN", nullptr));
        lbRequisites->setText(QCoreApplication::translate("MainWindow", "Requisites", nullptr));
        btnAdd->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        btnEdit->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        btnDel->setText(QCoreApplication::translate("MainWindow", "Del", nullptr));
        btnSelectAll->setText(QCoreApplication::translate("MainWindow", "Select All", nullptr));
        btnConnect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
