/********************************************************************************
** Form generated from reading UI file 'stock_emp.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOCK_EMP_H
#define UI_STOCK_EMP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_stock_emp
{
public:
    QGridLayout *gridLayout;
    QPushButton *btnAuthorization;
    QPushButton *btnOrder_product;
    QPushButton *btnStock;
    QPushButton *btnProduct;

    void setupUi(QDialog *stock_emp)
    {
        if (stock_emp->objectName().isEmpty())
            stock_emp->setObjectName("stock_emp");
        stock_emp->resize(447, 425);
        gridLayout = new QGridLayout(stock_emp);
        gridLayout->setObjectName("gridLayout");
        btnAuthorization = new QPushButton(stock_emp);
        btnAuthorization->setObjectName("btnAuthorization");
        btnAuthorization->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 255);"));

        gridLayout->addWidget(btnAuthorization, 8, 0, 1, 1);

        btnOrder_product = new QPushButton(stock_emp);
        btnOrder_product->setObjectName("btnOrder_product");

        gridLayout->addWidget(btnOrder_product, 2, 0, 1, 1);

        btnStock = new QPushButton(stock_emp);
        btnStock->setObjectName("btnStock");

        gridLayout->addWidget(btnStock, 0, 0, 1, 1);

        btnProduct = new QPushButton(stock_emp);
        btnProduct->setObjectName("btnProduct");

        gridLayout->addWidget(btnProduct, 1, 0, 1, 1);


        retranslateUi(stock_emp);

        QMetaObject::connectSlotsByName(stock_emp);
    } // setupUi

    void retranslateUi(QDialog *stock_emp)
    {
        stock_emp->setWindowTitle(QCoreApplication::translate("stock_emp", "Dialog", nullptr));
        btnAuthorization->setText(QCoreApplication::translate("stock_emp", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        btnOrder_product->setText(QCoreApplication::translate("stock_emp", "\320\227\320\260\320\272\320\260\320\267\320\260\320\275\320\275\321\213\320\265 \321\202\320\276\320\262\320\260\321\200\321\213 ", nullptr));
        btnStock->setText(QCoreApplication::translate("stock_emp", "\320\241\320\272\320\273\320\260\320\264\321\213", nullptr));
        btnProduct->setText(QCoreApplication::translate("stock_emp", "\320\242\320\276\320\262\320\260\321\200\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class stock_emp: public Ui_stock_emp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOCK_EMP_H
