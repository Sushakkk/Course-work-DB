/********************************************************************************
** Form generated from reading UI file 'sales_manager.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALES_MANAGER_H
#define UI_SALES_MANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Sales_Manager
{
public:
    QGridLayout *gridLayout;
    QFrame *frame_title_Report;
    QLabel *ImgReport;
    QLabel *lbReport;
    QPushButton *btnClient;
    QPushButton *btnOrder;
    QPushButton *btnOrder_product;
    QPushButton *btnAuthorization;

    void setupUi(QDialog *Sales_Manager)
    {
        if (Sales_Manager->objectName().isEmpty())
            Sales_Manager->setObjectName("Sales_Manager");
        Sales_Manager->resize(477, 587);
        gridLayout = new QGridLayout(Sales_Manager);
        gridLayout->setObjectName("gridLayout");
        frame_title_Report = new QFrame(Sales_Manager);
        frame_title_Report->setObjectName("frame_title_Report");
        frame_title_Report->setMinimumSize(QSize(291, 84));
        frame_title_Report->setMaximumSize(QSize(411, 84));
        frame_title_Report->setFrameShape(QFrame::StyledPanel);
        frame_title_Report->setFrameShadow(QFrame::Raised);
        ImgReport = new QLabel(frame_title_Report);
        ImgReport->setObjectName("ImgReport");
        ImgReport->setGeometry(QRect(10, 10, 64, 64));
        ImgReport->setPixmap(QPixmap(QString::fromUtf8(":/rec/img/men.png")));
        lbReport = new QLabel(frame_title_Report);
        lbReport->setObjectName("lbReport");
        lbReport->setGeometry(QRect(93, 10, 308, 64));
        lbReport->setMinimumSize(QSize(184, 64));
        lbReport->setStyleSheet(QString::fromUtf8("font: 20pt \"Segoe UI\";"));

        gridLayout->addWidget(frame_title_Report, 0, 0, 1, 1);

        btnClient = new QPushButton(Sales_Manager);
        btnClient->setObjectName("btnClient");

        gridLayout->addWidget(btnClient, 1, 0, 1, 1);

        btnOrder = new QPushButton(Sales_Manager);
        btnOrder->setObjectName("btnOrder");

        gridLayout->addWidget(btnOrder, 2, 0, 1, 1);

        btnOrder_product = new QPushButton(Sales_Manager);
        btnOrder_product->setObjectName("btnOrder_product");

        gridLayout->addWidget(btnOrder_product, 3, 0, 1, 1);

        btnAuthorization = new QPushButton(Sales_Manager);
        btnAuthorization->setObjectName("btnAuthorization");
        btnAuthorization->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 255);"));

        gridLayout->addWidget(btnAuthorization, 4, 0, 1, 1);


        retranslateUi(Sales_Manager);

        QMetaObject::connectSlotsByName(Sales_Manager);
    } // setupUi

    void retranslateUi(QDialog *Sales_Manager)
    {
        Sales_Manager->setWindowTitle(QCoreApplication::translate("Sales_Manager", "Dialog", nullptr));
        ImgReport->setText(QString());
        lbReport->setText(QCoreApplication::translate("Sales_Manager", "\320\234\320\265\320\275\320\265\320\264\320\266\320\265\321\200 \320\277\320\276 \320\277\321\200\320\276\320\264\320\260\320\266\320\260\320\274", nullptr));
        btnClient->setText(QCoreApplication::translate("Sales_Manager", "\320\232\320\273\320\270\320\265\320\275\321\202\321\213", nullptr));
        btnOrder->setText(QCoreApplication::translate("Sales_Manager", "\320\227\320\260\320\272\320\260\320\267\321\213", nullptr));
        btnOrder_product->setText(QCoreApplication::translate("Sales_Manager", "\320\227\320\260\320\272\320\260\320\267\320\260\320\275\320\275\321\213\320\265 \321\202\320\276\320\262\320\260\321\200\321\213 ", nullptr));
        btnAuthorization->setText(QCoreApplication::translate("Sales_Manager", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sales_Manager: public Ui_Sales_Manager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALES_MANAGER_H
