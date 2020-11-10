#include "mainwindow.h"
#include <QWidget>
#include <QApplication>
#include <QIcon>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget window;

    window.resize(350,150);
    window.move(300,300);
    window.setWindowTitle("MyClock");               // устанавливаем заголовок для окна
    window.setToolTip("current Date and Time");     // устанавливаем всплывающую подсказку для виджета
    window.setWindowIcon(QIcon(":/source/source/clock_icon.png"));       // устанавливаем логотип для окна
    window.show();


    return app.exec();
}
