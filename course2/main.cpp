#include "mainwindow.h"
#include "authorization.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    // QApplication a(argc, argv);
    // MainWindow w;
    // w.show();
    // return a.exec();

    QApplication a(argc, argv);
    Authorization autW;
    autW.setModal(true);
    autW.exec();
}
