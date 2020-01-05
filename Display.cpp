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
					ui->frame_0_10->setAutoFillBackground(true);
					pixel_0_10 = true;
				}
				break;

			case 1:
				if ( pixel_0_11 == false ) {
					ui->frame_0_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_0_11->setAutoFillBackground(true);
					pixel_0_11 = true;
				}
				break;

			case 2:
				if ( pixel_0_12 == false ) {
					ui->frame_0_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_0_12->setAutoFillBackground(true);
					pixel_0_12 = true;
				}
				break;

			case 3:
				if ( pixel_0_13 == false ) {
					ui->frame_0_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_0_13->setAutoFillBackground(true);
					pixel_0_13 = true;
				}
				break;

			case 4:
				if ( pixel_0_14 == false ) {
					ui->frame_0_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_0_14->setAutoFillBackground(true);
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
					ui->frame_0_05->setAutoFillBackground(true);
					pixel_0_05 = true;
				}
				break;

			case 1:
				if ( pixel_0_06 == false ) {
					ui->frame_0_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_0_06->setAutoFillBackground(true);
					pixel_0_06 = true;
				}
				break;

			case 2:
				if ( pixel_0_07 == false ) {
					ui->frame_0_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_0_07->setAutoFillBackground(true);
					pixel_0_07 = true;
				}
				break;

			case 3:
				if ( pixel_0_08 == false ) {
					ui->frame_0_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_0_08->setAutoFillBackground(true);
					pixel_0_08 = true;
				}
				break;

			case 4:
				if ( pixel_0_09 == false ) {
					ui->frame_0_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_0_09->setAutoFillBackground(true);
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
					ui->frame_0_00->setAutoFillBackground(true);
					pixel_0_00 = true;
				}
				break;

			case 1:
				if ( pixel_0_01 == false ) {
					ui->frame_0_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_0_01->setAutoFillBackground(true);
					pixel_0_01 = true;
				}
				break;

			case 2:
				if ( pixel_0_02 == false ) {
					ui->frame_0_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_0_02->setAutoFillBackground(true);
					pixel_0_02 = true;
				}
				break;

			case 3:
				if ( pixel_0_03 == false ) {
					ui->frame_0_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_0_03->setAutoFillBackground(true);
					pixel_0_03 = true;
				}
				break;

			case 4:
				if ( pixel_0_04 == false ) {
					ui->frame_0_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_0_04->setAutoFillBackground(true);
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
					ui->frame_0_15->setAutoFillBackground(true);
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
					ui->frame_1_10->setAutoFillBackground(true);
					pixel_1_10 = true;
				}
				break;

			case 1:
				if ( pixel_1_11 == false ) {
					ui->frame_1_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_1_11->setAutoFillBackground(true);
					pixel_1_11 = true;
				}
				break;

			case 2:
				if ( pixel_1_12 == false ) {
					ui->frame_1_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_1_12->setAutoFillBackground(true);
					pixel_1_12 = true;
				}
				break;

			case 3:
				if ( pixel_1_13 == false ) {
					ui->frame_1_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_1_13->setAutoFillBackground(true);
					pixel_1_13 = true;
				}
				break;

			case 4:
				if ( pixel_1_14 == false ) {
					ui->frame_1_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_1_14->setAutoFillBackground(true);
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
					ui->frame_1_05->setAutoFillBackground(true);
					pixel_1_05 = true;
				}
				break;

			case 1:
				if ( pixel_1_06 == false ) {
					ui->frame_1_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_1_06->setAutoFillBackground(true);
					pixel_1_06 = true;
				}
				break;

			case 2:
				if ( pixel_1_07 == false ) {
					ui->frame_1_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_1_07->setAutoFillBackground(true);
					pixel_1_07 = true;
				}
				break;

			case 3:
				if ( pixel_1_08 == false ) {
					ui->frame_1_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_1_08->setAutoFillBackground(true);
					pixel_1_08 = true;
				}
				break;

			case 4:
				if ( pixel_1_09 == false ) {
					ui->frame_1_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_1_09->setAutoFillBackground(true);
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
					ui->frame_1_00->setAutoFillBackground(true);
					pixel_1_00 = true;
				}
				break;

			case 1:
				if ( pixel_1_01 == false ) {
					ui->frame_1_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_1_01->setAutoFillBackground(true);
					pixel_1_01 = true;
				}
				break;

			case 2:
				if ( pixel_1_02 == false ) {
					ui->frame_1_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_1_02->setAutoFillBackground(true);
					pixel_1_02 = true;
				}
				break;

			case 3:
				if ( pixel_1_03 == false ) {
					ui->frame_1_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_1_03->setAutoFillBackground(true);
					pixel_1_03 = true;
				}
				break;

			case 4:
				if ( pixel_1_04 == false ) {
					ui->frame_1_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_1_04->setAutoFillBackground(true);
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
					ui->frame_1_15->setAutoFillBackground(true);
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
					ui->frame_2_10->setAutoFillBackground(true);
					pixel_2_10 = true;
				}
				break;

			case 1:
				if ( pixel_2_11 == false ) {
					ui->frame_2_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_2_11->setAutoFillBackground(true);
					pixel_2_11 = true;
				}
				break;

			case 2:
				if ( pixel_2_12 == false ) {
					ui->frame_2_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_2_12->setAutoFillBackground(true);
					pixel_2_12 = true;
				}
				break;

			case 3:
				if ( pixel_2_13 == false ) {
					ui->frame_2_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_2_13->setAutoFillBackground(true);
					pixel_2_13 = true;
				}
				break;

			case 4:
				if ( pixel_2_14 == false ) {
					ui->frame_2_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_2_14->setAutoFillBackground(true);
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
					ui->frame_2_05->setAutoFillBackground(true);
					pixel_2_05 = true;
				}
				break;

			case 1:
				if ( pixel_2_06 == false ) {
					ui->frame_2_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_2_06->setAutoFillBackground(true);
					pixel_2_06 = true;
				}
				break;

			case 2:
				if ( pixel_2_07 == false ) {
					ui->frame_2_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_2_07->setAutoFillBackground(true);
					pixel_2_07 = true;
				}
				break;

			case 3:
				if ( pixel_2_08 == false ) {
					ui->frame_2_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_2_08->setAutoFillBackground(true);
					pixel_2_08 = true;
				}
				break;

			case 4:
				if ( pixel_2_09 == false ) {
					ui->frame_2_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_2_09->setAutoFillBackground(true);
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
					ui->frame_2_00->setAutoFillBackground(true);
					pixel_2_00 = true;
				}
				break;

			case 1:
				if ( pixel_2_01 == false ) {
					ui->frame_2_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_2_01->setAutoFillBackground(true);
					pixel_2_01 = true;
				}
				break;

			case 2:
				if ( pixel_2_02 == false ) {
					ui->frame_2_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_2_02->setAutoFillBackground(true);
					pixel_2_02 = true;
				}
				break;

			case 3:
				if ( pixel_2_03 == false ) {
					ui->frame_2_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_2_03->setAutoFillBackground(true);
					pixel_2_03 = true;
				}
				break;

			case 4:
				if ( pixel_2_04 == false ) {
					ui->frame_2_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_2_04->setAutoFillBackground(true);
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
					ui->frame_2_15->setAutoFillBackground(true);
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
					ui->frame_3_10->setAutoFillBackground(true);
					pixel_3_10 = true;
				}
				break;

			case 1:
				if ( pixel_3_11 == false ) {
					ui->frame_3_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_3_11->setAutoFillBackground(true);
					pixel_3_11 = true;
				}
				break;

			case 2:
				if ( pixel_3_12 == false ) {
					ui->frame_3_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_3_12->setAutoFillBackground(true);
					pixel_3_12 = true;
				}
				break;

			case 3:
				if ( pixel_3_13 == false ) {
					ui->frame_3_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_3_13->setAutoFillBackground(true);
					pixel_3_13 = true;
				}
				break;

			case 4:
				if ( pixel_3_14 == false ) {
					ui->frame_3_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_3_14->setAutoFillBackground(true);
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
					ui->frame_3_05->setAutoFillBackground(true);
					pixel_3_05 = true;
				}
				break;

			case 1:
				if ( pixel_3_06 == false ) {
					ui->frame_3_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_3_06->setAutoFillBackground(true);
					pixel_3_06 = true;
				}
				break;

			case 2:
				if ( pixel_3_07 == false ) {
					ui->frame_3_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_3_07->setAutoFillBackground(true);
					pixel_3_07 = true;
				}
				break;

			case 3:
				if ( pixel_3_08 == false ) {
					ui->frame_3_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_3_08->setAutoFillBackground(true);
					pixel_3_08 = true;
				}
				break;

			case 4:
				if ( pixel_3_09 == false ) {
					ui->frame_3_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_3_09->setAutoFillBackground(true);
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
					ui->frame_3_00->setAutoFillBackground(true);
					pixel_3_00 = true;
				}
				break;

			case 1:
				if ( pixel_3_01 == false ) {
					ui->frame_3_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_3_01->setAutoFillBackground(true);
					pixel_3_01 = true;
				}
				break;

			case 2:
				if ( pixel_3_02 == false ) {
					ui->frame_3_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_3_02->setAutoFillBackground(true);
					pixel_3_02 = true;
				}
				break;

			case 3:
				if ( pixel_3_03 == false ) {
					ui->frame_3_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_3_03->setAutoFillBackground(true);
					pixel_3_03 = true;
				}
				break;

			case 4:
				if ( pixel_3_04 == false ) {
					ui->frame_3_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_3_04->setAutoFillBackground(true);
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
					ui->frame_3_15->setAutoFillBackground(true);
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
					ui->frame_4_10->setAutoFillBackground(true);
					pixel_4_10 = true;
				}
				break;

			case 1:
				if ( pixel_4_11 == false ) {
					ui->frame_4_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_4_11->setAutoFillBackground(true);
					pixel_4_11 = true;
				}
				break;

			case 2:
				if ( pixel_4_12 == false ) {
					ui->frame_4_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_4_12->setAutoFillBackground(true);
					pixel_4_12 = true;
				}
				break;

			case 3:
				if ( pixel_4_13 == false ) {
					ui->frame_4_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_4_13->setAutoFillBackground(true);
					pixel_4_13 = true;
				}
				break;

			case 4:
				if ( pixel_4_14 == false ) {
					ui->frame_4_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_4_14->setAutoFillBackground(true);
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
					ui->frame_4_05->setAutoFillBackground(true);
					pixel_4_05 = true;
				}
				break;

			case 1:
				if ( pixel_4_06 == false ) {
					ui->frame_4_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_4_06->setAutoFillBackground(true);
					pixel_4_06 = true;
				}
				break;

			case 2:
				if ( pixel_4_07 == false ) {
					ui->frame_4_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_4_07->setAutoFillBackground(true);
					pixel_4_07 = true;
				}
				break;

			case 3:
				if ( pixel_4_08 == false ) {
					ui->frame_4_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_4_08->setAutoFillBackground(true);
					pixel_4_08 = true;
				}
				break;

			case 4:
				if ( pixel_4_09 == false ) {
					ui->frame_4_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_4_09->setAutoFillBackground(true);
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
					ui->frame_4_00->setAutoFillBackground(true);
					pixel_4_00 = true;
				}
				break;

			case 1:
				if ( pixel_4_01 == false ) {
					ui->frame_4_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_4_01->setAutoFillBackground(true);
					pixel_4_01 = true;
				}
				break;

			case 2:
				if ( pixel_4_02 == false ) {
					ui->frame_4_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_4_02->setAutoFillBackground(true);
					pixel_4_02 = true;
				}
				break;

			case 3:
				if ( pixel_4_03 == false ) {
					ui->frame_4_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_4_03->setAutoFillBackground(true);
					pixel_4_03 = true;
				}
				break;

			case 4:
				if ( pixel_4_04 == false ) {
					ui->frame_4_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_4_04->setAutoFillBackground(true);
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
					ui->frame_4_15->setAutoFillBackground(true);
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
					ui->frame_5_10->setAutoFillBackground(true);
					pixel_5_10 = true;
				}
				break;

			case 1:
				if ( pixel_5_11 == false ) {
					ui->frame_5_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_5_11->setAutoFillBackground(true);
					pixel_5_11 = true;
				}
				break;

			case 2:
				if ( pixel_5_12 == false ) {
					ui->frame_5_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_5_12->setAutoFillBackground(true);
					pixel_5_12 = true;
				}
				break;

			case 3:
				if ( pixel_5_13 == false ) {
					ui->frame_5_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_5_13->setAutoFillBackground(true);
					pixel_5_13 = true;
				}
				break;

			case 4:
				if ( pixel_5_14 == false ) {
					ui->frame_5_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_5_14->setAutoFillBackground(true);
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
					ui->frame_5_05->setAutoFillBackground(true);
					pixel_5_05 = true;
				}
				break;

			case 1:
				if ( pixel_5_06 == false ) {
					ui->frame_5_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_5_06->setAutoFillBackground(true);
					pixel_5_06 = true;
				}
				break;

			case 2:
				if ( pixel_5_07 == false ) {
					ui->frame_5_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_5_07->setAutoFillBackground(true);
					pixel_5_07 = true;
				}
				break;

			case 3:
				if ( pixel_5_08 == false ) {
					ui->frame_5_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_5_08->setAutoFillBackground(true);
					pixel_5_08 = true;
				}
				break;

			case 4:
				if ( pixel_5_09 == false ) {
					ui->frame_5_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_5_09->setAutoFillBackground(true);
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
					ui->frame_5_00->setAutoFillBackground(true);
					pixel_5_00 = true;
				}
				break;

			case 1:
				if ( pixel_5_01 == false ) {
					ui->frame_5_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_5_01->setAutoFillBackground(true);
					pixel_5_01 = true;
				}
				break;

			case 2:
				if ( pixel_5_02 == false ) {
					ui->frame_5_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_5_02->setAutoFillBackground(true);
					pixel_5_02 = true;
				}
				break;

			case 3:
				if ( pixel_5_03 == false ) {
					ui->frame_5_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_5_03->setAutoFillBackground(true);
					pixel_5_03 = true;
				}
				break;

			case 4:
				if ( pixel_5_04 == false ) {
					ui->frame_5_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_5_04->setAutoFillBackground(true);
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
					ui->frame_5_15->setAutoFillBackground(true);
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
					ui->frame_6_10->setAutoFillBackground(true);
					pixel_6_10 = true;
				}
				break;

			case 1:
				if ( pixel_6_11 == false ) {
					ui->frame_6_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_6_11->setAutoFillBackground(true);
					pixel_6_11 = true;
				}
				break;

			case 2:
				if ( pixel_6_12 == false ) {
					ui->frame_6_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_6_12->setAutoFillBackground(true);
					pixel_6_12 = true;
				}
				break;

			case 3:
				if ( pixel_6_13 == false ) {
					ui->frame_6_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_6_13->setAutoFillBackground(true);
					pixel_6_13 = true;
				}
				break;

			case 4:
				if ( pixel_6_14 == false ) {
					ui->frame_6_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_6_14->setAutoFillBackground(true);
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
					ui->frame_6_05->setAutoFillBackground(true);
					pixel_6_05 = true;
				}
				break;

			case 1:
				if ( pixel_6_06 == false ) {
					ui->frame_6_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_6_06->setAutoFillBackground(true);
					pixel_6_06 = true;
				}
				break;

			case 2:
				if ( pixel_6_07 == false ) {
					ui->frame_6_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_6_07->setAutoFillBackground(true);
					pixel_6_07 = true;
				}
				break;

			case 3:
				if ( pixel_6_08 == false ) {
					ui->frame_6_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_6_08->setAutoFillBackground(true);
					pixel_6_08 = true;
				}
				break;

			case 4:
				if ( pixel_6_09 == false ) {
					ui->frame_6_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_6_09->setAutoFillBackground(true);
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
					ui->frame_6_00->setAutoFillBackground(true);
					pixel_6_00 = true;
				}
				break;

			case 1:
				if ( pixel_6_01 == false ) {
					ui->frame_6_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_6_01->setAutoFillBackground(true);
					pixel_6_01 = true;
				}
				break;

			case 2:
				if ( pixel_6_02 == false ) {
					ui->frame_6_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_6_02->setAutoFillBackground(true);
					pixel_6_02 = true;
				}
				break;

			case 3:
				if ( pixel_6_03 == false ) {
					ui->frame_6_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_6_03->setAutoFillBackground(true);
					pixel_6_03 = true;
				}
				break;

			case 4:
				if ( pixel_6_04 == false ) {
					ui->frame_6_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_6_04->setAutoFillBackground(true);
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
					ui->frame_6_15->setAutoFillBackground(true);
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
					ui->frame_7_10->setAutoFillBackground(true);
					pixel_7_10 = true;
				}
				break;

			case 1:
				if ( pixel_7_11 == false ) {
					ui->frame_7_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_7_11->setAutoFillBackground(true);
					pixel_7_11 = true;
				}
				break;

			case 2:
				if ( pixel_7_12 == false ) {
					ui->frame_7_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_7_12->setAutoFillBackground(true);
					pixel_7_12 = true;
				}
				break;

			case 3:
				if ( pixel_7_13 == false ) {
					ui->frame_7_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_7_13->setAutoFillBackground(true);
					pixel_7_13 = true;
				}
				break;

			case 4:
				if ( pixel_7_14 == false ) {
					ui->frame_7_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_7_14->setAutoFillBackground(true);
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
					ui->frame_7_05->setAutoFillBackground(true);
					pixel_7_05 = true;
				}
				break;

			case 1:
				if ( pixel_7_06 == false ) {
					ui->frame_7_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_7_06->setAutoFillBackground(true);
					pixel_7_06 = true;
				}
				break;

			case 2:
				if ( pixel_7_07 == false ) {
					ui->frame_7_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_7_07->setAutoFillBackground(true);
					pixel_7_07 = true;
				}
				break;

			case 3:
				if ( pixel_7_08 == false ) {
					ui->frame_7_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_7_08->setAutoFillBackground(true);
					pixel_7_08 = true;
				}
				break;

			case 4:
				if ( pixel_7_09 == false ) {
					ui->frame_7_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_7_09->setAutoFillBackground(true);
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
					ui->frame_7_00->setAutoFillBackground(true);
					pixel_7_00 = true;
				}
				break;

			case 1:
				if ( pixel_7_01 == false ) {
					ui->frame_7_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_7_01->setAutoFillBackground(true);
					pixel_7_01 = true;
				}
				break;

			case 2:
				if ( pixel_7_02 == false ) {
					ui->frame_7_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_7_02->setAutoFillBackground(true);
					pixel_7_02 = true;
				}
				break;

			case 3:
				if ( pixel_7_03 == false ) {
					ui->frame_7_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_7_03->setAutoFillBackground(true);
					pixel_7_03 = true;
				}
				break;

			case 4:
				if ( pixel_7_04 == false ) {
					ui->frame_7_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_7_04->setAutoFillBackground(true);
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
					ui->frame_7_15->setAutoFillBackground(true);
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
					ui->frame_8_10->setAutoFillBackground(true);
					pixel_8_10 = true;
				}
				break;

			case 1:
				if ( pixel_8_11 == false ) {
					ui->frame_8_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_8_11->setAutoFillBackground(true);
					pixel_8_11 = true;
				}
				break;

			case 2:
				if ( pixel_8_12 == false ) {
					ui->frame_8_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_8_12->setAutoFillBackground(true);
					pixel_8_12 = true;
				}
				break;

			case 3:
				if ( pixel_8_13 == false ) {
					ui->frame_8_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_8_13->setAutoFillBackground(true);
					pixel_8_13 = true;
				}
				break;

			case 4:
				if ( pixel_8_14 == false ) {
					ui->frame_8_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_8_14->setAutoFillBackground(true);
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
					ui->frame_8_05->setAutoFillBackground(true);
					pixel_8_05 = true;
				}
				break;

			case 1:
				if ( pixel_8_06 == false ) {
					ui->frame_8_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_8_06->setAutoFillBackground(true);
					pixel_8_06 = true;
				}
				break;

			case 2:
				if ( pixel_8_07 == false ) {
					ui->frame_8_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_8_07->setAutoFillBackground(true);
					pixel_8_07 = true;
				}
				break;

			case 3:
				if ( pixel_8_08 == false ) {
					ui->frame_8_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_8_08->setAutoFillBackground(true);
					pixel_8_08 = true;
				}
				break;

			case 4:
				if ( pixel_8_09 == false ) {
					ui->frame_8_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_8_09->setAutoFillBackground(true);
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
					ui->frame_8_00->setAutoFillBackground(true);
					pixel_8_00 = true;
				}
				break;

			case 1:
				if ( pixel_8_01 == false ) {
					ui->frame_8_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_8_01->setAutoFillBackground(true);
					pixel_8_01 = true;
				}
				break;

			case 2:
				if ( pixel_8_02 == false ) {
					ui->frame_8_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_8_02->setAutoFillBackground(true);
					pixel_8_02 = true;
				}
				break;

			case 3:
				if ( pixel_8_03 == false ) {
					ui->frame_8_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_8_03->setAutoFillBackground(true);
					pixel_8_03 = true;
				}
				break;

			case 4:
				if ( pixel_8_04 == false ) {
					ui->frame_8_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_8_04->setAutoFillBackground(true);
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
					ui->frame_8_15->setAutoFillBackground(true);
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
					ui->frame_9_10->setAutoFillBackground(true);
					pixel_9_10 = true;
				}
				break;

			case 1:
				if ( pixel_9_11 == false ) {
					ui->frame_9_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_9_11->setAutoFillBackground(true);
					pixel_9_11 = true;
				}
				break;

			case 2:
				if ( pixel_9_12 == false ) {
					ui->frame_9_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_9_12->setAutoFillBackground(true);
					pixel_9_12 = true;
				}
				break;

			case 3:
				if ( pixel_9_13 == false ) {
					ui->frame_9_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_9_13->setAutoFillBackground(true);
					pixel_9_13 = true;
				}
				break;

			case 4:
				if ( pixel_9_14 == false ) {
					ui->frame_9_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_9_14->setAutoFillBackground(true);
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
					ui->frame_9_05->setAutoFillBackground(true);
					pixel_9_05 = true;
				}
				break;

			case 1:
				if ( pixel_9_06 == false ) {
					ui->frame_9_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_9_06->setAutoFillBackground(true);
					pixel_9_06 = true;
				}
				break;

			case 2:
				if ( pixel_9_07 == false ) {
					ui->frame_9_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_9_07->setAutoFillBackground(true);
					pixel_9_07 = true;
				}
				break;

			case 3:
				if ( pixel_9_08 == false ) {
					ui->frame_9_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_9_08->setAutoFillBackground(true);
					pixel_9_08 = true;
				}
				break;

			case 4:
				if ( pixel_9_09 == false ) {
					ui->frame_9_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_9_09->setAutoFillBackground(true);
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
					ui->frame_9_00->setAutoFillBackground(true);
					pixel_9_00 = true;
				}
				break;

			case 1:
				if ( pixel_9_01 == false ) {
					ui->frame_9_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_9_01->setAutoFillBackground(true);
					pixel_9_01 = true;
				}
				break;

			case 2:
				if ( pixel_9_02 == false ) {
					ui->frame_9_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_9_02->setAutoFillBackground(true);
					pixel_9_02 = true;
				}
				break;

			case 3:
				if ( pixel_9_03 == false ) {
					ui->frame_9_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_9_03->setAutoFillBackground(true);
					pixel_9_03 = true;
				}
				break;

			case 4:
				if ( pixel_9_04 == false ) {
					ui->frame_9_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_9_04->setAutoFillBackground(true);
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
					ui->frame_9_15->setAutoFillBackground(true);
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
					ui->frame_a_10->setAutoFillBackground(true);
					pixel_a_10 = true;
				}
				break;

			case 1:
				if ( pixel_a_11 == false ) {
					ui->frame_a_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_a_11->setAutoFillBackground(true);
					pixel_a_11 = true;
				}
				break;

			case 2:
				if ( pixel_a_12 == false ) {
					ui->frame_a_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_a_12->setAutoFillBackground(true);
					pixel_a_12 = true;
				}
				break;

			case 3:
				if ( pixel_a_13 == false ) {
					ui->frame_a_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_a_13->setAutoFillBackground(true);
					pixel_a_13 = true;
				}
				break;

			case 4:
				if ( pixel_a_14 == false ) {
					ui->frame_a_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_a_14->setAutoFillBackground(true);
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
					ui->frame_a_05->setAutoFillBackground(true);
					pixel_a_05 = true;
				}
				break;

			case 1:
				if ( pixel_a_06 == false ) {
					ui->frame_a_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_a_06->setAutoFillBackground(true);
					pixel_a_06 = true;
				}
				break;

			case 2:
				if ( pixel_a_07 == false ) {
					ui->frame_a_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_a_07->setAutoFillBackground(true);
					pixel_a_07 = true;
				}
				break;

			case 3:
				if ( pixel_a_08 == false ) {
					ui->frame_a_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_a_08->setAutoFillBackground(true);
					pixel_a_08 = true;
				}
				break;

			case 4:
				if ( pixel_a_09 == false ) {
					ui->frame_a_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_a_09->setAutoFillBackground(true);
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
					ui->frame_a_00->setAutoFillBackground(true);
					pixel_a_00 = true;
				}
				break;

			case 1:
				if ( pixel_a_01 == false ) {
					ui->frame_a_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_a_01->setAutoFillBackground(true);
					pixel_a_01 = true;
				}
				break;

			case 2:
				if ( pixel_a_02 == false ) {
					ui->frame_a_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_a_02->setAutoFillBackground(true);
					pixel_a_02 = true;
				}
				break;

			case 3:
				if ( pixel_a_03 == false ) {
					ui->frame_a_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_a_03->setAutoFillBackground(true);
					pixel_a_03 = true;
				}
				break;

			case 4:
				if ( pixel_a_04 == false ) {
					ui->frame_a_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_a_04->setAutoFillBackground(true);
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
					ui->frame_a_15->setAutoFillBackground(true);
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
					ui->frame_b_10->setAutoFillBackground(true);
					pixel_b_10 = true;
				}
				break;

			case 1:
				if ( pixel_b_11 == false ) {
					ui->frame_b_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_b_11->setAutoFillBackground(true);
					pixel_b_11 = true;
				}
				break;

			case 2:
				if ( pixel_b_12 == false ) {
					ui->frame_b_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_b_12->setAutoFillBackground(true);
					pixel_b_12 = true;
				}
				break;

			case 3:
				if ( pixel_b_13 == false ) {
					ui->frame_b_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_b_13->setAutoFillBackground(true);
					pixel_b_13 = true;
				}
				break;

			case 4:
				if ( pixel_b_14 == false ) {
					ui->frame_b_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_b_14->setAutoFillBackground(true);
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
					ui->frame_b_05->setAutoFillBackground(true);
					pixel_b_05 = true;
				}
				break;

			case 1:
				if ( pixel_b_06 == false ) {
					ui->frame_b_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_b_06->setAutoFillBackground(true);
					pixel_b_06 = true;
				}
				break;

			case 2:
				if ( pixel_b_07 == false ) {
					ui->frame_b_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_b_07->setAutoFillBackground(true);
					pixel_b_07 = true;
				}
				break;

			case 3:
				if ( pixel_b_08 == false ) {
					ui->frame_b_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_b_08->setAutoFillBackground(true);
					pixel_b_08 = true;
				}
				break;

			case 4:
				if ( pixel_b_09 == false ) {
					ui->frame_b_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_b_09->setAutoFillBackground(true);
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
					ui->frame_b_00->setAutoFillBackground(true);
					pixel_b_00 = true;
				}
				break;

			case 1:
				if ( pixel_b_01 == false ) {
					ui->frame_b_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_b_01->setAutoFillBackground(true);
					pixel_b_01 = true;
				}
				break;

			case 2:
				if ( pixel_b_02 == false ) {
					ui->frame_b_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_b_02->setAutoFillBackground(true);
					pixel_b_02 = true;
				}
				break;

			case 3:
				if ( pixel_b_03 == false ) {
					ui->frame_b_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_b_03->setAutoFillBackground(true);
					pixel_b_03 = true;
				}
				break;

			case 4:
				if ( pixel_b_04 == false ) {
					ui->frame_b_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_b_04->setAutoFillBackground(true);
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
					ui->frame_b_15->setAutoFillBackground(true);
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
					ui->frame_c_10->setAutoFillBackground(true);
					pixel_c_10 = true;
				}
				break;

			case 1:
				if ( pixel_c_11 == false ) {
					ui->frame_c_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_c_11->setAutoFillBackground(true);
					pixel_c_11 = true;
				}
				break;

			case 2:
				if ( pixel_c_12 == false ) {
					ui->frame_c_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_c_12->setAutoFillBackground(true);
					pixel_c_12 = true;
				}
				break;

			case 3:
				if ( pixel_c_13 == false ) {
					ui->frame_c_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_c_13->setAutoFillBackground(true);
					pixel_c_13 = true;
				}
				break;

			case 4:
				if ( pixel_c_14 == false ) {
					ui->frame_c_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_c_14->setAutoFillBackground(true);
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
					ui->frame_c_05->setAutoFillBackground(true);
					pixel_c_05 = true;
				}
				break;

			case 1:
				if ( pixel_c_06 == false ) {
					ui->frame_c_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_c_06->setAutoFillBackground(true);
					pixel_c_06 = true;
				}
				break;

			case 2:
				if ( pixel_c_07 == false ) {
					ui->frame_c_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_c_07->setAutoFillBackground(true);
					pixel_c_07 = true;
				}
				break;

			case 3:
				if ( pixel_c_08 == false ) {
					ui->frame_c_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_c_08->setAutoFillBackground(true);
					pixel_c_08 = true;
				}
				break;

			case 4:
				if ( pixel_c_09 == false ) {
					ui->frame_c_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_c_09->setAutoFillBackground(true);
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
					ui->frame_c_00->setAutoFillBackground(true);
					pixel_c_00 = true;
				}
				break;

			case 1:
				if ( pixel_c_01 == false ) {
					ui->frame_c_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_c_01->setAutoFillBackground(true);
					pixel_c_01 = true;
				}
				break;

			case 2:
				if ( pixel_c_02 == false ) {
					ui->frame_c_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_c_02->setAutoFillBackground(true);
					pixel_c_02 = true;
				}
				break;

			case 3:
				if ( pixel_c_03 == false ) {
					ui->frame_c_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_c_03->setAutoFillBackground(true);
					pixel_c_03 = true;
				}
				break;

			case 4:
				if ( pixel_c_04 == false ) {
					ui->frame_c_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_c_04->setAutoFillBackground(true);
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
					ui->frame_c_15->setAutoFillBackground(true);
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
					ui->frame_d_10->setAutoFillBackground(true);
					pixel_d_10 = true;
				}
				break;

			case 1:
				if ( pixel_d_11 == false ) {
					ui->frame_d_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_d_11->setAutoFillBackground(true);
					pixel_d_11 = true;
				}
				break;

			case 2:
				if ( pixel_d_12 == false ) {
					ui->frame_d_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_d_12->setAutoFillBackground(true);
					pixel_d_12 = true;
				}
				break;

			case 3:
				if ( pixel_d_13 == false ) {
					ui->frame_d_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_d_13->setAutoFillBackground(true);
					pixel_d_13 = true;
				}
				break;

			case 4:
				if ( pixel_d_14 == false ) {
					ui->frame_d_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_d_14->setAutoFillBackground(true);
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
					ui->frame_d_05->setAutoFillBackground(true);
					pixel_d_05 = true;
				}
				break;

			case 1:
				if ( pixel_d_06 == false ) {
					ui->frame_d_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_d_06->setAutoFillBackground(true);
					pixel_d_06 = true;
				}
				break;

			case 2:
				if ( pixel_d_07 == false ) {
					ui->frame_d_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_d_07->setAutoFillBackground(true);
					pixel_d_07 = true;
				}
				break;

			case 3:
				if ( pixel_d_08 == false ) {
					ui->frame_d_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_d_08->setAutoFillBackground(true);
					pixel_d_08 = true;
				}
				break;

			case 4:
				if ( pixel_d_09 == false ) {
					ui->frame_d_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_d_09->setAutoFillBackground(true);
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
					ui->frame_d_00->setAutoFillBackground(true);
					pixel_d_00 = true;
				}
				break;

			case 1:
				if ( pixel_d_01 == false ) {
					ui->frame_d_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_d_01->setAutoFillBackground(true);
					pixel_d_01 = true;
				}
				break;

			case 2:
				if ( pixel_d_02 == false ) {
					ui->frame_d_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_d_02->setAutoFillBackground(true);
					pixel_d_02 = true;
				}
				break;

			case 3:
				if ( pixel_d_03 == false ) {
					ui->frame_d_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_d_03->setAutoFillBackground(true);
					pixel_d_03 = true;
				}
				break;

			case 4:
				if ( pixel_d_04 == false ) {
					ui->frame_d_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_d_04->setAutoFillBackground(true);
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
					ui->frame_d_15->setAutoFillBackground(true);
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
					ui->frame_e_10->setAutoFillBackground(true);
					pixel_e_10 = true;
				}
				break;

			case 1:
				if ( pixel_e_11 == false ) {
					ui->frame_e_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_e_11->setAutoFillBackground(true);
					pixel_e_11 = true;
				}
				break;

			case 2:
				if ( pixel_e_12 == false ) {
					ui->frame_e_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_e_12->setAutoFillBackground(true);
					pixel_e_12 = true;
				}
				break;

			case 3:
				if ( pixel_e_13 == false ) {
					ui->frame_e_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_e_13->setAutoFillBackground(true);
					pixel_e_13 = true;
				}
				break;

			case 4:
				if ( pixel_e_14 == false ) {
					ui->frame_e_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_e_14->setAutoFillBackground(true);
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
					ui->frame_e_05->setAutoFillBackground(true);
					pixel_e_05 = true;
				}
				break;

			case 1:
				if ( pixel_e_06 == false ) {
					ui->frame_e_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_e_06->setAutoFillBackground(true);
					pixel_e_06 = true;
				}
				break;

			case 2:
				if ( pixel_e_07 == false ) {
					ui->frame_e_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_e_07->setAutoFillBackground(true);
					pixel_e_07 = true;
				}
				break;

			case 3:
				if ( pixel_e_08 == false ) {
					ui->frame_e_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_e_08->setAutoFillBackground(true);
					pixel_e_08 = true;
				}
				break;

			case 4:
				if ( pixel_e_09 == false ) {
					ui->frame_e_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_e_09->setAutoFillBackground(true);
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
					ui->frame_e_00->setAutoFillBackground(true);
					pixel_e_00 = true;
				}
				break;

			case 1:
				if ( pixel_e_01 == false ) {
					ui->frame_e_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_e_01->setAutoFillBackground(true);
					pixel_e_01 = true;
				}
				break;

			case 2:
				if ( pixel_e_02 == false ) {
					ui->frame_e_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_e_02->setAutoFillBackground(true);
					pixel_e_02 = true;
				}
				break;

			case 3:
				if ( pixel_e_03 == false ) {
					ui->frame_e_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_e_03->setAutoFillBackground(true);
					pixel_e_03 = true;
				}
				break;

			case 4:
				if ( pixel_e_04 == false ) {
					ui->frame_e_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_e_04->setAutoFillBackground(true);
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
					ui->frame_e_15->setAutoFillBackground(true);
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
					ui->frame_f_10->setAutoFillBackground(true);
					pixel_f_10 = true;
				}
				break;

			case 1:
				if ( pixel_f_11 == false ) {
					ui->frame_f_11->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_f_11->setAutoFillBackground(true);
					pixel_f_11 = true;
				}
				break;

			case 2:
				if ( pixel_f_12 == false ) {
					ui->frame_f_12->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_f_12->setAutoFillBackground(true);
					pixel_f_12 = true;
				}
				break;

			case 3:
				if ( pixel_f_13 == false ) {
					ui->frame_f_13->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_f_13->setAutoFillBackground(true);
					pixel_f_13 = true;
				}
				break;

			case 4:
				if ( pixel_f_14 == false ) {
					ui->frame_f_14->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_f_14->setAutoFillBackground(true);
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
					ui->frame_f_05->setAutoFillBackground(true);
					pixel_f_05 = true;
				}
				break;

			case 1:
				if ( pixel_f_06 == false ) {
					ui->frame_f_06->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_f_06->setAutoFillBackground(true);
					pixel_f_06 = true;
				}
				break;

			case 2:
				if ( pixel_f_07 == false ) {
					ui->frame_f_07->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_f_07->setAutoFillBackground(true);
					pixel_f_07 = true;
				}
				break;

			case 3:
				if ( pixel_f_08 == false ) {
					ui->frame_f_08->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_f_08->setAutoFillBackground(true);
					pixel_f_08 = true;
				}
				break;

			case 4:
				if ( pixel_f_09 == false ) {
					ui->frame_f_09->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_f_09->setAutoFillBackground(true);
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
					ui->frame_f_00->setAutoFillBackground(true);
					pixel_f_00 = true;
				}
				break;

			case 1:
				if ( pixel_f_01 == false ) {
					ui->frame_f_01->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_f_01->setAutoFillBackground(true);
					pixel_f_01 = true;
				}
				break;

			case 2:
				if ( pixel_f_02 == false ) {
					ui->frame_f_02->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_f_02->setAutoFillBackground(true);
					pixel_f_02 = true;
				}
				break;

			case 3:
				if ( pixel_f_03 == false ) {
					ui->frame_f_03->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_f_03->setAutoFillBackground(true);
					pixel_f_03 = true;
				}
				break;

			case 4:
				if ( pixel_f_04 == false ) {
					ui->frame_f_04->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
					ui->frame_f_04->setAutoFillBackground(true);
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
					ui->frame_f_15->setAutoFillBackground(true);
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
					ui->frame_0_10->setObjectName(QString::fromUtf8("frame_0_10"));
					ui->frame_0_10->setGeometry(QRect(23, 20, 8, 8));
					ui->frame_0_10->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_0_10->setAutoFillBackground(true);
					ui->frame_0_10->setFrameShape(QFrame::StyledPanel);
					ui->frame_0_10->setFrameShadow(QFrame::Raised);
					pixel_0_10 = false;
				}
				break;

			case 1:
				if ( pixel_0_11 == true ) {
					ui->frame_0_11->setObjectName(QString::fromUtf8("frame_0_11"));
					ui->frame_0_11->setGeometry(QRect(23, 31, 8, 8));
					ui->frame_0_11->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_0_11->setAutoFillBackground(true);
					ui->frame_0_11->setFrameShape(QFrame::StyledPanel);
					ui->frame_0_11->setFrameShadow(QFrame::Raised);
					pixel_0_11 = false;
				}
				break;

			case 2:
				if ( pixel_0_12 == true ) {
					ui->frame_0_12->setObjectName(QString::fromUtf8("frame_0_12"));
					ui->frame_0_12->setGeometry(QRect(23, 42, 8, 8));
					ui->frame_0_12->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_0_12->setAutoFillBackground(true);
					ui->frame_0_12->setFrameShape(QFrame::StyledPanel);
					ui->frame_0_12->setFrameShadow(QFrame::Raised);
					pixel_0_12 = false;
				}
				break;

			case 3:
				if ( pixel_0_13 == true ) {
					ui->frame_0_13->setObjectName(QString::fromUtf8("frame_0_13"));
					ui->frame_0_13->setGeometry(QRect(23, 53, 8, 8));
					ui->frame_0_13->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_0_13->setAutoFillBackground(true);
					ui->frame_0_13->setFrameShape(QFrame::StyledPanel);
					ui->frame_0_13->setFrameShadow(QFrame::Raised);
					pixel_0_13 = false;
				}
				break;

			case 4:
				if ( pixel_0_14 == true ) {
					ui->frame_0_14->setObjectName(QString::fromUtf8("frame_0_14"));
					ui->frame_0_14->setGeometry(QRect(23, 64, 8, 8));
					ui->frame_0_14->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_0_14->setAutoFillBackground(true);
					ui->frame_0_14->setFrameShape(QFrame::StyledPanel);
					ui->frame_0_14->setFrameShadow(QFrame::Raised);
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
					ui->frame_0_05->setObjectName(QString::fromUtf8("frame_0_05"));
					ui->frame_0_05->setGeometry(QRect(34, 20, 8, 8));
					ui->frame_0_05->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_0_05->setAutoFillBackground(true);
					ui->frame_0_05->setFrameShape(QFrame::StyledPanel);
					ui->frame_0_05->setFrameShadow(QFrame::Raised);
					pixel_0_05 = false;
				}
				break;

			case 1:
				if ( pixel_0_06 == true ) {
					ui->frame_0_06->setObjectName(QString::fromUtf8("frame_0_06"));
					ui->frame_0_06->setGeometry(QRect(34, 31, 8, 8));
					ui->frame_0_06->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_0_06->setAutoFillBackground(true);
					ui->frame_0_06->setFrameShape(QFrame::StyledPanel);
					ui->frame_0_06->setFrameShadow(QFrame::Raised);
					pixel_0_06 = false;
				}
				break;

			case 2:
				if ( pixel_0_07 == true ) {
					ui->frame_0_07->setObjectName(QString::fromUtf8("frame_0_07"));
					ui->frame_0_07->setGeometry(QRect(34, 42, 8, 8));
					ui->frame_0_07->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_0_07->setAutoFillBackground(true);
					ui->frame_0_07->setFrameShape(QFrame::StyledPanel);
					ui->frame_0_07->setFrameShadow(QFrame::Raised);
					pixel_0_07 = false;
				}
				break;

			case 3:
				if ( pixel_0_08 == true ) {
					ui->frame_0_08->setObjectName(QString::fromUtf8("frame_0_08"));
					ui->frame_0_08->setGeometry(QRect(34, 53, 8, 8));
					ui->frame_0_08->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_0_08->setAutoFillBackground(true);
					ui->frame_0_08->setFrameShape(QFrame::StyledPanel);
					ui->frame_0_08->setFrameShadow(QFrame::Raised);
					pixel_0_08 = false;
				}
				break;

			case 4:
				if ( pixel_0_09 == true ) {
					ui->frame_0_09->setObjectName(QString::fromUtf8("frame_0_09"));
					ui->frame_0_09->setGeometry(QRect(34, 64, 8, 8));
					ui->frame_0_09->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_0_09->setAutoFillBackground(true);
					ui->frame_0_09->setFrameShape(QFrame::StyledPanel);
					ui->frame_0_09->setFrameShadow(QFrame::Raised);
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
					ui->frame_0_00->setObjectName(QString::fromUtf8("frame_0_00"));
					ui->frame_0_00->setGeometry(QRect(45, 20, 8, 8));
					ui->frame_0_00->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_0_00->setAutoFillBackground(true);
					ui->frame_0_00->setFrameShape(QFrame::StyledPanel);
					ui->frame_0_00->setFrameShadow(QFrame::Raised);
					pixel_0_00 = false;
				}
				break;

			case 1:
				if ( pixel_0_01 == true ) {
					ui->frame_0_01->setObjectName(QString::fromUtf8("frame_0_01"));
					ui->frame_0_01->setGeometry(QRect(45, 31, 8, 8));
					ui->frame_0_01->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_0_01->setAutoFillBackground(true);
					ui->frame_0_01->setFrameShape(QFrame::StyledPanel);
					ui->frame_0_01->setFrameShadow(QFrame::Raised);
					pixel_0_01 = false;
				}
				break;

			case 2:
				if ( pixel_0_02 == true ) {
					ui->frame_0_02->setObjectName(QString::fromUtf8("frame_0_02"));
					ui->frame_0_02->setGeometry(QRect(45, 42, 8, 8));
					ui->frame_0_02->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_0_02->setAutoFillBackground(true);
					ui->frame_0_02->setFrameShape(QFrame::StyledPanel);
					ui->frame_0_02->setFrameShadow(QFrame::Raised);
					pixel_0_02 = false;
				}
				break;

			case 3:
				if ( pixel_0_03 == true ) {
					ui->frame_0_03->setObjectName(QString::fromUtf8("frame_0_03"));
					ui->frame_0_03->setGeometry(QRect(45, 53, 8, 8));
					ui->frame_0_03->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_0_03->setAutoFillBackground(true);
					ui->frame_0_03->setFrameShape(QFrame::StyledPanel);
					ui->frame_0_03->setFrameShadow(QFrame::Raised);
					pixel_0_03 = false;
				}
				break;

			case 4:
				if ( pixel_0_04 == true ) {
					ui->frame_0_04->setObjectName(QString::fromUtf8("frame_0_04"));
					ui->frame_0_04->setGeometry(QRect(45, 64, 8, 8));
					ui->frame_0_04->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_0_04->setAutoFillBackground(true);
					ui->frame_0_04->setFrameShape(QFrame::StyledPanel);
					ui->frame_0_04->setFrameShadow(QFrame::Raised);
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
					ui->frame_0_15->setObjectName(QString::fromUtf8("frame_0_15"));
					ui->frame_0_15->setGeometry(QRect(53, 80, 8, 8));
					ui->frame_0_15->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_0_15->setAutoFillBackground(true);
					ui->frame_0_15->setFrameShape(QFrame::StyledPanel);
					ui->frame_0_15->setFrameShadow(QFrame::Raised);
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
					ui->frame_1_10->setObjectName(QString::fromUtf8("frame_1_10"));
					ui->frame_1_10->setGeometry(QRect(63, 20, 8, 8));
					ui->frame_1_10->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_1_10->setAutoFillBackground(true);
					ui->frame_1_10->setFrameShape(QFrame::StyledPanel);
					ui->frame_1_10->setFrameShadow(QFrame::Raised);
					pixel_1_10 = false;
				}
				break;

			case 1:
				if ( pixel_1_11 == true ) {
					ui->frame_1_11->setObjectName(QString::fromUtf8("frame_1_11"));
					ui->frame_1_11->setGeometry(QRect(63, 31, 8, 8));
					ui->frame_1_11->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_1_11->setAutoFillBackground(true);
					ui->frame_1_11->setFrameShape(QFrame::StyledPanel);
					ui->frame_1_11->setFrameShadow(QFrame::Raised);
					pixel_1_11 = false;
				}
				break;

			case 2:
				if ( pixel_1_12 == true ) {
					ui->frame_1_12->setObjectName(QString::fromUtf8("frame_1_12"));
					ui->frame_1_12->setGeometry(QRect(63, 42, 8, 8));
					ui->frame_1_12->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_1_12->setAutoFillBackground(true);
					ui->frame_1_12->setFrameShape(QFrame::StyledPanel);
					ui->frame_1_12->setFrameShadow(QFrame::Raised);
					pixel_1_12 = false;
				}
				break;

			case 3:
				if ( pixel_1_13 == true ) {
					ui->frame_1_13->setObjectName(QString::fromUtf8("frame_1_13"));
					ui->frame_1_13->setGeometry(QRect(63, 53, 8, 8));
					ui->frame_1_13->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_1_13->setAutoFillBackground(true);
					ui->frame_1_13->setFrameShape(QFrame::StyledPanel);
					ui->frame_1_13->setFrameShadow(QFrame::Raised);
					pixel_1_13 = false;
				}
				break;

			case 4:
				if ( pixel_1_14 == true ) {
					ui->frame_1_14->setObjectName(QString::fromUtf8("frame_1_14"));
					ui->frame_1_14->setGeometry(QRect(63, 64, 8, 8));
					ui->frame_1_14->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_1_14->setAutoFillBackground(true);
					ui->frame_1_14->setFrameShape(QFrame::StyledPanel);
					ui->frame_1_14->setFrameShadow(QFrame::Raised);
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
					ui->frame_1_05->setObjectName(QString::fromUtf8("frame_1_05"));
					ui->frame_1_05->setGeometry(QRect(74, 20, 8, 8));
					ui->frame_1_05->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_1_05->setAutoFillBackground(true);
					ui->frame_1_05->setFrameShape(QFrame::StyledPanel);
					ui->frame_1_05->setFrameShadow(QFrame::Raised);
					pixel_1_05 = false;
				}
				break;

			case 1:
				if ( pixel_1_06 == true ) {
					ui->frame_1_06->setObjectName(QString::fromUtf8("frame_1_06"));
					ui->frame_1_06->setGeometry(QRect(74, 31, 8, 8));
					ui->frame_1_06->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_1_06->setAutoFillBackground(true);
					ui->frame_1_06->setFrameShape(QFrame::StyledPanel);
					ui->frame_1_06->setFrameShadow(QFrame::Raised);
					pixel_1_06 = false;
				}
				break;

			case 2:
				if ( pixel_1_07 == true ) {
					ui->frame_1_07->setObjectName(QString::fromUtf8("frame_1_07"));
					ui->frame_1_07->setGeometry(QRect(74, 42, 8, 8));
					ui->frame_1_07->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_1_07->setAutoFillBackground(true);
					ui->frame_1_07->setFrameShape(QFrame::StyledPanel);
					ui->frame_1_07->setFrameShadow(QFrame::Raised);
					pixel_1_07 = false;
				}
				break;

			case 3:
				if ( pixel_1_08 == true ) {
					ui->frame_1_08->setObjectName(QString::fromUtf8("frame_1_08"));
					ui->frame_1_08->setGeometry(QRect(74, 53, 8, 8));
					ui->frame_1_08->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_1_08->setAutoFillBackground(true);
					ui->frame_1_08->setFrameShape(QFrame::StyledPanel);
					ui->frame_1_08->setFrameShadow(QFrame::Raised);
					pixel_1_08 = false;
				}
				break;

			case 4:
				if ( pixel_1_09 == true ) {
					ui->frame_1_09->setObjectName(QString::fromUtf8("frame_1_09"));
					ui->frame_1_09->setGeometry(QRect(74, 64, 8, 8));
					ui->frame_1_09->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_1_09->setAutoFillBackground(true);
					ui->frame_1_09->setFrameShape(QFrame::StyledPanel);
					ui->frame_1_09->setFrameShadow(QFrame::Raised);
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
					ui->frame_1_00->setObjectName(QString::fromUtf8("frame_1_00"));
					ui->frame_1_00->setGeometry(QRect(85, 20, 8, 8));
					ui->frame_1_00->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_1_00->setAutoFillBackground(true);
					ui->frame_1_00->setFrameShape(QFrame::StyledPanel);
					ui->frame_1_00->setFrameShadow(QFrame::Raised);
					pixel_1_00 = false;
				}
				break;

			case 1:
				if ( pixel_1_01 == true ) {
					ui->frame_1_01->setObjectName(QString::fromUtf8("frame_1_01"));
					ui->frame_1_01->setGeometry(QRect(85, 31, 8, 8));
					ui->frame_1_01->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_1_01->setAutoFillBackground(true);
					ui->frame_1_01->setFrameShape(QFrame::StyledPanel);
					ui->frame_1_01->setFrameShadow(QFrame::Raised);
					pixel_1_01 = false;
				}
				break;

			case 2:
				if ( pixel_1_02 == true ) {
					ui->frame_1_02->setObjectName(QString::fromUtf8("frame_1_02"));
					ui->frame_1_02->setGeometry(QRect(85, 42, 8, 8));
					ui->frame_1_02->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_1_02->setAutoFillBackground(true);
					ui->frame_1_02->setFrameShape(QFrame::StyledPanel);
					ui->frame_1_02->setFrameShadow(QFrame::Raised);
					pixel_1_02 = false;
				}
				break;

			case 3:
				if ( pixel_1_03 == true ) {
					ui->frame_1_03->setObjectName(QString::fromUtf8("frame_1_03"));
					ui->frame_1_03->setGeometry(QRect(85, 53, 8, 8));
					ui->frame_1_03->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_1_03->setAutoFillBackground(true);
					ui->frame_1_03->setFrameShape(QFrame::StyledPanel);
					ui->frame_1_03->setFrameShadow(QFrame::Raised);
					pixel_1_03 = false;
				}
				break;

			case 4:
				if ( pixel_1_04 == true ) {
					ui->frame_1_04->setObjectName(QString::fromUtf8("frame_1_04"));
					ui->frame_1_04->setGeometry(QRect(85, 64, 8, 8));
					ui->frame_1_04->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_1_04->setAutoFillBackground(true);
					ui->frame_1_04->setFrameShape(QFrame::StyledPanel);
					ui->frame_1_04->setFrameShadow(QFrame::Raised);
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
					ui->frame_1_15->setObjectName(QString::fromUtf8("frame_1_15"));
					ui->frame_1_15->setGeometry(QRect(93, 80, 8, 8));
					ui->frame_1_15->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_1_15->setAutoFillBackground(true);
					ui->frame_1_15->setFrameShape(QFrame::StyledPanel);
					ui->frame_1_15->setFrameShadow(QFrame::Raised);
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
					ui->frame_2_10->setObjectName(QString::fromUtf8("frame_2_10"));
					ui->frame_2_10->setGeometry(QRect(153, 20, 8, 8));
					ui->frame_2_10->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_2_10->setAutoFillBackground(true);
					ui->frame_2_10->setFrameShape(QFrame::StyledPanel);
					ui->frame_2_10->setFrameShadow(QFrame::Raised);
					pixel_2_10 = false;
				}
				break;

			case 1:
				if ( pixel_2_11 == true ) {
					ui->frame_2_11->setObjectName(QString::fromUtf8("frame_2_11"));
					ui->frame_2_11->setGeometry(QRect(153, 31, 8, 8));
					ui->frame_2_11->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_2_11->setAutoFillBackground(true);
					ui->frame_2_11->setFrameShape(QFrame::StyledPanel);
					ui->frame_2_11->setFrameShadow(QFrame::Raised);
					pixel_2_11 = false;
				}
				break;

			case 2:
				if ( pixel_2_12 == true ) {
					ui->frame_2_12->setObjectName(QString::fromUtf8("frame_2_12"));
					ui->frame_2_12->setGeometry(QRect(153, 42, 8, 8));
					ui->frame_2_12->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_2_12->setAutoFillBackground(true);
					ui->frame_2_12->setFrameShape(QFrame::StyledPanel);
					ui->frame_2_12->setFrameShadow(QFrame::Raised);
					pixel_2_12 = false;
				}
				break;

			case 3:
				if ( pixel_2_13 == true ) {
					ui->frame_2_13->setObjectName(QString::fromUtf8("frame_2_13"));
					ui->frame_2_13->setGeometry(QRect(153, 53, 8, 8));
					ui->frame_2_13->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_2_13->setAutoFillBackground(true);
					ui->frame_2_13->setFrameShape(QFrame::StyledPanel);
					ui->frame_2_13->setFrameShadow(QFrame::Raised);
					pixel_2_13 = false;
				}
				break;

			case 4:
				if ( pixel_2_14 == true ) {
					ui->frame_2_14->setObjectName(QString::fromUtf8("frame_2_14"));
					ui->frame_2_14->setGeometry(QRect(153, 64, 8, 8));
					ui->frame_2_14->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_2_14->setAutoFillBackground(true);
					ui->frame_2_14->setFrameShape(QFrame::StyledPanel);
					ui->frame_2_14->setFrameShadow(QFrame::Raised);
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
					ui->frame_2_05->setObjectName(QString::fromUtf8("frame_2_05"));
					ui->frame_2_05->setGeometry(QRect(164, 20, 8, 8));
					ui->frame_2_05->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_2_05->setAutoFillBackground(true);
					ui->frame_2_05->setFrameShape(QFrame::StyledPanel);
					ui->frame_2_05->setFrameShadow(QFrame::Raised);
					pixel_2_05 = false;
				}
				break;

			case 1:
				if ( pixel_2_06 == true ) {
					ui->frame_2_06->setObjectName(QString::fromUtf8("frame_2_06"));
					ui->frame_2_06->setGeometry(QRect(164, 31, 8, 8));
					ui->frame_2_06->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_2_06->setAutoFillBackground(true);
					ui->frame_2_06->setFrameShape(QFrame::StyledPanel);
					ui->frame_2_06->setFrameShadow(QFrame::Raised);
					pixel_2_06 = false;
				}
				break;

			case 2:
				if ( pixel_2_07 == true ) {
					ui->frame_2_07->setObjectName(QString::fromUtf8("frame_2_07"));
					ui->frame_2_07->setGeometry(QRect(164, 42, 8, 8));
					ui->frame_2_07->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_2_07->setAutoFillBackground(true);
					ui->frame_2_07->setFrameShape(QFrame::StyledPanel);
					ui->frame_2_07->setFrameShadow(QFrame::Raised);
					pixel_2_07 = false;
				}
				break;

			case 3:
				if ( pixel_2_08 == true ) {
					ui->frame_2_08->setObjectName(QString::fromUtf8("frame_2_08"));
					ui->frame_2_08->setGeometry(QRect(164, 53, 8, 8));
					ui->frame_2_08->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_2_08->setAutoFillBackground(true);
					ui->frame_2_08->setFrameShape(QFrame::StyledPanel);
					ui->frame_2_08->setFrameShadow(QFrame::Raised);
					pixel_2_08 = false;
				}
				break;

			case 4:
				if ( pixel_2_09 == true ) {
					ui->frame_2_09->setObjectName(QString::fromUtf8("frame_2_09"));
					ui->frame_2_09->setGeometry(QRect(164, 64, 8, 8));
					ui->frame_2_09->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_2_09->setAutoFillBackground(true);
					ui->frame_2_09->setFrameShape(QFrame::StyledPanel);
					ui->frame_2_09->setFrameShadow(QFrame::Raised);
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
					ui->frame_2_00->setObjectName(QString::fromUtf8("frame_2_00"));
					ui->frame_2_00->setGeometry(QRect(175, 20, 8, 8));
					ui->frame_2_00->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_2_00->setAutoFillBackground(true);
					ui->frame_2_00->setFrameShape(QFrame::StyledPanel);
					ui->frame_2_00->setFrameShadow(QFrame::Raised);
					pixel_2_00 = false;
				}
				break;

			case 1:
				if ( pixel_2_01 == true ) {
					ui->frame_2_01->setObjectName(QString::fromUtf8("frame_2_01"));
					ui->frame_2_01->setGeometry(QRect(175, 31, 8, 8));
					ui->frame_2_01->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_2_01->setAutoFillBackground(true);
					ui->frame_2_01->setFrameShape(QFrame::StyledPanel);
					ui->frame_2_01->setFrameShadow(QFrame::Raised);
					pixel_2_01 = false;
				}
				break;

			case 2:
				if ( pixel_2_02 == true ) {
					ui->frame_2_02->setObjectName(QString::fromUtf8("frame_2_02"));
					ui->frame_2_02->setGeometry(QRect(175, 42, 8, 8));
					ui->frame_2_02->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_2_02->setAutoFillBackground(true);
					ui->frame_2_02->setFrameShape(QFrame::StyledPanel);
					ui->frame_2_02->setFrameShadow(QFrame::Raised);
					pixel_2_02 = false;
				}
				break;

			case 3:
				if ( pixel_2_03 == true ) {
					ui->frame_2_03->setObjectName(QString::fromUtf8("frame_2_03"));
					ui->frame_2_03->setGeometry(QRect(175, 53, 8, 8));
					ui->frame_2_03->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_2_03->setAutoFillBackground(true);
					ui->frame_2_03->setFrameShape(QFrame::StyledPanel);
					ui->frame_2_03->setFrameShadow(QFrame::Raised);
					pixel_2_03 = false;
				}
				break;

			case 4:
				if ( pixel_2_04 == true ) {
					ui->frame_2_04->setObjectName(QString::fromUtf8("frame_2_04"));
					ui->frame_2_04->setGeometry(QRect(175, 64, 8, 8));
					ui->frame_2_04->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_2_04->setAutoFillBackground(true);
					ui->frame_2_04->setFrameShape(QFrame::StyledPanel);
					ui->frame_2_04->setFrameShadow(QFrame::Raised);
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
					ui->frame_2_15->setObjectName(QString::fromUtf8("frame_2_15"));
					ui->frame_2_15->setGeometry(QRect(183, 80, 8, 8));
					ui->frame_2_15->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_2_15->setAutoFillBackground(true);
					ui->frame_2_15->setFrameShape(QFrame::StyledPanel);
					ui->frame_2_15->setFrameShadow(QFrame::Raised);
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
					ui->frame_3_10->setObjectName(QString::fromUtf8("frame_3_10"));
					ui->frame_3_10->setGeometry(QRect(193, 20, 8, 8));
					ui->frame_3_10->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_3_10->setAutoFillBackground(true);
					ui->frame_3_10->setFrameShape(QFrame::StyledPanel);
					ui->frame_3_10->setFrameShadow(QFrame::Raised);
					pixel_3_10 = false;
				}
				break;

			case 1:
				if ( pixel_3_11 == true ) {
					ui->frame_3_11->setObjectName(QString::fromUtf8("frame_3_11"));
					ui->frame_3_11->setGeometry(QRect(193, 31, 8, 8));
					ui->frame_3_11->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_3_11->setAutoFillBackground(true);
					ui->frame_3_11->setFrameShape(QFrame::StyledPanel);
					ui->frame_3_11->setFrameShadow(QFrame::Raised);
					pixel_3_11 = false;
				}
				break;

			case 2:
				if ( pixel_3_12 == true ) {
					ui->frame_3_12->setObjectName(QString::fromUtf8("frame_3_12"));
					ui->frame_3_12->setGeometry(QRect(193, 42, 8, 8));
					ui->frame_3_12->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_3_12->setAutoFillBackground(true);
					ui->frame_3_12->setFrameShape(QFrame::StyledPanel);
					ui->frame_3_12->setFrameShadow(QFrame::Raised);
					pixel_3_12 = false;
				}
				break;

			case 3:
				if ( pixel_3_13 == true ) {
					ui->frame_3_13->setObjectName(QString::fromUtf8("frame_3_13"));
					ui->frame_3_13->setGeometry(QRect(193, 53, 8, 8));
					ui->frame_3_13->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_3_13->setAutoFillBackground(true);
					ui->frame_3_13->setFrameShape(QFrame::StyledPanel);
					ui->frame_3_13->setFrameShadow(QFrame::Raised);
					pixel_3_13 = false;
				}
				break;

			case 4:
				if ( pixel_3_14 == true ) {
					ui->frame_3_14->setObjectName(QString::fromUtf8("frame_3_14"));
					ui->frame_3_14->setGeometry(QRect(193, 64, 8, 8));
					ui->frame_3_14->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_3_14->setAutoFillBackground(true);
					ui->frame_3_14->setFrameShape(QFrame::StyledPanel);
					ui->frame_3_14->setFrameShadow(QFrame::Raised);
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
					ui->frame_3_05->setObjectName(QString::fromUtf8("frame_3_05"));
					ui->frame_3_05->setGeometry(QRect(204, 20, 8, 8));
					ui->frame_3_05->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_3_05->setAutoFillBackground(true);
					ui->frame_3_05->setFrameShape(QFrame::StyledPanel);
					ui->frame_3_05->setFrameShadow(QFrame::Raised);
					pixel_3_05 = false;
				}
				break;

			case 1:
				if ( pixel_3_06 == true ) {
					ui->frame_3_06->setObjectName(QString::fromUtf8("frame_3_06"));
					ui->frame_3_06->setGeometry(QRect(204, 31, 8, 8));
					ui->frame_3_06->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_3_06->setAutoFillBackground(true);
					ui->frame_3_06->setFrameShape(QFrame::StyledPanel);
					ui->frame_3_06->setFrameShadow(QFrame::Raised);
					pixel_3_06 = false;
				}
				break;

			case 2:
				if ( pixel_3_07 == true ) {
					ui->frame_3_07->setObjectName(QString::fromUtf8("frame_3_07"));
					ui->frame_3_07->setGeometry(QRect(204, 42, 8, 8));
					ui->frame_3_07->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_3_07->setAutoFillBackground(true);
					ui->frame_3_07->setFrameShape(QFrame::StyledPanel);
					ui->frame_3_07->setFrameShadow(QFrame::Raised);
					pixel_3_07 = false;
				}
				break;

			case 3:
				if ( pixel_3_08 == true ) {
					ui->frame_3_08->setObjectName(QString::fromUtf8("frame_3_08"));
					ui->frame_3_08->setGeometry(QRect(204, 53, 8, 8));
					ui->frame_3_08->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_3_08->setAutoFillBackground(true);
					ui->frame_3_08->setFrameShape(QFrame::StyledPanel);
					ui->frame_3_08->setFrameShadow(QFrame::Raised);
					pixel_3_08 = false;
				}
				break;

			case 4:
				if ( pixel_3_09 == true ) {
					ui->frame_3_09->setObjectName(QString::fromUtf8("frame_3_09"));
					ui->frame_3_09->setGeometry(QRect(204, 64, 8, 8));
					ui->frame_3_09->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_3_09->setAutoFillBackground(true);
					ui->frame_3_09->setFrameShape(QFrame::StyledPanel);
					ui->frame_3_09->setFrameShadow(QFrame::Raised);
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
					ui->frame_3_00->setObjectName(QString::fromUtf8("frame_3_00"));
					ui->frame_3_00->setGeometry(QRect(215, 20, 8, 8));
					ui->frame_3_00->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_3_00->setAutoFillBackground(true);
					ui->frame_3_00->setFrameShape(QFrame::StyledPanel);
					ui->frame_3_00->setFrameShadow(QFrame::Raised);
					pixel_3_00 = false;
				}
				break;

			case 1:
				if ( pixel_3_01 == true ) {
					ui->frame_3_01->setObjectName(QString::fromUtf8("frame_3_01"));
					ui->frame_3_01->setGeometry(QRect(215, 31, 8, 8));
					ui->frame_3_01->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_3_01->setAutoFillBackground(true);
					ui->frame_3_01->setFrameShape(QFrame::StyledPanel);
					ui->frame_3_01->setFrameShadow(QFrame::Raised);
					pixel_3_01 = false;
				}
				break;

			case 2:
				if ( pixel_3_02 == true ) {
					ui->frame_3_02->setObjectName(QString::fromUtf8("frame_3_02"));
					ui->frame_3_02->setGeometry(QRect(215, 42, 8, 8));
					ui->frame_3_02->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_3_02->setAutoFillBackground(true);
					ui->frame_3_02->setFrameShape(QFrame::StyledPanel);
					ui->frame_3_02->setFrameShadow(QFrame::Raised);
					pixel_3_02 = false;
				}
				break;

			case 3:
				if ( pixel_3_03 == true ) {
					ui->frame_3_03->setObjectName(QString::fromUtf8("frame_3_03"));
					ui->frame_3_03->setGeometry(QRect(215, 53, 8, 8));
					ui->frame_3_03->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_3_03->setAutoFillBackground(true);
					ui->frame_3_03->setFrameShape(QFrame::StyledPanel);
					ui->frame_3_03->setFrameShadow(QFrame::Raised);
					pixel_3_03 = false;
				}
				break;

			case 4:
				if ( pixel_3_04 == true ) {
					ui->frame_3_04->setObjectName(QString::fromUtf8("frame_3_04"));
					ui->frame_3_04->setGeometry(QRect(215, 64, 8, 8));
					ui->frame_3_04->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_3_04->setAutoFillBackground(true);
					ui->frame_3_04->setFrameShape(QFrame::StyledPanel);
					ui->frame_3_04->setFrameShadow(QFrame::Raised);
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
					ui->frame_3_15->setObjectName(QString::fromUtf8("frame_3_15"));
					ui->frame_3_15->setGeometry(QRect(223, 80, 8, 8));
					ui->frame_3_15->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_3_15->setAutoFillBackground(true);
					ui->frame_3_15->setFrameShape(QFrame::StyledPanel);
					ui->frame_3_15->setFrameShadow(QFrame::Raised);
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
					ui->frame_4_10->setObjectName(QString::fromUtf8("frame_4_10"));
					ui->frame_4_10->setGeometry(QRect(233, 20, 8, 8));
					ui->frame_4_10->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_4_10->setAutoFillBackground(true);
					ui->frame_4_10->setFrameShape(QFrame::StyledPanel);
					ui->frame_4_10->setFrameShadow(QFrame::Raised);
					pixel_4_10 = false;
				}
				break;

			case 1:
				if ( pixel_4_11 == true ) {
					ui->frame_4_11->setObjectName(QString::fromUtf8("frame_4_11"));
					ui->frame_4_11->setGeometry(QRect(233, 31, 8, 8));
					ui->frame_4_11->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_4_11->setAutoFillBackground(true);
					ui->frame_4_11->setFrameShape(QFrame::StyledPanel);
					ui->frame_4_11->setFrameShadow(QFrame::Raised);
					pixel_4_11 = false;
				}
				break;

			case 2:
				if ( pixel_4_12 == true ) {
					ui->frame_4_12->setObjectName(QString::fromUtf8("frame_4_12"));
					ui->frame_4_12->setGeometry(QRect(233, 42, 8, 8));
					ui->frame_4_12->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_4_12->setAutoFillBackground(true);
					ui->frame_4_12->setFrameShape(QFrame::StyledPanel);
					ui->frame_4_12->setFrameShadow(QFrame::Raised);
					pixel_4_12 = false;
				}
				break;

			case 3:
				if ( pixel_4_13 == true ) {
					ui->frame_4_13->setObjectName(QString::fromUtf8("frame_4_13"));
					ui->frame_4_13->setGeometry(QRect(233, 53, 8, 8));
					ui->frame_4_13->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_4_13->setAutoFillBackground(true);
					ui->frame_4_13->setFrameShape(QFrame::StyledPanel);
					ui->frame_4_13->setFrameShadow(QFrame::Raised);
					pixel_4_13 = false;
				}
				break;

			case 4:
				if ( pixel_4_14 == true ) {
					ui->frame_4_14->setObjectName(QString::fromUtf8("frame_4_14"));
					ui->frame_4_14->setGeometry(QRect(233, 64, 8, 8));
					ui->frame_4_14->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_4_14->setAutoFillBackground(true);
					ui->frame_4_14->setFrameShape(QFrame::StyledPanel);
					ui->frame_4_14->setFrameShadow(QFrame::Raised);
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
					ui->frame_4_05->setObjectName(QString::fromUtf8("frame_4_05"));
					ui->frame_4_05->setGeometry(QRect(244, 20, 8, 8));
					ui->frame_4_05->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_4_05->setAutoFillBackground(true);
					ui->frame_4_05->setFrameShape(QFrame::StyledPanel);
					ui->frame_4_05->setFrameShadow(QFrame::Raised);
					pixel_4_05 = false;
				}
				break;

			case 1:
				if ( pixel_4_06 == true ) {
					ui->frame_4_06->setObjectName(QString::fromUtf8("frame_4_06"));
					ui->frame_4_06->setGeometry(QRect(244, 31, 8, 8));
					ui->frame_4_06->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_4_06->setAutoFillBackground(true);
					ui->frame_4_06->setFrameShape(QFrame::StyledPanel);
					ui->frame_4_06->setFrameShadow(QFrame::Raised);
					pixel_4_06 = false;
				}
				break;

			case 2:
				if ( pixel_4_07 == true ) {
					ui->frame_4_07->setObjectName(QString::fromUtf8("frame_4_07"));
					ui->frame_4_07->setGeometry(QRect(244, 42, 8, 8));
					ui->frame_4_07->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_4_07->setAutoFillBackground(true);
					ui->frame_4_07->setFrameShape(QFrame::StyledPanel);
					ui->frame_4_07->setFrameShadow(QFrame::Raised);
					pixel_4_07 = false;
				}
				break;

			case 3:
				if ( pixel_4_08 == true ) {
					ui->frame_4_08->setObjectName(QString::fromUtf8("frame_4_08"));
					ui->frame_4_08->setGeometry(QRect(244, 53, 8, 8));
					ui->frame_4_08->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_4_08->setAutoFillBackground(true);
					ui->frame_4_08->setFrameShape(QFrame::StyledPanel);
					ui->frame_4_08->setFrameShadow(QFrame::Raised);
					pixel_4_08 = false;
				}
				break;

			case 4:
				if ( pixel_4_09 == true ) {
					ui->frame_4_09->setObjectName(QString::fromUtf8("frame_4_09"));
					ui->frame_4_09->setGeometry(QRect(244, 64, 8, 8));
					ui->frame_4_09->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_4_09->setAutoFillBackground(true);
					ui->frame_4_09->setFrameShape(QFrame::StyledPanel);
					ui->frame_4_09->setFrameShadow(QFrame::Raised);
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
					ui->frame_4_00->setObjectName(QString::fromUtf8("frame_4_00"));
					ui->frame_4_00->setGeometry(QRect(255, 20, 8, 8));
					ui->frame_4_00->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_4_00->setAutoFillBackground(true);
					ui->frame_4_00->setFrameShape(QFrame::StyledPanel);
					ui->frame_4_00->setFrameShadow(QFrame::Raised);
					pixel_4_00 = false;
				}
				break;

			case 1:
				if ( pixel_4_01 == true ) {
					ui->frame_4_01->setObjectName(QString::fromUtf8("frame_4_01"));
					ui->frame_4_01->setGeometry(QRect(255, 31, 8, 8));
					ui->frame_4_01->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_4_01->setAutoFillBackground(true);
					ui->frame_4_01->setFrameShape(QFrame::StyledPanel);
					ui->frame_4_01->setFrameShadow(QFrame::Raised);
					pixel_4_01 = false;
				}
				break;

			case 2:
				if ( pixel_4_02 == true ) {
					ui->frame_4_02->setObjectName(QString::fromUtf8("frame_4_02"));
					ui->frame_4_02->setGeometry(QRect(255, 42, 8, 8));
					ui->frame_4_02->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_4_02->setAutoFillBackground(true);
					ui->frame_4_02->setFrameShape(QFrame::StyledPanel);
					ui->frame_4_02->setFrameShadow(QFrame::Raised);
					pixel_4_02 = false;
				}
				break;

			case 3:
				if ( pixel_4_03 == true ) {
					ui->frame_4_03->setObjectName(QString::fromUtf8("frame_4_03"));
					ui->frame_4_03->setGeometry(QRect(255, 53, 8, 8));
					ui->frame_4_03->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_4_03->setAutoFillBackground(true);
					ui->frame_4_03->setFrameShape(QFrame::StyledPanel);
					ui->frame_4_03->setFrameShadow(QFrame::Raised);
					pixel_4_03 = false;
				}
				break;

			case 4:
				if ( pixel_4_04 == true ) {
					ui->frame_4_04->setObjectName(QString::fromUtf8("frame_4_04"));
					ui->frame_4_04->setGeometry(QRect(255, 64, 8, 8));
					ui->frame_4_04->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_4_04->setAutoFillBackground(true);
					ui->frame_4_04->setFrameShape(QFrame::StyledPanel);
					ui->frame_4_04->setFrameShadow(QFrame::Raised);
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
					ui->frame_4_15->setObjectName(QString::fromUtf8("frame_4_15"));
					ui->frame_4_15->setGeometry(QRect(263, 80, 8, 8));
					ui->frame_4_15->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_4_15->setAutoFillBackground(true);
					ui->frame_4_15->setFrameShape(QFrame::StyledPanel);
					ui->frame_4_15->setFrameShadow(QFrame::Raised);
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
					ui->frame_5_10->setObjectName(QString::fromUtf8("frame_5_10"));
					ui->frame_5_10->setGeometry(QRect(273, 20, 8, 8));
					ui->frame_5_10->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_5_10->setAutoFillBackground(true);
					ui->frame_5_10->setFrameShape(QFrame::StyledPanel);
					ui->frame_5_10->setFrameShadow(QFrame::Raised);
					pixel_5_10 = false;
				}
				break;

			case 1:
				if ( pixel_5_11 == true ) {
					ui->frame_5_11->setObjectName(QString::fromUtf8("frame_5_11"));
					ui->frame_5_11->setGeometry(QRect(273, 31, 8, 8));
					ui->frame_5_11->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_5_11->setAutoFillBackground(true);
					ui->frame_5_11->setFrameShape(QFrame::StyledPanel);
					ui->frame_5_11->setFrameShadow(QFrame::Raised);
					pixel_5_11 = false;
				}
				break;

			case 2:
				if ( pixel_5_12 == true ) {
					ui->frame_5_12->setObjectName(QString::fromUtf8("frame_5_12"));
					ui->frame_5_12->setGeometry(QRect(273, 42, 8, 8));
					ui->frame_5_12->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_5_12->setAutoFillBackground(true);
					ui->frame_5_12->setFrameShape(QFrame::StyledPanel);
					ui->frame_5_12->setFrameShadow(QFrame::Raised);
					pixel_5_12 = false;
				}
				break;

			case 3:
				if ( pixel_5_13 == true ) {
					ui->frame_5_13->setObjectName(QString::fromUtf8("frame_5_13"));
					ui->frame_5_13->setGeometry(QRect(273, 53, 8, 8));
					ui->frame_5_13->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_5_13->setAutoFillBackground(true);
					ui->frame_5_13->setFrameShape(QFrame::StyledPanel);
					ui->frame_5_13->setFrameShadow(QFrame::Raised);
					pixel_5_13 = false;
				}
				break;

			case 4:
				if ( pixel_5_14 == true ) {
					ui->frame_5_14->setObjectName(QString::fromUtf8("frame_5_14"));
					ui->frame_5_14->setGeometry(QRect(273, 64, 8, 8));
					ui->frame_5_14->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_5_14->setAutoFillBackground(true);
					ui->frame_5_14->setFrameShape(QFrame::StyledPanel);
					ui->frame_5_14->setFrameShadow(QFrame::Raised);
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
					ui->frame_5_05->setObjectName(QString::fromUtf8("frame_5_05"));
					ui->frame_5_05->setGeometry(QRect(284, 20, 8, 8));
					ui->frame_5_05->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_5_05->setAutoFillBackground(true);
					ui->frame_5_05->setFrameShape(QFrame::StyledPanel);
					ui->frame_5_05->setFrameShadow(QFrame::Raised);
					pixel_5_05 = false;
				}
				break;

			case 1:
				if ( pixel_5_06 == true ) {
					ui->frame_5_06->setObjectName(QString::fromUtf8("frame_5_06"));
					ui->frame_5_06->setGeometry(QRect(284, 31, 8, 8));
					ui->frame_5_06->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_5_06->setAutoFillBackground(true);
					ui->frame_5_06->setFrameShape(QFrame::StyledPanel);
					ui->frame_5_06->setFrameShadow(QFrame::Raised);
					pixel_5_06 = false;
				}
				break;

			case 2:
				if ( pixel_5_07 == true ) {
					ui->frame_5_07->setObjectName(QString::fromUtf8("frame_5_07"));
					ui->frame_5_07->setGeometry(QRect(284, 42, 8, 8));
					ui->frame_5_07->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_5_07->setAutoFillBackground(true);
					ui->frame_5_07->setFrameShape(QFrame::StyledPanel);
					ui->frame_5_07->setFrameShadow(QFrame::Raised);
					pixel_5_07 = false;
				}
				break;

			case 3:
				if ( pixel_5_08 == true ) {
					ui->frame_5_08->setObjectName(QString::fromUtf8("frame_5_08"));
					ui->frame_5_08->setGeometry(QRect(284, 53, 8, 8));
					ui->frame_5_08->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_5_08->setAutoFillBackground(true);
					ui->frame_5_08->setFrameShape(QFrame::StyledPanel);
					ui->frame_5_08->setFrameShadow(QFrame::Raised);
					pixel_5_08 = false;
				}
				break;

			case 4:
				if ( pixel_5_09 == true ) {
					ui->frame_5_09->setObjectName(QString::fromUtf8("frame_5_09"));
					ui->frame_5_09->setGeometry(QRect(284, 64, 8, 8));
					ui->frame_5_09->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_5_09->setAutoFillBackground(true);
					ui->frame_5_09->setFrameShape(QFrame::StyledPanel);
					ui->frame_5_09->setFrameShadow(QFrame::Raised);
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
					ui->frame_5_00->setObjectName(QString::fromUtf8("frame_5_00"));
					ui->frame_5_00->setGeometry(QRect(295, 20, 8, 8));
					ui->frame_5_00->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_5_00->setAutoFillBackground(true);
					ui->frame_5_00->setFrameShape(QFrame::StyledPanel);
					ui->frame_5_00->setFrameShadow(QFrame::Raised);
					pixel_5_00 = false;
				}
				break;

			case 1:
				if ( pixel_5_01 == true ) {
					ui->frame_5_01->setObjectName(QString::fromUtf8("frame_5_01"));
					ui->frame_5_01->setGeometry(QRect(295, 31, 8, 8));
					ui->frame_5_01->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_5_01->setAutoFillBackground(true);
					ui->frame_5_01->setFrameShape(QFrame::StyledPanel);
					ui->frame_5_01->setFrameShadow(QFrame::Raised);
					pixel_5_01 = false;
				}
				break;

			case 2:
				if ( pixel_5_02 == true ) {
					ui->frame_5_02->setObjectName(QString::fromUtf8("frame_5_02"));
					ui->frame_5_02->setGeometry(QRect(295, 42, 8, 8));
					ui->frame_5_02->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_5_02->setAutoFillBackground(true);
					ui->frame_5_02->setFrameShape(QFrame::StyledPanel);
					ui->frame_5_02->setFrameShadow(QFrame::Raised);
					pixel_5_02 = false;
				}
				break;

			case 3:
				if ( pixel_5_03 == true ) {
					ui->frame_5_03->setObjectName(QString::fromUtf8("frame_5_03"));
					ui->frame_5_03->setGeometry(QRect(295, 53, 8, 8));
					ui->frame_5_03->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_5_03->setAutoFillBackground(true);
					ui->frame_5_03->setFrameShape(QFrame::StyledPanel);
					ui->frame_5_03->setFrameShadow(QFrame::Raised);
					pixel_5_03 = false;
				}
				break;

			case 4:
				if ( pixel_5_04 == true ) {
					ui->frame_5_04->setObjectName(QString::fromUtf8("frame_5_04"));
					ui->frame_5_04->setGeometry(QRect(295, 64, 8, 8));
					ui->frame_5_04->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_5_04->setAutoFillBackground(true);
					ui->frame_5_04->setFrameShape(QFrame::StyledPanel);
					ui->frame_5_04->setFrameShadow(QFrame::Raised);
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
					ui->frame_5_15->setObjectName(QString::fromUtf8("frame_5_15"));
					ui->frame_5_15->setGeometry(QRect(303, 80, 8, 8));
					ui->frame_5_15->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_5_15->setAutoFillBackground(true);
					ui->frame_5_15->setFrameShape(QFrame::StyledPanel);
					ui->frame_5_15->setFrameShadow(QFrame::Raised);
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
					ui->frame_6_10->setObjectName(QString::fromUtf8("frame_6_10"));
					ui->frame_6_10->setGeometry(QRect(313, 20, 8, 8));
					ui->frame_6_10->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_6_10->setAutoFillBackground(true);
					ui->frame_6_10->setFrameShape(QFrame::StyledPanel);
					ui->frame_6_10->setFrameShadow(QFrame::Raised);
					pixel_6_10 = false;
				}
				break;

			case 1:
				if ( pixel_6_11 == true ) {
					ui->frame_6_11->setObjectName(QString::fromUtf8("frame_6_11"));
					ui->frame_6_11->setGeometry(QRect(313, 31, 8, 8));
					ui->frame_6_11->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_6_11->setAutoFillBackground(true);
					ui->frame_6_11->setFrameShape(QFrame::StyledPanel);
					ui->frame_6_11->setFrameShadow(QFrame::Raised);
					pixel_6_11 = false;
				}
				break;

			case 2:
				if ( pixel_6_12 == true ) {
					ui->frame_6_12->setObjectName(QString::fromUtf8("frame_6_12"));
					ui->frame_6_12->setGeometry(QRect(313, 42, 8, 8));
					ui->frame_6_12->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_6_12->setAutoFillBackground(true);
					ui->frame_6_12->setFrameShape(QFrame::StyledPanel);
					ui->frame_6_12->setFrameShadow(QFrame::Raised);
					pixel_6_12 = false;
				}
				break;

			case 3:
				if ( pixel_6_13 == true ) {
					ui->frame_6_13->setObjectName(QString::fromUtf8("frame_6_13"));
					ui->frame_6_13->setGeometry(QRect(313, 53, 8, 8));
					ui->frame_6_13->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_6_13->setAutoFillBackground(true);
					ui->frame_6_13->setFrameShape(QFrame::StyledPanel);
					ui->frame_6_13->setFrameShadow(QFrame::Raised);
					pixel_6_13 = false;
				}
				break;

			case 4:
				if ( pixel_6_14 == true ) {
					ui->frame_6_14->setObjectName(QString::fromUtf8("frame_6_14"));
					ui->frame_6_14->setGeometry(QRect(313, 64, 8, 8));
					ui->frame_6_14->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_6_14->setAutoFillBackground(true);
					ui->frame_6_14->setFrameShape(QFrame::StyledPanel);
					ui->frame_6_14->setFrameShadow(QFrame::Raised);
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
					ui->frame_6_05->setObjectName(QString::fromUtf8("frame_6_05"));
					ui->frame_6_05->setGeometry(QRect(324, 20, 8, 8));
					ui->frame_6_05->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_6_05->setAutoFillBackground(true);
					ui->frame_6_05->setFrameShape(QFrame::StyledPanel);
					ui->frame_6_05->setFrameShadow(QFrame::Raised);
					pixel_6_05 = false;
				}
				break;

			case 1:
				if ( pixel_6_06 == true ) {
					ui->frame_6_06->setObjectName(QString::fromUtf8("frame_6_06"));
					ui->frame_6_06->setGeometry(QRect(324, 31, 8, 8));
					ui->frame_6_06->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_6_06->setAutoFillBackground(true);
					ui->frame_6_06->setFrameShape(QFrame::StyledPanel);
					ui->frame_6_06->setFrameShadow(QFrame::Raised);
					pixel_6_06 = false;
				}
				break;

			case 2:
				if ( pixel_6_07 == true ) {
					ui->frame_6_07->setObjectName(QString::fromUtf8("frame_6_07"));
					ui->frame_6_07->setGeometry(QRect(324, 42, 8, 8));
					ui->frame_6_07->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_6_07->setAutoFillBackground(true);
					ui->frame_6_07->setFrameShape(QFrame::StyledPanel);
					ui->frame_6_07->setFrameShadow(QFrame::Raised);
					pixel_6_07 = false;
				}
				break;

			case 3:
				if ( pixel_6_08 == true ) {
					ui->frame_6_08->setObjectName(QString::fromUtf8("frame_6_08"));
					ui->frame_6_08->setGeometry(QRect(324, 53, 8, 8));
					ui->frame_6_08->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_6_08->setAutoFillBackground(true);
					ui->frame_6_08->setFrameShape(QFrame::StyledPanel);
					ui->frame_6_08->setFrameShadow(QFrame::Raised);
					pixel_6_08 = false;
				}
				break;

			case 4:
				if ( pixel_6_09 == true ) {
					ui->frame_6_09->setObjectName(QString::fromUtf8("frame_6_09"));
					ui->frame_6_09->setGeometry(QRect(324, 64, 8, 8));
					ui->frame_6_09->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_6_09->setAutoFillBackground(true);
					ui->frame_6_09->setFrameShape(QFrame::StyledPanel);
					ui->frame_6_09->setFrameShadow(QFrame::Raised);
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
					ui->frame_6_00->setObjectName(QString::fromUtf8("frame_6_00"));
					ui->frame_6_00->setGeometry(QRect(335, 20, 8, 8));
					ui->frame_6_00->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_6_00->setAutoFillBackground(true);
					ui->frame_6_00->setFrameShape(QFrame::StyledPanel);
					ui->frame_6_00->setFrameShadow(QFrame::Raised);
					pixel_6_00 = false;
				}
				break;

			case 1:
				if ( pixel_6_01 == true ) {
					ui->frame_6_01->setObjectName(QString::fromUtf8("frame_6_01"));
					ui->frame_6_01->setGeometry(QRect(335, 31, 8, 8));
					ui->frame_6_01->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_6_01->setAutoFillBackground(true);
					ui->frame_6_01->setFrameShape(QFrame::StyledPanel);
					ui->frame_6_01->setFrameShadow(QFrame::Raised);
					pixel_6_01 = false;
				}
				break;

			case 2:
				if ( pixel_6_02 == true ) {
					ui->frame_6_02->setObjectName(QString::fromUtf8("frame_6_02"));
					ui->frame_6_02->setGeometry(QRect(335, 42, 8, 8));
					ui->frame_6_02->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_6_02->setAutoFillBackground(true);
					ui->frame_6_02->setFrameShape(QFrame::StyledPanel);
					ui->frame_6_02->setFrameShadow(QFrame::Raised);
					pixel_6_02 = false;
				}
				break;

			case 3:
				if ( pixel_6_03 == true ) {
					ui->frame_6_03->setObjectName(QString::fromUtf8("frame_6_03"));
					ui->frame_6_03->setGeometry(QRect(335, 53, 8, 8));
					ui->frame_6_03->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_6_03->setAutoFillBackground(true);
					ui->frame_6_03->setFrameShape(QFrame::StyledPanel);
					ui->frame_6_03->setFrameShadow(QFrame::Raised);
					pixel_6_03 = false;
				}
				break;

			case 4:
				if ( pixel_6_04 == true ) {
					ui->frame_6_04->setObjectName(QString::fromUtf8("frame_6_04"));
					ui->frame_6_04->setGeometry(QRect(335, 64, 8, 8));
					ui->frame_6_04->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_6_04->setAutoFillBackground(true);
					ui->frame_6_04->setFrameShape(QFrame::StyledPanel);
					ui->frame_6_04->setFrameShadow(QFrame::Raised);
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
					ui->frame_6_15->setObjectName(QString::fromUtf8("frame_6_15"));
					ui->frame_6_15->setGeometry(QRect(343, 80, 8, 8));
					ui->frame_6_15->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_6_15->setAutoFillBackground(true);
					ui->frame_6_15->setFrameShape(QFrame::StyledPanel);
					ui->frame_6_15->setFrameShadow(QFrame::Raised);
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
					ui->frame_7_10->setObjectName(QString::fromUtf8("frame_7_10"));
					ui->frame_7_10->setGeometry(QRect(353, 20, 8, 8));
					ui->frame_7_10->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_7_10->setAutoFillBackground(true);
					ui->frame_7_10->setFrameShape(QFrame::StyledPanel);
					ui->frame_7_10->setFrameShadow(QFrame::Raised);
					pixel_7_10 = false;
				}
				break;

			case 1:
				if ( pixel_7_11 == true ) {
					ui->frame_7_11->setObjectName(QString::fromUtf8("frame_7_11"));
					ui->frame_7_11->setGeometry(QRect(353, 31, 8, 8));
					ui->frame_7_11->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_7_11->setAutoFillBackground(true);
					ui->frame_7_11->setFrameShape(QFrame::StyledPanel);
					ui->frame_7_11->setFrameShadow(QFrame::Raised);
					pixel_7_11 = false;
				}
				break;

			case 2:
				if ( pixel_7_12 == true ) {
					ui->frame_7_12->setObjectName(QString::fromUtf8("frame_7_12"));
					ui->frame_7_12->setGeometry(QRect(353, 42, 8, 8));
					ui->frame_7_12->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_7_12->setAutoFillBackground(true);
					ui->frame_7_12->setFrameShape(QFrame::StyledPanel);
					ui->frame_7_12->setFrameShadow(QFrame::Raised);
					pixel_7_12 = false;
				}
				break;

			case 3:
				if ( pixel_7_13 == true ) {
					ui->frame_7_13->setObjectName(QString::fromUtf8("frame_7_13"));
					ui->frame_7_13->setGeometry(QRect(353, 53, 8, 8));
					ui->frame_7_13->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_7_13->setAutoFillBackground(true);
					ui->frame_7_13->setFrameShape(QFrame::StyledPanel);
					ui->frame_7_13->setFrameShadow(QFrame::Raised);
					pixel_7_13 = false;
				}
				break;

			case 4:
				if ( pixel_7_14 == true ) {
					ui->frame_7_14->setObjectName(QString::fromUtf8("frame_7_14"));
					ui->frame_7_14->setGeometry(QRect(353, 64, 8, 8));
					ui->frame_7_14->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_7_14->setAutoFillBackground(true);
					ui->frame_7_14->setFrameShape(QFrame::StyledPanel);
					ui->frame_7_14->setFrameShadow(QFrame::Raised);
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
					ui->frame_7_05->setObjectName(QString::fromUtf8("frame_7_05"));
					ui->frame_7_05->setGeometry(QRect(364, 20, 8, 8));
					ui->frame_7_05->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_7_05->setAutoFillBackground(true);
					ui->frame_7_05->setFrameShape(QFrame::StyledPanel);
					ui->frame_7_05->setFrameShadow(QFrame::Raised);
					pixel_7_05 = false;
				}
				break;

			case 1:
				if ( pixel_7_06 == true ) {
					ui->frame_7_06->setObjectName(QString::fromUtf8("frame_7_06"));
					ui->frame_7_06->setGeometry(QRect(364, 31, 8, 8));
					ui->frame_7_06->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_7_06->setAutoFillBackground(true);
					ui->frame_7_06->setFrameShape(QFrame::StyledPanel);
					ui->frame_7_06->setFrameShadow(QFrame::Raised);
					pixel_7_06 = false;
				}
				break;

			case 2:
				if ( pixel_7_07 == true ) {
					ui->frame_7_07->setObjectName(QString::fromUtf8("frame_7_07"));
					ui->frame_7_07->setGeometry(QRect(364, 42, 8, 8));
					ui->frame_7_07->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_7_07->setAutoFillBackground(true);
					ui->frame_7_07->setFrameShape(QFrame::StyledPanel);
					ui->frame_7_07->setFrameShadow(QFrame::Raised);
					pixel_7_07 = false;
				}
				break;

			case 3:
				if ( pixel_7_08 == true ) {
					ui->frame_7_08->setObjectName(QString::fromUtf8("frame_7_08"));
					ui->frame_7_08->setGeometry(QRect(364, 53, 8, 8));
					ui->frame_7_08->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_7_08->setAutoFillBackground(true);
					ui->frame_7_08->setFrameShape(QFrame::StyledPanel);
					ui->frame_7_08->setFrameShadow(QFrame::Raised);
					pixel_7_08 = false;
				}
				break;

			case 4:
				if ( pixel_7_09 == true ) {
					ui->frame_7_09->setObjectName(QString::fromUtf8("frame_7_09"));
					ui->frame_7_09->setGeometry(QRect(364, 64, 8, 8));
					ui->frame_7_09->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_7_09->setAutoFillBackground(true);
					ui->frame_7_09->setFrameShape(QFrame::StyledPanel);
					ui->frame_7_09->setFrameShadow(QFrame::Raised);
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
					ui->frame_7_00->setObjectName(QString::fromUtf8("frame_7_00"));
					ui->frame_7_00->setGeometry(QRect(375, 20, 8, 8));
					ui->frame_7_00->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_7_00->setAutoFillBackground(true);
					ui->frame_7_00->setFrameShape(QFrame::StyledPanel);
					ui->frame_7_00->setFrameShadow(QFrame::Raised);
					pixel_7_00 = false;
				}
				break;

			case 1:
				if ( pixel_7_01 == true ) {
					ui->frame_7_01->setObjectName(QString::fromUtf8("frame_7_01"));
					ui->frame_7_01->setGeometry(QRect(375, 31, 8, 8));
					ui->frame_7_01->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_7_01->setAutoFillBackground(true);
					ui->frame_7_01->setFrameShape(QFrame::StyledPanel);
					ui->frame_7_01->setFrameShadow(QFrame::Raised);
					pixel_7_01 = false;
				}
				break;

			case 2:
				if ( pixel_7_02 == true ) {
					ui->frame_7_02->setObjectName(QString::fromUtf8("frame_7_02"));
					ui->frame_7_02->setGeometry(QRect(375, 42, 8, 8));
					ui->frame_7_02->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_7_02->setAutoFillBackground(true);
					ui->frame_7_02->setFrameShape(QFrame::StyledPanel);
					ui->frame_7_02->setFrameShadow(QFrame::Raised);
					pixel_7_02 = false;
				}
				break;

			case 3:
				if ( pixel_7_03 == true ) {
					ui->frame_7_03->setObjectName(QString::fromUtf8("frame_7_03"));
					ui->frame_7_03->setGeometry(QRect(375, 53, 8, 8));
					ui->frame_7_03->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_7_03->setAutoFillBackground(true);
					ui->frame_7_03->setFrameShape(QFrame::StyledPanel);
					ui->frame_7_03->setFrameShadow(QFrame::Raised);
					pixel_7_03 = false;
				}
				break;

			case 4:
				if ( pixel_7_04 == true ) {
					ui->frame_7_04->setObjectName(QString::fromUtf8("frame_7_04"));
					ui->frame_7_04->setGeometry(QRect(375, 64, 8, 8));
					ui->frame_7_04->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_7_04->setAutoFillBackground(true);
					ui->frame_7_04->setFrameShape(QFrame::StyledPanel);
					ui->frame_7_04->setFrameShadow(QFrame::Raised);
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
					ui->frame_7_15->setObjectName(QString::fromUtf8("frame_7_15"));
					ui->frame_7_15->setGeometry(QRect(383, 80, 8, 8));
					ui->frame_7_15->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_7_15->setAutoFillBackground(true);
					ui->frame_7_15->setFrameShape(QFrame::StyledPanel);
					ui->frame_7_15->setFrameShadow(QFrame::Raised);
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
					ui->frame_8_10->setObjectName(QString::fromUtf8("frame_8_10"));
					ui->frame_8_10->setGeometry(QRect(393, 20, 8, 8));
					ui->frame_8_10->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_8_10->setAutoFillBackground(true);
					ui->frame_8_10->setFrameShape(QFrame::StyledPanel);
					ui->frame_8_10->setFrameShadow(QFrame::Raised);
					pixel_8_10 = false;
				}
				break;

			case 1:
				if ( pixel_8_11 == true ) {
					ui->frame_8_11->setObjectName(QString::fromUtf8("frame_8_11"));
					ui->frame_8_11->setGeometry(QRect(393, 31, 8, 8));
					ui->frame_8_11->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_8_11->setAutoFillBackground(true);
					ui->frame_8_11->setFrameShape(QFrame::StyledPanel);
					ui->frame_8_11->setFrameShadow(QFrame::Raised);
					pixel_8_11 = false;
				}
				break;

			case 2:
				if ( pixel_8_12 == true ) {
					ui->frame_8_12->setObjectName(QString::fromUtf8("frame_8_12"));
					ui->frame_8_12->setGeometry(QRect(393, 42, 8, 8));
					ui->frame_8_12->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_8_12->setAutoFillBackground(true);
					ui->frame_8_12->setFrameShape(QFrame::StyledPanel);
					ui->frame_8_12->setFrameShadow(QFrame::Raised);
					pixel_8_12 = false;
				}
				break;

			case 3:
				if ( pixel_8_13 == true ) {
					ui->frame_8_13->setObjectName(QString::fromUtf8("frame_8_13"));
					ui->frame_8_13->setGeometry(QRect(393, 53, 8, 8));
					ui->frame_8_13->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_8_13->setAutoFillBackground(true);
					ui->frame_8_13->setFrameShape(QFrame::StyledPanel);
					ui->frame_8_13->setFrameShadow(QFrame::Raised);
					pixel_8_13 = false;
				}
				break;

			case 4:
				if ( pixel_8_14 == true ) {
					ui->frame_8_14->setObjectName(QString::fromUtf8("frame_8_14"));
					ui->frame_8_14->setGeometry(QRect(393, 64, 8, 8));
					ui->frame_8_14->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_8_14->setAutoFillBackground(true);
					ui->frame_8_14->setFrameShape(QFrame::StyledPanel);
					ui->frame_8_14->setFrameShadow(QFrame::Raised);
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
					ui->frame_8_05->setObjectName(QString::fromUtf8("frame_8_05"));
					ui->frame_8_05->setGeometry(QRect(404, 20, 8, 8));
					ui->frame_8_05->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_8_05->setAutoFillBackground(true);
					ui->frame_8_05->setFrameShape(QFrame::StyledPanel);
					ui->frame_8_05->setFrameShadow(QFrame::Raised);
					pixel_8_05 = false;
				}
				break;

			case 1:
				if ( pixel_8_06 == true ) {
					ui->frame_8_06->setObjectName(QString::fromUtf8("frame_8_06"));
					ui->frame_8_06->setGeometry(QRect(404, 31, 8, 8));
					ui->frame_8_06->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_8_06->setAutoFillBackground(true);
					ui->frame_8_06->setFrameShape(QFrame::StyledPanel);
					ui->frame_8_06->setFrameShadow(QFrame::Raised);
					pixel_8_06 = false;
				}
				break;

			case 2:
				if ( pixel_8_07 == true ) {
					ui->frame_8_07->setObjectName(QString::fromUtf8("frame_8_07"));
					ui->frame_8_07->setGeometry(QRect(404, 42, 8, 8));
					ui->frame_8_07->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_8_07->setAutoFillBackground(true);
					ui->frame_8_07->setFrameShape(QFrame::StyledPanel);
					ui->frame_8_07->setFrameShadow(QFrame::Raised);
					pixel_8_07 = false;
				}
				break;

			case 3:
				if ( pixel_8_08 == true ) {
					ui->frame_8_08->setObjectName(QString::fromUtf8("frame_8_08"));
					ui->frame_8_08->setGeometry(QRect(404, 53, 8, 8));
					ui->frame_8_08->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_8_08->setAutoFillBackground(true);
					ui->frame_8_08->setFrameShape(QFrame::StyledPanel);
					ui->frame_8_08->setFrameShadow(QFrame::Raised);
					pixel_8_08 = false;
				}
				break;

			case 4:
				if ( pixel_8_09 == true ) {
					ui->frame_8_09->setObjectName(QString::fromUtf8("frame_8_09"));
					ui->frame_8_09->setGeometry(QRect(404, 64, 8, 8));
					ui->frame_8_09->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_8_09->setAutoFillBackground(true);
					ui->frame_8_09->setFrameShape(QFrame::StyledPanel);
					ui->frame_8_09->setFrameShadow(QFrame::Raised);
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
					ui->frame_8_00->setObjectName(QString::fromUtf8("frame_8_00"));
					ui->frame_8_00->setGeometry(QRect(415, 20, 8, 8));
					ui->frame_8_00->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_8_00->setAutoFillBackground(true);
					ui->frame_8_00->setFrameShape(QFrame::StyledPanel);
					ui->frame_8_00->setFrameShadow(QFrame::Raised);
					pixel_8_00 = false;
				}
				break;

			case 1:
				if ( pixel_8_01 == true ) {
					ui->frame_8_01->setObjectName(QString::fromUtf8("frame_8_01"));
					ui->frame_8_01->setGeometry(QRect(415, 31, 8, 8));
					ui->frame_8_01->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_8_01->setAutoFillBackground(true);
					ui->frame_8_01->setFrameShape(QFrame::StyledPanel);
					ui->frame_8_01->setFrameShadow(QFrame::Raised);
					pixel_8_01 = false;
				}
				break;

			case 2:
				if ( pixel_8_02 == true ) {
					ui->frame_8_02->setObjectName(QString::fromUtf8("frame_8_02"));
					ui->frame_8_02->setGeometry(QRect(415, 42, 8, 8));
					ui->frame_8_02->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_8_02->setAutoFillBackground(true);
					ui->frame_8_02->setFrameShape(QFrame::StyledPanel);
					ui->frame_8_02->setFrameShadow(QFrame::Raised);
					pixel_8_02 = false;
				}
				break;

			case 3:
				if ( pixel_8_03 == true ) {
					ui->frame_8_03->setObjectName(QString::fromUtf8("frame_8_03"));
					ui->frame_8_03->setGeometry(QRect(415, 53, 8, 8));
					ui->frame_8_03->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_8_03->setAutoFillBackground(true);
					ui->frame_8_03->setFrameShape(QFrame::StyledPanel);
					ui->frame_8_03->setFrameShadow(QFrame::Raised);
					pixel_8_03 = false;
				}
				break;

			case 4:
				if ( pixel_8_04 == true ) {
					ui->frame_8_04->setObjectName(QString::fromUtf8("frame_8_04"));
					ui->frame_8_04->setGeometry(QRect(415, 64, 8, 8));
					ui->frame_8_04->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_8_04->setAutoFillBackground(true);
					ui->frame_8_04->setFrameShape(QFrame::StyledPanel);
					ui->frame_8_04->setFrameShadow(QFrame::Raised);
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
					ui->frame_8_15->setObjectName(QString::fromUtf8("frame_8_15"));
					ui->frame_8_15->setGeometry(QRect(423, 80, 8, 8));
					ui->frame_8_15->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_8_15->setAutoFillBackground(true);
					ui->frame_8_15->setFrameShape(QFrame::StyledPanel);
					ui->frame_8_15->setFrameShadow(QFrame::Raised);
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
					ui->frame_9_10->setObjectName(QString::fromUtf8("frame_9_10"));
					ui->frame_9_10->setGeometry(QRect(433, 20, 8, 8));
					ui->frame_9_10->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_9_10->setAutoFillBackground(true);
					ui->frame_9_10->setFrameShape(QFrame::StyledPanel);
					ui->frame_9_10->setFrameShadow(QFrame::Raised);
					pixel_9_10 = false;
				}
				break;

			case 1:
				if ( pixel_9_11 == true ) {
					ui->frame_9_11->setObjectName(QString::fromUtf8("frame_9_11"));
					ui->frame_9_11->setGeometry(QRect(433, 31, 8, 8));
					ui->frame_9_11->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_9_11->setAutoFillBackground(true);
					ui->frame_9_11->setFrameShape(QFrame::StyledPanel);
					ui->frame_9_11->setFrameShadow(QFrame::Raised);
					pixel_9_11 = false;
				}
				break;

			case 2:
				if ( pixel_9_12 == true ) {
					ui->frame_9_12->setObjectName(QString::fromUtf8("frame_9_12"));
					ui->frame_9_12->setGeometry(QRect(433, 42, 8, 8));
					ui->frame_9_12->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_9_12->setAutoFillBackground(true);
					ui->frame_9_12->setFrameShape(QFrame::StyledPanel);
					ui->frame_9_12->setFrameShadow(QFrame::Raised);
					pixel_9_12 = false;
				}
				break;

			case 3:
				if ( pixel_9_13 == true ) {
					ui->frame_9_13->setObjectName(QString::fromUtf8("frame_9_13"));
					ui->frame_9_13->setGeometry(QRect(433, 53, 8, 8));
					ui->frame_9_13->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_9_13->setAutoFillBackground(true);
					ui->frame_9_13->setFrameShape(QFrame::StyledPanel);
					ui->frame_9_13->setFrameShadow(QFrame::Raised);
					pixel_9_13 = false;
				}
				break;

			case 4:
				if ( pixel_9_14 == true ) {
					ui->frame_9_14->setObjectName(QString::fromUtf8("frame_9_14"));
					ui->frame_9_14->setGeometry(QRect(433, 64, 8, 8));
					ui->frame_9_14->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_9_14->setAutoFillBackground(true);
					ui->frame_9_14->setFrameShape(QFrame::StyledPanel);
					ui->frame_9_14->setFrameShadow(QFrame::Raised);
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
					ui->frame_9_05->setObjectName(QString::fromUtf8("frame_9_05"));
					ui->frame_9_05->setGeometry(QRect(444, 20, 8, 8));
					ui->frame_9_05->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_9_05->setAutoFillBackground(true);
					ui->frame_9_05->setFrameShape(QFrame::StyledPanel);
					ui->frame_9_05->setFrameShadow(QFrame::Raised);
					pixel_9_05 = false;
				}
				break;

			case 1:
				if ( pixel_9_06 == true ) {
					ui->frame_9_06->setObjectName(QString::fromUtf8("frame_9_06"));
					ui->frame_9_06->setGeometry(QRect(444, 31, 8, 8));
					ui->frame_9_06->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_9_06->setAutoFillBackground(true);
					ui->frame_9_06->setFrameShape(QFrame::StyledPanel);
					ui->frame_9_06->setFrameShadow(QFrame::Raised);
					pixel_9_06 = false;
				}
				break;

			case 2:
				if ( pixel_9_07 == true ) {
					ui->frame_9_07->setObjectName(QString::fromUtf8("frame_9_07"));
					ui->frame_9_07->setGeometry(QRect(444, 42, 8, 8));
					ui->frame_9_07->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_9_07->setAutoFillBackground(true);
					ui->frame_9_07->setFrameShape(QFrame::StyledPanel);
					ui->frame_9_07->setFrameShadow(QFrame::Raised);
					pixel_9_07 = false;
				}
				break;

			case 3:
				if ( pixel_9_08 == true ) {
					ui->frame_9_08->setObjectName(QString::fromUtf8("frame_9_08"));
					ui->frame_9_08->setGeometry(QRect(444, 53, 8, 8));
					ui->frame_9_08->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_9_08->setAutoFillBackground(true);
					ui->frame_9_08->setFrameShape(QFrame::StyledPanel);
					ui->frame_9_08->setFrameShadow(QFrame::Raised);
					pixel_9_08 = false;
				}
				break;

			case 4:
				if ( pixel_9_09 == true ) {
					ui->frame_9_09->setObjectName(QString::fromUtf8("frame_9_09"));
					ui->frame_9_09->setGeometry(QRect(444, 64, 8, 8));
					ui->frame_9_09->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_9_09->setAutoFillBackground(true);
					ui->frame_9_09->setFrameShape(QFrame::StyledPanel);
					ui->frame_9_09->setFrameShadow(QFrame::Raised);
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
					ui->frame_9_00->setObjectName(QString::fromUtf8("frame_9_00"));
					ui->frame_9_00->setGeometry(QRect(455, 20, 8, 8));
					ui->frame_9_00->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_9_00->setAutoFillBackground(true);
					ui->frame_9_00->setFrameShape(QFrame::StyledPanel);
					ui->frame_9_00->setFrameShadow(QFrame::Raised);
					pixel_9_00 = false;
				}
				break;

			case 1:
				if ( pixel_9_01 == true ) {
					ui->frame_9_01->setObjectName(QString::fromUtf8("frame_9_01"));
					ui->frame_9_01->setGeometry(QRect(455, 31, 8, 8));
					ui->frame_9_01->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_9_01->setAutoFillBackground(true);
					ui->frame_9_01->setFrameShape(QFrame::StyledPanel);
					ui->frame_9_01->setFrameShadow(QFrame::Raised);
					pixel_9_01 = false;
				}
				break;

			case 2:
				if ( pixel_9_02 == true ) {
					ui->frame_9_02->setObjectName(QString::fromUtf8("frame_9_02"));
					ui->frame_9_02->setGeometry(QRect(455, 42, 8, 8));
					ui->frame_9_02->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_9_02->setAutoFillBackground(true);
					ui->frame_9_02->setFrameShape(QFrame::StyledPanel);
					ui->frame_9_02->setFrameShadow(QFrame::Raised);
					pixel_9_02 = false;
				}
				break;

			case 3:
				if ( pixel_9_03 == true ) {
					ui->frame_9_03->setObjectName(QString::fromUtf8("frame_9_03"));
					ui->frame_9_03->setGeometry(QRect(455, 53, 8, 8));
					ui->frame_9_03->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_9_03->setAutoFillBackground(true);
					ui->frame_9_03->setFrameShape(QFrame::StyledPanel);
					ui->frame_9_03->setFrameShadow(QFrame::Raised);
					pixel_9_03 = false;
				}
				break;

			case 4:
				if ( pixel_9_04 == true ) {
					ui->frame_9_04->setObjectName(QString::fromUtf8("frame_9_04"));
					ui->frame_9_04->setGeometry(QRect(455, 64, 8, 8));
					ui->frame_9_04->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_9_04->setAutoFillBackground(true);
					ui->frame_9_04->setFrameShape(QFrame::StyledPanel);
					ui->frame_9_04->setFrameShadow(QFrame::Raised);
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
					ui->frame_9_15->setObjectName(QString::fromUtf8("frame_9_15"));
					ui->frame_9_15->setGeometry(QRect(463, 80, 8, 8));
					ui->frame_9_15->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_9_15->setAutoFillBackground(true);
					ui->frame_9_15->setFrameShape(QFrame::StyledPanel);
					ui->frame_9_15->setFrameShadow(QFrame::Raised);
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
					ui->frame_a_10->setObjectName(QString::fromUtf8("frame_a_10"));
					ui->frame_a_10->setGeometry(QRect(473, 20, 8, 8));
					ui->frame_a_10->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_a_10->setAutoFillBackground(true);
					ui->frame_a_10->setFrameShape(QFrame::StyledPanel);
					ui->frame_a_10->setFrameShadow(QFrame::Raised);
					pixel_a_10 = false;
				}
				break;

			case 1:
				if ( pixel_a_11 == true ) {
					ui->frame_a_11->setObjectName(QString::fromUtf8("frame_a_11"));
					ui->frame_a_11->setGeometry(QRect(473, 31, 8, 8));
					ui->frame_a_11->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_a_11->setAutoFillBackground(true);
					ui->frame_a_11->setFrameShape(QFrame::StyledPanel);
					ui->frame_a_11->setFrameShadow(QFrame::Raised);
					pixel_a_11 = false;
				}
				break;

			case 2:
				if ( pixel_a_12 == true ) {
					ui->frame_a_12->setObjectName(QString::fromUtf8("frame_a_12"));
					ui->frame_a_12->setGeometry(QRect(473, 42, 8, 8));
					ui->frame_a_12->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_a_12->setAutoFillBackground(true);
					ui->frame_a_12->setFrameShape(QFrame::StyledPanel);
					ui->frame_a_12->setFrameShadow(QFrame::Raised);
					pixel_a_12 = false;
				}
				break;

			case 3:
				if ( pixel_a_13 == true ) {
					ui->frame_a_13->setObjectName(QString::fromUtf8("frame_a_13"));
					ui->frame_a_13->setGeometry(QRect(473, 53, 8, 8));
					ui->frame_a_13->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_a_13->setAutoFillBackground(true);
					ui->frame_a_13->setFrameShape(QFrame::StyledPanel);
					ui->frame_a_13->setFrameShadow(QFrame::Raised);
					pixel_a_13 = false;
				}
				break;

			case 4:
				if ( pixel_a_14 == true ) {
					ui->frame_a_14->setObjectName(QString::fromUtf8("frame_a_14"));
					ui->frame_a_14->setGeometry(QRect(473, 64, 8, 8));
					ui->frame_a_14->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_a_14->setAutoFillBackground(true);
					ui->frame_a_14->setFrameShape(QFrame::StyledPanel);
					ui->frame_a_14->setFrameShadow(QFrame::Raised);
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
					ui->frame_a_05->setObjectName(QString::fromUtf8("frame_a_05"));
					ui->frame_a_05->setGeometry(QRect(484, 20, 8, 8));
					ui->frame_a_05->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_a_05->setAutoFillBackground(true);
					ui->frame_a_05->setFrameShape(QFrame::StyledPanel);
					ui->frame_a_05->setFrameShadow(QFrame::Raised);
					pixel_a_05 = false;
				}
				break;

			case 1:
				if ( pixel_a_06 == true ) {
					ui->frame_a_06->setObjectName(QString::fromUtf8("frame_a_06"));
					ui->frame_a_06->setGeometry(QRect(484, 31, 8, 8));
					ui->frame_a_06->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_a_06->setAutoFillBackground(true);
					ui->frame_a_06->setFrameShape(QFrame::StyledPanel);
					ui->frame_a_06->setFrameShadow(QFrame::Raised);
					pixel_a_06 = false;
				}
				break;

			case 2:
				if ( pixel_a_07 == true ) {
					ui->frame_a_07->setObjectName(QString::fromUtf8("frame_a_07"));
					ui->frame_a_07->setGeometry(QRect(484, 42, 8, 8));
					ui->frame_a_07->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_a_07->setAutoFillBackground(true);
					ui->frame_a_07->setFrameShape(QFrame::StyledPanel);
					ui->frame_a_07->setFrameShadow(QFrame::Raised);
					pixel_a_07 = false;
				}
				break;

			case 3:
				if ( pixel_a_08 == true ) {
					ui->frame_a_08->setObjectName(QString::fromUtf8("frame_a_08"));
					ui->frame_a_08->setGeometry(QRect(484, 53, 8, 8));
					ui->frame_a_08->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_a_08->setAutoFillBackground(true);
					ui->frame_a_08->setFrameShape(QFrame::StyledPanel);
					ui->frame_a_08->setFrameShadow(QFrame::Raised);
					pixel_a_08 = false;
				}
				break;

			case 4:
				if ( pixel_a_09 == true ) {
					ui->frame_a_09->setObjectName(QString::fromUtf8("frame_a_09"));
					ui->frame_a_09->setGeometry(QRect(484, 64, 8, 8));
					ui->frame_a_09->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_a_09->setAutoFillBackground(true);
					ui->frame_a_09->setFrameShape(QFrame::StyledPanel);
					ui->frame_a_09->setFrameShadow(QFrame::Raised);
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
					ui->frame_a_00->setObjectName(QString::fromUtf8("frame_a_00"));
					ui->frame_a_00->setGeometry(QRect(495, 20, 8, 8));
					ui->frame_a_00->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_a_00->setAutoFillBackground(true);
					ui->frame_a_00->setFrameShape(QFrame::StyledPanel);
					ui->frame_a_00->setFrameShadow(QFrame::Raised);
					pixel_a_00 = false;
				}
				break;

			case 1:
				if ( pixel_a_01 == true ) {
					ui->frame_a_01->setObjectName(QString::fromUtf8("frame_a_01"));
					ui->frame_a_01->setGeometry(QRect(495, 31, 8, 8));
					ui->frame_a_01->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_a_01->setAutoFillBackground(true);
					ui->frame_a_01->setFrameShape(QFrame::StyledPanel);
					ui->frame_a_01->setFrameShadow(QFrame::Raised);
					pixel_a_01 = false;
				}
				break;

			case 2:
				if ( pixel_a_02 == true ) {
					ui->frame_a_02->setObjectName(QString::fromUtf8("frame_a_02"));
					ui->frame_a_02->setGeometry(QRect(495, 42, 8, 8));
					ui->frame_a_02->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_a_02->setAutoFillBackground(true);
					ui->frame_a_02->setFrameShape(QFrame::StyledPanel);
					ui->frame_a_02->setFrameShadow(QFrame::Raised);
					pixel_a_02 = false;
				}
				break;

			case 3:
				if ( pixel_a_03 == true ) {
					ui->frame_a_03->setObjectName(QString::fromUtf8("frame_a_03"));
					ui->frame_a_03->setGeometry(QRect(495, 53, 8, 8));
					ui->frame_a_03->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_a_03->setAutoFillBackground(true);
					ui->frame_a_03->setFrameShape(QFrame::StyledPanel);
					ui->frame_a_03->setFrameShadow(QFrame::Raised);
					pixel_a_03 = false;
				}
				break;

			case 4:
				if ( pixel_a_04 == true ) {
					ui->frame_a_04->setObjectName(QString::fromUtf8("frame_a_04"));
					ui->frame_a_04->setGeometry(QRect(495, 64, 8, 8));
					ui->frame_a_04->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_a_04->setAutoFillBackground(true);
					ui->frame_a_04->setFrameShape(QFrame::StyledPanel);
					ui->frame_a_04->setFrameShadow(QFrame::Raised);
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
					ui->frame_a_15->setObjectName(QString::fromUtf8("frame_a_15"));
					ui->frame_a_15->setGeometry(QRect(503, 80, 8, 8));
					ui->frame_a_15->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_a_15->setAutoFillBackground(true);
					ui->frame_a_15->setFrameShape(QFrame::StyledPanel);
					ui->frame_a_15->setFrameShadow(QFrame::Raised);
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
					ui->frame_b_10->setObjectName(QString::fromUtf8("frame_b_10"));
					ui->frame_b_10->setGeometry(QRect(513, 20, 8, 8));
					ui->frame_b_10->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_b_10->setAutoFillBackground(true);
					ui->frame_b_10->setFrameShape(QFrame::StyledPanel);
					ui->frame_b_10->setFrameShadow(QFrame::Raised);
					pixel_b_10 = false;
				}
				break;

			case 1:
				if ( pixel_b_11 == true ) {
					ui->frame_b_11->setObjectName(QString::fromUtf8("frame_b_11"));
					ui->frame_b_11->setGeometry(QRect(513, 31, 8, 8));
					ui->frame_b_11->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_b_11->setAutoFillBackground(true);
					ui->frame_b_11->setFrameShape(QFrame::StyledPanel);
					ui->frame_b_11->setFrameShadow(QFrame::Raised);
					pixel_b_11 = false;
				}
				break;

			case 2:
				if ( pixel_b_12 == true ) {
					ui->frame_b_12->setObjectName(QString::fromUtf8("frame_b_12"));
					ui->frame_b_12->setGeometry(QRect(513, 42, 8, 8));
					ui->frame_b_12->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_b_12->setAutoFillBackground(true);
					ui->frame_b_12->setFrameShape(QFrame::StyledPanel);
					ui->frame_b_12->setFrameShadow(QFrame::Raised);
					pixel_b_12 = false;
				}
				break;

			case 3:
				if ( pixel_b_13 == true ) {
					ui->frame_b_13->setObjectName(QString::fromUtf8("frame_b_13"));
					ui->frame_b_13->setGeometry(QRect(513, 53, 8, 8));
					ui->frame_b_13->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_b_13->setAutoFillBackground(true);
					ui->frame_b_13->setFrameShape(QFrame::StyledPanel);
					ui->frame_b_13->setFrameShadow(QFrame::Raised);
					pixel_b_13 = false;
				}
				break;

			case 4:
				if ( pixel_b_14 == true ) {
					ui->frame_b_14->setObjectName(QString::fromUtf8("frame_b_14"));
					ui->frame_b_14->setGeometry(QRect(513, 64, 8, 8));
					ui->frame_b_14->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_b_14->setAutoFillBackground(true);
					ui->frame_b_14->setFrameShape(QFrame::StyledPanel);
					ui->frame_b_14->setFrameShadow(QFrame::Raised);
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
					ui->frame_b_05->setObjectName(QString::fromUtf8("frame_b_05"));
					ui->frame_b_05->setGeometry(QRect(524, 20, 8, 8));
					ui->frame_b_05->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_b_05->setAutoFillBackground(true);
					ui->frame_b_05->setFrameShape(QFrame::StyledPanel);
					ui->frame_b_05->setFrameShadow(QFrame::Raised);
					pixel_b_05 = false;
				}
				break;

			case 1:
				if ( pixel_b_06 == true ) {
					ui->frame_b_06->setObjectName(QString::fromUtf8("frame_b_06"));
					ui->frame_b_06->setGeometry(QRect(524, 31, 8, 8));
					ui->frame_b_06->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_b_06->setAutoFillBackground(true);
					ui->frame_b_06->setFrameShape(QFrame::StyledPanel);
					ui->frame_b_06->setFrameShadow(QFrame::Raised);
					pixel_b_06 = false;
				}
				break;

			case 2:
				if ( pixel_b_07 == true ) {
					ui->frame_b_07->setObjectName(QString::fromUtf8("frame_b_07"));
					ui->frame_b_07->setGeometry(QRect(524, 42, 8, 8));
					ui->frame_b_07->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_b_07->setAutoFillBackground(true);
					ui->frame_b_07->setFrameShape(QFrame::StyledPanel);
					ui->frame_b_07->setFrameShadow(QFrame::Raised);
					pixel_b_07 = false;
				}
				break;

			case 3:
				if ( pixel_b_08 == true ) {
					ui->frame_b_08->setObjectName(QString::fromUtf8("frame_b_08"));
					ui->frame_b_08->setGeometry(QRect(524, 53, 8, 8));
					ui->frame_b_08->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_b_08->setAutoFillBackground(true);
					ui->frame_b_08->setFrameShape(QFrame::StyledPanel);
					ui->frame_b_08->setFrameShadow(QFrame::Raised);
					pixel_b_08 = false;
				}
				break;

			case 4:
				if ( pixel_b_09 == true ) {
					ui->frame_b_09->setObjectName(QString::fromUtf8("frame_b_09"));
					ui->frame_b_09->setGeometry(QRect(524, 64, 8, 8));
					ui->frame_b_09->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_b_09->setAutoFillBackground(true);
					ui->frame_b_09->setFrameShape(QFrame::StyledPanel);
					ui->frame_b_09->setFrameShadow(QFrame::Raised);
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
					ui->frame_b_00->setObjectName(QString::fromUtf8("frame_b_00"));
					ui->frame_b_00->setGeometry(QRect(535, 20, 8, 8));
					ui->frame_b_00->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_b_00->setAutoFillBackground(true);
					ui->frame_b_00->setFrameShape(QFrame::StyledPanel);
					ui->frame_b_00->setFrameShadow(QFrame::Raised);
					pixel_b_00 = false;
				}
				break;

			case 1:
				if ( pixel_b_01 == true ) {
					ui->frame_b_01->setObjectName(QString::fromUtf8("frame_b_01"));
					ui->frame_b_01->setGeometry(QRect(535, 31, 8, 8));
					ui->frame_b_01->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_b_01->setAutoFillBackground(true);
					ui->frame_b_01->setFrameShape(QFrame::StyledPanel);
					ui->frame_b_01->setFrameShadow(QFrame::Raised);
					pixel_b_01 = false;
				}
				break;

			case 2:
				if ( pixel_b_02 == true ) {
					ui->frame_b_02->setObjectName(QString::fromUtf8("frame_b_02"));
					ui->frame_b_02->setGeometry(QRect(535, 42, 8, 8));
					ui->frame_b_02->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_b_02->setAutoFillBackground(true);
					ui->frame_b_02->setFrameShape(QFrame::StyledPanel);
					ui->frame_b_02->setFrameShadow(QFrame::Raised);
					pixel_b_02 = false;
				}
				break;

			case 3:
				if ( pixel_b_03 == true ) {
					ui->frame_b_03->setObjectName(QString::fromUtf8("frame_b_03"));
					ui->frame_b_03->setGeometry(QRect(535, 53, 8, 8));
					ui->frame_b_03->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_b_03->setAutoFillBackground(true);
					ui->frame_b_03->setFrameShape(QFrame::StyledPanel);
					ui->frame_b_03->setFrameShadow(QFrame::Raised);
					pixel_b_03 = false;
				}
				break;

			case 4:
				if ( pixel_b_04 == true ) {
					ui->frame_b_04->setObjectName(QString::fromUtf8("frame_b_04"));
					ui->frame_b_04->setGeometry(QRect(535, 64, 8, 8));
					ui->frame_b_04->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_b_04->setAutoFillBackground(true);
					ui->frame_b_04->setFrameShape(QFrame::StyledPanel);
					ui->frame_b_04->setFrameShadow(QFrame::Raised);
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
					ui->frame_b_15->setObjectName(QString::fromUtf8("frame_b_15"));
					ui->frame_b_15->setGeometry(QRect(543, 80, 8, 8));
					ui->frame_b_15->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_b_15->setAutoFillBackground(true);
					ui->frame_b_15->setFrameShape(QFrame::StyledPanel);
					ui->frame_b_15->setFrameShadow(QFrame::Raised);
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
					ui->frame_c_10->setObjectName(QString::fromUtf8("frame_c_10"));
					ui->frame_c_10->setGeometry(QRect(553, 20, 8, 8));
					ui->frame_c_10->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_c_10->setAutoFillBackground(true);
					ui->frame_c_10->setFrameShape(QFrame::StyledPanel);
					ui->frame_c_10->setFrameShadow(QFrame::Raised);
					pixel_c_10 = false;
				}
				break;

			case 1:
				if ( pixel_c_11 == true ) {
					ui->frame_c_11->setObjectName(QString::fromUtf8("frame_c_11"));
					ui->frame_c_11->setGeometry(QRect(553, 31, 8, 8));
					ui->frame_c_11->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_c_11->setAutoFillBackground(true);
					ui->frame_c_11->setFrameShape(QFrame::StyledPanel);
					ui->frame_c_11->setFrameShadow(QFrame::Raised);
					pixel_c_11 = false;
				}
				break;

			case 2:
				if ( pixel_c_12 == true ) {
					ui->frame_c_12->setObjectName(QString::fromUtf8("frame_c_12"));
					ui->frame_c_12->setGeometry(QRect(553, 42, 8, 8));
					ui->frame_c_12->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_c_12->setAutoFillBackground(true);
					ui->frame_c_12->setFrameShape(QFrame::StyledPanel);
					ui->frame_c_12->setFrameShadow(QFrame::Raised);
					pixel_c_12 = false;
				}
				break;

			case 3:
				if ( pixel_c_13 == true ) {
					ui->frame_c_13->setObjectName(QString::fromUtf8("frame_c_13"));
					ui->frame_c_13->setGeometry(QRect(553, 53, 8, 8));
					ui->frame_c_13->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_c_13->setAutoFillBackground(true);
					ui->frame_c_13->setFrameShape(QFrame::StyledPanel);
					ui->frame_c_13->setFrameShadow(QFrame::Raised);
					pixel_c_13 = false;
				}
				break;

			case 4:
				if ( pixel_c_14 == true ) {
					ui->frame_c_14->setObjectName(QString::fromUtf8("frame_c_14"));
					ui->frame_c_14->setGeometry(QRect(553, 64, 8, 8));
					ui->frame_c_14->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_c_14->setAutoFillBackground(true);
					ui->frame_c_14->setFrameShape(QFrame::StyledPanel);
					ui->frame_c_14->setFrameShadow(QFrame::Raised);
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
					ui->frame_c_05->setObjectName(QString::fromUtf8("frame_c_05"));
					ui->frame_c_05->setGeometry(QRect(564, 20, 8, 8));
					ui->frame_c_05->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_c_05->setAutoFillBackground(true);
					ui->frame_c_05->setFrameShape(QFrame::StyledPanel);
					ui->frame_c_05->setFrameShadow(QFrame::Raised);
					pixel_c_05 = false;
				}
				break;

			case 1:
				if ( pixel_c_06 == true ) {
					ui->frame_c_06->setObjectName(QString::fromUtf8("frame_c_06"));
					ui->frame_c_06->setGeometry(QRect(564, 31, 8, 8));
					ui->frame_c_06->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_c_06->setAutoFillBackground(true);
					ui->frame_c_06->setFrameShape(QFrame::StyledPanel);
					ui->frame_c_06->setFrameShadow(QFrame::Raised);
					pixel_c_06 = false;
				}
				break;

			case 2:
				if ( pixel_c_07 == true ) {
					ui->frame_c_07->setObjectName(QString::fromUtf8("frame_c_07"));
					ui->frame_c_07->setGeometry(QRect(564, 42, 8, 8));
					ui->frame_c_07->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_c_07->setAutoFillBackground(true);
					ui->frame_c_07->setFrameShape(QFrame::StyledPanel);
					ui->frame_c_07->setFrameShadow(QFrame::Raised);
					pixel_c_07 = false;
				}
				break;

			case 3:
				if ( pixel_c_08 == true ) {
					ui->frame_c_08->setObjectName(QString::fromUtf8("frame_c_08"));
					ui->frame_c_08->setGeometry(QRect(564, 53, 8, 8));
					ui->frame_c_08->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_c_08->setAutoFillBackground(true);
					ui->frame_c_08->setFrameShape(QFrame::StyledPanel);
					ui->frame_c_08->setFrameShadow(QFrame::Raised);
					pixel_c_08 = false;
				}
				break;

			case 4:
				if ( pixel_c_09 == true ) {
					ui->frame_c_09->setObjectName(QString::fromUtf8("frame_c_09"));
					ui->frame_c_09->setGeometry(QRect(564, 64, 8, 8));
					ui->frame_c_09->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_c_09->setAutoFillBackground(true);
					ui->frame_c_09->setFrameShape(QFrame::StyledPanel);
					ui->frame_c_09->setFrameShadow(QFrame::Raised);
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
					ui->frame_c_00->setObjectName(QString::fromUtf8("frame_c_00"));
					ui->frame_c_00->setGeometry(QRect(575, 20, 8, 8));
					ui->frame_c_00->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_c_00->setAutoFillBackground(true);
					ui->frame_c_00->setFrameShape(QFrame::StyledPanel);
					ui->frame_c_00->setFrameShadow(QFrame::Raised);
					pixel_c_00 = false;
				}
				break;

			case 1:
				if ( pixel_c_01 == true ) {
					ui->frame_c_01->setObjectName(QString::fromUtf8("frame_c_01"));
					ui->frame_c_01->setGeometry(QRect(575, 31, 8, 8));
					ui->frame_c_01->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_c_01->setAutoFillBackground(true);
					ui->frame_c_01->setFrameShape(QFrame::StyledPanel);
					ui->frame_c_01->setFrameShadow(QFrame::Raised);
					pixel_c_01 = false;
				}
				break;

			case 2:
				if ( pixel_c_02 == true ) {
					ui->frame_c_02->setObjectName(QString::fromUtf8("frame_c_02"));
					ui->frame_c_02->setGeometry(QRect(575, 42, 8, 8));
					ui->frame_c_02->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_c_02->setAutoFillBackground(true);
					ui->frame_c_02->setFrameShape(QFrame::StyledPanel);
					ui->frame_c_02->setFrameShadow(QFrame::Raised);
					pixel_c_02 = false;
				}
				break;

			case 3:
				if ( pixel_c_03 == true ) {
					ui->frame_c_03->setObjectName(QString::fromUtf8("frame_c_03"));
					ui->frame_c_03->setGeometry(QRect(575, 53, 8, 8));
					ui->frame_c_03->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_c_03->setAutoFillBackground(true);
					ui->frame_c_03->setFrameShape(QFrame::StyledPanel);
					ui->frame_c_03->setFrameShadow(QFrame::Raised);
					pixel_c_03 = false;
				}
				break;

			case 4:
				if ( pixel_c_04 == true ) {
					ui->frame_c_04->setObjectName(QString::fromUtf8("frame_c_04"));
					ui->frame_c_04->setGeometry(QRect(575, 64, 8, 8));
					ui->frame_c_04->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_c_04->setAutoFillBackground(true);
					ui->frame_c_04->setFrameShape(QFrame::StyledPanel);
					ui->frame_c_04->setFrameShadow(QFrame::Raised);
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
					ui->frame_c_15->setObjectName(QString::fromUtf8("frame_c_15"));
					ui->frame_c_15->setGeometry(QRect(583, 80, 8, 8));
					ui->frame_c_15->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_c_15->setAutoFillBackground(true);
					ui->frame_c_15->setFrameShape(QFrame::StyledPanel);
					ui->frame_c_15->setFrameShadow(QFrame::Raised);
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
					ui->frame_d_10->setObjectName(QString::fromUtf8("frame_d_10"));
					ui->frame_d_10->setGeometry(QRect(633, 20, 8, 8));
					ui->frame_d_10->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_d_10->setAutoFillBackground(true);
					ui->frame_d_10->setFrameShape(QFrame::StyledPanel);
					ui->frame_d_10->setFrameShadow(QFrame::Raised);
					pixel_d_10 = false;
				}
				break;

			case 1:
				if ( pixel_d_11 == true ) {
					ui->frame_d_11->setObjectName(QString::fromUtf8("frame_d_11"));
					ui->frame_d_11->setGeometry(QRect(633, 31, 8, 8));
					ui->frame_d_11->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_d_11->setAutoFillBackground(true);
					ui->frame_d_11->setFrameShape(QFrame::StyledPanel);
					ui->frame_d_11->setFrameShadow(QFrame::Raised);
					pixel_d_11 = false;
				}
				break;

			case 2:
				if ( pixel_d_12 == true ) {
					ui->frame_d_12->setObjectName(QString::fromUtf8("frame_d_12"));
					ui->frame_d_12->setGeometry(QRect(633, 42, 8, 8));
					ui->frame_d_12->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_d_12->setAutoFillBackground(true);
					ui->frame_d_12->setFrameShape(QFrame::StyledPanel);
					ui->frame_d_12->setFrameShadow(QFrame::Raised);
					pixel_d_12 = false;
				}
				break;

			case 3:
				if ( pixel_d_13 == true ) {
					ui->frame_d_13->setObjectName(QString::fromUtf8("frame_d_13"));
					ui->frame_d_13->setGeometry(QRect(633, 53, 8, 8));
					ui->frame_d_13->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_d_13->setAutoFillBackground(true);
					ui->frame_d_13->setFrameShape(QFrame::StyledPanel);
					ui->frame_d_13->setFrameShadow(QFrame::Raised);
					pixel_d_13 = false;
				}
				break;

			case 4:
				if ( pixel_d_14 == true ) {
					ui->frame_d_14->setObjectName(QString::fromUtf8("frame_d_14"));
					ui->frame_d_14->setGeometry(QRect(633, 64, 8, 8));
					ui->frame_d_14->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_d_14->setAutoFillBackground(true);
					ui->frame_d_14->setFrameShape(QFrame::StyledPanel);
					ui->frame_d_14->setFrameShadow(QFrame::Raised);
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
					ui->frame_d_05->setObjectName(QString::fromUtf8("frame_d_05"));
					ui->frame_d_05->setGeometry(QRect(644, 20, 8, 8));
					ui->frame_d_05->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_d_05->setAutoFillBackground(true);
					ui->frame_d_05->setFrameShape(QFrame::StyledPanel);
					ui->frame_d_05->setFrameShadow(QFrame::Raised);
					pixel_d_05 = false;
				}
				break;

			case 1:
				if ( pixel_d_06 == true ) {
					ui->frame_d_06->setObjectName(QString::fromUtf8("frame_d_06"));
					ui->frame_d_06->setGeometry(QRect(644, 31, 8, 8));
					ui->frame_d_06->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_d_06->setAutoFillBackground(true);
					ui->frame_d_06->setFrameShape(QFrame::StyledPanel);
					ui->frame_d_06->setFrameShadow(QFrame::Raised);
					pixel_d_06 = false;
				}
				break;

			case 2:
				if ( pixel_d_07 == true ) {
					ui->frame_d_07->setObjectName(QString::fromUtf8("frame_d_07"));
					ui->frame_d_07->setGeometry(QRect(644, 42, 8, 8));
					ui->frame_d_07->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_d_07->setAutoFillBackground(true);
					ui->frame_d_07->setFrameShape(QFrame::StyledPanel);
					ui->frame_d_07->setFrameShadow(QFrame::Raised);
					pixel_d_07 = false;
				}
				break;

			case 3:
				if ( pixel_d_08 == true ) {
					ui->frame_d_08->setObjectName(QString::fromUtf8("frame_d_08"));
					ui->frame_d_08->setGeometry(QRect(644, 53, 8, 8));
					ui->frame_d_08->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_d_08->setAutoFillBackground(true);
					ui->frame_d_08->setFrameShape(QFrame::StyledPanel);
					ui->frame_d_08->setFrameShadow(QFrame::Raised);
					pixel_d_08 = false;
				}
				break;

			case 4:
				if ( pixel_d_09 == true ) {
					ui->frame_d_09->setObjectName(QString::fromUtf8("frame_d_09"));
					ui->frame_d_09->setGeometry(QRect(644, 64, 8, 8));
					ui->frame_d_09->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_d_09->setAutoFillBackground(true);
					ui->frame_d_09->setFrameShape(QFrame::StyledPanel);
					ui->frame_d_09->setFrameShadow(QFrame::Raised);
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
					ui->frame_d_00->setObjectName(QString::fromUtf8("frame_d_00"));
					ui->frame_d_00->setGeometry(QRect(655, 20, 8, 8));
					ui->frame_d_00->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_d_00->setAutoFillBackground(true);
					ui->frame_d_00->setFrameShape(QFrame::StyledPanel);
					ui->frame_d_00->setFrameShadow(QFrame::Raised);
					pixel_d_00 = false;
				}
				break;

			case 1:
				if ( pixel_d_01 == true ) {
					ui->frame_d_01->setObjectName(QString::fromUtf8("frame_d_01"));
					ui->frame_d_01->setGeometry(QRect(655, 31, 8, 8));
					ui->frame_d_01->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_d_01->setAutoFillBackground(true);
					ui->frame_d_01->setFrameShape(QFrame::StyledPanel);
					ui->frame_d_01->setFrameShadow(QFrame::Raised);
					pixel_d_01 = false;
				}
				break;

			case 2:
				if ( pixel_d_02 == true ) {
					ui->frame_d_02->setObjectName(QString::fromUtf8("frame_d_02"));
					ui->frame_d_02->setGeometry(QRect(655, 42, 8, 8));
					ui->frame_d_02->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_d_02->setAutoFillBackground(true);
					ui->frame_d_02->setFrameShape(QFrame::StyledPanel);
					ui->frame_d_02->setFrameShadow(QFrame::Raised);
					pixel_d_02 = false;
				}
				break;

			case 3:
				if ( pixel_d_03 == true ) {
					ui->frame_d_03->setObjectName(QString::fromUtf8("frame_d_03"));
					ui->frame_d_03->setGeometry(QRect(655, 53, 8, 8));
					ui->frame_d_03->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_d_03->setAutoFillBackground(true);
					ui->frame_d_03->setFrameShape(QFrame::StyledPanel);
					ui->frame_d_03->setFrameShadow(QFrame::Raised);
					pixel_d_03 = false;
				}
				break;

			case 4:
				if ( pixel_d_04 == true ) {
					ui->frame_d_04->setObjectName(QString::fromUtf8("frame_d_04"));
					ui->frame_d_04->setGeometry(QRect(655, 64, 8, 8));
					ui->frame_d_04->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_d_04->setAutoFillBackground(true);
					ui->frame_d_04->setFrameShape(QFrame::StyledPanel);
					ui->frame_d_04->setFrameShadow(QFrame::Raised);
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
					ui->frame_d_15->setObjectName(QString::fromUtf8("frame_d_15"));
					ui->frame_d_15->setGeometry(QRect(663, 80, 8, 8));
					ui->frame_d_15->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_d_15->setAutoFillBackground(true);
					ui->frame_d_15->setFrameShape(QFrame::StyledPanel);
					ui->frame_d_15->setFrameShadow(QFrame::Raised);
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
					ui->frame_e_10->setObjectName(QString::fromUtf8("frame_e_10"));
					ui->frame_e_10->setGeometry(QRect(673, 20, 8, 8));
					ui->frame_e_10->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_e_10->setAutoFillBackground(true);
					ui->frame_e_10->setFrameShape(QFrame::StyledPanel);
					ui->frame_e_10->setFrameShadow(QFrame::Raised);
					pixel_e_10 = false;
				}
				break;

			case 1:
				if ( pixel_e_11 == true ) {
					ui->frame_e_11->setObjectName(QString::fromUtf8("frame_e_11"));
					ui->frame_e_11->setGeometry(QRect(673, 31, 8, 8));
					ui->frame_e_11->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_e_11->setAutoFillBackground(true);
					ui->frame_e_11->setFrameShape(QFrame::StyledPanel);
					ui->frame_e_11->setFrameShadow(QFrame::Raised);
					pixel_e_11 = false;
				}
				break;

			case 2:
				if ( pixel_e_12 == true ) {
					ui->frame_e_12->setObjectName(QString::fromUtf8("frame_e_12"));
					ui->frame_e_12->setGeometry(QRect(673, 42, 8, 8));
					ui->frame_e_12->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_e_12->setAutoFillBackground(true);
					ui->frame_e_12->setFrameShape(QFrame::StyledPanel);
					ui->frame_e_12->setFrameShadow(QFrame::Raised);
					pixel_e_12 = false;
				}
				break;

			case 3:
				if ( pixel_e_13 == true ) {
					ui->frame_e_13->setObjectName(QString::fromUtf8("frame_e_13"));
					ui->frame_e_13->setGeometry(QRect(673, 53, 8, 8));
					ui->frame_e_13->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_e_13->setAutoFillBackground(true);
					ui->frame_e_13->setFrameShape(QFrame::StyledPanel);
					ui->frame_e_13->setFrameShadow(QFrame::Raised);
					pixel_e_13 = false;
				}
				break;

			case 4:
				if ( pixel_e_14 == true ) {
					ui->frame_e_14->setObjectName(QString::fromUtf8("frame_e_14"));
					ui->frame_e_14->setGeometry(QRect(673, 64, 8, 8));
					ui->frame_e_14->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_e_14->setAutoFillBackground(true);
					ui->frame_e_14->setFrameShape(QFrame::StyledPanel);
					ui->frame_e_14->setFrameShadow(QFrame::Raised);
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
					ui->frame_e_05->setObjectName(QString::fromUtf8("frame_e_05"));
					ui->frame_e_05->setGeometry(QRect(684, 20, 8, 8));
					ui->frame_e_05->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_e_05->setAutoFillBackground(true);
					ui->frame_e_05->setFrameShape(QFrame::StyledPanel);
					ui->frame_e_05->setFrameShadow(QFrame::Raised);
					pixel_e_05 = false;
				}
				break;

			case 1:
				if ( pixel_e_06 == true ) {
					ui->frame_e_06->setObjectName(QString::fromUtf8("frame_e_06"));
					ui->frame_e_06->setGeometry(QRect(684, 31, 8, 8));
					ui->frame_e_06->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_e_06->setAutoFillBackground(true);
					ui->frame_e_06->setFrameShape(QFrame::StyledPanel);
					ui->frame_e_06->setFrameShadow(QFrame::Raised);
					pixel_e_06 = false;
				}
				break;

			case 2:
				if ( pixel_e_07 == true ) {
					ui->frame_e_07->setObjectName(QString::fromUtf8("frame_e_07"));
					ui->frame_e_07->setGeometry(QRect(684, 42, 8, 8));
					ui->frame_e_07->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_e_07->setAutoFillBackground(true);
					ui->frame_e_07->setFrameShape(QFrame::StyledPanel);
					ui->frame_e_07->setFrameShadow(QFrame::Raised);
					pixel_e_07 = false;
				}
				break;

			case 3:
				if ( pixel_e_08 == true ) {
					ui->frame_e_08->setObjectName(QString::fromUtf8("frame_e_08"));
					ui->frame_e_08->setGeometry(QRect(684, 53, 8, 8));
					ui->frame_e_08->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_e_08->setAutoFillBackground(true);
					ui->frame_e_08->setFrameShape(QFrame::StyledPanel);
					ui->frame_e_08->setFrameShadow(QFrame::Raised);
					pixel_e_08 = false;
				}
				break;

			case 4:
				if ( pixel_e_09 == true ) {
					ui->frame_e_09->setObjectName(QString::fromUtf8("frame_e_09"));
					ui->frame_e_09->setGeometry(QRect(684, 64, 8, 8));
					ui->frame_e_09->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_e_09->setAutoFillBackground(true);
					ui->frame_e_09->setFrameShape(QFrame::StyledPanel);
					ui->frame_e_09->setFrameShadow(QFrame::Raised);
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
					ui->frame_e_00->setObjectName(QString::fromUtf8("frame_e_00"));
					ui->frame_e_00->setGeometry(QRect(695, 20, 8, 8));
					ui->frame_e_00->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_e_00->setAutoFillBackground(true);
					ui->frame_e_00->setFrameShape(QFrame::StyledPanel);
					ui->frame_e_00->setFrameShadow(QFrame::Raised);
					pixel_e_00 = false;
				}
				break;

			case 1:
				if ( pixel_e_01 == true ) {
					ui->frame_e_01->setObjectName(QString::fromUtf8("frame_e_01"));
					ui->frame_e_01->setGeometry(QRect(695, 31, 8, 8));
					ui->frame_e_01->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_e_01->setAutoFillBackground(true);
					ui->frame_e_01->setFrameShape(QFrame::StyledPanel);
					ui->frame_e_01->setFrameShadow(QFrame::Raised);
					pixel_e_01 = false;
				}
				break;

			case 2:
				if ( pixel_e_02 == true ) {
					ui->frame_e_02->setObjectName(QString::fromUtf8("frame_e_02"));
					ui->frame_e_02->setGeometry(QRect(695, 42, 8, 8));
					ui->frame_e_02->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_e_02->setAutoFillBackground(true);
					ui->frame_e_02->setFrameShape(QFrame::StyledPanel);
					ui->frame_e_02->setFrameShadow(QFrame::Raised);
					pixel_e_02 = false;
				}
				break;

			case 3:
				if ( pixel_e_03 == true ) {
					ui->frame_e_03->setObjectName(QString::fromUtf8("frame_e_03"));
					ui->frame_e_03->setGeometry(QRect(695, 53, 8, 8));
					ui->frame_e_03->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_e_03->setAutoFillBackground(true);
					ui->frame_e_03->setFrameShape(QFrame::StyledPanel);
					ui->frame_e_03->setFrameShadow(QFrame::Raised);
					pixel_e_03 = false;
				}
				break;

			case 4:
				if ( pixel_e_04 == true ) {
					ui->frame_e_04->setObjectName(QString::fromUtf8("frame_e_04"));
					ui->frame_e_04->setGeometry(QRect(695, 64, 8, 8));
					ui->frame_e_04->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_e_04->setAutoFillBackground(true);
					ui->frame_e_04->setFrameShape(QFrame::StyledPanel);
					ui->frame_e_04->setFrameShadow(QFrame::Raised);
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
					ui->frame_e_15->setObjectName(QString::fromUtf8("frame_e_15"));
					ui->frame_e_15->setGeometry(QRect(703, 80, 8, 8));
					ui->frame_e_15->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_e_15->setAutoFillBackground(true);
					ui->frame_e_15->setFrameShape(QFrame::StyledPanel);
					ui->frame_e_15->setFrameShadow(QFrame::Raised);
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
					ui->frame_f_10->setObjectName(QString::fromUtf8("frame_f_10"));
					ui->frame_f_10->setGeometry(QRect(713, 20, 8, 8));
					ui->frame_f_10->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_f_10->setAutoFillBackground(true);
					ui->frame_f_10->setFrameShape(QFrame::StyledPanel);
					ui->frame_f_10->setFrameShadow(QFrame::Raised);
					pixel_f_10 = false;
				}
				break;

			case 1:
				if ( pixel_f_11 == true ) {
					ui->frame_f_11->setObjectName(QString::fromUtf8("frame_f_11"));
					ui->frame_f_11->setGeometry(QRect(713, 31, 8, 8));
					ui->frame_f_11->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_f_11->setAutoFillBackground(true);
					ui->frame_f_11->setFrameShape(QFrame::StyledPanel);
					ui->frame_f_11->setFrameShadow(QFrame::Raised);
					pixel_f_11 = false;
				}
				break;

			case 2:
				if ( pixel_f_12 == true ) {
					ui->frame_f_12->setObjectName(QString::fromUtf8("frame_f_12"));
					ui->frame_f_12->setGeometry(QRect(713, 42, 8, 8));
					ui->frame_f_12->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_f_12->setAutoFillBackground(true);
					ui->frame_f_12->setFrameShape(QFrame::StyledPanel);
					ui->frame_f_12->setFrameShadow(QFrame::Raised);
					pixel_f_12 = false;
				}
				break;

			case 3:
				if ( pixel_f_13 == true ) {
					ui->frame_f_13->setObjectName(QString::fromUtf8("frame_f_13"));
					ui->frame_f_13->setGeometry(QRect(713, 53, 8, 8));
					ui->frame_f_13->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_f_13->setAutoFillBackground(true);
					ui->frame_f_13->setFrameShape(QFrame::StyledPanel);
					ui->frame_f_13->setFrameShadow(QFrame::Raised);
					pixel_f_13 = false;
				}
				break;

			case 4:
				if ( pixel_f_14 == true ) {
					ui->frame_f_14->setObjectName(QString::fromUtf8("frame_f_14"));
					ui->frame_f_14->setGeometry(QRect(713, 64, 8, 8));
					ui->frame_f_14->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_f_14->setAutoFillBackground(true);
					ui->frame_f_14->setFrameShape(QFrame::StyledPanel);
					ui->frame_f_14->setFrameShadow(QFrame::Raised);
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
					ui->frame_f_05->setObjectName(QString::fromUtf8("frame_f_05"));
					ui->frame_f_05->setGeometry(QRect(724, 20, 8, 8));
					ui->frame_f_05->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_f_05->setAutoFillBackground(true);
					ui->frame_f_05->setFrameShape(QFrame::StyledPanel);
					ui->frame_f_05->setFrameShadow(QFrame::Raised);
					pixel_f_05 = false;
				}
				break;

			case 1:
				if ( pixel_f_06 == true ) {
					ui->frame_f_06->setObjectName(QString::fromUtf8("frame_f_06"));
					ui->frame_f_06->setGeometry(QRect(724, 31, 8, 8));
					ui->frame_f_06->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_f_06->setAutoFillBackground(true);
					ui->frame_f_06->setFrameShape(QFrame::StyledPanel);
					ui->frame_f_06->setFrameShadow(QFrame::Raised);
					pixel_f_06 = false;
				}
				break;

			case 2:
				if ( pixel_f_07 == true ) {
					ui->frame_f_07->setObjectName(QString::fromUtf8("frame_f_07"));
					ui->frame_f_07->setGeometry(QRect(724, 42, 8, 8));
					ui->frame_f_07->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_f_07->setAutoFillBackground(true);
					ui->frame_f_07->setFrameShape(QFrame::StyledPanel);
					ui->frame_f_07->setFrameShadow(QFrame::Raised);
					pixel_f_07 = false;
				}
				break;

			case 3:
				if ( pixel_f_08 == true ) {
					ui->frame_f_08->setObjectName(QString::fromUtf8("frame_f_08"));
					ui->frame_f_08->setGeometry(QRect(724, 53, 8, 8));
					ui->frame_f_08->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_f_08->setAutoFillBackground(true);
					ui->frame_f_08->setFrameShape(QFrame::StyledPanel);
					ui->frame_f_08->setFrameShadow(QFrame::Raised);
					pixel_f_08 = false;
				}
				break;

			case 4:
				if ( pixel_f_09 == true ) {
					ui->frame_f_09->setObjectName(QString::fromUtf8("frame_f_09"));
					ui->frame_f_09->setGeometry(QRect(724, 64, 8, 8));
					ui->frame_f_09->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_f_09->setAutoFillBackground(true);
					ui->frame_f_09->setFrameShape(QFrame::StyledPanel);
					ui->frame_f_09->setFrameShadow(QFrame::Raised);
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
					ui->frame_f_00->setObjectName(QString::fromUtf8("frame_f_00"));
					ui->frame_f_00->setGeometry(QRect(735, 20, 8, 8));
					ui->frame_f_00->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_f_00->setAutoFillBackground(true);
					ui->frame_f_00->setFrameShape(QFrame::StyledPanel);
					ui->frame_f_00->setFrameShadow(QFrame::Raised);
					pixel_f_00 = false;
				}
				break;

			case 1:
				if ( pixel_f_01 == true ) {
					ui->frame_f_01->setObjectName(QString::fromUtf8("frame_f_01"));
					ui->frame_f_01->setGeometry(QRect(735, 31, 8, 8));
					ui->frame_f_01->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_f_01->setAutoFillBackground(true);
					ui->frame_f_01->setFrameShape(QFrame::StyledPanel);
					ui->frame_f_01->setFrameShadow(QFrame::Raised);
					pixel_f_01 = false;
				}
				break;

			case 2:
				if ( pixel_f_02 == true ) {
					ui->frame_f_02->setObjectName(QString::fromUtf8("frame_f_02"));
					ui->frame_f_02->setGeometry(QRect(735, 42, 8, 8));
					ui->frame_f_02->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_f_02->setAutoFillBackground(true);
					ui->frame_f_02->setFrameShape(QFrame::StyledPanel);
					ui->frame_f_02->setFrameShadow(QFrame::Raised);
					pixel_f_02 = false;
				}
				break;

			case 3:
				if ( pixel_f_03 == true ) {
					ui->frame_f_03->setObjectName(QString::fromUtf8("frame_f_03"));
					ui->frame_f_03->setGeometry(QRect(735, 53, 8, 8));
					ui->frame_f_03->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_f_03->setAutoFillBackground(true);
					ui->frame_f_03->setFrameShape(QFrame::StyledPanel);
					ui->frame_f_03->setFrameShadow(QFrame::Raised);
					pixel_f_03 = false;
				}
				break;

			case 4:
				if ( pixel_f_04 == true ) {
					ui->frame_f_04->setObjectName(QString::fromUtf8("frame_f_04"));
					ui->frame_f_04->setGeometry(QRect(735, 64, 8, 8));
					ui->frame_f_04->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_f_04->setAutoFillBackground(true);
					ui->frame_f_04->setFrameShape(QFrame::StyledPanel);
					ui->frame_f_04->setFrameShadow(QFrame::Raised);
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
					ui->frame_f_15->setObjectName(QString::fromUtf8("frame_f_15"));
					ui->frame_f_15->setGeometry(QRect(743, 80, 8, 8));
					ui->frame_f_15->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
					ui->frame_f_15->setAutoFillBackground(true);
					ui->frame_f_15->setFrameShape(QFrame::StyledPanel);
					ui->frame_f_15->setFrameShadow(QFrame::Raised);
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
			myK1003->CPU_hlt(0);
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
		// myK1003->CPU_hlt(0);
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