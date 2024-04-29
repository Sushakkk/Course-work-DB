/********************************************************************************
** Form generated from reading UI file 'order_product.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDER_PRODUCT_H
#define UI_ORDER_PRODUCT_H

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

class Ui_order_product
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *lbID_2;
    QLineEdit *leID;
    QLabel *lbName_2;
    QComboBox *cbID_order;
    QLabel *lbINN_2;
    QComboBox *cbID_product;
    QLabel *lbINN_3;
    QLineEdit *leQuantity;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAdd_2;
    QPushButton *btnEdit_2;
    QPushButton *btnDel_2;
    QPushButton *btnRemove_2;
    QFrame *frame_4;
    QPushButton *btnBack;
    QTextEdit *teResult;
    QTableWidget *twOrg;

    void setupUi(QDialog *order_product)
    {
        if (order_product->objectName().isEmpty())
            order_product->setObjectName("order_product");
        order_product->resize(1139, 749);
        gridLayout_2 = new QGridLayout(order_product);
        gridLayout_2->setObjectName("gridLayout_2");
        frame = new QFrame(order_product);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(335, 326));
        frame->setMaximumSize(QSize(492, 464));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName("gridLayout");
        lbID_2 = new QLabel(frame);
        lbID_2->setObjectName("lbID_2");

        gridLayout->addWidget(lbID_2, 0, 0, 1, 1);

        leID = new QLineEdit(frame);
        leID->setObjectName("leID");

        gridLayout->addWidget(leID, 0, 1, 1, 1);

        lbName_2 = new QLabel(frame);
        lbName_2->setObjectName("lbName_2");

        gridLayout->addWidget(lbName_2, 1, 0, 1, 1);

        cbID_order = new QComboBox(frame);
        cbID_order->setObjectName("cbID_order");

        gridLayout->addWidget(cbID_order, 1, 1, 1, 1);

        lbINN_2 = new QLabel(frame);
        lbINN_2->setObjectName("lbINN_2");

        gridLayout->addWidget(lbINN_2, 2, 0, 1, 1);

        cbID_product = new QComboBox(frame);
        cbID_product->setObjectName("cbID_product");

        gridLayout->addWidget(cbID_product, 2, 1, 1, 1);

        lbINN_3 = new QLabel(frame);
        lbINN_3->setObjectName("lbINN_3");

        gridLayout->addWidget(lbINN_3, 3, 0, 1, 1);

        leQuantity = new QLineEdit(frame);
        leQuantity->setObjectName("leQuantity");

        gridLayout->addWidget(leQuantity, 3, 1, 1, 1);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);

        frame_3 = new QFrame(order_product);
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

        frame_4 = new QFrame(order_product);
        frame_4->setObjectName("frame_4");
        frame_4->setMinimumSize(QSize(351, 41));
        frame_4->setMaximumSize(QSize(351, 41));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        btnBack = new QPushButton(frame_4);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(10, 10, 111, 24));

        gridLayout_2->addWidget(frame_4, 2, 0, 1, 1);

        teResult = new QTextEdit(order_product);
        teResult->setObjectName("teResult");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(teResult->sizePolicy().hasHeightForWidth());
        teResult->setSizePolicy(sizePolicy);
        teResult->setMaximumSize(QSize(16777215, 83));
        teResult->setReadOnly(true);

        gridLayout_2->addWidget(teResult, 3, 0, 1, 2);

        twOrg = new QTableWidget(order_product);
        twOrg->setObjectName("twOrg");
        twOrg->setMinimumSize(QSize(561, 561));

        gridLayout_2->addWidget(twOrg, 0, 1, 3, 1);


        retranslateUi(order_product);

        QMetaObject::connectSlotsByName(order_product);
    } // setupUi

    void retranslateUi(QDialog *order_product)
    {
        order_product->setWindowTitle(QCoreApplication::translate("order_product", "Dialog", nullptr));
        lbID_2->setText(QCoreApplication::translate("order_product", "\320\235\320\276\320\274\320\265\321\200 \320\276\320\277\320\265\321\200\320\260\321\206\320\270\320\270", nullptr));
        lbName_2->setText(QCoreApplication::translate("order_product", "\320\235\320\276\320\274\320\265\321\200 \320\267\320\260\320\272\320\260\320\267\320\260", nullptr));
        lbINN_2->setText(QCoreApplication::translate("order_product", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\202\320\276\320\262\320\260\321\200\320\260 ", nullptr));
        lbINN_3->setText(QCoreApplication::translate("order_product", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        btnAdd_2->setText(QCoreApplication::translate("order_product", "Add", nullptr));
        btnEdit_2->setText(QCoreApplication::translate("order_product", "Edit", nullptr));
        btnDel_2->setText(QCoreApplication::translate("order_product", "Del", nullptr));
        btnRemove_2->setText(QCoreApplication::translate("order_product", "Remove", nullptr));
        btnBack->setText(QCoreApplication::translate("order_product", "\320\235\320\260\320\267\320\260\320\264 ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class order_product: public Ui_order_product {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDER_PRODUCT_H
