/********************************************************************************
** Form generated from reading UI file 'stock.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOCK_H
#define UI_STOCK_H

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

class Ui_stock
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame_title_Form;
    QHBoxLayout *horizontalLayout_5;
    QLabel *ImgReport_2;
    QLabel *lbReport_2;
    QTableWidget *twOrg;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLineEdit *leID;
    QLabel *lbName_2;
    QLineEdit *leAdress;
    QLabel *lbID_2;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAdd_2;
    QPushButton *btnEdit_2;
    QPushButton *btnDel_2;
    QPushButton *btnRemove_2;
    QFrame *frame_4;
    QPushButton *btnBack;
    QTextEdit *teResult;

    void setupUi(QDialog *stock)
    {
        if (stock->objectName().isEmpty())
            stock->setObjectName("stock");
        stock->resize(1111, 687);
        gridLayout_2 = new QGridLayout(stock);
        gridLayout_2->setObjectName("gridLayout_2");
        frame_title_Form = new QFrame(stock);
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


        gridLayout_2->addWidget(frame_title_Form, 0, 0, 1, 1);

        twOrg = new QTableWidget(stock);
        twOrg->setObjectName("twOrg");
        twOrg->setMinimumSize(QSize(521, 531));
        twOrg->setMaximumSize(QSize(521, 531));

        gridLayout_2->addWidget(twOrg, 0, 1, 4, 1);

        frame = new QFrame(stock);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(441, 311));
        frame->setMaximumSize(QSize(441, 311));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName("gridLayout");
        leID = new QLineEdit(frame);
        leID->setObjectName("leID");

        gridLayout->addWidget(leID, 0, 1, 1, 1);

        lbName_2 = new QLabel(frame);
        lbName_2->setObjectName("lbName_2");

        gridLayout->addWidget(lbName_2, 1, 0, 1, 1);

        leAdress = new QLineEdit(frame);
        leAdress->setObjectName("leAdress");

        gridLayout->addWidget(leAdress, 1, 1, 1, 1);

        lbID_2 = new QLabel(frame);
        lbID_2->setObjectName("lbID_2");

        gridLayout->addWidget(lbID_2, 0, 0, 1, 1);


        gridLayout_2->addWidget(frame, 1, 0, 1, 1);

        frame_3 = new QFrame(stock);
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


        gridLayout_2->addWidget(frame_3, 2, 0, 1, 1);

        frame_4 = new QFrame(stock);
        frame_4->setObjectName("frame_4");
        frame_4->setMinimumSize(QSize(351, 41));
        frame_4->setMaximumSize(QSize(351, 41));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        btnBack = new QPushButton(frame_4);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(10, 10, 111, 24));

        gridLayout_2->addWidget(frame_4, 3, 0, 1, 1);

        teResult = new QTextEdit(stock);
        teResult->setObjectName("teResult");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(teResult->sizePolicy().hasHeightForWidth());
        teResult->setSizePolicy(sizePolicy);
        teResult->setMaximumSize(QSize(16777215, 83));
        teResult->setReadOnly(true);

        gridLayout_2->addWidget(teResult, 4, 0, 1, 2);


        retranslateUi(stock);

        QMetaObject::connectSlotsByName(stock);
    } // setupUi

    void retranslateUi(QDialog *stock)
    {
        stock->setWindowTitle(QCoreApplication::translate("stock", "Dialog", nullptr));
        ImgReport_2->setText(QString());
        lbReport_2->setText(QCoreApplication::translate("stock", "\320\244\320\276\321\200\320\274\320\260 \320\241\320\272\320\273\320\260\320\264\320\276\320\262", nullptr));
        lbName_2->setText(QCoreApplication::translate("stock", "\320\220\320\264\321\200\320\265\321\201 \321\201\320\272\320\273\320\260\320\264\320\260", nullptr));
        lbID_2->setText(QCoreApplication::translate("stock", "\320\235\320\276\320\274\320\265\321\200 \321\201\320\273\320\260\320\264\320\260 ", nullptr));
        btnAdd_2->setText(QCoreApplication::translate("stock", "Add", nullptr));
        btnEdit_2->setText(QCoreApplication::translate("stock", "Edit", nullptr));
        btnDel_2->setText(QCoreApplication::translate("stock", "Del", nullptr));
        btnRemove_2->setText(QCoreApplication::translate("stock", "Remove", nullptr));
        btnBack->setText(QCoreApplication::translate("stock", "\320\235\320\260\320\267\320\260\320\264 ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class stock: public Ui_stock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOCK_H
