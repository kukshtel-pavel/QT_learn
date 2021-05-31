#include <QApplication>
#include "widget.h"



int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Widget window;
    window.setWindowTitle("RemoteWorker");
    window.show();
    return app.exec();
}
