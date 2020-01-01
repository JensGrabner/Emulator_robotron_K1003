#include "cpu_8008.h"
#include "run_CPU.h"
#include "K1003_sys.h"
#include "Display.h"
#include "ui_mainwindow.h"

K1003_sys::K1003_sys()
{
	myCPU = new cpu_8008();
	myCPU->set_K1003(this);
	myCPU->set_Display(myDisplay);
	myCPU->set_UI(ui);
}

K1003_sys::~K1003_sys()
{
	delete myCPU;
}

void K1003_sys::setUI(Ui::MainWindow* m_w)
{
	ui = m_w;
}

void K1003_sys::setDisplay(Display* m_display)
{
	myDisplay = m_display;
}

void K1003_sys::KeyPressed(uint8_t KeyNumber_n)
{
	myCPU->KeyPressed(KeyNumber_n);  //  o.k.
	// _sleep(2);
}

void K1003_sys::PiClicked()
{
	// my_runCPU->Pi_Clicked(); // defekt
	myCPU->Pi_Clicked(); // o.k.
	// myCPU->iSet(0);  // HLT - Test o.k.
	// ui->label->setText("Pi_Clicked"); // o.k.
}

void K1003_sys::InitProcessor()
{
	myCPU->InitProcessor();
}

void K1003_sys::stop_CPU()
{
	myCPU->stop_CPU();
}

void K1003_sys::reStart_CPU()
{
	myCPU->reStart_CPU();
}

void K1003_sys::CPU_hlt(uint16_t PC_n)
{
	ui->label->setText("hlt " + QString::number(PC_n, 10)); // o.k.
}

void K1003_sys::K1003_is_on()
{
	ui->label->setText("K1003_on");
}

void K1003_sys::Test()
{
	// myDisplay->DisplayDigit();  // o.k.
	// myCPU->iSet(0);  // HLT - Test
	// ui->label->setText("PiClicked");  // o.k.
}

void K1003_sys::set_dispBuffer(uint8_t dispBuffer_new[16])
{
	for (uint8_t i = 0; i < 16; i++) {
		dispBuffer[display_sort[i]] = reverse[dispBuffer_new[i]];
	}
	stop_CPU();
	myDisplay->set_dispBuffer(dispBuffer);
	reStart_CPU();
}

void K1003_sys::setPointAll()
{
	myDisplay->setPointAll();
}