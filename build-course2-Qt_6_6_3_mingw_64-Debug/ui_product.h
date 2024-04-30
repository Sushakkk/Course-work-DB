/********************************************************************************
** Form generated from reading UI file 'product.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCT_H
#define UI_PRODUCT_H

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

class Ui_product
{
public:
    QTableWidget *twOrg;
    QTextEdit *teResult;
    QFrame *frame_4;
    QPushButton *btnBack;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAdd_2;
    QPushButton *btnEdit_2;
    QPushButton *btnDel_2;
    QPushButton *btnRemove_2;
    QFrame *frame_5;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *lbName_2;
    QLabel *label_6;
    QLabel *lbID_2;
    QLineEdit *lePr_ID;
    QLineEdit *leAvail_stock;
    QLabel *label_5;
    QLineEdit *leQuantity;
    QLabel *lbINN_2;
    QComboBox *cbStock_address;
    QLineEdit *lePr_price;
    QLineEdit *lePr_name;
    QFrame *Title;
    QFrame *frame_title_Form;
    QHBoxLayout *horizontalLayout_5;
    QLabel *ImgReport_2;
    QLabel *lbReport_2;

    void setupUi(QDialog *product)
    {
        if (product->objectName().isEmpty())
            product->setObjectName("product");
        product->resize(1591, 852);
        twOrg = new QTableWidget(product);
        twOrg->setObjectName("twOrg");
        twOrg->setGeometry(QRect(560, 140, 1011, 571));
        teResult = new QTextEdit(product);
        teResult->setObjectName("teResult");
        teResult->setGeometry(QRect(10, 720, 1561, 121));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(teResult->sizePolicy().hasHeightForWidth());
        teResult->setSizePolicy(sizePolicy);
        teResult->setMaximumSize(QSize(16777215, 121));
        teResult->setReadOnly(true);
        frame_4 = new QFrame(product);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(10, 670, 351, 41));
        frame_4->setMinimumSize(QSize(351, 41));
        frame_4->setMaximumSize(QSize(351, 41));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        btnBack = new QPushButton(frame_4);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(10, 10, 111, 24));
        frame_3 = new QFrame(product);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(10, 610, 491, 44));
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

        frame_5 = new QFrame(product);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(10, 150, 541, 441));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_5);
        gridLayout->setObjectName("gridLayout");
        label_3 = new QLabel(frame_5);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        lbName_2 = new QLabel(frame_5);
        lbName_2->setObjectName("lbName_2");

        gridLayout->addWidget(lbName_2, 2, 0, 1, 1);

        label_6 = new QLabel(frame_5);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        lbID_2 = new QLabel(frame_5);
        lbID_2->setObjectName("lbID_2");

        gridLayout->addWidget(lbID_2, 0, 0, 1, 1);

        lePr_ID = new QLineEdit(frame_5);
        lePr_ID->setObjectName("lePr_ID");

        gridLayout->addWidget(lePr_ID, 0, 2, 1, 1);

        leAvail_stock = new QLineEdit(frame_5);
        leAvail_stock->setObjectName("leAvail_stock");

        gridLayout->addWidget(leAvail_stock, 4, 2, 1, 1);

        label_5 = new QLabel(frame_5);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        leQuantity = new QLineEdit(frame_5);
        leQuantity->setObjectName("leQuantity");

        gridLayout->addWidget(leQuantity, 3, 2, 1, 1);

        lbINN_2 = new QLabel(frame_5);
        lbINN_2->setObjectName("lbINN_2");

        gridLayout->addWidget(lbINN_2, 3, 0, 1, 1);

        cbStock_address = new QComboBox(frame_5);
        cbStock_address->setObjectName("cbStock_address");

        gridLayout->addWidget(cbStock_address, 5, 2, 1, 1);

        lePr_price = new QLineEdit(frame_5);
        lePr_price->setObjectName("lePr_price");

        gridLayout->addWidget(lePr_price, 2, 2, 1, 1);

        lePr_name = new QLineEdit(frame_5);
        lePr_name->setObjectName("lePr_name");

        gridLayout->addWidget(lePr_name, 1, 2, 1, 1);

        Title = new QFrame(product);
        Title->setObjectName("Title");
        Title->setGeometry(QRect(10, 30, 661, 101));
        Title->setMaximumSize(QSize(661, 101));
        Title->setFrameShape(QFrame::StyledPanel);
        Title->setFrameShadow(QFrame::Raised);
        frame_title_Form = new QFrame(Title);
        frame_title_Form->setObjectName("frame_title_Form");
        frame_title_Form->setGeometry(QRect(20, 10, 291, 81));
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


        retranslateUi(product);

        QMetaObject::connectSlotsByName(product);
    } // setupUi

    void retranslateUi(QDialog *product)
    {
        product->setWindowTitle(QCoreApplication::translate("product", "Dialog", nullptr));
        btnBack->setText(QCoreApplication::translate("product", "\320\235\320\260\320\267\320\260\320\264 ", nullptr));
        btnAdd_2->setText(QCoreApplication::translate("product", "Add", nullptr));
        btnEdit_2->setText(QCoreApplication::translate("product", "Edit", nullptr));
        btnDel_2->setText(QCoreApplication::translate("product", "Del", nullptr));
        btnRemove_2->setText(QCoreApplication::translate("product", "Remove", nullptr));
        label_3->setText(QCoreApplication::translate("product", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        lbName_2->setText(QCoreApplication::translate("product", "\320\246\320\265\320\275\320\260", nullptr));
        label_6->setText(QCoreApplication::translate("product", "\320\220\320\264\321\200\320\265\321\201 \320\241\320\272\320\273\320\260\320\264\320\260 ", nullptr));
        lbID_2->setText(QCoreApplication::translate("product", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\276\320\262\320\260\321\200\320\260", nullptr));
        label_5->setText(QCoreApplication::translate("product", "\320\235\320\260\320\273\320\270\321\207\320\270\320\265 \320\275\320\260 \321\201\320\272\320\273\320\260\320\264\320\265 ", nullptr));
        lbINN_2->setText(QCoreApplication::translate("product", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        ImgReport_2->setText(QString());
        lbReport_2->setText(QCoreApplication::translate("product", "\320\244\320\276\321\200\320\274\320\260 \320\242\320\276\320\262\320\260\321\200\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class product: public Ui_product {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCT_H
