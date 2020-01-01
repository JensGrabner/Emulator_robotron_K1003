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
				if ( pixel_0_10 == false ) {
					ui->frame_0_10->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_0_10 = true;
				}
				break;

			case 1:
				if ( pixel_0_11 == false ) {
					ui->frame_0_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_0_11 = true;
				}
				break;

			case 2:
				if ( pixel_0_12 == false ) {
					ui->frame_0_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_0_12 = true;
				}
				break;

			case 3:
				if ( pixel_0_13 == false ) {
					ui->frame_0_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_0_13 = true;
				}
				break;

			case 4:
				if ( pixel_0_14 == false ) {
					ui->frame_0_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_0_14 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				if ( pixel_0_05 == false ) {
					ui->frame_0_05->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_0_05 = true;
				}
				break;

			case 1:
				if ( pixel_0_06 == false ) {
					ui->frame_0_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_0_06 = true;
				}
				break;

			case 2:
				if ( pixel_0_07 == false ) {
					ui->frame_0_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_0_07 = true;
				}
				break;

			case 3:
				if ( pixel_0_08 == false ) {
					ui->frame_0_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_0_08 = true;
				}
				break;

			case 4:
				if ( pixel_0_09 == false ) {
					ui->frame_0_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_0_09 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				if ( pixel_0_00 == false ) {
					ui->frame_0_00->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_0_00 = true;
				}
				break;

			case 1:
				if ( pixel_0_01 == false ) {
					ui->frame_0_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_0_01 = true;
				}
				break;

			case 2:
				if ( pixel_0_02 == false ) {
					ui->frame_0_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_0_02 = true;
				}
				break;

			case 3:
				if ( pixel_0_03 == false ) {
					ui->frame_0_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_0_03 = true;
				}
				break;

			case 4:
				if ( pixel_0_04 == false ) {
					ui->frame_0_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_0_04 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				if ( pixel_0_15 == false ) {
					ui->frame_0_15->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_0_15 = true;
				}
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
				if ( pixel_1_10 == false ) {
					ui->frame_1_10->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_1_10 = true;
				}
				break;

			case 1:
				if ( pixel_1_11 == false ) {
					ui->frame_1_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_1_11 = true;
				}
				break;

			case 2:
				if ( pixel_1_12 == false ) {
					ui->frame_1_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_1_12 = true;
				}
				break;

			case 3:
				if ( pixel_1_13 == false ) {
					ui->frame_1_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_1_13 = true;
				}
				break;

			case 4:
				if ( pixel_1_14 == false ) {
					ui->frame_1_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_1_14 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				if ( pixel_1_05 == false ) {
					ui->frame_1_05->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_1_05 = true;
				}
				break;

			case 1:
				if ( pixel_1_06 == false ) {
					ui->frame_1_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_1_06 = true;
				}
				break;

			case 2:
				if ( pixel_1_07 == false ) {
					ui->frame_1_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_1_07 = true;
				}
				break;

			case 3:
				if ( pixel_1_08 == false ) {
					ui->frame_1_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_1_08 = true;
				}
				break;

			case 4:
				if ( pixel_1_09 == false ) {
					ui->frame_1_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_1_09 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				if ( pixel_1_00 == false ) {
					ui->frame_1_00->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_1_00 = true;
				}
				break;

			case 1:
				if ( pixel_1_01 == false ) {
					ui->frame_1_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_1_01 = true;
				}
				break;

			case 2:
				if ( pixel_1_02 == false ) {
					ui->frame_1_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_1_02 = true;
				}
				break;

			case 3:
				if ( pixel_1_03 == false ) {
					ui->frame_1_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_1_03 = true;
				}
				break;

			case 4:
				if ( pixel_1_04 == false ) {
					ui->frame_1_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_1_04 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				if ( pixel_1_15 == false ) {
					ui->frame_1_15->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_1_15 = true;
				}
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
				if ( pixel_2_10 == false ) {
					ui->frame_2_10->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_2_10 = true;
				}
				break;

			case 1:
				if ( pixel_2_11 == false ) {
					ui->frame_2_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_2_11 = true;
				}
				break;

			case 2:
				if ( pixel_2_12 == false ) {
					ui->frame_2_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_2_12 = true;
				}
				break;

			case 3:
				if ( pixel_2_13 == false ) {
					ui->frame_2_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_2_13 = true;
				}
				break;

			case 4:
				if ( pixel_2_14 == false ) {
					ui->frame_2_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_2_14 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				if ( pixel_2_05 == false ) {
					ui->frame_2_05->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_2_05 = true;
				}
				break;

			case 1:
				if ( pixel_2_06 == false ) {
					ui->frame_2_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_2_06 = true;
				}
				break;

			case 2:
				if ( pixel_2_07 == false ) {
					ui->frame_2_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_2_07 = true;
				}
				break;

			case 3:
				if ( pixel_2_08 == false ) {
					ui->frame_2_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_2_08 = true;
				}
				break;

			case 4:
				if ( pixel_2_09 == false ) {
					ui->frame_2_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_2_09 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				if ( pixel_2_00 == false ) {
					ui->frame_2_00->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_2_00 = true;
				}
				break;

			case 1:
				if ( pixel_2_01 == false ) {
					ui->frame_2_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_2_01 = true;
				}
				break;

			case 2:
				if ( pixel_2_02 == false ) {
					ui->frame_2_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_2_02 = true;
				}
				break;

			case 3:
				if ( pixel_2_03 == false ) {
					ui->frame_2_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_2_03 = true;
				}
				break;

			case 4:
				if ( pixel_2_04 == false ) {
					ui->frame_2_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_2_04 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				if ( pixel_2_15 == false ) {
					ui->frame_2_15->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_2_15 = true;
				}
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
				if ( pixel_3_10 == false ) {
					ui->frame_3_10->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_3_10 = true;
				}
				break;

			case 1:
				if ( pixel_3_11 == false ) {
					ui->frame_3_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_3_11 = true;
				}
				break;

			case 2:
				if ( pixel_3_12 == false ) {
					ui->frame_3_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_3_12 = true;
				}
				break;

			case 3:
				if ( pixel_3_13 == false ) {
					ui->frame_3_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_3_13 = true;
				}
				break;

			case 4:
				if ( pixel_3_14 == false ) {
					ui->frame_3_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_3_14 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				if ( pixel_3_05 == false ) {
					ui->frame_3_05->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_3_05 = true;
				}
				break;

			case 1:
				if ( pixel_3_06 == false ) {
					ui->frame_3_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_3_06 = true;
				}
				break;

			case 2:
				if ( pixel_3_07 == false ) {
					ui->frame_3_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_3_07 = true;
				}
				break;

			case 3:
				if ( pixel_3_08 == false ) {
					ui->frame_3_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_3_08 = true;
				}
				break;

			case 4:
				if ( pixel_3_09 == false ) {
					ui->frame_3_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_3_09 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				if ( pixel_3_00 == false ) {
					ui->frame_3_00->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_3_00 = true;
				}
				break;

			case 1:
				if ( pixel_3_01 == false ) {
					ui->frame_3_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_3_01 = true;
				}
				break;

			case 2:
				if ( pixel_3_02 == false ) {
					ui->frame_3_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_3_02 = true;
				}
				break;

			case 3:
				if ( pixel_3_03 == false ) {
					ui->frame_3_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_3_03 = true;
				}
				break;

			case 4:
				if ( pixel_3_04 == false ) {
					ui->frame_3_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_3_04 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				if ( pixel_3_15 == false ) {
					ui->frame_3_15->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_3_15 = true;
				}
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
				if ( pixel_4_10 == false ) {
					ui->frame_4_10->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_4_10 = true;
				}
				break;

			case 1:
				if ( pixel_4_11 == false ) {
					ui->frame_4_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_4_11 = true;
				}
				break;

			case 2:
				if ( pixel_4_12 == false ) {
					ui->frame_4_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_4_12 = true;
				}
				break;

			case 3:
				if ( pixel_4_13 == false ) {
					ui->frame_4_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_4_13 = true;
				}
				break;

			case 4:
				if ( pixel_4_14 == false ) {
					ui->frame_4_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_4_14 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				if ( pixel_4_05 == false ) {
					ui->frame_4_05->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_4_05 = true;
				}
				break;

			case 1:
				if ( pixel_4_06 == false ) {
					ui->frame_4_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_4_06 = true;
				}
				break;

			case 2:
				if ( pixel_4_07 == false ) {
					ui->frame_4_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_4_07 = true;
				}
				break;

			case 3:
				if ( pixel_4_08 == false ) {
					ui->frame_4_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_4_08 = true;
				}
				break;

			case 4:
				if ( pixel_4_09 == false ) {
					ui->frame_4_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_4_09 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				if ( pixel_4_00 == false ) {
					ui->frame_4_00->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_4_00 = true;
				}
				break;

			case 1:
				if ( pixel_4_01 == false ) {
					ui->frame_4_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_4_01 = true;
				}
				break;

			case 2:
				if ( pixel_4_02 == false ) {
					ui->frame_4_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_4_02 = true;
				}
				break;

			case 3:
				if ( pixel_4_03 == false ) {
					ui->frame_4_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_4_03 = true;
				}
				break;

			case 4:
				if ( pixel_4_04 == false ) {
					ui->frame_4_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_4_04 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				if ( pixel_4_15 == false ) {
					ui->frame_4_15->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_4_15 = true;
				}
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
				if ( pixel_5_10 == false ) {
					ui->frame_5_10->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_5_10 = true;
				}
				break;

			case 1:
				if ( pixel_5_11 == false ) {
					ui->frame_5_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_5_11 = true;
				}
				break;

			case 2:
				if ( pixel_5_12 == false ) {
					ui->frame_5_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_5_12 = true;
				}
				break;

			case 3:
				if ( pixel_5_13 == false ) {
					ui->frame_5_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_5_13 = true;
				}
				break;

			case 4:
				if ( pixel_5_14 == false ) {
					ui->frame_5_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_5_14 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				if ( pixel_5_05 == false ) {
					ui->frame_5_05->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_5_05 = true;
				}
				break;

			case 1:
				if ( pixel_5_06 == false ) {
					ui->frame_5_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_5_06 = true;
				}
				break;

			case 2:
				if ( pixel_5_07 == false ) {
					ui->frame_5_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_5_07 = true;
				}
				break;

			case 3:
				if ( pixel_5_08 == false ) {
					ui->frame_5_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_5_08 = true;
				}
				break;

			case 4:
				if ( pixel_5_09 == false ) {
					ui->frame_5_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_5_09 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				if ( pixel_5_00 == false ) {
					ui->frame_5_00->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_5_00 = true;
				}
				break;

			case 1:
				if ( pixel_5_01 == false ) {
					ui->frame_5_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_5_01 = true;
				}
				break;

			case 2:
				if ( pixel_5_02 == false ) {
					ui->frame_5_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_5_02 = true;
				}
				break;

			case 3:
				if ( pixel_5_03 == false ) {
					ui->frame_5_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_5_03 = true;
				}
				break;

			case 4:
				if ( pixel_5_04 == false ) {
					ui->frame_5_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_5_04 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				if ( pixel_5_15 == false ) {
					ui->frame_5_15->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_5_15 = true;
				}
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
				if ( pixel_6_10 == false ) {
					ui->frame_6_10->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_6_10 = true;
				}
				break;

			case 1:
				if ( pixel_6_11 == false ) {
					ui->frame_6_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_6_11 = true;
				}
				break;

			case 2:
				if ( pixel_6_12 == false ) {
					ui->frame_6_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_6_12 = true;
				}
				break;

			case 3:
				if ( pixel_6_13 == false ) {
					ui->frame_6_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_6_13 = true;
				}
				break;

			case 4:
				if ( pixel_6_14 == false ) {
					ui->frame_6_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_6_14 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				if ( pixel_6_05 == false ) {
					ui->frame_6_05->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_6_05 = true;
				}
				break;

			case 1:
				if ( pixel_6_06 == false ) {
					ui->frame_6_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_6_06 = true;
				}
				break;

			case 2:
				if ( pixel_6_07 == false ) {
					ui->frame_6_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_6_07 = true;
				}
				break;

			case 3:
				if ( pixel_6_08 == false ) {
					ui->frame_6_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_6_08 = true;
				}
				break;

			case 4:
				if ( pixel_6_09 == false ) {
					ui->frame_6_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_6_09 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				if ( pixel_6_00 == false ) {
					ui->frame_6_00->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_6_00 = true;
				}
				break;

			case 1:
				if ( pixel_6_01 == false ) {
					ui->frame_6_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_6_01 = true;
				}
				break;

			case 2:
				if ( pixel_6_02 == false ) {
					ui->frame_6_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_6_02 = true;
				}
				break;

			case 3:
				if ( pixel_6_03 == false ) {
					ui->frame_6_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_6_03 = true;
				}
				break;

			case 4:
				if ( pixel_6_04 == false ) {
					ui->frame_6_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_6_04 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				if ( pixel_6_15 == false ) {
					ui->frame_6_15->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_6_15 = true;
				}
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
				if ( pixel_7_10 == false ) {
					ui->frame_7_10->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_7_10 = true;
				}
				break;

			case 1:
				if ( pixel_7_11 == false ) {
					ui->frame_7_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_7_11 = true;
				}
				break;

			case 2:
				if ( pixel_7_12 == false ) {
					ui->frame_7_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_7_12 = true;
				}
				break;

			case 3:
				if ( pixel_7_13 == false ) {
					ui->frame_7_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_7_13 = true;
				}
				break;

			case 4:
				if ( pixel_7_14 == false ) {
					ui->frame_7_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_7_14 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				if ( pixel_7_05 == false ) {
					ui->frame_7_05->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_7_05 = true;
				}
				break;

			case 1:
				if ( pixel_7_06 == false ) {
					ui->frame_7_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_7_06 = true;
				}
				break;

			case 2:
				if ( pixel_7_07 == false ) {
					ui->frame_7_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_7_07 = true;
				}
				break;

			case 3:
				if ( pixel_7_08 == false ) {
					ui->frame_7_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_7_08 = true;
				}
				break;

			case 4:
				if ( pixel_7_09 == false ) {
					ui->frame_7_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_7_09 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				if ( pixel_7_00 == false ) {
					ui->frame_7_00->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_7_00 = true;
				}
				break;

			case 1:
				if ( pixel_7_01 == false ) {
					ui->frame_7_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_7_01 = true;
				}
				break;

			case 2:
				if ( pixel_7_02 == false ) {
					ui->frame_7_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_7_02 = true;
				}
				break;

			case 3:
				if ( pixel_7_03 == false ) {
					ui->frame_7_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_7_03 = true;
				}
				break;

			case 4:
				if ( pixel_7_04 == false ) {
					ui->frame_7_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_7_04 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				if ( pixel_7_15 == false ) {
					ui->frame_7_15->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_7_15 = true;
				}
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
				if ( pixel_8_10 == false ) {
					ui->frame_8_10->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_8_10 = true;
				}
				break;

			case 1:
				if ( pixel_8_11 == false ) {
					ui->frame_8_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_8_11 = true;
				}
				break;

			case 2:
				if ( pixel_8_12 == false ) {
					ui->frame_8_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_8_12 = true;
				}
				break;

			case 3:
				if ( pixel_8_13 == false ) {
					ui->frame_8_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_8_13 = true;
				}
				break;

			case 4:
				if ( pixel_8_14 == false ) {
					ui->frame_8_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_8_14 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				if ( pixel_8_05 == false ) {
					ui->frame_8_05->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_8_05 = true;
				}
				break;

			case 1:
				if ( pixel_8_06 == false ) {
					ui->frame_8_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_8_06 = true;
				}
				break;

			case 2:
				if ( pixel_8_07 == false ) {
					ui->frame_8_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_8_07 = true;
				}
				break;

			case 3:
				if ( pixel_8_08 == false ) {
					ui->frame_8_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_8_08 = true;
				}
				break;

			case 4:
				if ( pixel_8_09 == false ) {
					ui->frame_8_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_8_09 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				if ( pixel_8_00 == false ) {
					ui->frame_8_00->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_8_00 = true;
				}
				break;

			case 1:
				if ( pixel_8_01 == false ) {
					ui->frame_8_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_8_01 = true;
				}
				break;

			case 2:
				if ( pixel_8_02 == false ) {
					ui->frame_8_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_8_02 = true;
				}
				break;

			case 3:
				if ( pixel_8_03 == false ) {
					ui->frame_8_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_8_03 = true;
				}
				break;

			case 4:
				if ( pixel_8_04 == false ) {
					ui->frame_8_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_8_04 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				if ( pixel_8_15 == false ) {
					ui->frame_8_15->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_8_15 = true;
				}
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
				if ( pixel_9_10 == false ) {
					ui->frame_9_10->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_9_10 = true;
				}
				break;

			case 1:
				if ( pixel_9_11 == false ) {
					ui->frame_9_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_9_11 = true;
				}
				break;

			case 2:
				if ( pixel_9_12 == false ) {
					ui->frame_9_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_9_12 = true;
				}
				break;

			case 3:
				if ( pixel_9_13 == false ) {
					ui->frame_9_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_9_13 = true;
				}
				break;

			case 4:
				if ( pixel_9_14 == false ) {
					ui->frame_9_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_9_14 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				if ( pixel_9_05 == false ) {
					ui->frame_9_05->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_9_05 = true;
				}
				break;

			case 1:
				if ( pixel_9_06 == false ) {
					ui->frame_9_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_9_06 = true;
				}
				break;

			case 2:
				if ( pixel_9_07 == false ) {
					ui->frame_9_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_9_07 = true;
				}
				break;

			case 3:
				if ( pixel_9_08 == false ) {
					ui->frame_9_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_9_08 = true;
				}
				break;

			case 4:
				if ( pixel_9_09 == false ) {
					ui->frame_9_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_9_09 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				if ( pixel_9_00 == false ) {
					ui->frame_9_00->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_9_00 = true;
				}
				break;

			case 1:
				if ( pixel_9_01 == false ) {
					ui->frame_9_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_9_01 = true;
				}
				break;

			case 2:
				if ( pixel_9_02 == false ) {
					ui->frame_9_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_9_02 = true;
				}
				break;

			case 3:
				if ( pixel_9_03 == false ) {
					ui->frame_9_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_9_03 = true;
				}
				break;

			case 4:
				if ( pixel_9_04 == false ) {
					ui->frame_9_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_9_04 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				if ( pixel_9_15 == false ) {
					ui->frame_9_15->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_9_15 = true;
				}
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
				if ( pixel_a_10 == false ) {
					ui->frame_a_10->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_a_10 = true;
				}
				break;

			case 1:
				if ( pixel_a_11 == false ) {
					ui->frame_a_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_a_11 = true;
				}
				break;

			case 2:
				if ( pixel_a_12 == false ) {
					ui->frame_a_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_a_12 = true;
				}
				break;

			case 3:
				if ( pixel_a_13 == false ) {
					ui->frame_a_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_a_13 = true;
				}
				break;

			case 4:
				if ( pixel_a_14 == false ) {
					ui->frame_a_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_a_14 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				if ( pixel_a_05 == false ) {
					ui->frame_a_05->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_a_05 = true;
				}
				break;

			case 1:
				if ( pixel_a_06 == false ) {
					ui->frame_a_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_a_06 = true;
				}
				break;

			case 2:
				if ( pixel_a_07 == false ) {
					ui->frame_a_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_a_07 = true;
				}
				break;

			case 3:
				if ( pixel_a_08 == false ) {
					ui->frame_a_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_a_08 = true;
				}
				break;

			case 4:
				if ( pixel_a_09 == false ) {
					ui->frame_a_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_a_09 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				if ( pixel_a_00 == false ) {
					ui->frame_a_00->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_a_00 = true;
				}
				break;

			case 1:
				if ( pixel_a_01 == false ) {
					ui->frame_a_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_a_01 = true;
				}
				break;

			case 2:
				if ( pixel_a_02 == false ) {
					ui->frame_a_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_a_02 = true;
				}
				break;

			case 3:
				if ( pixel_a_03 == false ) {
					ui->frame_a_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_a_03 = true;
				}
				break;

			case 4:
				if ( pixel_a_04 == false ) {
					ui->frame_a_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_a_04 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				if ( pixel_a_15 == false ) {
					ui->frame_a_15->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_a_15 = true;
				}
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
				if ( pixel_b_10 == false ) {
					ui->frame_b_10->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_b_10 = true;
				}
				break;

			case 1:
				if ( pixel_b_11 == false ) {
					ui->frame_b_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_b_11 = true;
				}
				break;

			case 2:
				if ( pixel_b_12 == false ) {
					ui->frame_b_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_b_12 = true;
				}
				break;

			case 3:
				if ( pixel_b_13 == false ) {
					ui->frame_b_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_b_13 = true;
				}
				break;

			case 4:
				if ( pixel_b_14 == false ) {
					ui->frame_b_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_b_14 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				if ( pixel_b_05 == false ) {
					ui->frame_b_05->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_b_05 = true;
				}
				break;

			case 1:
				if ( pixel_b_06 == false ) {
					ui->frame_b_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_b_06 = true;
				}
				break;

			case 2:
				if ( pixel_b_07 == false ) {
					ui->frame_b_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_b_07 = true;
				}
				break;

			case 3:
				if ( pixel_b_08 == false ) {
					ui->frame_b_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_b_08 = true;
				}
				break;

			case 4:
				if ( pixel_b_09 == false ) {
					ui->frame_b_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_b_09 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				if ( pixel_b_00 == false ) {
					ui->frame_b_00->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_b_00 = true;
				}
				break;

			case 1:
				if ( pixel_b_01 == false ) {
					ui->frame_b_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_b_01 = true;
				}
				break;

			case 2:
				if ( pixel_b_02 == false ) {
					ui->frame_b_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_b_02 = true;
				}
				break;

			case 3:
				if ( pixel_b_03 == false ) {
					ui->frame_b_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_b_03 = true;
				}
				break;

			case 4:
				if ( pixel_b_04 == false ) {
					ui->frame_b_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_b_04 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				if ( pixel_b_15 == false ) {
					ui->frame_b_15->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_b_15 = true;
				}
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
				if ( pixel_c_10 == false ) {
					ui->frame_c_10->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_c_10 = true;
				}
				break;

			case 1:
				if ( pixel_c_11 == false ) {
					ui->frame_c_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_c_11 = true;
				}
				break;

			case 2:
				if ( pixel_c_12 == false ) {
					ui->frame_c_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_c_12 = true;
				}
				break;

			case 3:
				if ( pixel_c_13 == false ) {
					ui->frame_c_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_c_13 = true;
				}
				break;

			case 4:
				if ( pixel_c_14 == false ) {
					ui->frame_c_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_c_14 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				if ( pixel_c_05 == false ) {
					ui->frame_c_05->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_c_05 = true;
				}
				break;

			case 1:
				if ( pixel_c_06 == false ) {
					ui->frame_c_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_c_06 = true;
				}
				break;

			case 2:
				if ( pixel_c_07 == false ) {
					ui->frame_c_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_c_07 = true;
				}
				break;

			case 3:
				if ( pixel_c_08 == false ) {
					ui->frame_c_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_c_08 = true;
				}
				break;

			case 4:
				if ( pixel_c_09 == false ) {
					ui->frame_c_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_c_09 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				if ( pixel_c_00 == false ) {
					ui->frame_c_00->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_c_00 = true;
				}
				break;

			case 1:
				if ( pixel_c_01 == false ) {
					ui->frame_c_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_c_01 = true;
				}
				break;

			case 2:
				if ( pixel_c_02 == false ) {
					ui->frame_c_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_c_02 = true;
				}
				break;

			case 3:
				if ( pixel_c_03 == false ) {
					ui->frame_c_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_c_03 = true;
				}
				break;

			case 4:
				if ( pixel_c_04 == false ) {
					ui->frame_c_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_c_04 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				if ( pixel_c_15 == false ) {
					ui->frame_c_15->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_c_15 = true;
				}
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
				if ( pixel_d_10 == false ) {
					ui->frame_d_10->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_d_10 = true;
				}
				break;

			case 1:
				if ( pixel_d_11 == false ) {
					ui->frame_d_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_d_11 = true;
				}
				break;

			case 2:
				if ( pixel_d_12 == false ) {
					ui->frame_d_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_d_12 = true;
				}
				break;

			case 3:
				if ( pixel_d_13 == false ) {
					ui->frame_d_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_d_13 = true;
				}
				break;

			case 4:
				if ( pixel_d_14 == false ) {
					ui->frame_d_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_d_14 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				if ( pixel_d_05 == false ) {
					ui->frame_d_05->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_d_05 = true;
				}
				break;

			case 1:
				if ( pixel_d_06 == false ) {
					ui->frame_d_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_d_06 = true;
				}
				break;

			case 2:
				if ( pixel_d_07 == false ) {
					ui->frame_d_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_d_07 = true;
				}
				break;

			case 3:
				if ( pixel_d_08 == false ) {
					ui->frame_d_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_d_08 = true;
				}
				break;

			case 4:
				if ( pixel_d_09 == false ) {
					ui->frame_d_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_d_09 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				if ( pixel_d_00 == false ) {
					ui->frame_d_00->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_d_00 = true;
				}
				break;

			case 1:
				if ( pixel_d_01 == false ) {
					ui->frame_d_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_d_01 = true;
				}
				break;

			case 2:
				if ( pixel_d_02 == false ) {
					ui->frame_d_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_d_02 = true;
				}
				break;

			case 3:
				if ( pixel_d_03 == false ) {
					ui->frame_d_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_d_03 = true;
				}
				break;

			case 4:
				if ( pixel_d_04 == false ) {
					ui->frame_d_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_d_04 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				if ( pixel_d_15 == false ) {
					ui->frame_d_15->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_d_15 = true;
				}
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
				if ( pixel_e_10 == false ) {
					ui->frame_e_10->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_e_10 = true;
				}
				break;

			case 1:
				if ( pixel_e_11 == false ) {
					ui->frame_e_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_e_11 = true;
				}
				break;

			case 2:
				if ( pixel_e_12 == false ) {
					ui->frame_e_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_e_12 = true;
				}
				break;

			case 3:
				if ( pixel_e_13 == false ) {
					ui->frame_e_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_e_13 = true;
				}
				break;

			case 4:
				if ( pixel_e_14 == false ) {
					ui->frame_e_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_e_14 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				if ( pixel_e_05 == false ) {
					ui->frame_e_05->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_e_05 = true;
				}
				break;

			case 1:
				if ( pixel_e_06 == false ) {
					ui->frame_e_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_e_06 = true;
				}
				break;

			case 2:
				if ( pixel_e_07 == false ) {
					ui->frame_e_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_e_07 = true;
				}
				break;

			case 3:
				if ( pixel_e_08 == false ) {
					ui->frame_e_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_e_08 = true;
				}
				break;

			case 4:
				if ( pixel_e_09 == false ) {
					ui->frame_e_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_e_09 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				if ( pixel_e_00 == false ) {
					ui->frame_e_00->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_e_00 = true;
				}
				break;

			case 1:
				if ( pixel_e_01 == false ) {
					ui->frame_e_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_e_01 = true;
				}
				break;

			case 2:
				if ( pixel_e_02 == false ) {
					ui->frame_e_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_e_02 = true;
				}
				break;

			case 3:
				if ( pixel_e_03 == false ) {
					ui->frame_e_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_e_03 = true;
				}
				break;

			case 4:
				if ( pixel_e_04 == false ) {
					ui->frame_e_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_e_04 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				if ( pixel_e_15 == false ) {
					ui->frame_e_15->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_e_15 = true;
				}
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
				if ( pixel_f_10 == false ) {
					ui->frame_f_10->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_f_10 = true;
				}
				break;

			case 1:
				if ( pixel_f_11 == false ) {
					ui->frame_f_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_f_11 = true;
				}
				break;

			case 2:
				if ( pixel_f_12 == false ) {
					ui->frame_f_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_f_12 = true;
				}
				break;

			case 3:
				if ( pixel_f_13 == false ) {
					ui->frame_f_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_f_13 = true;
				}
				break;

			case 4:
				if ( pixel_f_14 == false ) {
					ui->frame_f_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_f_14 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				if ( pixel_f_05 == false ) {
					ui->frame_f_05->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_f_05 = true;
				}
				break;

			case 1:
				if ( pixel_f_06 == false ) {
					ui->frame_f_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_f_06 = true;
				}
				break;

			case 2:
				if ( pixel_f_07 == false ) {
					ui->frame_f_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_f_07 = true;
				}
				break;

			case 3:
				if ( pixel_f_08 == false ) {
					ui->frame_f_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_f_08 = true;
				}
				break;

			case 4:
				if ( pixel_f_09 == false ) {
					ui->frame_f_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_f_09 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				if ( pixel_f_00 == false ) {
					ui->frame_f_00->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_f_00 = true;
				}
				break;

			case 1:
				if ( pixel_f_01 == false ) {
					ui->frame_f_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_f_01 = true;
				}
				break;

			case 2:
				if ( pixel_f_02 == false ) {
					ui->frame_f_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_f_02 = true;
				}
				break;

			case 3:
				if ( pixel_f_03 == false ) {
					ui->frame_f_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_f_03 = true;
				}
				break;

			case 4:
				if ( pixel_f_04 == false ) {
					ui->frame_f_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_f_04 = true;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				if ( pixel_f_15 == false ) {
					ui->frame_f_15->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					pixel_f_15 = true;
				}
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
				if ( pixel_0_10 == true ) {
					ui->frame_0_10->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_0_10 = false;
				}
				break;

			case 1:
				if ( pixel_0_11 == true ) {
					ui->frame_0_11->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_0_11 = false;
				}
				break;

			case 2:
				if ( pixel_0_12 == true ) {
					ui->frame_0_12->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_0_12 = false;
				}
				break;

			case 3:
				if ( pixel_0_13 == true ) {
					ui->frame_0_13->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_0_13 = false;
				}
				break;

			case 4:
				if ( pixel_0_14 == true ) {
					ui->frame_0_14->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_0_14 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				if ( pixel_0_05 == true ) {
					ui->frame_0_05->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_0_05 = false;
				}
				break;

			case 1:
				if ( pixel_0_06 == true ) {
					ui->frame_0_06->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_0_06 = false;
				}
				break;

			case 2:
				if ( pixel_0_07 == true ) {
					ui->frame_0_07->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_0_07 = false;
				}
				break;

			case 3:
				if ( pixel_0_08 == true ) {
					ui->frame_0_08->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_0_08 = false;
				}
				break;

			case 4:
				if ( pixel_0_09 == true ) {
					ui->frame_0_09->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_0_09 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				if ( pixel_0_00 == true ) {
					ui->frame_0_00->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_0_00 = false;
				}
				break;

			case 1:
				if ( pixel_0_01 == true ) {
					ui->frame_0_01->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_0_01 = false;
				}
				break;

			case 2:
				if ( pixel_0_02 == true ) {
					ui->frame_0_02->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_0_02 = false;
				}
				break;

			case 3:
				if ( pixel_0_03 == true ) {
					ui->frame_0_03->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_0_03 = false;
				}
				break;

			case 4:
				if ( pixel_0_04 == true ) {
					ui->frame_0_04->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_0_04 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				if ( pixel_0_15 == true ) {
					ui->frame_0_15->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_0_15 = false;
				}
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
				if ( pixel_1_10 == true ) {
					ui->frame_1_10->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_1_10 = false;
				}
				break;

			case 1:
				if ( pixel_1_11 == true ) {
					ui->frame_1_11->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_1_11 = false;
				}
				break;

			case 2:
				if ( pixel_1_12 == true ) {
					ui->frame_1_12->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_1_12 = false;
				}
				break;

			case 3:
				if ( pixel_1_13 == true ) {
					ui->frame_1_13->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_1_13 = false;
				}
				break;

			case 4:
				if ( pixel_1_14 == true ) {
					ui->frame_1_14->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_1_14 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				if ( pixel_1_05 == true ) {
					ui->frame_1_05->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_1_05 = false;
				}
				break;

			case 1:
				if ( pixel_1_06 == true ) {
					ui->frame_1_06->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_1_06 = false;
				}
				break;

			case 2:
				if ( pixel_1_07 == true ) {
					ui->frame_1_07->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_1_07 = false;
				}
				break;

			case 3:
				if ( pixel_1_08 == true ) {
					ui->frame_1_08->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_1_08 = false;
				}
				break;

			case 4:
				if ( pixel_1_09 == true ) {
					ui->frame_1_09->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_1_09 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				if ( pixel_1_00 == true ) {
					ui->frame_1_00->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_1_00 = false;
				}
				break;

			case 1:
				if ( pixel_1_01 == true ) {
					ui->frame_1_01->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_1_01 = false;
				}
				break;

			case 2:
				if ( pixel_1_02 == true ) {
					ui->frame_1_02->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_1_02 = false;
				}
				break;

			case 3:
				if ( pixel_1_03 == true ) {
					ui->frame_1_03->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_1_03 = false;
				}
				break;

			case 4:
				if ( pixel_1_04 == true ) {
					ui->frame_1_04->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_1_04 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				if ( pixel_1_15 == true ) {
					ui->frame_1_15->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_1_15 = false;
				}
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
				if ( pixel_2_10 == true ) {
					ui->frame_2_10->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_2_10 = false;
				}
				break;

			case 1:
				if ( pixel_2_11 == true ) {
					ui->frame_2_11->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_2_11 = false;
				}
				break;

			case 2:
				if ( pixel_2_12 == true ) {
					ui->frame_2_12->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_2_12 = false;
				}
				break;

			case 3:
				if ( pixel_2_13 == true ) {
					ui->frame_2_13->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_2_13 = false;
				}
				break;

			case 4:
				if ( pixel_2_14 == true ) {
					ui->frame_2_14->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_2_14 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				if ( pixel_2_05 == true ) {
					ui->frame_2_05->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_2_05 = false;
				}
				break;

			case 1:
				if ( pixel_2_06 == true ) {
					ui->frame_2_06->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_2_06 = false;
				}
				break;

			case 2:
				if ( pixel_2_07 == true ) {
					ui->frame_2_07->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_2_07 = false;
				}
				break;

			case 3:
				if ( pixel_2_08 == true ) {
					ui->frame_2_08->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_2_08 = false;
				}
				break;

			case 4:
				if ( pixel_2_09 == true ) {
					ui->frame_2_09->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_2_09 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				if ( pixel_2_00 == true ) {
					ui->frame_2_00->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_2_00 = false;
				}
				break;

			case 1:
				if ( pixel_2_01 == true ) {
					ui->frame_2_01->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_2_01 = false;
				}
				break;

			case 2:
				if ( pixel_2_02 == true ) {
					ui->frame_2_02->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_2_02 = false;
				}
				break;

			case 3:
				if ( pixel_2_03 == true ) {
					ui->frame_2_03->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_2_03 = false;
				}
				break;

			case 4:
				if ( pixel_2_04 == true ) {
					ui->frame_2_04->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_2_04 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				if ( pixel_2_15 == true ) {
					ui->frame_2_15->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_2_15 = false;
				}
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
				if ( pixel_3_10 == true ) {
					ui->frame_3_10->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_3_10 = false;
				}
				break;

			case 1:
				if ( pixel_3_11 == true ) {
					ui->frame_3_11->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_3_11 = false;
				}
				break;

			case 2:
				if ( pixel_3_12 == true ) {
					ui->frame_3_12->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_3_12 = false;
				}
				break;

			case 3:
				if ( pixel_3_13 == true ) {
					ui->frame_3_13->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_3_13 = false;
				}
				break;

			case 4:
				if ( pixel_3_14 == true ) {
					ui->frame_3_14->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_3_14 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				if ( pixel_3_05 == true ) {
					ui->frame_3_05->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_3_05 = false;
				}
				break;

			case 1:
				if ( pixel_3_06 == true ) {
					ui->frame_3_06->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_3_06 = false;
				}
				break;

			case 2:
				if ( pixel_3_07 == true ) {
					ui->frame_3_07->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_3_07 = false;
				}
				break;

			case 3:
				if ( pixel_3_08 == true ) {
					ui->frame_3_08->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_3_08 = false;
				}
				break;

			case 4:
				if ( pixel_3_09 == true ) {
					ui->frame_3_09->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_3_09 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				if ( pixel_3_00 == true ) {
					ui->frame_3_00->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_3_00 = false;
				}
				break;

			case 1:
				if ( pixel_3_01 == true ) {
					ui->frame_3_01->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_3_01 = false;
				}
				break;

			case 2:
				if ( pixel_3_02 == true ) {
					ui->frame_3_02->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_3_02 = false;
				}
				break;

			case 3:
				if ( pixel_3_03 == true ) {
					ui->frame_3_03->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_3_03 = false;
				}
				break;

			case 4:
				if ( pixel_3_04 == true ) {
					ui->frame_3_04->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_3_04 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				if ( pixel_3_15 == true ) {
					ui->frame_3_15->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_3_15 = false;
				}
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
				if ( pixel_4_10 == true ) {
					ui->frame_4_10->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_4_10 = false;
				}
				break;

			case 1:
				if ( pixel_4_11 == true ) {
					ui->frame_4_11->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_4_11 = false;
				}
				break;

			case 2:
				if ( pixel_4_12 == true ) {
					ui->frame_4_12->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_4_12 = false;
				}
				break;

			case 3:
				if ( pixel_4_13 == true ) {
					ui->frame_4_13->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_4_13 = false;
				}
				break;

			case 4:
				if ( pixel_4_14 == true ) {
					ui->frame_4_14->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_4_14 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				if ( pixel_4_05 == true ) {
					ui->frame_4_05->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_4_05 = false;
				}
				break;

			case 1:
				if ( pixel_4_06 == true ) {
					ui->frame_4_06->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_4_06 = false;
				}
				break;

			case 2:
				if ( pixel_4_07 == true ) {
					ui->frame_4_07->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_4_07 = false;
				}
				break;

			case 3:
				if ( pixel_4_08 == true ) {
					ui->frame_4_08->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_4_08 = false;
				}
				break;

			case 4:
				if ( pixel_4_09 == true ) {
					ui->frame_4_09->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_4_09 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				if ( pixel_4_00 == true ) {
					ui->frame_4_00->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_4_00 = false;
				}
				break;

			case 1:
				if ( pixel_4_01 == true ) {
					ui->frame_4_01->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_4_01 = false;
				}
				break;

			case 2:
				if ( pixel_4_02 == true ) {
					ui->frame_4_02->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_4_02 = false;
				}
				break;

			case 3:
				if ( pixel_4_03 == true ) {
					ui->frame_4_03->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_4_03 = false;
				}
				break;

			case 4:
				if ( pixel_4_04 == true ) {
					ui->frame_4_04->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_4_04 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				if ( pixel_4_15 == true ) {
					ui->frame_4_15->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_4_15 = false;
				}
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
				if ( pixel_5_10 == true ) {
					ui->frame_5_10->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_5_10 = false;
				}
				break;

			case 1:
				if ( pixel_5_11 == true ) {
					ui->frame_5_11->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_5_11 = false;
				}
				break;

			case 2:
				if ( pixel_5_12 == true ) {
					ui->frame_5_12->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_5_12 = false;
				}
				break;

			case 3:
				if ( pixel_5_13 == true ) {
					ui->frame_5_13->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_5_13 = false;
				}
				break;

			case 4:
				if ( pixel_5_14 == true ) {
					ui->frame_5_14->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_5_14 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				if ( pixel_5_05 == true ) {
					ui->frame_5_05->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_5_05 = false;
				}
				break;

			case 1:
				if ( pixel_5_06 == true ) {
					ui->frame_5_06->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_5_06 = false;
				}
				break;

			case 2:
				if ( pixel_5_07 == true ) {
					ui->frame_5_07->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_5_07 = false;
				}
				break;

			case 3:
				if ( pixel_5_08 == true ) {
					ui->frame_5_08->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_5_08 = false;
				}
				break;

			case 4:
				if ( pixel_5_09 == true ) {
					ui->frame_5_09->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_5_09 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				if ( pixel_5_00 == true ) {
					ui->frame_5_00->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_5_00 = false;
				}
				break;

			case 1:
				if ( pixel_5_01 == true ) {
					ui->frame_5_01->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_5_01 = false;
				}
				break;

			case 2:
				if ( pixel_5_02 == true ) {
					ui->frame_5_02->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_5_02 = false;
				}
				break;

			case 3:
				if ( pixel_5_03 == true ) {
					ui->frame_5_03->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_5_03 = false;
				}
				break;

			case 4:
				if ( pixel_5_04 == true ) {
					ui->frame_5_04->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_5_04 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				if ( pixel_5_15 == true ) {
					ui->frame_5_15->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_5_15 = false;
				}
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
				if ( pixel_6_10 == true ) {
					ui->frame_6_10->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_6_10 = false;
				}
				break;

			case 1:
				if ( pixel_6_11 == true ) {
					ui->frame_6_11->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_6_11 = false;
				}
				break;

			case 2:
				if ( pixel_6_12 == true ) {
					ui->frame_6_12->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_6_12 = false;
				}
				break;

			case 3:
				if ( pixel_6_13 == true ) {
					ui->frame_6_13->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_6_13 = false;
				}
				break;

			case 4:
				if ( pixel_6_14 == true ) {
					ui->frame_6_14->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_6_14 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				if ( pixel_6_05 == true ) {
					ui->frame_6_05->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_6_05 = false;
				}
				break;

			case 1:
				if ( pixel_6_06 == true ) {
					ui->frame_6_06->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_6_06 = false;
				}
				break;

			case 2:
				if ( pixel_6_07 == true ) {
					ui->frame_6_07->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_6_07 = false;
				}
				break;

			case 3:
				if ( pixel_6_08 == true ) {
					ui->frame_6_08->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_6_08 = false;
				}
				break;

			case 4:
				if ( pixel_6_09 == true ) {
					ui->frame_6_09->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_6_09 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				if ( pixel_6_00 == true ) {
					ui->frame_6_00->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_6_00 = false;
				}
				break;

			case 1:
				if ( pixel_6_01 == true ) {
					ui->frame_6_01->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_6_01 = false;
				}
				break;

			case 2:
				if ( pixel_6_02 == true ) {
					ui->frame_6_02->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_6_02 = false;
				}
				break;

			case 3:
				if ( pixel_6_03 == true ) {
					ui->frame_6_03->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_6_03 = false;
				}
				break;

			case 4:
				if ( pixel_6_04 == true ) {
					ui->frame_6_04->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_6_04 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				if ( pixel_6_15 == true ) {
					ui->frame_6_15->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_6_15 = false;
				}
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
				if ( pixel_7_10 == true ) {
					ui->frame_7_10->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_7_10 = false;
				}
				break;

			case 1:
				if ( pixel_7_11 == true ) {
					ui->frame_7_11->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_7_11 = false;
				}
				break;

			case 2:
				if ( pixel_7_12 == true ) {
					ui->frame_7_12->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_7_12 = false;
				}
				break;

			case 3:
				if ( pixel_7_13 == true ) {
					ui->frame_7_13->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_7_13 = false;
				}
				break;

			case 4:
				if ( pixel_7_14 == true ) {
					ui->frame_7_14->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_7_14 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				if ( pixel_7_05 == true ) {
					ui->frame_7_05->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_7_05 = false;
				}
				break;

			case 1:
				if ( pixel_7_06 == true ) {
					ui->frame_7_06->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_7_06 = false;
				}
				break;

			case 2:
				if ( pixel_7_07 == true ) {
					ui->frame_7_07->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_7_07 = false;
				}
				break;

			case 3:
				if ( pixel_7_08 == true ) {
					ui->frame_7_08->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_7_08 = false;
				}
				break;

			case 4:
				if ( pixel_7_09 == true ) {
					ui->frame_7_09->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_7_09 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				if ( pixel_7_00 == true ) {
					ui->frame_7_00->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_7_00 = false;
				}
				break;

			case 1:
				if ( pixel_7_01 == true ) {
					ui->frame_7_01->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_7_01 = false;
				}
				break;

			case 2:
				if ( pixel_7_02 == true ) {
					ui->frame_7_02->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_7_02 = false;
				}
				break;

			case 3:
				if ( pixel_7_03 == true ) {
					ui->frame_7_03->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_7_03 = false;
				}
				break;

			case 4:
				if ( pixel_7_04 == true ) {
					ui->frame_7_04->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_7_04 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				if ( pixel_7_15 == true ) {
					ui->frame_7_15->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_7_15 = false;
				}
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
				if ( pixel_8_10 == true ) {
					ui->frame_8_10->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_8_10 = false;
				}
				break;

			case 1:
				if ( pixel_8_11 == true ) {
					ui->frame_8_11->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_8_11 = false;
				}
				break;

			case 2:
				if ( pixel_8_12 == true ) {
					ui->frame_8_12->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_8_12 = false;
				}
				break;

			case 3:
				if ( pixel_8_13 == true ) {
					ui->frame_8_13->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_8_13 = false;
				}
				break;

			case 4:
				if ( pixel_8_14 == true ) {
					ui->frame_8_14->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_8_14 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				if ( pixel_8_05 == true ) {
					ui->frame_8_05->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_8_05 = false;
				}
				break;

			case 1:
				if ( pixel_8_06 == true ) {
					ui->frame_8_06->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_8_06 = false;
				}
				break;

			case 2:
				if ( pixel_8_07 == true ) {
					ui->frame_8_07->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_8_07 = false;
				}
				break;

			case 3:
				if ( pixel_8_08 == true ) {
					ui->frame_8_08->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_8_08 = false;
				}
				break;

			case 4:
				if ( pixel_8_09 == true ) {
					ui->frame_8_09->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_8_09 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				if ( pixel_8_00 == true ) {
					ui->frame_8_00->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_8_00 = false;
				}
				break;

			case 1:
				if ( pixel_8_01 == true ) {
					ui->frame_8_01->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_8_01 = false;
				}
				break;

			case 2:
				if ( pixel_8_02 == true ) {
					ui->frame_8_02->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_8_02 = false;
				}
				break;

			case 3:
				if ( pixel_8_03 == true ) {
					ui->frame_8_03->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_8_03 = false;
				}
				break;

			case 4:
				if ( pixel_8_04 == true ) {
					ui->frame_8_04->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_8_04 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				if ( pixel_8_15 == true ) {
					ui->frame_8_15->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_8_15 = false;
				}
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
				if ( pixel_9_10 == true ) {
					ui->frame_9_10->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_9_10 = false;
				}
				break;

			case 1:
				if ( pixel_9_11 == true ) {
					ui->frame_9_11->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_9_11 = false;
				}
				break;

			case 2:
				if ( pixel_9_12 == true ) {
					ui->frame_9_12->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_9_12 = false;
				}
				break;

			case 3:
				if ( pixel_9_13 == true ) {
					ui->frame_9_13->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_9_13 = false;
				}
				break;

			case 4:
				if ( pixel_9_14 == true ) {
					ui->frame_9_14->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_9_14 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				if ( pixel_9_05 == true ) {
					ui->frame_9_05->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_9_05 = false;
				}
				break;

			case 1:
				if ( pixel_9_06 == true ) {
					ui->frame_9_06->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_9_06 = false;
				}
				break;

			case 2:
				if ( pixel_9_07 == true ) {
					ui->frame_9_07->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_9_07 = false;
				}
				break;

			case 3:
				if ( pixel_9_08 == true ) {
					ui->frame_9_08->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_9_08 = false;
				}
				break;

			case 4:
				if ( pixel_9_09 == true ) {
					ui->frame_9_09->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_9_09 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				if ( pixel_9_00 == true ) {
					ui->frame_9_00->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_9_00 = false;
				}
				break;

			case 1:
				if ( pixel_9_01 == true ) {
					ui->frame_9_01->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_9_01 = false;
				}
				break;

			case 2:
				if ( pixel_9_02 == true ) {
					ui->frame_9_02->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_9_02 = false;
				}
				break;

			case 3:
				if ( pixel_9_03 == true ) {
					ui->frame_9_03->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_9_03 = false;
				}
				break;

			case 4:
				if ( pixel_9_04 == true ) {
					ui->frame_9_04->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_9_04 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				if ( pixel_9_15 == true ) {
					ui->frame_9_15->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_9_15 = false;
				}
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
				if ( pixel_a_10 == true ) {
					ui->frame_a_10->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_a_10 = false;
				}
				break;

			case 1:
				if ( pixel_a_11 == true ) {
					ui->frame_a_11->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_a_11 = false;
				}
				break;

			case 2:
				if ( pixel_a_12 == true ) {
					ui->frame_a_12->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_a_12 = false;
				}
				break;

			case 3:
				if ( pixel_a_13 == true ) {
					ui->frame_a_13->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_a_13 = false;
				}
				break;

			case 4:
				if ( pixel_a_14 == true ) {
					ui->frame_a_14->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_a_14 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				if ( pixel_a_05 == true ) {
					ui->frame_a_05->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_a_05 = false;
				}
				break;

			case 1:
				if ( pixel_a_06 == true ) {
					ui->frame_a_06->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_a_06 = false;
				}
				break;

			case 2:
				if ( pixel_a_07 == true ) {
					ui->frame_a_07->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_a_07 = false;
				}
				break;

			case 3:
				if ( pixel_a_08 == true ) {
					ui->frame_a_08->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_a_08 = false;
				}
				break;

			case 4:
				if ( pixel_a_09 == true ) {
					ui->frame_a_09->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_a_09 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				if ( pixel_a_00 == true ) {
					ui->frame_a_00->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_a_00 = false;
				}
				break;

			case 1:
				if ( pixel_a_01 == true ) {
					ui->frame_a_01->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_a_01 = false;
				}
				break;

			case 2:
				if ( pixel_a_02 == true ) {
					ui->frame_a_02->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_a_02 = false;
				}
				break;

			case 3:
				if ( pixel_a_03 == true ) {
					ui->frame_a_03->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_a_03 = false;
				}
				break;

			case 4:
				if ( pixel_a_04 == true ) {
					ui->frame_a_04->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_a_04 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				if ( pixel_a_15 == true ) {
					ui->frame_a_15->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_a_15 = false;
				}
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
				if ( pixel_b_10 == true ) {
					ui->frame_b_10->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_b_10 = false;
				}
				break;

			case 1:
				if ( pixel_b_11 == true ) {
					ui->frame_b_11->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_b_11 = false;
				}
				break;

			case 2:
				if ( pixel_b_12 == true ) {
					ui->frame_b_12->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_b_12 = false;
				}
				break;

			case 3:
				if ( pixel_b_13 == true ) {
					ui->frame_b_13->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_b_13 = false;
				}
				break;

			case 4:
				if ( pixel_b_14 == true ) {
					ui->frame_b_14->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_b_14 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				if ( pixel_b_05 == true ) {
					ui->frame_b_05->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_b_05 = false;
				}
				break;

			case 1:
				if ( pixel_b_06 == true ) {
					ui->frame_b_06->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_b_06 = false;
				}
				break;

			case 2:
				if ( pixel_b_07 == true ) {
					ui->frame_b_07->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_b_07 = false;
				}
				break;

			case 3:
				if ( pixel_b_08 == true ) {
					ui->frame_b_08->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_b_08 = false;
				}
				break;

			case 4:
				if ( pixel_b_09 == true ) {
					ui->frame_b_09->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_b_09 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				if ( pixel_b_00 == true ) {
					ui->frame_b_00->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_b_00 = false;
				}
				break;

			case 1:
				if ( pixel_b_01 == true ) {
					ui->frame_b_01->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_b_01 = false;
				}
				break;

			case 2:
				if ( pixel_b_02 == true ) {
					ui->frame_b_02->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_b_02 = false;
				}
				break;

			case 3:
				if ( pixel_b_03 == true ) {
					ui->frame_b_03->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_b_03 = false;
				}
				break;

			case 4:
				if ( pixel_b_04 == true ) {
					ui->frame_b_04->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_b_04 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				if ( pixel_b_15 == true ) {
					ui->frame_b_15->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_b_15 = false;
				}
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
				if ( pixel_c_10 == true ) {
					ui->frame_c_10->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_c_10 = false;
				}
				break;

			case 1:
				if ( pixel_c_11 == true ) {
					ui->frame_c_11->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_c_11 = false;
				}
				break;

			case 2:
				if ( pixel_c_12 == true ) {
					ui->frame_c_12->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_c_12 = false;
				}
				break;

			case 3:
				if ( pixel_c_13 == true ) {
					ui->frame_c_13->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_c_13 = false;
				}
				break;

			case 4:
				if ( pixel_c_14 == true ) {
					ui->frame_c_14->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_c_14 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				if ( pixel_c_05 == true ) {
					ui->frame_c_05->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_c_05 = false;
				}
				break;

			case 1:
				if ( pixel_c_06 == true ) {
					ui->frame_c_06->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_c_06 = false;
				}
				break;

			case 2:
				if ( pixel_c_07 == true ) {
					ui->frame_c_07->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_c_07 = false;
				}
				break;

			case 3:
				if ( pixel_c_08 == true ) {
					ui->frame_c_08->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_c_08 = false;
				}
				break;

			case 4:
				if ( pixel_c_09 == true ) {
					ui->frame_c_09->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_c_09 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				if ( pixel_c_00 == true ) {
					ui->frame_c_00->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_c_00 = false;
				}
				break;

			case 1:
				if ( pixel_c_01 == true ) {
					ui->frame_c_01->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_c_01 = false;
				}
				break;

			case 2:
				if ( pixel_c_02 == true ) {
					ui->frame_c_02->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_c_02 = false;
				}
				break;

			case 3:
				if ( pixel_c_03 == true ) {
					ui->frame_c_03->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_c_03 = false;
				}
				break;

			case 4:
				if ( pixel_c_04 == true ) {
					ui->frame_c_04->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_c_04 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				if ( pixel_c_15 == true ) {
					ui->frame_c_15->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_c_15 = false;
				}
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
				if ( pixel_d_10 == true ) {
					ui->frame_d_10->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_d_10 = false;
				}
				break;

			case 1:
				if ( pixel_d_11 == true ) {
					ui->frame_d_11->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_d_11 = false;
				}
				break;

			case 2:
				if ( pixel_d_12 == true ) {
					ui->frame_d_12->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_d_12 = false;
				}
				break;

			case 3:
				if ( pixel_d_13 == true ) {
					ui->frame_d_13->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_d_13 = false;
				}
				break;

			case 4:
				if ( pixel_d_14 == true ) {
					ui->frame_d_14->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_d_14 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				if ( pixel_d_05 == true ) {
					ui->frame_d_05->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_d_05 = false;
				}
				break;

			case 1:
				if ( pixel_d_06 == true ) {
					ui->frame_d_06->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_d_06 = false;
				}
				break;

			case 2:
				if ( pixel_d_07 == true ) {
					ui->frame_d_07->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_d_07 = false;
				}
				break;

			case 3:
				if ( pixel_d_08 == true ) {
					ui->frame_d_08->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_d_08 = false;
				}
				break;

			case 4:
				if ( pixel_d_09 == true ) {
					ui->frame_d_09->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_d_09 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				if ( pixel_d_00 == true ) {
					ui->frame_d_00->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_d_00 = false;
				}
				break;

			case 1:
				if ( pixel_d_01 == true ) {
					ui->frame_d_01->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_d_01 = false;
				}
				break;

			case 2:
				if ( pixel_d_02 == true ) {
					ui->frame_d_02->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_d_02 = false;
				}
				break;

			case 3:
				if ( pixel_d_03 == true ) {
					ui->frame_d_03->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_d_03 = false;
				}
				break;

			case 4:
				if ( pixel_d_04 == true ) {
					ui->frame_d_04->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_d_04 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				if ( pixel_d_15 == true ) {
					ui->frame_d_15->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_d_15 = false;
				}
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
				if ( pixel_e_10 == true ) {
					ui->frame_e_10->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_e_10 = false;
				}
				break;

			case 1:
				if ( pixel_e_11 == true ) {
					ui->frame_e_11->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_e_11 = false;
				}
				break;

			case 2:
				if ( pixel_e_12 == true ) {
					ui->frame_e_12->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_e_12 = false;
				}
				break;

			case 3:
				if ( pixel_e_13 == true ) {
					ui->frame_e_13->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_e_13 = false;
				}
				break;

			case 4:
				if ( pixel_e_14 == true ) {
					ui->frame_e_14->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_e_14 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				if ( pixel_e_05 == true ) {
					ui->frame_e_05->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_e_05 = false;
				}
				break;

			case 1:
				if ( pixel_e_06 == true ) {
					ui->frame_e_06->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_e_06 = false;
				}
				break;

			case 2:
				if ( pixel_e_07 == true ) {
					ui->frame_e_07->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_e_07 = false;
				}
				break;

			case 3:
				if ( pixel_e_08 == true ) {
					ui->frame_e_08->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_e_08 = false;
				}
				break;

			case 4:
				if ( pixel_e_09 == true ) {
					ui->frame_e_09->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_e_09 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				if ( pixel_e_00 == true ) {
					ui->frame_e_00->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_e_00 = false;
				}
				break;

			case 1:
				if ( pixel_e_01 == true ) {
					ui->frame_e_01->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_e_01 = false;
				}
				break;

			case 2:
				if ( pixel_e_02 == true ) {
					ui->frame_e_02->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_e_02 = false;
				}
				break;

			case 3:
				if ( pixel_e_03 == true ) {
					ui->frame_e_03->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_e_03 = false;
				}
				break;

			case 4:
				if ( pixel_e_04 == true ) {
					ui->frame_e_04->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_e_04 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				if ( pixel_e_15 == true ) {
					ui->frame_e_15->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_e_15 = false;
				}
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
				if ( pixel_f_10 == true ) {
					ui->frame_f_10->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_f_10 = false;
				}
				break;

			case 1:
				if ( pixel_f_11 == true ) {
					ui->frame_f_11->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_f_11 = false;
				}
				break;

			case 2:
				if ( pixel_f_12 == true ) {
					ui->frame_f_12->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_f_12 = false;
				}
				break;

			case 3:
				if ( pixel_f_13 == true ) {
					ui->frame_f_13->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_f_13 = false;
				}
				break;

			case 4:
				if ( pixel_f_14 == true ) {
					ui->frame_f_14->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_f_14 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 1:
			switch (y) {
			case 0:
				if ( pixel_f_05 == true ) {
					ui->frame_f_05->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_f_05 = false;
				}
				break;

			case 1:
				if ( pixel_f_06 == true ) {
					ui->frame_f_06->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_f_06 = false;
				}
				break;

			case 2:
				if ( pixel_f_07 == true ) {
					ui->frame_f_07->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_f_07 = false;
				}
				break;

			case 3:
				if ( pixel_f_08 == true ) {
					ui->frame_f_08->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_f_08 = false;
				}
				break;

			case 4:
				if ( pixel_f_09 == true ) {
					ui->frame_f_09->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_f_09 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 2:
			switch (y) {
			case 0:
				if ( pixel_f_00 == true ) {
					ui->frame_f_00->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_f_00 = false;
				}
				break;

			case 1:
				if ( pixel_f_01 == true ) {
					ui->frame_f_01->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_f_01 = false;
				}
				break;

			case 2:
				if ( pixel_f_02 == true ) {
					ui->frame_f_02->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_f_02 = false;
				}
				break;

			case 3:
				if ( pixel_f_03 == true ) {
					ui->frame_f_03->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_f_03 = false;
				}
				break;

			case 4:
				if ( pixel_f_04 == true ) {
					ui->frame_f_04->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_f_04 = false;
				}
				break;

			default:
				ui->label->setText("no Point");
				break;
			}
			break;

		case 3:
			switch (y) {
			case 6:
				if ( pixel_f_15 == true ) {
					ui->frame_f_15->setStyleSheet(QString::fromUtf8("background-color: rgb195, 195, 195);"));
					pixel_f_15 = false;
				}
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

void Display::DisplayDigit()
{
	uint8_t xPos = 0;
	uint8_t andOperator = 1;
	const uint8_t andOperator_127 = 127;

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
	for (uint8_t i = 0; i < 16; i++) {
		if (dispBuffer_Test[i] != dispBuffer_new[i]) {
			change_test = true;
		}
		dispBuffer_Test[i] = dispBuffer_new[i];
		dispBuffer[i] = dispBuffer_new[i];
	}

	if (change_test == true) {
		myK1003->stop_CPU();
		DisplayDigit();
		myK1003->reStart_CPU();
	}
	change_test = false;	
}

void Display::KeyPressed(uint8_t KeyNumber_m)
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(KeyNumber_m);  //  o.k.
	}
}
/*
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

void Display::digitClicked_0() {
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(90); // o.k.
	}
	else {
		// myCalculator->digitClicked(0);
	}
}

void Display::digitClicked_1() {
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(77); // o.k.
	}
	else {
		// myCalculator->digitClicked(1);
	}
}

void Display::digitClicked_2() {
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(78); // o.k.
	}
	else {
		// myCalculator->digitClicked(2);
	}
}

void Display::digitClicked_3() {
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(79); // o.k.
	}
	else {
		// myCalculator->digitClicked(3);
	}
}

void Display::digitClicked_4() {
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
*/
void Display::clear()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(41); // o.k.
		// _sleep(2);
	}
	/*
	else {
		// myCalculator->clear();
	}
	*/
	
}
/*
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
*/
void Display::InitProcessor()
{
	myK1003->InitProcessor();
}

void Display::stop_CPU()
{
	myK1003->stop_CPU();
	clearPointAll();

	for (uint8_t i = 0; i < 16; i++) {
		dispBuffer_Test[i] = 0;
	}
}

void Display::reStart_CPU()
{
	myK1003->reStart_CPU();
}