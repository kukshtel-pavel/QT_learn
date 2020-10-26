#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextStream>
#include <QDate>
//#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->date->setText(QDate::currentDate().toString(Qt::SystemLocaleLongDate));
    ui->time->setText(QTime::currentTime().toString(Qt::SystemLocaleLongDate));

   // timer_1sec = new QTimer(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}
