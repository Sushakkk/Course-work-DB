/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QGridLayout *gridLayout;
    QFrame *frame_title_Report;
    QHBoxLayout *horizontalLayout_3;
    QLabel *ImgReport;
    QLabel *lbReport;
    QPushButton *btnClient;
    QPushButton *btnCompany;
    QPushButton *btnEmp;
    QPushButton *btnOrder;
    QPushButton *btnOrder_product;
    QPushButton *btnProduct;
    QPushButton *btnStock;
    QPushButton *btnAuthorization;

    void setupUi(QDialog *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName("admin");
        admin->resize(649, 843);
        gridLayout = new QGridLayout(admin);
        gridLayout->setObjectName("gridLayout");
        frame_title_Report = new QFrame(admin);
        frame_title_Report->setObjectName("frame_title_Report");
        frame_title_Report->setMinimumSize(QSize(291, 84));
        frame_title_Report->setMaximumSize(QSize(291, 84));
        frame_title_Report->setFrameShape(QFrame::StyledPanel);
        frame_title_Report->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_title_Report);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        ImgReport = new QLabel(frame_title_Report);
        ImgReport->setObjectName("ImgReport");
        ImgReport->setPixmap(QPixmap(QString::fromUtf8(":/rec/img/men.png")));

        horizontalLayout_3->addWidget(ImgReport);

        lbReport = new QLabel(frame_title_Report);
        lbReport->setObjectName("lbReport");
        lbReport->setMinimumSize(QSize(184, 64));
        lbReport->setStyleSheet(QString::fromUtf8("font: 20pt \"Segoe UI\";"));

        horizontalLayout_3->addWidget(lbReport);


        gridLayout->addWidget(frame_title_Report, 0, 0, 1, 1);

        btnClient = new QPushButton(admin);
        btnClient->setObjectName("btnClient");

        gridLayout->addWidget(btnClient, 1, 0, 1, 1);

        btnCompany = new QPushButton(admin);
        btnCompany->setObjectName("btnCompany");

        gridLayout->addWidget(btnCompany, 2, 0, 1, 1);

        btnEmp = new QPushButton(admin);
        btnEmp->setObjectName("btnEmp");

        gridLayout->addWidget(btnEmp, 3, 0, 1, 1);

        btnOrder = new QPushButton(admin);
        btnOrder->setObjectName("btnOrder");

        gridLayout->addWidget(btnOrder, 4, 0, 1, 1);

        btnOrder_product = new QPushButton(admin);
        btnOrder_product->setObjectName("btnOrder_product");

        gridLayout->addWidget(btnOrder_product, 5, 0, 1, 1);

        btnProduct = new QPushButton(admin);
        btnProduct->setObjectName("btnProduct");

        gridLayout->addWidget(btnProduct, 6, 0, 1, 1);

        btnStock = new QPushButton(admin);
        btnStock->setObjectName("btnStock");

        gridLayout->addWidget(btnStock, 7, 0, 1, 1);

        btnAuthorization = new QPushButton(admin);
        btnAuthorization->setObjectName("btnAuthorization");
        btnAuthorization->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 255);"));

        gridLayout->addWidget(btnAuthorization, 8, 0, 1, 1);


        retranslateUi(admin);

        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QDialog *admin)
    {
        admin->setWindowTitle(QCoreApplication::translate("admin", "Dialog", nullptr));
        ImgReport->setText(QString());
        lbReport->setText(QCoreApplication::translate("admin", "\320\220\320\264\320\274\320\270\320\275\320\270\321\201\321\202\321\200\320\260\321\202\320\276\321\200", nullptr));
        btnClient->setText(QCoreApplication::translate("admin", "\320\232\320\273\320\270\320\265\320\275\321\202\321\213", nullptr));
        btnCompany->setText(QCoreApplication::translate("admin", "\320\232\320\276\320\274\320\277\320\260\320\275\320\270\320\270 ", nullptr));
        btnEmp->setText(QCoreApplication::translate("admin", "C\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\270", nullptr));
        btnOrder->setText(QCoreApplication::translate("admin", "\320\227\320\260\320\272\320\260\320\267\321\213", nullptr));
        btnOrder_product->setText(QCoreApplication::translate("admin", "\320\227\320\260\320\272\320\260\320\267\320\260\320\275\320\275\321\213\320\265 \321\202\320\276\320\262\320\260\321\200\321\213 ", nullptr));
        btnProduct->setText(QCoreApplication::translate("admin", "\320\242\320\276\320\262\320\260\321\200\321\213", nullptr));
        btnStock->setText(QCoreApplication::translate("admin", "\320\241\320\272\320\273\320\260\320\264\321\213", nullptr));
        btnAuthorization->setText(QCoreApplication::translate("admin", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
