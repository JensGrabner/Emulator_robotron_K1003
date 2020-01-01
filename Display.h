#ifndef __HEADER_DISPLAY__
#define __HEADER_DISPLAY__
#include <cstdint>

#include "ui_mainwindow.h"
// #include "Calculator.h"
#include "K1003_sys.h"

using namespace std;

// forward declarations needed due to circular references
// forward declaration means that you only declare the class and let
// the compiler search -> at the end he MUST find a class.

// class Calculator;
class K1003_sys;

class Display
{
private:
	Ui::MainWindow* ui;
	// Calculator* myCalculator;
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
	uint8_t dispBuffer_Test[16] = { 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	
	bool change_test = false;

	bool pixel_0_00 = false;
	bool pixel_0_01 = false;
	bool pixel_0_02 = false;
	bool pixel_0_03 = false;
	bool pixel_0_04 = false;
	bool pixel_0_05 = false;
	bool pixel_0_06 = false;
	bool pixel_0_07 = false;
	bool pixel_0_08 = false;
	bool pixel_0_09 = false;
	bool pixel_0_10 = false;
	bool pixel_0_11 = false;
	bool pixel_0_12 = false;
	bool pixel_0_13 = false;
	bool pixel_0_14 = false;
	bool pixel_0_15 = false;
	bool pixel_1_00 = false;
	bool pixel_1_01 = false;
	bool pixel_1_02 = false;
	bool pixel_1_03 = false;
	bool pixel_1_04 = false;
	bool pixel_1_05 = false;
	bool pixel_1_06 = false;
	bool pixel_1_07 = false;
	bool pixel_1_08 = false;
	bool pixel_1_09 = false;
	bool pixel_1_10 = false;
	bool pixel_1_11 = false;
	bool pixel_1_12 = false;
	bool pixel_1_13 = false;
	bool pixel_1_14 = false;
	bool pixel_1_15 = false;
	bool pixel_2_00 = false;
	bool pixel_2_01 = false;
	bool pixel_2_02 = false;
	bool pixel_2_03 = false;
	bool pixel_2_04 = false;
	bool pixel_2_05 = false;
	bool pixel_2_06 = false;
	bool pixel_2_07 = false;
	bool pixel_2_08 = false;
	bool pixel_2_09 = false;
	bool pixel_2_10 = false;
	bool pixel_2_11 = false;
	bool pixel_2_12 = false;
	bool pixel_2_13 = false;
	bool pixel_2_14 = false;
	bool pixel_2_15 = false;
	bool pixel_3_00 = false;
	bool pixel_3_01 = false;
	bool pixel_3_02 = false;
	bool pixel_3_03 = false;
	bool pixel_3_04 = false;
	bool pixel_3_05 = false;
	bool pixel_3_06 = false;
	bool pixel_3_07 = false;
	bool pixel_3_08 = false;
	bool pixel_3_09 = false;
	bool pixel_3_10 = false;
	bool pixel_3_11 = false;
	bool pixel_3_12 = false;
	bool pixel_3_13 = false;
	bool pixel_3_14 = false;
	bool pixel_3_15 = false;
	bool pixel_4_00 = false;
	bool pixel_4_01 = false;
	bool pixel_4_02 = false;
	bool pixel_4_03 = false;
	bool pixel_4_04 = false;
	bool pixel_4_05 = false;
	bool pixel_4_06 = false;
	bool pixel_4_07 = false;
	bool pixel_4_08 = false;
	bool pixel_4_09 = false;
	bool pixel_4_10 = false;
	bool pixel_4_11 = false;
	bool pixel_4_12 = false;
	bool pixel_4_13 = false;
	bool pixel_4_14 = false;
	bool pixel_4_15 = false;
	bool pixel_5_00 = false;
	bool pixel_5_01 = false;
	bool pixel_5_02 = false;
	bool pixel_5_03 = false;
	bool pixel_5_04 = false;
	bool pixel_5_05 = false;
	bool pixel_5_06 = false;
	bool pixel_5_07 = false;
	bool pixel_5_08 = false;
	bool pixel_5_09 = false;
	bool pixel_5_10 = false;
	bool pixel_5_11 = false;
	bool pixel_5_12 = false;
	bool pixel_5_13 = false;
	bool pixel_5_14 = false;
	bool pixel_5_15 = false;
	bool pixel_6_00 = false;
	bool pixel_6_01 = false;
	bool pixel_6_02 = false;
	bool pixel_6_03 = false;
	bool pixel_6_04 = false;
	bool pixel_6_05 = false;
	bool pixel_6_06 = false;
	bool pixel_6_07 = false;
	bool pixel_6_08 = false;
	bool pixel_6_09 = false;
	bool pixel_6_10 = false;
	bool pixel_6_11 = false;
	bool pixel_6_12 = false;
	bool pixel_6_13 = false;
	bool pixel_6_14 = false;
	bool pixel_6_15 = false;
	bool pixel_7_00 = false;
	bool pixel_7_01 = false;
	bool pixel_7_02 = false;
	bool pixel_7_03 = false;
	bool pixel_7_04 = false;
	bool pixel_7_05 = false;
	bool pixel_7_06 = false;
	bool pixel_7_07 = false;
	bool pixel_7_08 = false;
	bool pixel_7_09 = false;
	bool pixel_7_10 = false;
	bool pixel_7_11 = false;
	bool pixel_7_12 = false;
	bool pixel_7_13 = false;
	bool pixel_7_14 = false;
	bool pixel_7_15 = false;
	bool pixel_8_00 = false;
	bool pixel_8_01 = false;
	bool pixel_8_02 = false;
	bool pixel_8_03 = false;
	bool pixel_8_04 = false;
	bool pixel_8_05 = false;
	bool pixel_8_06 = false;
	bool pixel_8_07 = false;
	bool pixel_8_08 = false;
	bool pixel_8_09 = false;
	bool pixel_8_10 = false;
	bool pixel_8_11 = false;
	bool pixel_8_12 = false;
	bool pixel_8_13 = false;
	bool pixel_8_14 = false;
	bool pixel_8_15 = false;
	bool pixel_9_00 = false;
	bool pixel_9_01 = false;
	bool pixel_9_02 = false;
	bool pixel_9_03 = false;
	bool pixel_9_04 = false;
	bool pixel_9_05 = false;
	bool pixel_9_06 = false;
	bool pixel_9_07 = false;
	bool pixel_9_08 = false;
	bool pixel_9_09 = false;
	bool pixel_9_10 = false;
	bool pixel_9_11 = false;
	bool pixel_9_12 = false;
	bool pixel_9_13 = false;
	bool pixel_9_14 = false;
	bool pixel_9_15 = false;
	bool pixel_a_00 = false;
	bool pixel_a_01 = false;
	bool pixel_a_02 = false;
	bool pixel_a_03 = false;
	bool pixel_a_04 = false;
	bool pixel_a_05 = false;
	bool pixel_a_06 = false;
	bool pixel_a_07 = false;
	bool pixel_a_08 = false;
	bool pixel_a_09 = false;
	bool pixel_a_10 = false;
	bool pixel_a_11 = false;
	bool pixel_a_12 = false;
	bool pixel_a_13 = false;
	bool pixel_a_14 = false;
	bool pixel_a_15 = false;
	bool pixel_b_00 = false;
	bool pixel_b_01 = false;
	bool pixel_b_02 = false;
	bool pixel_b_03 = false;
	bool pixel_b_04 = false;
	bool pixel_b_05 = false;
	bool pixel_b_06 = false;
	bool pixel_b_07 = false;
	bool pixel_b_08 = false;
	bool pixel_b_09 = false;
	bool pixel_b_10 = false;
	bool pixel_b_11 = false;
	bool pixel_b_12 = false;
	bool pixel_b_13 = false;
	bool pixel_b_14 = false;
	bool pixel_b_15 = false;
	bool pixel_c_00 = false;
	bool pixel_c_01 = false;
	bool pixel_c_02 = false;
	bool pixel_c_03 = false;
	bool pixel_c_04 = false;
	bool pixel_c_05 = false;
	bool pixel_c_06 = false;
	bool pixel_c_07 = false;
	bool pixel_c_08 = false;
	bool pixel_c_09 = false;
	bool pixel_c_10 = false;
	bool pixel_c_11 = false;
	bool pixel_c_12 = false;
	bool pixel_c_13 = false;
	bool pixel_c_14 = false;
	bool pixel_c_15 = false;
	bool pixel_d_00 = false;
	bool pixel_d_01 = false;
	bool pixel_d_02 = false;
	bool pixel_d_03 = false;
	bool pixel_d_04 = false;
	bool pixel_d_05 = false;
	bool pixel_d_06 = false;
	bool pixel_d_07 = false;
	bool pixel_d_08 = false;
	bool pixel_d_09 = false;
	bool pixel_d_10 = false;
	bool pixel_d_11 = false;
	bool pixel_d_12 = false;
	bool pixel_d_13 = false;
	bool pixel_d_14 = false;
	bool pixel_d_15 = false;
	bool pixel_e_00 = false;
	bool pixel_e_01 = false;
	bool pixel_e_02 = false;
	bool pixel_e_03 = false;
	bool pixel_e_04 = false;
	bool pixel_e_05 = false;
	bool pixel_e_06 = false;
	bool pixel_e_07 = false;
	bool pixel_e_08 = false;
	bool pixel_e_09 = false;
	bool pixel_e_10 = false;
	bool pixel_e_11 = false;
	bool pixel_e_12 = false;
	bool pixel_e_13 = false;
	bool pixel_e_14 = false;
	bool pixel_e_15 = false;
	bool pixel_f_00 = false;
	bool pixel_f_01 = false;
	bool pixel_f_02 = false;
	bool pixel_f_03 = false;
	bool pixel_f_04 = false;
	bool pixel_f_05 = false;
	bool pixel_f_06 = false;
	bool pixel_f_07 = false;
	bool pixel_f_08 = false;
	bool pixel_f_09 = false;
	bool pixel_f_10 = false;
	bool pixel_f_11 = false;
	bool pixel_f_12 = false;
	bool pixel_f_13 = false;
	bool pixel_f_14 = false;
	bool pixel_f_15 = false;

	void setPointAll();
	void clearPointAll();
	void DisplayDigit();
	// void dispBufferTest();

	void set_dispBuffer(uint8_t dispBuffer_new[16]);
	void clear();
	
	// void changeSignClicked();
	// void digitClicked_0();
	// void digitClicked_1();
	// void digitClicked_2();
	// void digitClicked_3();
	// void digitClicked_4();
	// void digitClicked_5();
	// void digitClicked_6();
	// void digitClicked_7();
	// void digitClicked_8();
	// void digitClicked_9();
	// void pointClicked();

	// void unaryOperatorClicked_1_x();
	// void unaryOperatorClicked_pow_2();
	// void unaryOperatorClicked_sqrt();

	// void OperatorClicked_Div();
	// void OperatorClicked_Mul();
	// void OperatorClicked_Sub();
	// void OperatorClicked_Add();

	// void equalClicked();

	void KeyPressed(uint8_t KeyNumber);

	// void PiClicked();  // myK1003
	void InitProcessor();
	void stop_CPU();
	void reStart_CPU();
};

#endif