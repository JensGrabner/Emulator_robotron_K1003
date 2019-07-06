#include "Calculator.h"
#include "Display.h"
#include "ui_mainwindow.h"

Calculator::~Calculator()
{
	delete myCalculator;
}

void Calculator::setUI(Ui::MainWindow* m_w)
{
	ui = m_w;
}

void Calculator::setDisplay(Display* m_display)
{
	myDisplay = m_display;
}




void Calculator::clearAll()
{
	sumSoFar = 0.0;
	factorSoFar = 0.0;
	pendingAdditiveOperator = '0';
	pendingMultiplicativeOperator = '0';

	waitingForOperand = false;
	equalPressed = false;
}

void Calculator::abortOperation()
{
	clearAll();
	ui->lineEdit->setText(QObject::tr("  Error"));
	myDisplay->dispBufferTest();
	equalPressed = true;
}

void Calculator::unaryOperatorClicked(char operationValue)
{
	double operand = ui->lineEdit->text().toDouble();
	double result = 0.0;

	if (operationValue == 's') {
		if (operand < 0.0) {
			abortOperation();
			return;
		}
		result = std::sqrt(operand);
	}
	else if (operationValue == 'p') {
		result = operand * operand;
	}
	else if (operationValue == 'x') {
		if (operand == 0.0) {
			abortOperation();
			return;
		}
		result = 1.0 / operand;
	}
	else if (operationValue == 't') {
		result = 3.1415926535897932384626433832795;
	}
	ui->lineEdit->setText(QString::number(result, 'e', 9));
	myDisplay->dispBufferTest();
	waitingForOperand = true;
}


void Calculator::equalClicked()
{
	double operand = ui->lineEdit->text().toDouble();

	if (pendingMultiplicativeOperator != '0') {
		if (!calculate(operand, pendingMultiplicativeOperator)) {
			abortOperation();
			return;
		}
		operand = factorSoFar;
		factorSoFar = 0.0;
		pendingMultiplicativeOperator = '0';
	}
	if (pendingAdditiveOperator != '0') {
		if (!calculate(operand, pendingAdditiveOperator)) {
			abortOperation();
			return;
		}
		pendingAdditiveOperator = '0';
	}
	else {
		sumSoFar = operand;
	}

	ui->lineEdit->setText(QString::number(sumSoFar, 'e', 9));
	myDisplay->dispBufferTest();
	sumSoFar = 0.0;
	waitingForOperand = true;
	equalPressed = true;
}

bool Calculator::calculate(double rightOperand, const char& pendingOperator)
{
	if (pendingOperator == '+') {
		sumSoFar += rightOperand;
	}
	else if (pendingOperator == '-') {
		sumSoFar -= rightOperand;
	}
	else if (pendingOperator == '*') {
		factorSoFar *= rightOperand;
	}
	else if (pendingOperator == '/') {
		if (rightOperand == 0.0)
			return false;
		factorSoFar /= rightOperand;
	}
	return true;
}

void Calculator::additiveOperatorClicked(char operationValue)
{
	double operand = ui->lineEdit->text().toDouble();

	if (pendingMultiplicativeOperator != '0') {
		if (!calculate(operand, pendingMultiplicativeOperator)) {
			abortOperation();
			return;
		}
		ui->lineEdit->setText(QString::number(factorSoFar, 'e', 9));
		operand = factorSoFar;
		factorSoFar = 0.0;
		pendingMultiplicativeOperator = '0';
	}

	if (pendingAdditiveOperator != '0') {
		if (!calculate(operand, pendingAdditiveOperator)) {
			abortOperation();
			return;
		}
		ui->lineEdit->setText(QString::number(sumSoFar, 'e', 9));
	}
	else {
		sumSoFar = operand;
	}

	pendingAdditiveOperator = operationValue;
	myDisplay->dispBufferTest();
	waitingForOperand = true;
}

void Calculator::multiplicativeOperatorClicked(char operationValue)
{
	double operand = ui->lineEdit->text().toDouble();

	if (pendingMultiplicativeOperator != '0') {
		if (!calculate(operand, pendingMultiplicativeOperator)) {
			abortOperation();
			return;
		}
		ui->lineEdit->setText(QString::number(factorSoFar, 'e', 9));
	}
	else {
		factorSoFar = operand;
	}

	pendingMultiplicativeOperator = operationValue;
	myDisplay->dispBufferTest();
	waitingForOperand = true;
}


void Calculator::clear()
{
	if (equalPressed == true) {
		ui->lineEdit->setText("0");
		equalPressed = false;
	}

	if (ui->lineEdit->text() == "0") {
		clearAll();
	}

	if (waitingForOperand == true)
		return;

	ui->lineEdit->setText("0");
	myDisplay->dispBufferTest();
	waitingForOperand = true;
}

void Calculator::changeSignClicked()
{
	QString text = ui->lineEdit->text();
	double value = text.toDouble();

	if (value > 0.0) {
		text.prepend(QObject::tr("-"));
	}
	if (value < 0.0) {
		text.remove(0, 1);
	}

	ui->lineEdit->setText(text);
	myDisplay->dispBufferTest();
}

void Calculator::pointClicked()
{
	if (waitingForOperand == true) {
		ui->lineEdit->setText("0");
		waitingForOperand = false;
	}

	if (ui->lineEdit->text() == "0") {
		NumberCount = 1;
	}

	if (ui->lineEdit->text().contains('.') == false) {
		ui->lineEdit->setText(ui->lineEdit->text() + QObject::tr("."));
	}

	myDisplay->dispBufferTest();
}

void Calculator::digitClicked(uint8_t digitValue)
{
	if (waitingForOperand == true) {
		ui->lineEdit->setText("0");
		waitingForOperand = false;
	}

	if (ui->lineEdit->text() == "0") {
		ui->lineEdit->setText("");
		NumberCount = 0;
	}

	if (NumberCount < 10) {
		NumberCount += 1;
		ui->lineEdit->setText(ui->lineEdit->text() + QString::number(digitValue));
	}

	myDisplay->dispBufferTest();
}



