#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QProgressBar>
#include <QTextEdit>
#include <QPushButton>

class Checker : public QWidget
{
    Q_OBJECT

public:
    Checker(QWidget *parent = nullptr);
    ~Checker();

private:
    QLabel *labelText;

    QProgressBar *procesState;
    QTextEdit *proxyField;

    QPushButton *checkProxy;
    QPushButton *copyToFile;
    QPushButton *clearList;
    QPushButton *settingsButton;
};
#endif // MAINWINDOW_H
