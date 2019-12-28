#include "Display.h"
// #include "Calculator.h"
#include "K1003_sys.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

Display::Display(Ui::MainWindow* newUi)
{
	ui = newUi;

	// myCalculator = new Calculator();
	// myCalculator->setDisplay(this);
	// myCalculator->setUI(ui);

	myK1003 = new K1003_sys();
	myK1003->setDisplay(this);
	myK1003->setUI(ui);
}

Display::~Display()
{
	// delete myCalculator;
	delete myK1003;
}

void Display::setPoint(uint8_t x, uint8_t y) {
	if (x > 63) {
		ui->label->setText("no Point");
		return;
	}

	if (y > 6) {
		ui->label->setText("no Point");
		return;
	}

	uint8_t x_position = x % 4;
	uint8_t x_grid = x / 4;

	switch (x_grid) {
	case 0:
		switch (x_position) {
		case 0:
			switch (y) {
			case 0:
				ui->frame_0_10->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_0_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_0_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_0_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_0_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				ui->frame_0_05->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_0_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_0_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_0_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_0_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				ui->frame_0_00->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_0_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_0_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_0_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_0_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				ui->frame_0_15->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;
		}
		break;

	case 1:
		switch (x_position) {
		case 0:
			switch (y) {
			case 0:
				ui->frame_1_10->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_1_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_1_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_1_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_1_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				ui->frame_1_05->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_1_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_1_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_1_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_1_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				ui->frame_1_00->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_1_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_1_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_1_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_1_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				ui->frame_1_15->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;
		}
		break;

	case 2:
		switch (x_position) {
		case 0:
			switch (y) {
			case 0:
				ui->frame_2_10->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_2_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_2_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_2_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_2_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				ui->frame_2_05->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_2_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_2_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_2_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_2_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				ui->frame_2_00->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_2_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_2_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_2_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_2_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				ui->frame_2_15->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;
		}
		break;

	case 3:
		switch (x_position) {
		case 0:
			switch (y) {
			case 0:
				ui->frame_3_10->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_3_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_3_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_3_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_3_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				ui->frame_3_05->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_3_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_3_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_3_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_3_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				ui->frame_3_00->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_3_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_3_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_3_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_3_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				ui->frame_3_15->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;
		}
		break;

	case 4:
		switch (x_position) {
		case 0:
			switch (y) {
			case 0:
				ui->frame_4_10->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_4_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_4_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_4_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_4_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				ui->frame_4_05->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_4_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_4_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_4_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_4_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				ui->frame_4_00->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_4_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_4_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_4_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_4_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				ui->frame_4_15->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;
		}
		break;

	case 5:
		switch (x_position) {
		case 0:
			switch (y) {
			case 0:
				ui->frame_5_10->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_5_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_5_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_5_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_5_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				ui->frame_5_05->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_5_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_5_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_5_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_5_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				ui->frame_5_00->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_5_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_5_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_5_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_5_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				ui->frame_5_15->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;
		}
		break;

	case 6:
		switch (x_position) {
		case 0:
			switch (y) {
			case 0:
				ui->frame_6_10->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_6_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_6_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_6_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_6_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				ui->frame_6_05->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_6_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_6_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_6_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_6_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				ui->frame_6_00->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_6_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_6_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_6_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_6_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				ui->frame_6_15->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;
		}
		break;

	case 7:
		switch (x_position) {
		case 0:
			switch (y) {
			case 0:
				ui->frame_7_10->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_7_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_7_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_7_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_7_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				ui->frame_7_05->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_7_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_7_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_7_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_7_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				ui->frame_7_00->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_7_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_7_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_7_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_7_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				ui->frame_7_15->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;
		}
		break;

	case 8:
		switch (x_position) {
		case 0:
			switch (y) {
			case 0:
				ui->frame_8_10->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_8_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_8_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_8_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_8_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				ui->frame_8_05->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_8_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_8_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_8_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_8_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				ui->frame_8_00->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_8_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_8_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_8_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_8_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				ui->frame_8_15->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;
		}
		break;

	case 9:
		switch (x_position) {
		case 0:
			switch (y) {
			case 0:
				ui->frame_9_10->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_9_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_9_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_9_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_9_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				ui->frame_9_05->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_9_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_9_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_9_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_9_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				ui->frame_9_00->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_9_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_9_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_9_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_9_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				ui->frame_9_15->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;
		}
		break;

	case 10:
		switch (x_position) {
		case 0:
			switch (y) {
			case 0:
				ui->frame_a_10->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_a_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_a_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_a_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_a_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				ui->frame_a_05->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_a_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_a_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_a_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_a_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				ui->frame_a_00->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_a_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_a_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_a_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_a_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				ui->frame_a_15->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;
		}
		break;

	case 11:
		switch (x_position) {
		case 0:
			switch (y) {
			case 0:
				ui->frame_b_10->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_b_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_b_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_b_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_b_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				ui->frame_b_05->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_b_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_b_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_b_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_b_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				ui->frame_b_00->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_b_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_b_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_b_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_b_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				ui->frame_b_15->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;
		}
		break;

	case 12:
		switch (x_position) {
		case 0:
			switch (y) {
			case 0:
				ui->frame_c_10->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_c_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_c_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_c_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_c_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				ui->frame_c_05->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_c_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_c_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_c_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_c_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				ui->frame_c_00->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_c_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_c_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_c_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_c_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				ui->frame_c_15->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;
		}
		break;

	case 13:
		switch (x_position) {
		case 0:
			switch (y) {
			case 0:
				ui->frame_d_10->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_d_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_d_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_d_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_d_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				ui->frame_d_05->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_d_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_d_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_d_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_d_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				ui->frame_d_00->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_d_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_d_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_d_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_d_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				ui->frame_d_15->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;
		}
		break;

	case 14:
		switch (x_position) {
		case 0:
			switch (y) {
			case 0:
				ui->frame_e_10->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_e_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_e_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_e_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_e_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				ui->frame_e_05->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_e_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_e_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_e_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_e_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				ui->frame_e_00->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_e_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_e_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_e_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_e_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				ui->frame_e_15->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;
		}
		break;

	case 15:
		switch (x_position) {
		case 0:
			switch (y) {
			case 0:
				ui->frame_f_10->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_f_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_f_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_f_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_f_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				ui->frame_f_05->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_f_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_f_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_f_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_f_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				ui->frame_f_00->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 1:
				ui->frame_f_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 2:
				ui->frame_f_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 3:
				ui->frame_f_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			case 4:
				ui->frame_f_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				ui->frame_f_15->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;
		}
		break;
	}
}

void Display::clearPoint(uint8_t x, uint8_t y) {
	if (x > 63) {
		ui->label->setText("no Point");
		return;
	}

	if (y > 6) {
		ui->label->setText("no Point");
		return;
	}

	uint8_t x_position = x % 4;
	uint8_t x_grid = x / 4;

	switch (x_grid) {
	case 0:
		switch (x_position) {
		case 0:
			switch (y) {
			case 0:
				ui->frame_0_10->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_0_11->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_0_12->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_0_13->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_0_14->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				ui->frame_0_05->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_0_06->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_0_07->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_0_08->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_0_09->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				ui->frame_0_00->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_0_01->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_0_02->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_0_03->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_0_04->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				ui->frame_0_15->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;
		}
		break;

	case 1:
		switch (x_position) {
		case 0:
			switch (y) {
			case 0:
				ui->frame_1_10->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_1_11->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_1_12->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_1_13->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_1_14->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				ui->frame_1_05->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_1_06->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_1_07->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_1_08->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_1_09->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				ui->frame_1_00->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_1_01->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_1_02->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_1_03->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_1_04->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				ui->frame_1_15->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;
		}
		break;

	case 2:
		switch (x_position) {
		case 0:
			switch (y) {
			case 0:
				ui->frame_2_10->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_2_11->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_2_12->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_2_13->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_2_14->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				ui->frame_2_05->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_2_06->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_2_07->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_2_08->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_2_09->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				ui->frame_2_00->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_2_01->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_2_02->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_2_03->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_2_04->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				ui->frame_2_15->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;
		}
		break;

	case 3:
		switch (x_position) {
		case 0:
			switch (y) {
			case 0:
				ui->frame_3_10->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_3_11->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_3_12->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_3_13->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_3_14->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				ui->frame_3_05->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_3_06->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_3_07->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_3_08->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_3_09->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				ui->frame_3_00->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_3_01->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_3_02->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_3_03->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_3_04->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				ui->frame_3_15->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;
		}
		break;

	case 4:
		switch (x_position) {
		case 0:
			switch (y) {
			case 0:
				ui->frame_4_10->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_4_11->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_4_12->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_4_13->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_4_14->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				ui->frame_4_05->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_4_06->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_4_07->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_4_08->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_4_09->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				ui->frame_4_00->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_4_01->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_4_02->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_4_03->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_4_04->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				ui->frame_4_15->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;
		}
		break;

	case 5:
		switch (x_position) {
		case 0:
			switch (y) {
			case 0:
				ui->frame_5_10->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_5_11->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_5_12->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_5_13->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_5_14->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				ui->frame_5_05->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_5_06->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_5_07->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_5_08->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_5_09->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				ui->frame_5_00->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_5_01->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_5_02->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_5_03->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_5_04->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				ui->frame_5_15->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;
		}
		break;

	case 6:
		switch (x_position) {
		case 0:
			switch (y) {
			case 0:
				ui->frame_6_10->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_6_11->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_6_12->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_6_13->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_6_14->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				ui->frame_6_05->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_6_06->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_6_07->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_6_08->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_6_09->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				ui->frame_6_00->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_6_01->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_6_02->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_6_03->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_6_04->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				ui->frame_6_15->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;
		}
		break;

	case 7:
		switch (x_position) {
		case 0:
			switch (y) {
			case 0:
				ui->frame_7_10->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_7_11->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_7_12->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_7_13->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_7_14->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				ui->frame_7_05->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_7_06->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_7_07->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_7_08->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_7_09->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				ui->frame_7_00->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_7_01->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_7_02->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_7_03->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_7_04->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				ui->frame_7_15->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;
		}
		break;

	case 8:
		switch (x_position) {
		case 0:
			switch (y) {
			case 0:
				ui->frame_8_10->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_8_11->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_8_12->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_8_13->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_8_14->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				ui->frame_8_05->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_8_06->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_8_07->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_8_08->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_8_09->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				ui->frame_8_00->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_8_01->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_8_02->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_8_03->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_8_04->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				ui->frame_8_15->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;
		}
		break;

	case 9:
		switch (x_position) {
		case 0:
			switch (y) {
			case 0:
				ui->frame_9_10->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_9_11->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_9_12->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_9_13->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_9_14->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				ui->frame_9_05->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_9_06->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_9_07->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_9_08->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_9_09->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				ui->frame_9_00->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_9_01->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_9_02->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_9_03->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_9_04->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				ui->frame_9_15->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;
		}
		break;

	case 10:
		switch (x_position) {
		case 0:
			switch (y) {
			case 0:
				ui->frame_a_10->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_a_11->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_a_12->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_a_13->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_a_14->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				ui->frame_a_05->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_a_06->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_a_07->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_a_08->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_a_09->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				ui->frame_a_00->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_a_01->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_a_02->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_a_03->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_a_04->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				ui->frame_a_15->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;
		}
		break;

	case 11:
		switch (x_position) {
		case 0:
			switch (y) {
			case 0:
				ui->frame_b_10->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_b_11->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_b_12->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_b_13->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_b_14->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				ui->frame_b_05->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_b_06->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_b_07->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_b_08->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_b_09->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				ui->frame_b_00->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_b_01->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_b_02->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_b_03->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_b_04->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				ui->frame_b_15->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;
		}
		break;

	case 12:
		switch (x_position) {
		case 0:
			switch (y) {
			case 0:
				ui->frame_c_10->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_c_11->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_c_12->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_c_13->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_c_14->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				ui->frame_c_05->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_c_06->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_c_07->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_c_08->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_c_09->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				ui->frame_c_00->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_c_01->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_c_02->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_c_03->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_c_04->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				ui->frame_c_15->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;
		}
		break;

	case 13:
		switch (x_position) {
		case 0:
			switch (y) {
			case 0:
				ui->frame_d_10->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_d_11->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_d_12->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_d_13->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_d_14->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				ui->frame_d_05->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_d_06->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_d_07->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_d_08->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_d_09->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				ui->frame_d_00->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_d_01->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_d_02->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_d_03->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_d_04->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				ui->frame_d_15->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;
		}
		break;

	case 14:
		switch (x_position) {
		case 0:
			switch (y) {
			case 0:
				ui->frame_e_10->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_e_11->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_e_12->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_e_13->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_e_14->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				ui->frame_e_05->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_e_06->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_e_07->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_e_08->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_e_09->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				ui->frame_e_00->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_e_01->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_e_02->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_e_03->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_e_04->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				ui->frame_e_15->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;
		}
		break;

	case 15:
		switch (x_position) {
		case 0:
			switch (y) {
			case 0:
				ui->frame_f_10->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_f_11->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_f_12->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_f_13->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_f_14->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				ui->frame_f_05->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_f_06->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_f_07->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_f_08->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_f_09->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				ui->frame_f_00->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 1:
				ui->frame_f_01->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 2:
				ui->frame_f_02->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 3:
				ui->frame_f_03->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			case 4:
				ui->frame_f_04->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				ui->frame_f_15->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;
		}
		break;
	}
}

void Display::setPointAll() {
	for (uint8_t x = 0; x < 64; x += 1) {
		for (uint8_t y = 0; y < 7; y += 1) {
			if (y < 5) {
				if ((x % 4) != 3) {
					setPoint(x, y);
				}
			}
			if (y == 6) {
				if ((x % 4) == 3) {
					setPoint(x, y);
				}
			}
		}
	}
}

void Display::clearPointAll() {
	for (uint8_t x = 0; x < 64; x += 1) {
		for (uint8_t y = 0; y < 7; y += 1) {
			if (y < 5) {
				if ((x % 4) != 3) {
					clearPoint(x, y);
				}
			}
			if (y == 6) {
				if ((x % 4) == 3) {
					clearPoint(x, y);
				}
			}
		}
	}
}

void Display::DisplayDigit() {
	uint8_t xPos = 0;
	uint8_t andOperator = 1;
	const uint8_t andOperator_127 = 127;

	clearPointAll();
	clearPointAll();

	for (uint8_t i = 0; i < 16; i += 1) {
		if ((dispBuffer[i] & andOperator_127) == 64) {
			if ((dispBuffer[i + 1] & andOperator_127) == 0) {
				dispBuffer[i + 1] = dispBuffer[i];
				dispBuffer[i] = 0;
			}
		}

		for (uint8_t j = 0; j < 8; j += 1) {
			switch (dispBuffer[i] & andOperator) {
			case 0:
				break;

			case 1:
				setPoint(xPos + 0, 0);
				setPoint(xPos + 1, 0);
				setPoint(xPos + 2, 0);
				break;

			case 2:
				if (((dispBuffer[i] & andOperator_127) == 6) || ((dispBuffer[i] & andOperator_127) == 70)) {
					setPoint(xPos + 1, 0);
					setPoint(xPos + 1, 1);
					setPoint(xPos + 1, 2);
				}
				else {
					setPoint(xPos + 2, 0);
					setPoint(xPos + 2, 1);
					setPoint(xPos + 2, 2);
				}
				break;

			case 4:
				if (((dispBuffer[i] & andOperator_127) == 6) || ((dispBuffer[i] & andOperator_127) == 7) || ((dispBuffer[i] & andOperator_127) == 70)) {
					setPoint(xPos + 1, 3);
					setPoint(xPos + 1, 4);
				}
				else {
					setPoint(xPos + 2, 2);
					setPoint(xPos + 2, 3);
					setPoint(xPos + 2, 4);
				}
				break;

			case 8:
				setPoint(xPos + 0, 4);
				setPoint(xPos + 1, 4);
				setPoint(xPos + 2, 4);
				break;

			case 16:
				if ((dispBuffer[i] & andOperator_127) == 16) {
					setPoint(xPos + 1, 2);
					setPoint(xPos + 1, 3);
					setPoint(xPos + 1, 4);
				}
				else {
					setPoint(xPos + 0, 2);
					setPoint(xPos + 0, 3);
					setPoint(xPos + 0, 4);
				}
				break;

			case 32:
				setPoint(xPos + 0, 0);
				setPoint(xPos + 0, 1);
				setPoint(xPos + 0, 2);
				break;

			case 64:
				setPoint(xPos + 0, 2);
				setPoint(xPos + 1, 2);
				setPoint(xPos + 2, 2);
				break;

			case 128:
				setPoint(xPos + 3, 6);
				break;

			default:
				ui->label->setText("Buffer");
				break;
			}

			andOperator *= 2;
		}

		switch (dispBuffer[i] & andOperator_127) {
		case 0:
		case 64:   // '-'
		case 56:
		case 118:
			break;

		case 7:    // '7'
			setPoint(xPos + 1, 2);
			clearPoint(xPos + 2, 2);
			break;

		case 6:    // '1'
			setPoint(xPos + 0, 1);
			setPoint(xPos + 0, 4);
			setPoint(xPos + 2, 4);
			break;

		case 16:   // 'i'
			setPoint(xPos + 1, 0);
			setPoint(xPos + 0, 4);
			setPoint(xPos + 2, 4);
			setPoint(xPos + 0, 2);
			break;

		case 127:  // '8'
			// clearPoint(xPos + 0, 2);
			// clearPoint(xPos + 2, 2);
			break;

		case 115:  // 'P'
			clearPoint(xPos + 2, 0);
			clearPoint(xPos + 2, 2);
			break;

		case 63:   // '0'
			// clearPoint(xPos + 0, 4);
			// clearPoint(xPos + 2, 0);
			clearPoint(xPos + 0, 0);
			clearPoint(xPos + 2, 4);
			break;

		case 70:   // '+'
			clearPoint(xPos + 1, 0);
			clearPoint(xPos + 1, 4);
			break;

		case 91:   // '2'
			clearPoint(xPos + 0, 2);
			clearPoint(xPos + 2, 2);
		case 102:  // '4'
			clearPoint(xPos + 2, 0);
			break;

		case 92:   // 'o'
			clearPoint(xPos + 0, 4);
		case 79:   // '3'
			clearPoint(xPos + 0, 2);
		case 109:  // '5'
			clearPoint(xPos + 2, 4);
		case 121:  // 'E'
			clearPoint(xPos + 2, 2);
			break;

		case 113:  // 'F'
			clearPoint(xPos + 2, 2);
			myK1003->stop_CPU();;
			break;

		case 119:  // 'A'
			clearPoint(xPos + 0, 0);
			clearPoint(xPos + 2, 0);
			break;

		case 125:  // '6'
			clearPoint(xPos + 0, 0);
			// clearPoint(xPos + 2, 2);
			break;

		case 111:  // '9'
			clearPoint(xPos + 2, 4);
			setPoint(xPos + 0, 2);
			break;

		case 84:
		case 80:   // 'r'
			clearPoint(xPos + 0, 2);
			break;

		default:
			ui->label->setText("Buffer");
			break;
		}

		andOperator = 1;
		xPos += 4;
	}
}

void Display::set_dispBuffer(uint8_t dispBuffer_new[16])
{
	uint8_t i;
	for (i = 0; i < 16; i++) {
		dispBuffer[i] = dispBuffer_new[i];
	}
	DisplayDigit();
	DisplayDigit();
}

void Display::KeyPressed(uint8_t KeyNumber_m)
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(KeyNumber_m);  //  o.k.
	}
}

void Display::dispBufferTest() {
	bool find_expo = false;
	uint8_t delete_null = 12;

	QString text = ui->lineEdit->text();
	std::string utf8_text = text.toUtf8().constData();
	uint8_t text_length = text.length();
	text_length -= 1;
	uint8_t textPos = 0;

	for (uint8_t i = 0; i < 16; i += 1) {
		dispBuffer[i] = 0;
	}

	for (uint8_t i = 2; i < 16; i += 1) {
		if (textPos == 0) {
			if (utf8_text[textPos] != '-') {
				i += 1;
			}
		}

		if ((utf8_text[textPos] == 'e') || (utf8_text[textPos] == 'f')) {
			i = 12;
			find_expo = true;
		}
		else {
			dispBuffer[i] = led_font[utf8_text[textPos] - 16];
		}

		if (utf8_text[textPos + 1] == '.') {
			dispBuffer[i] += 128;
			textPos += 1;
		}

		if (textPos < text_length) {
			textPos += 1;
		}
		else {
			i = 16;
		}

		if (i == 15) {
			if ((utf8_text[textPos] >= '0') || (utf8_text[textPos] <= '9')) {
				// ui->label->setText("Overflow");

				// myCalculator->abortOperation();
				return;
			}
		}
	}

	if (find_expo == true) {
		while (dispBuffer[delete_null] == 63) {  // dispBuffer = '0'
			dispBuffer[delete_null] = 0;
			delete_null -= 1;
		}
	}

	DisplayDigit();

	// ui->label->setText("Buffer");
}

void Display::digitClicked_0()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(90); // o.k.
	}
	else {
		// myCalculator->digitClicked(0);
	}
}

void Display::digitClicked_1()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(77); // o.k.
	}
	else {
		// myCalculator->digitClicked(1);
	}
}

void Display::digitClicked_2()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(78); // o.k.
	}
	else {
		// myCalculator->digitClicked(2);
	}
}

void Display::digitClicked_3()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(79); // o.k.
	}
	else {
		// myCalculator->digitClicked(3);
	}
}

void Display::digitClicked_4()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(65); // o.k.
	}
	else {
		// myCalculator->digitClicked(4);
	}
}

void Display::digitClicked_5()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(66); // o.k.
	}
	else {
		// myCalculator->digitClicked(5);
	}
}

void Display::digitClicked_6()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(67); // o.k.
	}
	else {
		// myCalculator->digitClicked(6);
	}
}

void Display::digitClicked_7()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(53); // o.k.
	}
	else {
		// myCalculator->digitClicked(7);
	}
}

void Display::digitClicked_8()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(54); // o.k.
	}
	else {
		// myCalculator->digitClicked(8);
	}
}

void Display::digitClicked_9()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(55); // o.k.
	}
	else {
		// myCalculator->digitClicked(9);
	}
}

void Display::pointClicked()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(91); // o.k.
	}
	else {
		// myCalculator->pointClicked();
	}
}

void Display::unaryOperatorClicked_1_x()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(39); // o.k.
	}
	else {
		// myCalculator->unaryOperatorClicked('x');
	}
}

void Display::unaryOperatorClicked_pow_2()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(51); // o.k.
	}
	else {
		// myCalculator->unaryOperatorClicked('p');
	}
}

void Display::unaryOperatorClicked_sqrt()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(63); // o.k.
	}
	else {
		// myCalculator->unaryOperatorClicked('s');
	}
}

void Display::clear()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(41); // o.k.
	}
	else {
		// myCalculator->clear();
	}
}

void Display::changeSignClicked()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(42); // o.k.
	}
	else {
		// myCalculator->changeSignClicked();
	}
}

void Display::OperatorClicked_Div()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(44); //
	}
	else {
		// myCalculator->multiplicativeOperatorClicked('/');
	}
}

void Display::OperatorClicked_Mul()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(56); //
	}
	else {
		// myCalculator->multiplicativeOperatorClicked('*');
	}
}

void Display::OperatorClicked_Sub()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(68); //
	}
	else {
		// myCalculator->additiveOperatorClicked('-');
	}
}

void Display::OperatorClicked_Add()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(80); //
	}
	else {
		// myCalculator->additiveOperatorClicked('+');
	}
}

void Display::equalClicked()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(92); //
	}
	else {
		// myCalculator->equalClicked();
	}
}

void Display::PiClicked()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(89); // o.k.
		// myK1003->PiClicked(); // o.k.
	}
	else {
		// myCalculator->unaryOperatorClicked('t');
	}
}

void Display::InitProcessor()
{
	myK1003->InitProcessor();
}

void Display::stop_CPU()
{
	clearPointAll();
	myK1003->stop_CPU();
}