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
    QFrame *Title;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_title_Report;
    QHBoxLayout *horizontalLayout_3;
    QLabel *ImgReport;
    QLabel *lbReport;
    QFrame *frame_title_Form;
    QHBoxLayout *horizontalLayout_5;
    QLabel *ImgReport_2;
    QLabel *lbReport_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *lbName_2;
    QLabel *lbEmail;
    QLabel *lbID_2;
    QLineEdit *leFio_2;
    QLineEdit *leEmail_2;
    QLineEdit *leID_2;
    QTableWidget *twOrg;
    QFrame *Full_Client;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *lbSum_client;
    QFrame *frame_Buttons;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAdd_2;
    QPushButton *btnEdit_2;
    QPushButton *btnDel_2;
    QPushButton *btnRemove_2;
    QFrame *Reports;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *btnReport;
    QPushButton *btnSearch_order;
    QFrame *frame_4;
    QPushButton *btnBack;
    QTextEdit *teResult;

    void setupUi(QDialog *Client)
    {
        if (Client->objectName().isEmpty())
            Client->setObjectName("Client");
        Client->resize(1116, 749);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Client->sizePolicy().hasHeightForWidth());
        Client->setSizePolicy(sizePolicy);
        Client->setMinimumSize(QSize(1077, 668));
        gridLayout_2 = new QGridLayout(Client);
        gridLayout_2->setObjectName("gridLayout_2");
        Title = new QFrame(Client);
        Title->setObjectName("Title");
        Title->setMaximumSize(QSize(661, 101));
        Title->setFrameShape(QFrame::StyledPanel);
        Title->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(Title);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        frame_title_Report = new QFrame(Title);
        frame_title_Report->setObjectName("frame_title_Report");
        frame_title_Report->setMaximumSize(QSize(274, 84));
        frame_title_Report->setFrameShape(QFrame::StyledPanel);
        frame_title_Report->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_title_Report);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        ImgReport = new QLabel(frame_title_Report);
        ImgReport->setObjectName("ImgReport");
        ImgReport->setPixmap(QPixmap(QString::fromUtf8(":/rec/img/report.png")));

        horizontalLayout_3->addWidget(ImgReport);

        lbReport = new QLabel(frame_title_Report);
        lbReport->setObjectName("lbReport");
        lbReport->setMinimumSize(QSize(184, 64));
        lbReport->setStyleSheet(QString::fromUtf8("font: 20pt \"Segoe UI\";"));

        horizontalLayout_3->addWidget(lbReport);


        horizontalLayout_2->addWidget(frame_title_Report);

        frame_title_Form = new QFrame(Title);
        frame_title_Form->setObjectName("frame_title_Form");
        frame_title_Form->setMaximumSize(QSize(291, 84));
        frame_title_Form->setFrameShape(QFrame::StyledPanel);
        frame_title_Form->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_title_Form);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        ImgReport_2 = new QLabel(frame_title_Form);
        ImgReport_2->setObjectName("ImgReport_2");
        ImgReport_2->setPixmap(QPixmap(QString::fromUtf8(":/rec/img/Form.png")));

        horizontalLayout_5->addWidget(ImgReport_2);

        lbReport_2 = new QLabel(frame_title_Form);
        lbReport_2->setObjectName("lbReport_2");
        lbReport_2->setMinimumSize(QSize(201, 64));
        lbReport_2->setMaximumSize(QSize(201, 64));
        lbReport_2->setStyleSheet(QString::fromUtf8("font: 20pt \"Segoe UI\";"));

        horizontalLayout_5->addWidget(lbReport_2);


        horizontalLayout_2->addWidget(frame_title_Form);


        gridLayout_2->addWidget(Title, 0, 0, 1, 3);

        frame = new QFrame(Client);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(481, 326));
        frame->setMaximumSize(QSize(481, 326));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName("gridLayout");
        lbName_2 = new QLabel(frame);
        lbName_2->setObjectName("lbName_2");

        gridLayout->addWidget(lbName_2, 2, 0, 1, 1);

        lbEmail = new QLabel(frame);
        lbEmail->setObjectName("lbEmail");

        gridLayout->addWidget(lbEmail, 3, 0, 1, 1);

        lbID_2 = new QLabel(frame);
        lbID_2->setObjectName("lbID_2");

        gridLayout->addWidget(lbID_2, 1, 0, 1, 1);

        leFio_2 = new QLineEdit(frame);
        leFio_2->setObjectName("leFio_2");

        gridLayout->addWidget(leFio_2, 2, 1, 1, 1);

        leEmail_2 = new QLineEdit(frame);
        leEmail_2->setObjectName("leEmail_2");

        gridLayout->addWidget(leEmail_2, 3, 1, 1, 1);

        leID_2 = new QLineEdit(frame);
        leID_2->setObjectName("leID_2");

        gridLayout->addWidget(leID_2, 1, 1, 1, 1);


        gridLayout_2->addWidget(frame, 1, 0, 1, 2);

        twOrg = new QTableWidget(Client);
        twOrg->setObjectName("twOrg");
        twOrg->setMinimumSize(QSize(572, 468));
        twOrg->setMaximumSize(QSize(572, 468));

        gridLayout_2->addWidget(twOrg, 1, 2, 4, 1);

        Full_Client = new QFrame(Client);
        Full_Client->setObjectName("Full_Client");
        Full_Client->setMinimumSize(QSize(245, 42));
        Full_Client->setMaximumSize(QSize(245, 42));
        Full_Client->setFrameShape(QFrame::StyledPanel);
        Full_Client->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(Full_Client);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label = new QLabel(Full_Client);
        label->setObjectName("label");

        horizontalLayout_4->addWidget(label);

        lbSum_client = new QLineEdit(Full_Client);
        lbSum_client->setObjectName("lbSum_client");

        horizontalLayout_4->addWidget(lbSum_client);


        gridLayout_2->addWidget(Full_Client, 2, 0, 1, 1);

        frame_Buttons = new QFrame(Client);
        frame_Buttons->setObjectName("frame_Buttons");
        frame_Buttons->setMaximumSize(QSize(491, 44));
        frame_Buttons->setFrameShape(QFrame::StyledPanel);
        frame_Buttons->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_Buttons);
        horizontalLayout->setObjectName("horizontalLayout");
        btnAdd_2 = new QPushButton(frame_Buttons);
        btnAdd_2->setObjectName("btnAdd_2");

        horizontalLayout->addWidget(btnAdd_2);

        btnEdit_2 = new QPushButton(frame_Buttons);
        btnEdit_2->setObjectName("btnEdit_2");

        horizontalLayout->addWidget(btnEdit_2);

        btnDel_2 = new QPushButton(frame_Buttons);
        btnDel_2->setObjectName("btnDel_2");

        horizontalLayout->addWidget(btnDel_2);

        btnRemove_2 = new QPushButton(frame_Buttons);
        btnRemove_2->setObjectName("btnRemove_2");

        horizontalLayout->addWidget(btnRemove_2);


        gridLayout_2->addWidget(frame_Buttons, 3, 0, 1, 1);

        Reports = new QFrame(Client);
        Reports->setObjectName("Reports");
        Reports->setFrameShape(QFrame::StyledPanel);
        Reports->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(Reports);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        btnReport = new QPushButton(Reports);
        btnReport->setObjectName("btnReport");

        horizontalLayout_6->addWidget(btnReport);

        btnSearch_order = new QPushButton(Reports);
        btnSearch_order->setObjectName("btnSearch_order");

        horizontalLayout_6->addWidget(btnSearch_order);


        gridLayout_2->addWidget(Reports, 3, 1, 1, 1);

        frame_4 = new QFrame(Client);
        frame_4->setObjectName("frame_4");
        frame_4->setMinimumSize(QSize(351, 41));
        frame_4->setMaximumSize(QSize(351, 41));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        btnBack = new QPushButton(frame_4);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(10, 10, 111, 24));

        gridLayout_2->addWidget(frame_4, 4, 0, 1, 2);

        teResult = new QTextEdit(Client);
        teResult->setObjectName("teResult");
        teResult->setMaximumSize(QSize(16777215, 101));
        teResult->setReadOnly(true);

        gridLayout_2->addWidget(teResult, 5, 0, 1, 3);


        retranslateUi(Client);

        QMetaObject::connectSlotsByName(Client);
    } // setupUi

    void retranslateUi(QDialog *Client)
    {
        Client->setWindowTitle(QCoreApplication::translate("Client", "Dialog", nullptr));
        ImgReport->setText(QString());
        lbReport->setText(QCoreApplication::translate("Client", "\320\232\320\273\320\270\320\265\320\275\321\202\321\213 \320\236\321\202\321\207\320\265\321\202", nullptr));
        ImgReport_2->setText(QString());
        lbReport_2->setText(QCoreApplication::translate("Client", "\320\244\320\276\321\200\320\274\320\260 \320\232\320\273\320\270\320\265\320\275\321\202\321\213 ", nullptr));
        lbName_2->setText(QCoreApplication::translate("Client", "\320\244\320\230\320\236", nullptr));
        lbEmail->setText(QCoreApplication::translate("Client", "Email", nullptr));
        lbID_2->setText(QCoreApplication::translate("Client", "ID", nullptr));
        label->setText(QCoreApplication::translate("Client", "\320\222\321\201\320\265\320\263\320\276 \320\232\320\273\320\270\320\265\320\275\321\202\320\276\320\262", nullptr));
        btnAdd_2->setText(QCoreApplication::translate("Client", "Add", nullptr));
        btnEdit_2->setText(QCoreApplication::translate("Client", "Edit", nullptr));
        btnDel_2->setText(QCoreApplication::translate("Client", "Del", nullptr));
        btnRemove_2->setText(QCoreApplication::translate("Client", "Remove", nullptr));
        btnReport->setText(QCoreApplication::translate("Client", "\320\236\321\202\321\207\320\265\321\202 \320\272\320\273\320\270\320\265\320\275\321\202\320\276\320\262", nullptr));
        btnSearch_order->setText(QCoreApplication::translate("Client", "\320\235\320\260\320\271\321\202\320\270 \320\267\320\260\320\272\320\260\320\267\321\213", nullptr));
        btnBack->setText(QCoreApplication::translate("Client", "\320\235\320\260\320\267\320\260\320\264 ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Client: public Ui_Client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
