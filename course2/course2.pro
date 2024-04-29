QT       += core gui
QT += core gui sql
QT += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    add_product.cpp \
    admin.cpp \
    client.cpp \
    clientorder.cpp \
    company.cpp \
    employee.cpp \
    fucn.cpp \
    functions.cpp \
    main.cpp \
    mainwindow.cpp \
    order.cpp \
    order_product.cpp \
    product.cpp \
    stock.cpp

HEADERS += \
    add_product.h \
    admin.h \
    client.h \
    clientorder.h \
    company.h \
    employee.h \
    fucn.h \
    functions.h \
    mainwindow.h \
    order.h \
    order_product.h \
    product.h \
    stock.h

FORMS += \
    add_product.ui \
    admin.ui \
    client.ui \
    clientorder.ui \
    company.ui \
    employee.ui \
    mainwindow.ui \
    order.ui \
    order_product.ui \
    product.ui \
    stock.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
