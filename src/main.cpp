#include "mainwindow.h"
#include "myrobot.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyRobot robot;
    MainWindow w;
    w.show();
    
    return a.exec();
}
