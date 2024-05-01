/********************************************************************************
** Form generated from reading UI file 'company_profit.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPANY_PROFIT_H
#define UI_COMPANY_PROFIT_H

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

class Ui_company_profit
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame_title_Report;
    QHBoxLayout *horizontalLayout_3;
    QLabel *ImgReport;
    QLabel *lbReport;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLineEdit *leCount_orders;
    QLabel *lbID_2;
    QLabel *lbINN_2;
    QLineEdit *leID;
    QLabel *lbName_2;
    QLineEdit *leName;
    QLineEdit *leSum;
    QLabel *label;
    QFrame *frame_4;
    QPushButton *btnBack;
    QPushButton *btnReport_orders;
    QTextEdit *teResult;
    QTableWidget *twOrg;

    void setupUi(QDialog *company_profit)
    {
        if (company_profit->objectName().isEmpty())
            company_profit->setObjectName("company_profit");
        company_profit->resize(928, 569);
        gridLayout_2 = new QGridLayout(company_profit);
        gridLayout_2->setObjectName("gridLayout_2");
        frame_title_Report = new QFrame(company_profit);
        frame_title_Report->setObjectName("frame_title_Report");
        frame_title_Report->setMinimumSize(QSize(301, 78));
        frame_title_Report->setMaximumSize(QSize(301, 78));
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
        lbReport->setMaximumSize(QSize(203, 64));
        lbReport->setStyleSheet(QString::fromUtf8("font: 20pt \"Segoe UI\";"));

        horizontalLayout_3->addWidget(lbReport);


        gridLayout_2->addWidget(frame_title_Report, 0, 0, 1, 2);

        frame = new QFrame(company_profit);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(335, 326));
        frame->setMaximumSize(QSize(335, 326));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName("gridLayout");
        leCount_orders = new QLineEdit(frame);
        leCount_orders->setObjectName("leCount_orders");

        gridLayout->addWidget(leCount_orders, 2, 1, 1, 1);

        lbID_2 = new QLabel(frame);
        lbID_2->setObjectName("lbID_2");

        gridLayout->addWidget(lbID_2, 0, 0, 1, 1);

        lbINN_2 = new QLabel(frame);
        lbINN_2->setObjectName("lbINN_2");

        gridLayout->addWidget(lbINN_2, 2, 0, 1, 1);

        leID = new QLineEdit(frame);
        leID->setObjectName("leID");

        gridLayout->addWidget(leID, 0, 1, 1, 1);

        lbName_2 = new QLabel(frame);
        lbName_2->setObjectName("lbName_2");

        gridLayout->addWidget(lbName_2, 1, 0, 1, 1);

        leName = new QLineEdit(frame);
        leName->setObjectName("leName");

        gridLayout->addWidget(leName, 1, 1, 1, 1);

        leSum = new QLineEdit(frame);
        leSum->setObjectName("leSum");

        gridLayout->addWidget(leSum, 3, 1, 1, 1);

        label = new QLabel(frame);
        label->setObjectName("label");

        gridLayout->addWidget(label, 3, 0, 1, 1);


        gridLayout_2->addWidget(frame, 1, 0, 1, 2);

        frame_4 = new QFrame(company_profit);
        frame_4->setObjectName("frame_4");
        frame_4->setMinimumSize(QSize(131, 41));
        frame_4->setMaximumSize(QSize(131, 41));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        btnBack = new QPushButton(frame_4);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(10, 10, 111, 24));

        gridLayout_2->addWidget(frame_4, 2, 0, 1, 1);

        btnReport_orders = new QPushButton(company_profit);
        btnReport_orders->setObjectName("btnReport_orders");

        gridLayout_2->addWidget(btnReport_orders, 2, 1, 1, 1);

        teResult = new QTextEdit(company_profit);
        teResult->setObjectName("teResult");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(teResult->sizePolicy().hasHeightForWidth());
        teResult->setSizePolicy(sizePolicy);
        teResult->setReadOnly(true);

        gridLayout_2->addWidget(teResult, 3, 0, 1, 3);

        twOrg = new QTableWidget(company_profit);
        twOrg->setObjectName("twOrg");

        gridLayout_2->addWidget(twOrg, 0, 2, 3, 1);


        retranslateUi(company_profit);

        QMetaObject::connectSlotsByName(company_profit);
    } // setupUi

    void retranslateUi(QDialog *company_profit)
    {
        company_profit->setWindowTitle(QCoreApplication::translate("company_profit", "Dialog", nullptr));
        ImgReport->setText(QString());
        lbReport->setText(QCoreApplication::translate("company_profit", " \320\236\321\202\321\207\320\265\321\202 \320\237\321\200\320\270\320\261\321\213\320\273\320\270", nullptr));
        lbID_2->setText(QCoreApplication::translate("company_profit", "\320\235\320\276\320\274\320\265\321\200 \320\232\320\276\320\274\320\277\320\260\320\275\320\270\320\270", nullptr));
        lbINN_2->setText(QCoreApplication::translate("company_profit", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\320\262\320\276 \320\227\320\260\320\272\320\260\320\267\320\276\320\262", nullptr));
        lbName_2->setText(QCoreApplication::translate("company_profit", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label->setText(QCoreApplication::translate("company_profit", "\320\237\321\200\320\270\320\261\321\213\320\273\321\214", nullptr));
        btnBack->setText(QCoreApplication::translate("company_profit", "\320\235\320\260\320\267\320\260\320\264 ", nullptr));
        btnReport_orders->setText(QCoreApplication::translate("company_profit", "\320\237\320\276\320\264\321\200\320\276\320\261\320\275\320\265\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class company_profit: public Ui_company_profit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPANY_PROFIT_H
