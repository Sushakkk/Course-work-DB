/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Client
{
public:
    QGridLayout *gridLayout_2;
    QTextEdit *teResult;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLineEdit *leFio_2;
    QLabel *lbEmail;
    QLabel *lbID_2;
    QLabel *lbName_2;
    QLineEdit *leID_2;
    QLineEdit *leEmail_2;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAdd_2;
    QPushButton *btnEdit_2;
    QPushButton *btnDel_2;
    QPushButton *btnRemove_2;
    QFrame *frame_4;
    QPushButton *btnBack;
    QTableWidget *twOrg;

    void setupUi(QDialog *Client)
    {
        if (Client->objectName().isEmpty())
            Client->setObjectName("Client");
        Client->resize(1077, 668);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Client->sizePolicy().hasHeightForWidth());
        Client->setSizePolicy(sizePolicy);
        Client->setMinimumSize(QSize(1077, 668));
        gridLayout_2 = new QGridLayout(Client);
        gridLayout_2->setObjectName("gridLayout_2");
        teResult = new QTextEdit(Client);
        teResult->setObjectName("teResult");
        teResult->setMaximumSize(QSize(16777215, 101));
        teResult->setReadOnly(true);

        gridLayout_2->addWidget(teResult, 3, 0, 1, 2);

        frame = new QFrame(Client);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(481, 326));
        frame->setMaximumSize(QSize(481, 326));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName("gridLayout");
        leFio_2 = new QLineEdit(frame);
        leFio_2->setObjectName("leFio_2");

        gridLayout->addWidget(leFio_2, 1, 1, 1, 1);

        lbEmail = new QLabel(frame);
        lbEmail->setObjectName("lbEmail");

        gridLayout->addWidget(lbEmail, 2, 0, 1, 1);

        lbID_2 = new QLabel(frame);
        lbID_2->setObjectName("lbID_2");

        gridLayout->addWidget(lbID_2, 0, 0, 1, 1);

        lbName_2 = new QLabel(frame);
        lbName_2->setObjectName("lbName_2");

        gridLayout->addWidget(lbName_2, 1, 0, 1, 1);

        leID_2 = new QLineEdit(frame);
        leID_2->setObjectName("leID_2");

        gridLayout->addWidget(leID_2, 0, 1, 1, 1);

        leEmail_2 = new QLineEdit(frame);
        leEmail_2->setObjectName("leEmail_2");

        gridLayout->addWidget(leEmail_2, 2, 1, 1, 1);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);

        frame_3 = new QFrame(Client);
        frame_3->setObjectName("frame_3");
        frame_3->setMaximumSize(QSize(491, 44));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_3);
        horizontalLayout->setObjectName("horizontalLayout");
        btnAdd_2 = new QPushButton(frame_3);
        btnAdd_2->setObjectName("btnAdd_2");

        horizontalLayout->addWidget(btnAdd_2);

        btnEdit_2 = new QPushButton(frame_3);
        btnEdit_2->setObjectName("btnEdit_2");

        horizontalLayout->addWidget(btnEdit_2);

        btnDel_2 = new QPushButton(frame_3);
        btnDel_2->setObjectName("btnDel_2");

        horizontalLayout->addWidget(btnDel_2);

        btnRemove_2 = new QPushButton(frame_3);
        btnRemove_2->setObjectName("btnRemove_2");

        horizontalLayout->addWidget(btnRemove_2);


        gridLayout_2->addWidget(frame_3, 1, 0, 1, 1);

        frame_4 = new QFrame(Client);
        frame_4->setObjectName("frame_4");
        frame_4->setMinimumSize(QSize(351, 41));
        frame_4->setMaximumSize(QSize(351, 41));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        btnBack = new QPushButton(frame_4);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(10, 10, 111, 24));

        gridLayout_2->addWidget(frame_4, 2, 0, 1, 1);

        twOrg = new QTableWidget(Client);
        twOrg->setObjectName("twOrg");
        twOrg->setMinimumSize(QSize(572, 468));

        gridLayout_2->addWidget(twOrg, 0, 1, 3, 1);


        retranslateUi(Client);

        QMetaObject::connectSlotsByName(Client);
    } // setupUi

    void retranslateUi(QDialog *Client)
    {
        Client->setWindowTitle(QCoreApplication::translate("Client", "Dialog", nullptr));
        lbEmail->setText(QCoreApplication::translate("Client", "Email", nullptr));
        lbID_2->setText(QCoreApplication::translate("Client", "ID", nullptr));
        lbName_2->setText(QCoreApplication::translate("Client", "\320\244\320\230\320\236", nullptr));
        btnAdd_2->setText(QCoreApplication::translate("Client", "Add", nullptr));
        btnEdit_2->setText(QCoreApplication::translate("Client", "Edit", nullptr));
        btnDel_2->setText(QCoreApplication::translate("Client", "Del", nullptr));
        btnRemove_2->setText(QCoreApplication::translate("Client", "Remove", nullptr));
        btnBack->setText(QCoreApplication::translate("Client", "\320\235\320\260\320\267\320\260\320\264 ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Client: public Ui_Client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
