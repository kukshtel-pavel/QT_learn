#include "mainwindow.h"
#include <QWidget>
#include <QApplication>
#include <QIcon>
#include <QFrame>
#include <QGridLayout>
#include <QLabel>


class MyWidget :public QWidget
{
    public: MyWidget(QWidget *parent = 0);
};

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent) {

    QLabel *labelTime = new QLabel(this);
    QLabel *labelDate = new QLabel(this);

    QGridLayout *grid  = new QGridLayout(this);
    grid->addWidget(labelTime, 0, 0);
    labelTime->setToolTip("current Time");
    labelTime->setText("0");

    grid->addWidget(labelDate, 1, 0);
    labelDate->setToolTip("current Date");
    labelDate->setText("0");

    setLayout(grid);
}





int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MyWidget window;

    window.resize(350,150);
    window.move(300,300);
    window.setWindowTitle("MyClock");                                       // устанавливаем заголовок для окна
    window.setToolTip("current Date and Time");                             // устанавливаем всплывающую подсказку для виджета
    window.setWindowIcon(QIcon(":/source/source/clock_icon.png"));          // устанавливаем логотип для окна
    window.show();


    return app.exec();
}
