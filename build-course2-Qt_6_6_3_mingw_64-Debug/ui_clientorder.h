/********************************************************************************
** Form generated from reading UI file 'clientorder.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTORDER_H
#define UI_CLIENTORDER_H

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

class Ui_ClientOrder
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame_title_Report;
    QHBoxLayout *horizontalLayout_3;
    QLabel *ImgReport;
    QLabel *lbReport;
    QTableWidget *twOrg;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *lbNumber;
    QLineEdit *leOrder_number;
    QLabel *lbDate;
    QLineEdit *leDate;
    QLabel *lbID_c;
    QLineEdit *leFio_client;
    QLabel *lbPay;
    QLineEdit *lePay;
    QLabel *lbSum;
    QLineEdit *leSum;
    QFrame *frame_4;
    QPushButton *btnBack;
    QTextEdit *teResult;

    void setupUi(QDialog *ClientOrder)
    {
        if (ClientOrder->objectName().isEmpty())
            ClientOrder->setObjectName("ClientOrder");
        ClientOrder->resize(1263, 805);
        gridLayout_2 = new QGridLayout(ClientOrder);
        gridLayout_2->setObjectName("gridLayout_2");
        frame_title_Report = new QFrame(ClientOrder);
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


        gridLayout_2->addWidget(frame_title_Report, 0, 0, 1, 1);

        twOrg = new QTableWidget(ClientOrder);
        twOrg->setObjectName("twOrg");
        twOrg->setMinimumSize(QSize(561, 561));

        gridLayout_2->addWidget(twOrg, 0, 1, 3, 1);

        frame = new QFrame(ClientOrder);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(335, 326));
        frame->setMaximumSize(QSize(492, 464));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName("gridLayout");
        lbNumber = new QLabel(frame);
        lbNumber->setObjectName("lbNumber");

        gridLayout->addWidget(lbNumber, 0, 0, 1, 1);

        leOrder_number = new QLineEdit(frame);
        leOrder_number->setObjectName("leOrder_number");

        gridLayout->addWidget(leOrder_number, 0, 1, 1, 1);

        lbDate = new QLabel(frame);
        lbDate->setObjectName("lbDate");

        gridLayout->addWidget(lbDate, 1, 0, 1, 1);

        leDate = new QLineEdit(frame);
        leDate->setObjectName("leDate");

        gridLayout->addWidget(leDate, 1, 1, 1, 1);

        lbID_c = new QLabel(frame);
        lbID_c->setObjectName("lbID_c");

        gridLayout->addWidget(lbID_c, 2, 0, 1, 1);

        leFio_client = new QLineEdit(frame);
        leFio_client->setObjectName("leFio_client");

        gridLayout->addWidget(leFio_client, 2, 1, 1, 1);

        lbPay = new QLabel(frame);
        lbPay->setObjectName("lbPay");

        gridLayout->addWidget(lbPay, 3, 0, 1, 1);

        lePay = new QLineEdit(frame);
        lePay->setObjectName("lePay");

        gridLayout->addWidget(lePay, 3, 1, 1, 1);

        lbSum = new QLabel(frame);
        lbSum->setObjectName("lbSum");

        gridLayout->addWidget(lbSum, 4, 0, 1, 1);

        leSum = new QLineEdit(frame);
        leSum->setObjectName("leSum");

        gridLayout->addWidget(leSum, 4, 1, 1, 1);


        gridLayout_2->addWidget(frame, 1, 0, 1, 1);

        frame_4 = new QFrame(ClientOrder);
        frame_4->setObjectName("frame_4");
        frame_4->setMinimumSize(QSize(351, 41));
        frame_4->setMaximumSize(QSize(351, 41));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        btnBack = new QPushButton(frame_4);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(10, 10, 111, 24));

        gridLayout_2->addWidget(frame_4, 2, 0, 1, 1);

        teResult = new QTextEdit(ClientOrder);
        teResult->setObjectName("teResult");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(teResult->sizePolicy().hasHeightForWidth());
        teResult->setSizePolicy(sizePolicy);
        teResult->setMaximumSize(QSize(16777215, 101));
        teResult->setReadOnly(true);

        gridLayout_2->addWidget(teResult, 3, 0, 1, 2);


        retranslateUi(ClientOrder);

        QMetaObject::connectSlotsByName(ClientOrder);
    } // setupUi

    void retranslateUi(QDialog *ClientOrder)
    {
        ClientOrder->setWindowTitle(QCoreApplication::translate("ClientOrder", "Dialog", nullptr));
        ImgReport->setText(QString());
        lbReport->setText(QCoreApplication::translate("ClientOrder", "\320\236\321\202\321\207\320\265\321\202 \320\227\320\260\320\272\320\260\320\267\320\276\320\262", nullptr));
        lbNumber->setText(QCoreApplication::translate("ClientOrder", "\320\235\320\276\320\274\320\265\321\200 \320\267\320\260\320\272\320\260\320\267\320\260 ", nullptr));
        lbDate->setText(QCoreApplication::translate("ClientOrder", "\320\224\320\260\321\202\320\260 \320\227\320\260\320\272\320\260\320\267\320\260", nullptr));
        lbID_c->setText(QCoreApplication::translate("ClientOrder", "\320\244\320\230\320\236 \320\232\320\273\320\270\320\265\320\275\321\202\320\260 ", nullptr));
        lbPay->setText(QCoreApplication::translate("ClientOrder", "\320\236\320\277\320\273\320\260\321\202\320\260", nullptr));
        lbSum->setText(QCoreApplication::translate("ClientOrder", "\320\241\321\203\320\274\320\274\320\260 \320\227\320\260\320\272\320\260\320\267\320\260", nullptr));
        btnBack->setText(QCoreApplication::translate("ClientOrder", "\320\235\320\260\320\267\320\260\320\264 ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientOrder: public Ui_ClientOrder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTORDER_H
