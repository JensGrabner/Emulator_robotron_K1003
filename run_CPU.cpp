#include "run_CPU.h"
#include <QThread>
// #include <QMutex>

// #include "ui_mainwindow.h"
// #include "Display.h"
// #include "K1003_sys.h"
// #include "cpu_8008.h"

run_CPU::run_CPU(QObject* parent) : QThread(parent)
{
	abort = true;
	PC_runCPU = 0;	// program counter

	// my_runCPU = this;
	// my_runCPU->
	// myCPU->set_run_CPU(this);
	// my_runCPU->set_K1003(myK1003);
	// my_runCPU->set_Display(myDisplay);
	// my_runCPU->set_UI(ui);
	// doWork();
}

run_CPU::~run_CPU()
{
	abort = true;
}

void run_CPU::run()
{
	forever
	{
		if (slow_down >= 250) 
		{
			// mutex->lock();
			if (abort == false)
			{				
				PC_runCPU = myCPU->iSet(memory(PC_runCPU));
				// mutex->unlock();
				slow_down = 0;
			}
			// mutex->unlock();
		}
		slow_down += 1;
	}
}

void run_CPU::start_CPU(cpu_8008* myCPU_n)
{
	abort = false;
	PC_runCPU = 0;	// program counter
	slow_down = 0;
	this->myCPU = myCPU_n;
}

void run_CPU::stop_CPU()
{
	abort = true;
}

void run_CPU::reStart_CPU()
{
	abort = false;
}

void run_CPU::set_run_CPU(run_CPU* n_runCPU)
{
	my_runCPU = n_runCPU;
}

void run_CPU::set_K1003(K1003_sys* m_K1003)
{
	myK1003 = m_K1003;
}

void run_CPU::set_Display(Display* n_display)
{
	myDisplay = n_display;
}

/*
void run_CPU::set_UI(Ui::MainWindow* n_user)
{
	ui = n_user;
}
*/

void run_CPU::set_cpu_8008(cpu_8008* n_myCPU)
{
	myCPU = n_myCPU;
}

uint8_t run_CPU::memory(uint16_t PC_n)
{
	// return 0;  // failure

	if (PC_n < 16384) {
		return KRom_KRam[PC_n];
	}
	else {
		return 0;  // failure
	}
}
/*
void run_CPU::Pi_Clicked()
{
	
	// myCPU->Pi_Clicked(); // defekt
	// myDisplay->DisplayDigit();  // defekt 
	// myK1003->Test();  // defekt
	// myCPU->Test();  // o.k.
	// doWork();
	// PC = myCPU->iSet(81);  // Display Test - 
	// ui->label->setText("PiClicked");  // defekt 
}
*/
