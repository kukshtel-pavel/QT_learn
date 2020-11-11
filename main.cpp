#include "mainwindow.h"
#include <QWidget>
#include <QApplication>
#include <QIcon>
#include <QFrame>
#include <QGridLayout>
#include <QLabel>


class Field :public QWidget
{
    public: Field(QWidget *parent = 0);
};

Field::Field(QWidget *parent)
    : QWidget(parent) {

    QFrame *frameTime = new QFrame(this);
    QFrame *frameDate = new QFrame(this);

    //QLabel *labelTime = new QLabel(this);
    //QLabel *labelDate = new QLabel(this);

    QGridLayout *grid  = new QGridLayout(this);
    grid->addWidget(frameTime, 0, 0);
    frameTime->setToolTip("current Time");
    //

    grid->addWidget(frameDate, 1, 0);
    frameDate->setToolTip("current Date");

    //frameTime->setFrameStyle(QFrame::Box); //show/hide border of frame
    //frameDate->setFrameStyle(QFrame::Box);

    setLayout(grid);
}





int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Field window;

    window.resize(350,150);
    window.move(300,300);
    window.setWindowTitle("MyClock");                                       // устанавливаем заголовок для окна
    window.setToolTip("current Date and Time");                             // устанавливаем всплывающую подсказку для виджета
    window.setWindowIcon(QIcon(":/source/source/clock_icon.png"));          // устанавливаем логотип для окна
    window.show();


    return app.exec();
}
