#include "mainwindow.h"
#include "authorization.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Authorization log;
    log.show();
    return a.exec();
}
