#ifndef __MYTIMER_H__
#define __MYTIMER_H__

#include <QTimer>
#include <cstdint>

#include "Display.h"
#include "K1003_sys.h"
#include "cpu_8008.h"
#include "run_CPU.h"

using namespace std;

// forward declarations needed due to circular references
// forward declaration means that you only declare the class and let
// the compiler search -> at the end he MUST find a class.

class Display;
class K1003_sys;
class cpu_8008; 
class run_CPU;

class MyTimer : public QTimer
{
    Q_OBJECT
public:
    MyTimer();
    MyTimer *my_Timer;
    void set(MyTimer* my_Timer);

public slots:
    void MyTimerSlot();

private:
	// Ui::MainWindow* ui;
	Display* myDisplay;
	K1003_sys* myK1003;
	cpu_8008* myCPU;
	run_CPU* my_runCPU;
	// MyTimer* my_Timer;
};

#endif // __MYTIMER_H__