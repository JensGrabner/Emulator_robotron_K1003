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
	_sleep(1);
}
/*
void K1003_sys::PiClicked()
{
	// my_runCPU->Pi_Clicked(); // defekt
	myCPU->Pi_Clicked(); // o.k.
	// myCPU->iSet(0);  // HLT - Test o.k.
	// ui->label->setText("Pi_Clicked"); // o.k.
}
*/
void K1003_sys::InitProcessor()
{
	myCPU->InitProcessor();
}

void K1003_sys::run_K1000_Anztest()
{
	myCPU->run_K1000_Anztest();
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

void K1003_sys::statusLEDs(uint8_t Led_out)
{
	// Areg & 0b11011100

	if ((Led_out & 0b00000100) == 4) {
		myDisplay->checkBox_komp_on();
	}
	else {
		myDisplay->checkBox_komp_off();
	}

	if ((Led_out & 0b00001000) == 8) {
		myDisplay->checkBox_stop_on();
	}
	else {
		myDisplay->checkBox_stop_off();
	}

	if ((Led_out & 0b00010000) == 16) {
		myDisplay->checkBox_bes_on();
	}
	else {
		myDisplay->checkBox_bes_off();
	}

	if ((Led_out & 0b01000000) == 64) {
		myDisplay->checkBox_grd__on();
	}
	else {
		myDisplay->checkBox_grd__off();
	}

	if ((Led_out & 0b10000000) == 128) {
		myDisplay->checkBox_ngrd__on();
	}
	else {
		myDisplay->checkBox_ngrd__off();
	}
}

void K1003_sys::K1003_is_on()
{
	ui->label->setText("K1003_on");
}

void K1003_sys::Test()
{
	// myDisplay->DisplayDigit();  // o.k.
	// myCPU->iSet(0);  // HLT - Test
	ui->label->setText("Test_STM");  // o.k.
}

void K1003_sys::set_dispBuffer(uint8_t dispBuffer_new[16])
{
	for (uint8_t i = 0; i < 16; i++) {
		dispBuffer[display_sort[i]] = reverse_new[dispBuffer_new[i]];
	}
	// CPU_hlt(0);
	stop_CPU();
	myDisplay->set_dispBuffer(dispBuffer);
	reStart_CPU();
}

void K1003_sys::setPointAll()
{
	myDisplay->setPointAll();
}