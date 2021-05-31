#pragma once

#include "mainwindow.h"
#include <QGridLayout>
#include <QTcpSocket>
#include <QFont>


Checker::Checker(QWidget *parent)
    : QWidget(parent)
{
    //grid settings
    QGridLayout *gridBox = new QGridLayout(this);
    gridBox->setSpacing(5);

    // text label settings
    QLabel *labelText = new QLabel("PROXY CHECKER",this);      //gridBox->addWidget(labelText, 0,0, 1,2);
    gridBox->addWidget(labelText, 0,0, 1,2);                   //ячейка начинается с нулевой строки нулевой колонки, и занимает 1 строку и 2 колонки.
    labelText->setAlignment(Qt::AlignCenter);

    // field for proxy settings
    QTextEdit *proxyField = new QTextEdit;
    gridBox->addWidget(proxyField, 1,0, 5,1);

    // button CHECK settings
    QPushButton *checkProxy = new QPushButton("CHECK",this);
    gridBox->addWidget(checkProxy, 1,1, 1,1);

    // button COPY settings
    QPushButton *copyToFile = new QPushButton("COPY to",this);
    gridBox->addWidget(copyToFile, 2,1, 1,1);

    // button CLEAR FORM settings
    QPushButton *clearList = new QPushButton("clear",this);
    gridBox->addWidget(clearList, 3,1, 1,1);

    // button SETTINGS
    QPushButton *settingsButton = new QPushButton("settings", this);
    gridBox->addWidget(settingsButton, 5,1, 1,1);




    //// gridBox->addWidget(checkProxy, 0, 0);


     //connectStatus = new QLabel("", this);
     //connectStatus->setFont(QFont("Purisa", 7));
     //connectStatus->setContentsMargins(0,0,0,0);
     // test git branch 2

     //vbox->addWidget(connectStatus, QSizePolicy::Expanding);


     //QTcpSocket tester;
     //tester.setProxy();
     //tester.connectToHost("google.com", 80);

     //if(tester.waitForConnected(3000)) {
         //connectStatus->setText("Remote host is ONline");
         //connectStatus->colorCount("Red");
     //} else {
         //connectStatus->setText("Remote host is OFFline");
     //}

     //setLayout(gridBox);
}

Checker::~Checker()
{
}

