#include "mainwindow.h"
#include <GL/glu.h>
#include <QApplication>

MainWindow *w;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    w = new MainWindow();

    w->show();
    int result = a.exec();
    delete w;
    w = NULL;

    return result;
}
