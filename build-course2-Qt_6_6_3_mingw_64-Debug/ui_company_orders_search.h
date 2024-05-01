/********************************************************************************
** Form generated from reading UI file 'company_orders_search.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPANY_ORDERS_SEARCH_H
#define UI_COMPANY_ORDERS_SEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
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

class Ui_company_orders_search
{
public:
    QFrame *com_name;
    QLabel *lbID_3;
    QLineEdit *leComp_name;
    QGridLayout *gridLayout_3;
    QFrame *frame_title_Report;
    QHBoxLayout *horizontalLayout_3;
    QLabel *ImgReport;
    QLabel *lbReport;
    QTableWidget *twOrg;
    QFrame *frame_2;
    QComboBox *cbComp_name;
    QLabel *lbID_2;
    QPushButton *btnReport;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLineEdit *leDate;
    QLineEdit *leOrder_number;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *leSum_order;
    QLineEdit *leFio_client;
    QLabel *lbName_2;
    QLabel *lbINN_2;
    QFrame *frame_4;
    QPushButton *btnBack;
    QTextEdit *teResult;

    void setupUi(QDialog *company_orders_search)
    {
        if (company_orders_search->objectName().isEmpty())
            company_orders_search->setObjectName("company_orders_search");
        company_orders_search->resize(1311, 601);
        com_name = new QFrame(company_orders_search);
        com_name->setObjectName("com_name");
        com_name->setGeometry(QRect(40, 191, 20, 20));
        com_name->setMaximumSize(QSize(20, 20));
        com_name->setFrameShape(QFrame::StyledPanel);
        com_name->setFrameShadow(QFrame::Raised);
        lbID_3 = new QLabel(com_name);
        lbID_3->setObjectName("lbID_3");
        lbID_3->setGeometry(QRect(-10, 40, 116, 24));
        leComp_name = new QLineEdit(com_name);
        leComp_name->setObjectName("leComp_name");
        leComp_name->setGeometry(QRect(110, 40, 193, 24));
        gridLayout_3 = new QGridLayout(company_orders_search);
        gridLayout_3->setObjectName("gridLayout_3");
        frame_title_Report = new QFrame(company_orders_search);
        frame_title_Report->setObjectName("frame_title_Report");
        frame_title_Report->setMinimumSize(QSize(411, 84));
        frame_title_Report->setMaximumSize(QSize(411, 84));
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


        gridLayout_3->addWidget(frame_title_Report, 0, 0, 1, 1);

        twOrg = new QTableWidget(company_orders_search);
        twOrg->setObjectName("twOrg");

        gridLayout_3->addWidget(twOrg, 0, 1, 3, 1);

        frame_2 = new QFrame(company_orders_search);
        frame_2->setObjectName("frame_2");
        frame_2->setMinimumSize(QSize(451, 291));
        frame_2->setMaximumSize(QSize(451, 291));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        cbComp_name = new QComboBox(frame_2);
        cbComp_name->setObjectName("cbComp_name");
        cbComp_name->setGeometry(QRect(132, 10, 161, 24));
        lbID_2 = new QLabel(frame_2);
        lbID_2->setObjectName("lbID_2");
        lbID_2->setGeometry(QRect(10, 10, 116, 16));
        btnReport = new QPushButton(frame_2);
        btnReport->setObjectName("btnReport");
        btnReport->setGeometry(QRect(310, 10, 131, 24));
        btnReport->setMinimumSize(QSize(131, 24));
        btnReport->setMaximumSize(QSize(131, 24));
        frame = new QFrame(frame_2);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(10, 43, 431, 241));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName("gridLayout");
        leDate = new QLineEdit(frame);
        leDate->setObjectName("leDate");

        gridLayout->addWidget(leDate, 1, 1, 1, 1);

        leOrder_number = new QLineEdit(frame);
        leOrder_number->setObjectName("leOrder_number");

        gridLayout->addWidget(leOrder_number, 0, 1, 1, 1);

        label = new QLabel(frame);
        label->setObjectName("label");

        gridLayout->addWidget(label, 2, 0, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        leSum_order = new QLineEdit(frame);
        leSum_order->setObjectName("leSum_order");

        gridLayout->addWidget(leSum_order, 3, 1, 1, 1);

        leFio_client = new QLineEdit(frame);
        leFio_client->setObjectName("leFio_client");

        gridLayout->addWidget(leFio_client, 2, 1, 1, 1);

        lbName_2 = new QLabel(frame);
        lbName_2->setObjectName("lbName_2");

        gridLayout->addWidget(lbName_2, 0, 0, 1, 1);

        lbINN_2 = new QLabel(frame);
        lbINN_2->setObjectName("lbINN_2");

        gridLayout->addWidget(lbINN_2, 1, 0, 1, 1);


        gridLayout_3->addWidget(frame_2, 1, 0, 1, 1);

        frame_4 = new QFrame(company_orders_search);
        frame_4->setObjectName("frame_4");
        frame_4->setMinimumSize(QSize(321, 41));
        frame_4->setMaximumSize(QSize(321, 41));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        btnBack = new QPushButton(frame_4);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(10, 10, 111, 24));

        gridLayout_3->addWidget(frame_4, 2, 0, 1, 1);

        teResult = new QTextEdit(company_orders_search);
        teResult->setObjectName("teResult");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(teResult->sizePolicy().hasHeightForWidth());
        teResult->setSizePolicy(sizePolicy);
        teResult->setMaximumSize(QSize(16777215, 70));
        teResult->setReadOnly(true);

        gridLayout_3->addWidget(teResult, 3, 0, 1, 2);


        retranslateUi(company_orders_search);

        QMetaObject::connectSlotsByName(company_orders_search);
    } // setupUi

    void retranslateUi(QDialog *company_orders_search)
    {
        company_orders_search->setWindowTitle(QCoreApplication::translate("company_orders_search", "Dialog", nullptr));
        lbID_3->setText(QCoreApplication::translate("company_orders_search", "\320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\232\320\276\320\274\320\277\320\260\320\275\320\270\320\270", nullptr));
        ImgReport->setText(QString());
        lbReport->setText(QCoreApplication::translate("company_orders_search", "\320\236\321\202\321\207\320\265\321\202 \320\227\320\260\320\272\320\260\320\267\320\276\320\262 \320\232\320\276\320\274\320\277\320\260\320\275\320\270\320\270", nullptr));
        lbID_2->setText(QCoreApplication::translate("company_orders_search", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\232\320\276\320\274\320\277\320\260\320\275\320\270\320\270 ", nullptr));
        btnReport->setText(QCoreApplication::translate("company_orders_search", "\320\237\320\276\320\273\321\203\321\207\320\270\321\202\321\214 \320\224\320\260\320\275\320\275\321\213\320\265", nullptr));
        label->setText(QCoreApplication::translate("company_orders_search", "\320\244\320\230\320\236 \320\232\320\273\320\270\320\265\320\275\321\202\320\260 ", nullptr));
        label_2->setText(QCoreApplication::translate("company_orders_search", "\320\241\321\203\320\274\320\274\320\260 \320\227\320\260\320\272\320\260\320\272\320\267\320\260 ", nullptr));
        lbName_2->setText(QCoreApplication::translate("company_orders_search", "\320\235\320\276\320\274\320\265\321\200 \320\267\320\260\320\272\320\260\320\267\320\260 ", nullptr));
        lbINN_2->setText(QCoreApplication::translate("company_orders_search", "\320\224\320\260\321\202\320\260 \320\227\320\260\320\272\320\260\320\267\320\260", nullptr));
        btnBack->setText(QCoreApplication::translate("company_orders_search", "\320\235\320\260\320\267\320\260\320\264 ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class company_orders_search: public Ui_company_orders_search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPANY_ORDERS_SEARCH_H
