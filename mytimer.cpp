#include "mytimer.h"
#include <QTimer>

MyTimer::MyTimer(QObject* parent) : QTimer(parent)
{
    // create a timer
    // my_Timer = new QTimer(this);
    my_Timer->set_Timer(this);

    // setup signal and slot
    connect(my_Timer, SIGNAL(timeout()),
          this, SLOT(MyTimerSlot()));

    // msec
    my_Timer->start(1000);
}

void MyTimer::set_Timer(QTimer* my_timer)
{
    my_Timer = my_timer;
}

void MyTimer::MyTimerSlot()
{
    // my_runCPU->run();
    // qDebug() << "Timer...";
}

void MyTimer::set(MyTimer* my_Timer)
{
}
