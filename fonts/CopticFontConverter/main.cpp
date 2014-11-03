#include <QtGui/QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setApplicationName("Coptic Font Converter Version 0.1 Alpha");
    MainWindow w;
    w.show();

    return a.exec();
}
