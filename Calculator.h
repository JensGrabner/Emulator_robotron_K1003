#ifndef __HEADER_CALCULATOR__
#define __HEADER_CALCULATOR__
#include <cstdint>

#include "ui_mainwindow.h"
#include "Display.h"

using namespace std;

// forward declarations needed due to circular references
// forward declaration means that you only declare the class and let
// the compiler search -> at the end he MUST find a class.

class Ui::MainWindow;
class Display;

class Calculator
{
private:
	Ui::MainWindow* ui;
	Display* myDisplay;
	Calculator* myCalculator;

	void clearAll();
	bool calculate(double rightOperand, const char& pendingOperator);

	uint8_t NumberCount = 0;
	bool waitingForOperand = false;
	double sumSoFar = 0.0;
	double factorSoFar = 0.0;
	char pendingAdditiveOperator = '0';
	char pendingMultiplicativeOperator = '0';
	bool equalPressed = false;


public:
	~Calculator();

	void setDisplay(Display* m_display);
	void setUI(Ui::MainWindow* m_w);

	void digitClicked(uint8_t digitValue);
	void unaryOperatorClicked(char operationValue);

	void abortOperation();
	void clear();
	void changeSignClicked();
	void pointClicked();

	void multiplicativeOperatorClicked(char operationValue);
	void additiveOperatorClicked(char operationValue);

	void equalClicked();




};

#endif

