#ifndef __HEADER_DISPLAY__
#define __HEADER_DISPLAY__
#include <cstdint>

#include "ui_mainwindow.h"
#include "Calculator.h"
#include "K1003_sys.h"

using namespace std;

// forward declarations needed due to circular references
// forward declaration means that you only declare the class and let
// the compiler search -> at the end he MUST find a class.

class Calculator;
class K1003_sys;

class Display
{
private:
	Ui::MainWindow* ui;
	Calculator* myCalculator;
	Display* myDisplay;
	K1003_sys* myK1003;

	void setPoint(uint8_t x, uint8_t y);
	void clearPoint(uint8_t x, uint8_t y); 

	const uint8_t led_font[112] = {
		0,  64,  68,  76,  92, 124, 125, 127, 111, 103,  99,  97,  96,  64,   0,   0,     //  ¦                ¦
		0, 107,  34,   0, 109,  18,  97,   2,  70, 112,  92,  70,  12,  64, 128,  82,     //  ¦ !"#$%&'()*+,-./¦
	   63,   6,  91,  79, 102, 109, 125,   7, 127, 111,   4,  20,  88,  72,  76,  83,     //  ¦0123456789:;<=>?¦
	  123, 119, 127,  57,  15, 121, 113,  61, 118,  48,  30, 122,  56,  85,  55,  99,     //  ¦@ABCDEFGHIJKLMNO¦
	   83, 103,  49,  45,   7,  28,  42,  60,  73, 110,  27,  57, 100,  15,  35,   8,     //  ¦PQRSTUVWXYZ[\]^_¦
	   32,  95, 124,  88,  94, 123,  43, 111, 116,  16,  14, 120,  24,  21,  84,  92,     //  ¦`abcdefghijklmno¦
	   83,  53,  80, 108,  70,  29,  43, 106,   9, 102,   3,  24,  29,   5,   1,  54 };   //  ¦pqrstuvwxyz{|}~ ¦

public:
	Display(Ui::MainWindow* newUi);
	~Display();

	uint8_t dispBuffer[16] = { 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	void setPointAll();
	void clearPointAll();
	void DisplayDigit();
	void dispBufferTest();

	void set_dispBuffer(uint8_t dispBuffer_new[16]);
	void clear();
	
	void changeSignClicked();
	void digitClicked_0();
	void digitClicked_1();
	void digitClicked_2();
	void digitClicked_3();
	void digitClicked_4();
	void digitClicked_5();
	void digitClicked_6();
	void digitClicked_7();
	void digitClicked_8();
	void digitClicked_9();
	void pointClicked();

	void unaryOperatorClicked_1_x();
	void unaryOperatorClicked_pow_2();
	void unaryOperatorClicked_sqrt();

	void OperatorClicked_Div();
	void OperatorClicked_Mul();
	void OperatorClicked_Sub();
	void OperatorClicked_Add();

	void equalClicked();

	void KeyPressed(uint8_t KeyNumber);

	void PiClicked();  // myK1003
	void InitProcessor();
	void stop_CPU();

};

#endif