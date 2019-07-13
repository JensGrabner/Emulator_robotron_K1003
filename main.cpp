#include <QApplication>
#include <QObject> 

#include "mainwindow.h"
#include "Display.h"
#include "Calculator.h"

#include <iostream>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow view;
    view.show();

    return app.exec();
}


