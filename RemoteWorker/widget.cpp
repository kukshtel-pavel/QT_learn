#include <QGridLayout>
#include <QPushButton>
#include <QLabel>
#include <QApplication>
#include <QLineEdit>
#include<QScreen>
#include "widget.h"


//https://ravesli.com/urok-6-osnovy-raboty-s-gui-v-qt5/#toc-5
//https://evileg.com/en/post/112/


Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    // GRID settings
    QGridLayout *grid = new QGridLayout(this);
    grid->setVerticalSpacing(15);
    grid->setHorizontalSpacing(10);

    // Get screen size
    QScreen *screen=QGuiApplication::primaryScreen ();
    QRect desktopScreen = screen->availableGeometry();
    const int screen_width = desktopScreen.width();
    const int screen_height = desktopScreen.height();

    // Start / Stop button
    QPushButton *startStop = new QPushButton("Start",this);
    grid->addWidget(startStop, 0, 1, 1, 1);
    startStop->setStyleSheet("QPushButton {background-color: #A3C1DA; color: grey;}");
    connect(startStop, &QPushButton::clicked, qApp, &QApplication::quit);

    // RANDOM PAUSE INTERVAL
    QLabel *title = new QLabel("random pause interval, seconds -min/-max", this);
    grid->addWidget(title, 1, 0, 1, 1);
    title->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);

    QLineEdit *edtMin = new QLineEdit(this);
    grid->addWidget(edtMin, 1, 1, 1, 1);
    edtMin->setPlaceholderText("0");

    QLineEdit *edtMax = new QLineEdit(this);
    grid->addWidget(edtMax, 1, 2, 1, 1);
    edtMax->setPlaceholderText("30");

    // CURSOR MOVING AREA, X-line
    QLabel *cursorFieldX = new QLabel("cursor moving area, width pixels -min/-max", this);
    grid->addWidget(cursorFieldX, 2, 0, 1, 1);
    cursorFieldX->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);

    QLineEdit *edtXMin = new QLineEdit(this);
    grid->addWidget(edtXMin, 2, 1, 1, 1);
    edtXMin->setPlaceholderText("0");

    QLineEdit *edtXMax = new QLineEdit(this);
    grid->addWidget(edtXMax, 2, 2, 1, 1);
    QString string1 = QString::number(screen_width);
    edtXMax->setPlaceholderText(string1);

    // CURSOR MOVING AREA, Y-line
    QLabel *cursorFieldY = new QLabel("cursor moving area, height pixels -min/-max", this);
    grid->addWidget(cursorFieldY, 3, 0, 1, 1);
    cursorFieldY->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);

    QLineEdit *edtYMin = new QLineEdit(this);
    grid->addWidget(edtYMin, 3, 1, 1, 1);
    edtYMin->setPlaceholderText("0");

    QLineEdit *edtYMax = new QLineEdit(this);
    grid->addWidget(edtYMax, 3, 2, 1, 1);
    QString string2 = QString::number(screen_height);
    edtYMax->setPlaceholderText(string2);

    // ABOUT button
    QPushButton *about = new QPushButton("settings",this);
    grid->addWidget(about, 4, 0, 1, 1);

    // INFO button
    QPushButton *info = new QPushButton("info",this);
    grid->addWidget(info, 4, 1, 1, 1);

    // CLOSE button
    QPushButton *close = new QPushButton("close",this);
    grid->addWidget(close, 4, 2, 1, 1);
    connect(close, &QPushButton::clicked, qApp, &QApplication::quit);

    setLayout(grid);
}

Widget::~Widget()
{
}

