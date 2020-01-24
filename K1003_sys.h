#ifndef __HEADER_K1003_SYS__
#define __HEADER_K1003_SYS__
#include <cstdint>

#include "ui_mainwindow.h"
// #include "Display.h"
#include "cpu_8008.h"
// #include "run_CPU.h"

using namespace std;

// forward declarations needed due to circular references
// forward declaration means that you only declare the class and let
// the compiler search -> at the end he MUST find a class.

class cpu_8008;
class Display;
class run_CPU;

class K1003_sys
{
private:
	Ui::MainWindow* ui;
	Display* myDisplay;
	cpu_8008* myCPU;
	run_CPU* my_runCPU;
	K1003_sys* myK1003;

	uint8_t display_sort[16] = {
		9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 15, 14, 13, 12, 11, 10
	};

	uint8_t reverse[256] = {

   0, 128,  64, 192,  32, 160,  96, 224,  16, 144,  80, 208,  48, 176, 112, 240,
   8, 136,  72, 200,  40, 168, 104, 232,  24, 152,  88, 216,  56, 184, 120, 248,
   4, 132,  68, 196,  36, 164, 100, 228,  20, 148,  84, 212,  52, 180, 116, 244,
  12, 140,  76, 204,  44, 172, 108, 236,  28, 156,  92, 220,  60, 188, 124, 252,
   2, 130,  66, 194,  34, 162,  98, 226,  18, 146,  82, 210,  50, 178, 114, 242,
  10, 138,  74, 202,  42, 170, 106, 234,  26, 154,  90, 218,  58, 186, 122, 250,
   6, 134,  70, 198,  38, 166, 102, 230,  22, 150,  86, 214,  54, 182, 118, 246,
  14, 142,  78, 206,  46, 174, 110, 238,  30, 158,  94, 222,  62, 190, 126, 254,
   1, 129,  65, 193,  33, 161,  97, 225,  17, 145,  81, 209,  49, 177, 113, 241,
   9, 137,  73, 201,  41, 169, 105, 233,  25, 153,  89, 217,  57, 185, 121, 249,
   5, 133,  69, 197,  37, 165, 101, 229,  21, 149,  85, 213,  53, 181, 117, 245,
  13, 141,  77, 205,  45, 173, 109, 237,  29, 157,  93, 221,  61, 189, 125, 253,
   3, 131,  67, 195,  35, 163,  99, 227,  19, 147,  83, 211,  51, 179, 115, 243,
  11, 139,  75, 203,  43, 171, 107, 235,  27, 155,  91, 219,  59, 187, 123, 251,
   7, 135,  71, 199,  39, 167, 103, 231,  23, 151,  87, 215,  55, 183, 119, 247,
  15, 143,  79, 207,  47, 175, 111, 239,  31, 159,  95, 223,  63, 191, 127, 255 };

	uint8_t reverse_new[256] = {
  0,  32,   8,  40,   1,  33,   9,  41,   2,  34,  10,  42,   3,  35,  11,  43,
 16,  48,  24,  56,  17,  49,  25,  57,  18,  50,  26,  58,  19,  51,  27,  59,
128, 160, 136, 168, 129, 161, 137, 169, 130, 162, 138, 170, 131, 163, 139, 171,
144, 176, 152, 184, 145, 177, 153, 185, 146, 178, 154, 186, 147, 179, 155, 187,
 64,  96,  72, 104,  65,  97,  73, 105,  66,  98,  74, 106,  67,  99,  75, 107,
 80, 112,  88, 120,  81, 113,  89, 121,  82, 114,  90, 122,  83, 115,  91, 123,
192, 224, 200, 232, 193, 225, 201, 233, 194, 226, 202, 234, 195, 227, 203, 235,
208, 240, 216, 248, 209, 241, 217, 249, 210, 242, 218, 250, 211, 243, 219, 251,
  4,  36,  12,  44,   5,  37,  13,  45,   6,  38,  14,  46,   7,  39,  15,  47,
 20,  52,  28,  60,  21,  53,  29,  61,  22,  54,  30,  62,  23,  55,  31,  63,
132, 164, 140, 172, 133, 165, 141, 173, 134, 166, 142, 174, 135, 167, 143, 175,
148, 180, 156, 188, 149, 181, 157, 189, 150, 182, 158, 190, 151, 183, 159, 191,
 68, 100,  76, 108,  69, 101,  77, 109,  70, 102,  78, 110,  71, 103,  79, 111,
 84, 116,  92, 124,  85, 117,  93, 125,  86, 118,  94, 126,  87, 119,  95, 127,
196, 228, 204, 236, 197, 229, 205, 237, 198, 230, 206, 238, 199, 231, 207, 239,
212, 244, 220, 252, 213, 245, 221, 253, 214, 246, 222, 254, 215, 247, 223, 255 }; 

public:
	K1003_sys();
	~K1003_sys();

	uint8_t dispBuffer[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	void setDisplay(Display* m_display);
	void setUI(Ui::MainWindow* m_w);

	uint8_t K1000ZS[120] = {
		// K1003 character set
		// K1003 Zeichensatz Uebersetzungstabelle nach ASCII
		32, 32, 32, 65, 66, 67, 68, 69,
		32, 32, 32, 70, 71, 72, 73, 74,
		32, 32, 32, 75, 76, 77, 78, 79,
		32, 32, 32, 32, 32, 32, 32, 32,
		32, 32, 32, 32, 32, 32, 32, 32,
		32, 32, 32, 80, 81, 82, 83, 84,
		32, 32, 32, 85, 86, 87, 88, 89,
		32, 32, 32, 90, 55, 52, 49, 32,
		32, 32, 32, 46, 56, 53, 50, 48,
		32, 32, 32, 64, 57, 54, 51, 44,
		32, 32, 32, 58, 42, 45, 43, 94,
		32, 32, 32, 61, 32, 91, 32, 32,
		32, 32, 32, 42, 35, 62, 37, 60,
		32, 32, 32, 47, 34, 59, 63, 40,
		32, 32, 32, 93, 32, 32, 33, 41
	};

	void KeyPressed(uint8_t KeyNumber);

	// void PiClicked();
	void InitProcessor();
	void run_K1000_Anztest();
	void stop_CPU();
	void reStart_CPU();
	void K1003_is_on();
	void CPU_hlt(uint16_t PC_n);
	void statusLEDs(uint8_t PC_n);
	void Test();
	void set_dispBuffer(uint8_t dispBuffer_new[16]);

	void setPointAll();
};

#endif