/********************************************************************************
** Form generated from reading UI file 'add_product.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_PRODUCT_H
#define UI_ADD_PRODUCT_H

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

class Ui_add_product
{
public:
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAdd_2;
    QPushButton *btnEdit_2;
    QPushButton *btnDel_2;
    QPushButton *btnRemove_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *lbID_2;
    QLabel *lbName_2;
    QComboBox *cbID_product;
    QLabel *lbINN_3;
    QLineEdit *leQuantity;
    QTableWidget *twOrg;
    QFrame *frame_4;
    QPushButton *btnAdd;
    QTextEdit *teResult;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *leOp;

    void setupUi(QDialog *add_product)
    {
        if (add_product->objectName().isEmpty())
            add_product->setObjectName("add_product");
        add_product->resize(1155, 578);
        frame_3 = new QFrame(add_product);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(0, 340, 491, 44));
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

        frame = new QFrame(add_product);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(80, 180, 271, 91));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName("gridLayout");
        lbID_2 = new QLabel(frame);
        lbID_2->setObjectName("lbID_2");

        gridLayout->addWidget(lbID_2, 0, 0, 1, 1);

        lbName_2 = new QLabel(frame);
        lbName_2->setObjectName("lbName_2");

        gridLayout->addWidget(lbName_2, 1, 0, 1, 1);

        cbID_product = new QComboBox(frame);
        cbID_product->setObjectName("cbID_product");

        gridLayout->addWidget(cbID_product, 1, 1, 1, 1);

        lbINN_3 = new QLabel(frame);
        lbINN_3->setObjectName("lbINN_3");

        gridLayout->addWidget(lbINN_3, 2, 0, 1, 1);

        leQuantity = new QLineEdit(frame);
        leQuantity->setObjectName("leQuantity");

        gridLayout->addWidget(leQuantity, 2, 1, 1, 1);

        twOrg = new QTableWidget(add_product);
        twOrg->setObjectName("twOrg");
        twOrg->setGeometry(QRect(518, 85, 531, 351));
        frame_4 = new QFrame(add_product);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(10, 400, 351, 41));
        frame_4->setMinimumSize(QSize(351, 41));
        frame_4->setMaximumSize(QSize(351, 41));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        btnAdd = new QPushButton(frame_4);
        btnAdd->setObjectName("btnAdd");
        btnAdd->setGeometry(QRect(10, 10, 111, 24));
        teResult = new QTextEdit(add_product);
        teResult->setObjectName("teResult");
        teResult->setGeometry(QRect(10, 460, 1041, 83));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(teResult->sizePolicy().hasHeightForWidth());
        teResult->setSizePolicy(sizePolicy);
        teResult->setMaximumSize(QSize(16777215, 83));
        teResult->setReadOnly(true);
        label = new QLabel(add_product);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 80, 211, 41));
        label->setScaledContents(false);
        label->setWordWrap(false);
        label_2 = new QLabel(add_product);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(640, 30, 341, 41));
        label_2->setScaledContents(false);
        label_2->setWordWrap(false);
        leOp = new QLineEdit(add_product);
        leOp->setObjectName("leOp");
        leOp->setGeometry(QRect(30, 210, 31, 22));

        retranslateUi(add_product);

        QMetaObject::connectSlotsByName(add_product);
    } // setupUi

    void retranslateUi(QDialog *add_product)
    {
        add_product->setWindowTitle(QCoreApplication::translate("add_product", "Dialog", nullptr));
        btnAdd_2->setText(QCoreApplication::translate("add_product", "Add", nullptr));
        btnEdit_2->setText(QCoreApplication::translate("add_product", "Edit", nullptr));
        btnDel_2->setText(QCoreApplication::translate("add_product", "Del", nullptr));
        btnRemove_2->setText(QCoreApplication::translate("add_product", "Remove", nullptr));
        lbID_2->setText(QString());
        lbName_2->setText(QCoreApplication::translate("add_product", "\320\242\320\276\320\262\320\260\321\200", nullptr));
        lbINN_3->setText(QCoreApplication::translate("add_product", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        btnAdd->setText(QCoreApplication::translate("add_product", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\262 \320\267\320\260\320\272\320\260\320\267", nullptr));
        label->setText(QCoreApplication::translate("add_product", "<html><head/><body><p><span style=\" font-size:18pt;\">\320\224\320\276\320\261\320\260\320\262\321\214\321\202\320\265 \320\242\320\276\320\262\321\200\321\213</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("add_product", "<html><head/><body><p><span style=\" font-size:18pt;\">\320\237\321\200\320\265\320\264\320\262\320\260\321\200\320\270\321\202\320\265\320\273\321\214\320\275\320\260\321\217 \321\202\320\260\320\261\320\273\320\270\321\206\320\260</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_product: public Ui_add_product {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_PRODUCT_H
