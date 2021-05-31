#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication apps(argc, argv);
    Checker checkerApp;

    checkerApp.resize(350, 150);
    checkerApp.setWindowTitle("MyProxyChecker");
    checkerApp.setStyleSheet("background-color: silver");
    checkerApp.show();

    return apps.exec();
}
