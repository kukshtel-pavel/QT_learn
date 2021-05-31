#include "mainwindow.h"
#include <QWidget>
#include <QApplication>
#include <QIcon>
#include <QFrame>
#include <QGridLayout>
#include <QLabel>
#include <QDate>
#include <QTime>


class MyWidget :public QWidget
{
    public: MyWidget(QWidget *parent = 0);
};

class MyTimer : public QObject
{
    Q_OBJECT
public:
    MyTimer();
    QTimer *timer;
public slots:
    void MyTimerSlot();
};



MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent) {

    QLabel *labelTime = new QLabel(this);
    QLabel *labelDate = new QLabel(this);

    QTime curTime = QTime::currentTime();
    QDate curDate = QDate::currentDate();

    QGridLayout *grid  = new QGridLayout(this);

    grid->addWidget(labelTime, 0, 0);
    labelTime->setToolTip("current Time");
    labelTime->setText(curTime.toString());

    grid->addWidget(labelDate, 1, 0);
    labelDate->setToolTip("current Date");
    labelDate->setText(curDate.toString("dddd  d MMMM yyyy"));

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
