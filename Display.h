#ifndef __HEADER_DISPLAY__
#define __HEADER_DISPLAY__
#include <cstdint>

#include "ui_mainwindow.h"
// #include "Calculator.h"
#include "K1003_sys.h"
// #include "mytimer.h"

using namespace std;

// forward declarations needed due to circular references
// forward declaration means that you only declare the class and let
// the compiler search -> at the end he MUST find a class.

// class Calculator;
class K1003_sys;
// class MyTimer;

class Display
{
private:
	Ui::MainWindow* ui;
	// Calculator* myCalculator;
	Display* myDisplay;
	K1003_sys* myK1003;

	/*
	void setPoint(uint8_t x, uint8_t y);
	void clearPoint(uint8_t x, uint8_t y); 
	*/

	void setPoint_new(uint8_t x_all);
	void clearPoint_new(uint8_t x_all);

/*
	const uint8_t led_font[112] = {
		0,  64,  68,  76,  92, 124, 125, 127, 111, 103,  99,  97,  96,  64,   0,   0,     //  ¦                ¦
		0, 107,  34,   0, 109,  18,  97,   2,  70, 112,  92,  70,  12,  64, 128,  82,     //  ¦ !"#$%&'()*+,-./¦
	   63,   6,  91,  79, 102, 109, 125,   7, 127, 111,   4,  20,  88,  72,  76,  83,     //  ¦0123456789:;<=>?¦
	  123, 119, 127,  57,  15, 121, 113,  61, 118,  48,  30, 122,  56,  85,  55,  99,     //  ¦@ABCDEFGHIJKLMNO¦
	   83, 103,  49,  45,   7,  28,  42,  60,  73, 110,  27,  57, 100,  15,  35,   8,     //  ¦PQRSTUVWXYZ[\]^_¦
	   32,  95, 124,  88,  94, 123,  43, 111, 116,  16,  14, 120,  24,  21,  84,  92,     //  ¦`abcdefghijklmno¦
	   83,  53,  80, 108,  70,  29,  43, 106,   9, 102,   3,  24,  29,   5,   1,  54 };   //  ¦pqrstuvwxyz{|}~ ¦
*/
	volatile bool pixel_0_a  = false;
	volatile bool pixel_0_aa = false;
	volatile bool pixel_0_b  = false;
	volatile bool pixel_0_c  = false;
	volatile bool pixel_0_d  = false;
	volatile bool pixel_0_dd = false;
	volatile bool pixel_0_e  = false;
	volatile bool pixel_0_f  = false;
	volatile bool pixel_0_g  = false;
	volatile bool pixel_0_gg = false;
	volatile bool pixel_0_dp = false;
	volatile bool pixel_0_pp = false;
	volatile bool pixel_1_a  = false;
	volatile bool pixel_1_aa = false;
	volatile bool pixel_1_b  = false;
	volatile bool pixel_1_c  = false;
	volatile bool pixel_1_d  = false;
	volatile bool pixel_1_dd = false;
	volatile bool pixel_1_e  = false;
	volatile bool pixel_1_f  = false;
	volatile bool pixel_1_g  = false;
	volatile bool pixel_1_gg = false;
	volatile bool pixel_1_dp = false;
	volatile bool pixel_1_pp = false;
	volatile bool pixel_2_a  = false;
	volatile bool pixel_2_aa = false;
	volatile bool pixel_2_b  = false;
	volatile bool pixel_2_c  = false;
	volatile bool pixel_2_d  = false;
	volatile bool pixel_2_dd = false;
	volatile bool pixel_2_e  = false;
	volatile bool pixel_2_f  = false;
	volatile bool pixel_2_g  = false;
	volatile bool pixel_2_gg = false;
	volatile bool pixel_2_dp = false;
	volatile bool pixel_2_pp = false;
	volatile bool pixel_3_a  = false;
	volatile bool pixel_3_aa = false;
	volatile bool pixel_3_b  = false;
	volatile bool pixel_3_c  = false;
	volatile bool pixel_3_d  = false;
	volatile bool pixel_3_dd = false;
	volatile bool pixel_3_e  = false;
	volatile bool pixel_3_f  = false;
	volatile bool pixel_3_g  = false;
	volatile bool pixel_3_gg = false;
	volatile bool pixel_3_dp = false;
	volatile bool pixel_3_pp = false;
	volatile bool pixel_4_a  = false;
	volatile bool pixel_4_aa = false;
	volatile bool pixel_4_b  = false;
	volatile bool pixel_4_c  = false;
	volatile bool pixel_4_d  = false;
	volatile bool pixel_4_dd = false;
	volatile bool pixel_4_e  = false;
	volatile bool pixel_4_f  = false;
	volatile bool pixel_4_g  = false;
	volatile bool pixel_4_gg = false;
	volatile bool pixel_4_dp = false;
	volatile bool pixel_4_pp = false;
	volatile bool pixel_5_a  = false;
	volatile bool pixel_5_aa = false;
	volatile bool pixel_5_b  = false;
	volatile bool pixel_5_c  = false;
	volatile bool pixel_5_d  = false;
	volatile bool pixel_5_dd = false;
	volatile bool pixel_5_e  = false;
	volatile bool pixel_5_f  = false;
	volatile bool pixel_5_g  = false;
	volatile bool pixel_5_gg = false;
	volatile bool pixel_5_dp = false;
	volatile bool pixel_5_pp = false;
	volatile bool pixel_6_a  = false;
	volatile bool pixel_6_aa = false;
	volatile bool pixel_6_b  = false;
	volatile bool pixel_6_c  = false;
	volatile bool pixel_6_dd = false;
	volatile bool pixel_6_d  = false;
	volatile bool pixel_6_e  = false;
	volatile bool pixel_6_f  = false;
	volatile bool pixel_6_g  = false;
	volatile bool pixel_6_gg = false;
	volatile bool pixel_6_dp = false;
	volatile bool pixel_6_pp = false;
	volatile bool pixel_7_a  = false;
	volatile bool pixel_7_aa = false;
	volatile bool pixel_7_b  = false;
	volatile bool pixel_7_c  = false;
	volatile bool pixel_7_d  = false;
	volatile bool pixel_7_dd = false;
	volatile bool pixel_7_e  = false;
	volatile bool pixel_7_f  = false;
	volatile bool pixel_7_g  = false;
	volatile bool pixel_7_gg = false;
	volatile bool pixel_7_dp = false;
	volatile bool pixel_7_pp = false;
	volatile bool pixel_8_a  = false;
	volatile bool pixel_8_aa = false;
	volatile bool pixel_8_b  = false;
	volatile bool pixel_8_c  = false;
	volatile bool pixel_8_d  = false;
	volatile bool pixel_8_dd = false;
	volatile bool pixel_8_e  = false;
	volatile bool pixel_8_f  = false;
	volatile bool pixel_8_g  = false;
	volatile bool pixel_8_gg = false;
	volatile bool pixel_8_dp = false;
	volatile bool pixel_8_pp = false;
	volatile bool pixel_9_a  = false;
	volatile bool pixel_9_aa = false;
	volatile bool pixel_9_b  = false;
	volatile bool pixel_9_c  = false;
	volatile bool pixel_9_d  = false;
	volatile bool pixel_9_dd = false;
	volatile bool pixel_9_e  = false;
	volatile bool pixel_9_f  = false;
	volatile bool pixel_9_g  = false;
	volatile bool pixel_9_gg = false;
	volatile bool pixel_9_dp = false;
	volatile bool pixel_9_pp = false;
	volatile bool pixel_10_a  = false;
	volatile bool pixel_10_aa = false;
	volatile bool pixel_10_b  = false;
	volatile bool pixel_10_c  = false;
	volatile bool pixel_10_d  = false;
	volatile bool pixel_10_dd = false;
	volatile bool pixel_10_e  = false;
	volatile bool pixel_10_f  = false;
	volatile bool pixel_10_g  = false;
	volatile bool pixel_10_gg = false;
	volatile bool pixel_10_dp = false;
	volatile bool pixel_10_pp = false;
	volatile bool pixel_11_a  = false;
	volatile bool pixel_11_aa = false;
	volatile bool pixel_11_b  = false;
	volatile bool pixel_11_c  = false;
	volatile bool pixel_11_d  = false;
	volatile bool pixel_11_dd = false;
	volatile bool pixel_11_e  = false;
	volatile bool pixel_11_f  = false;
	volatile bool pixel_11_g  = false;
	volatile bool pixel_11_gg = false;
	volatile bool pixel_11_dp = false;
	volatile bool pixel_11_pp = false;
	volatile bool pixel_12_a  = false;
	volatile bool pixel_12_aa = false;
	volatile bool pixel_12_b  = false;
	volatile bool pixel_12_c  = false;
	volatile bool pixel_12_d  = false;
	volatile bool pixel_12_dd = false;
	volatile bool pixel_12_e  = false;
	volatile bool pixel_12_f  = false;
	volatile bool pixel_12_g  = false;
	volatile bool pixel_12_gg = false;
	volatile bool pixel_12_dp = false;
	volatile bool pixel_12_pp = false;
	volatile bool pixel_13_a  = false;
	volatile bool pixel_13_aa = false;
	volatile bool pixel_13_b  = false;
	volatile bool pixel_13_c  = false;
	volatile bool pixel_13_d  = false;
	volatile bool pixel_13_dd = false;
	volatile bool pixel_13_e  = false;
	volatile bool pixel_13_f  = false;
	volatile bool pixel_13_g  = false;
	volatile bool pixel_13_gg = false;
	volatile bool pixel_13_dp = false;
	volatile bool pixel_13_pp = false;
	volatile bool pixel_14_a  = false;
	volatile bool pixel_14_aa = false;
	volatile bool pixel_14_b  = false;
	volatile bool pixel_14_c  = false;
	volatile bool pixel_14_d  = false;
	volatile bool pixel_14_dd = false;
	volatile bool pixel_14_e  = false;
	volatile bool pixel_14_f  = false;
	volatile bool pixel_14_g  = false;
	volatile bool pixel_14_gg = false;
	volatile bool pixel_14_dp = false;
	volatile bool pixel_14_pp = false;
	volatile bool pixel_15_a  = false;
	volatile bool pixel_15_b  = false;
	volatile bool pixel_15_c  = false;
	volatile bool pixel_15_d  = false;
	volatile bool pixel_15_e  = false;
	volatile bool pixel_15_f  = false;
	volatile bool pixel_15_g  = false;
	volatile bool pixel_15_dp = false;

	volatile bool change_test = false;

public:
	Display(Ui::MainWindow* newUi);
	~Display();

	uint8_t dispBuffer[16] = { 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 63 };
	uint8_t dispBuffer_Test[16] = { 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 63 };

	void setPointAll();
	void clearPointAll();
	// void DisplayDigit();
	void DisplayDigit_new();
	// void dispBufferTest();

	void checkBox_komp_on();
	void checkBox_komp_off();
	void checkBox_bes_on();
	void checkBox_bes_off();
	void checkBox_stop_on();
	void checkBox_stop_off();
	void checkBox_grd__on();
	void checkBox_grd__off();
	void checkBox_ngrd__on();
	void checkBox_ngrd__off();

	void set_dispBuffer(uint8_t dispBuffer_new[16]);
	void clear();
	/*
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
	*/
	void KeyPressed(uint8_t KeyNumber);

	// void PiClicked();  // myK1003
	void InitProcessor();
	void run_K1000_Anztest();
	void stop_CPU();
	void reStart_CPU();
};

#endif