#include "Display.h"
#include "Calculator.h"
#include "K1003_sys.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

Display::Display(Ui::MainWindow* newUi)
{
	ui = newUi;

	myCalculator = new Calculator();
	myCalculator->setDisplay(this);
	myCalculator->setUI(ui);

	myK1003 = new K1003_sys();
	myK1003->setDisplay(this);
	myK1003->setUI(ui);
}

Display::~Display()
{
	delete myCalculator;
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
				if (ui->checkBox_0_10->isChecked() == false) {
					ui->checkBox_0_10->click();
				}
				if (ui->checkBox_0_10->isChecked() == false) {
					ui->checkBox_0_10->click();
				}
				break;

			case 1:
				if (ui->checkBox_0_11->isChecked() == false) {
					ui->checkBox_0_11->click();
				}
				if (ui->checkBox_0_11->isChecked() == false) {
					ui->checkBox_0_11->click();
				}
				break;

			case 2:
				if (ui->checkBox_0_12->isChecked() == false) {
					ui->checkBox_0_12->click();
				}
				if (ui->checkBox_0_12->isChecked() == false) {
					ui->checkBox_0_12->click();
				}
				break;

			case 3:
				if (ui->checkBox_0_13->isChecked() == false) {
					ui->checkBox_0_13->click();
				}
				if (ui->checkBox_0_13->isChecked() == false) {
					ui->checkBox_0_13->click();
				}
				break;

			case 4:
				if (ui->checkBox_0_14->isChecked() == false) {
					ui->checkBox_0_14->click();
				}
				if (ui->checkBox_0_14->isChecked() == false) {
					ui->checkBox_0_14->click();
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
				if (ui->checkBox_0_05->isChecked() == false) {
					ui->checkBox_0_05->click();
				}
				if (ui->checkBox_0_05->isChecked() == false) {
					ui->checkBox_0_05->click();
				}
				break;

			case 1:
				if (ui->checkBox_0_06->isChecked() == false) {
					ui->checkBox_0_06->click();
				}
				if (ui->checkBox_0_06->isChecked() == false) {
					ui->checkBox_0_06->click();
				}
				break;

			case 2:
				if (ui->checkBox_0_07->isChecked() == false) {
					ui->checkBox_0_07->click();
				}
				if (ui->checkBox_0_07->isChecked() == false) {
					ui->checkBox_0_07->click();
				}
				break;

			case 3:
				if (ui->checkBox_0_08->isChecked() == false) {
					ui->checkBox_0_08->click();
				}
				if (ui->checkBox_0_08->isChecked() == false) {
					ui->checkBox_0_08->click();
				}
				break;

			case 4:
				if (ui->checkBox_0_09->isChecked() == false) {
					ui->checkBox_0_09->click();
				}
				if (ui->checkBox_0_09->isChecked() == false) {
					ui->checkBox_0_09->click();
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
				if (ui->checkBox_0_00->isChecked() == false) {
					ui->checkBox_0_00->click();
				}
				if (ui->checkBox_0_00->isChecked() == false) {
					ui->checkBox_0_00->click();
				}
				break;

			case 1:
				if (ui->checkBox_0_01->isChecked() == false) {
					ui->checkBox_0_01->click();
				}
				if (ui->checkBox_0_01->isChecked() == false) {
					ui->checkBox_0_01->click();
				}
				break;

			case 2:
				if (ui->checkBox_0_02->isChecked() == false) {
					ui->checkBox_0_02->click();
				}
				if (ui->checkBox_0_02->isChecked() == false) {
					ui->checkBox_0_02->click();
				}
				break;

			case 3:
				if (ui->checkBox_0_03->isChecked() == false) {
					ui->checkBox_0_03->click();
				}
				if (ui->checkBox_0_03->isChecked() == false) {
					ui->checkBox_0_03->click();
				}
				break;

			case 4:
				if (ui->checkBox_0_04->isChecked() == false) {
					ui->checkBox_0_04->click();
				}
				if (ui->checkBox_0_04->isChecked() == false) {
					ui->checkBox_0_04->click();
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
				if (ui->checkBox_0_15->isChecked() == false) {
					ui->checkBox_0_15->click();
				}
				if (ui->checkBox_0_15->isChecked() == false) {
					ui->checkBox_0_15->click();
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
				if (ui->checkBox_1_10->isChecked() == false) {
					ui->checkBox_1_10->click();
				}
				if (ui->checkBox_1_10->isChecked() == false) {
					ui->checkBox_1_10->click();
				}
				break;

			case 1:
				if (ui->checkBox_1_11->isChecked() == false) {
					ui->checkBox_1_11->click();
				}
				if (ui->checkBox_1_11->isChecked() == false) {
					ui->checkBox_1_11->click();
				}
				break;

			case 2:
				if (ui->checkBox_1_12->isChecked() == false) {
					ui->checkBox_1_12->click();
				}
				if (ui->checkBox_1_12->isChecked() == false) {
					ui->checkBox_1_12->click();
				}
				break;

			case 3:
				if (ui->checkBox_1_13->isChecked() == false) {
					ui->checkBox_1_13->click();
				}
				if (ui->checkBox_1_13->isChecked() == false) {
					ui->checkBox_1_13->click();
				}
				break;

			case 4:
				if (ui->checkBox_1_14->isChecked() == false) {
					ui->checkBox_1_14->click();
				}
				if (ui->checkBox_1_14->isChecked() == false) {
					ui->checkBox_1_14->click();
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
				if (ui->checkBox_1_05->isChecked() == false) {
					ui->checkBox_1_05->click();
				}
				if (ui->checkBox_1_05->isChecked() == false) {
					ui->checkBox_1_05->click();
				}
				break;

			case 1:
				if (ui->checkBox_1_06->isChecked() == false) {
					ui->checkBox_1_06->click();
				}
				if (ui->checkBox_1_06->isChecked() == false) {
					ui->checkBox_1_06->click();
				}
				break;

			case 2:
				if (ui->checkBox_1_07->isChecked() == false) {
					ui->checkBox_1_07->click();
				}
				if (ui->checkBox_1_07->isChecked() == false) {
					ui->checkBox_1_07->click();
				}
				break;

			case 3:
				if (ui->checkBox_1_08->isChecked() == false) {
					ui->checkBox_1_08->click();
				}
				if (ui->checkBox_1_08->isChecked() == false) {
					ui->checkBox_1_08->click();
				}
				break;

			case 4:
				if (ui->checkBox_1_09->isChecked() == false) {
					ui->checkBox_1_09->click();
				}
				if (ui->checkBox_1_09->isChecked() == false) {
					ui->checkBox_1_09->click();
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
				if (ui->checkBox_1_00->isChecked() == false) {
					ui->checkBox_1_00->click();
				}
				if (ui->checkBox_1_00->isChecked() == false) {
					ui->checkBox_1_00->click();
				}
				break;

			case 1:
				if (ui->checkBox_1_01->isChecked() == false) {
					ui->checkBox_1_01->click();
				}
				if (ui->checkBox_1_01->isChecked() == false) {
					ui->checkBox_1_01->click();
				}
				break;

			case 2:
				if (ui->checkBox_1_02->isChecked() == false) {
					ui->checkBox_1_02->click();
				}
				if (ui->checkBox_1_02->isChecked() == false) {
					ui->checkBox_1_02->click();
				}
				break;

			case 3:
				if (ui->checkBox_1_03->isChecked() == false) {
					ui->checkBox_1_03->click();
				}
				if (ui->checkBox_1_03->isChecked() == false) {
					ui->checkBox_1_03->click();
				}
				break;

			case 4:
				if (ui->checkBox_1_04->isChecked() == false) {
					ui->checkBox_1_04->click();
				}
				if (ui->checkBox_1_04->isChecked() == false) {
					ui->checkBox_1_04->click();
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
				if (ui->checkBox_1_15->isChecked() == false) {
					ui->checkBox_1_15->click();
				}
				if (ui->checkBox_1_15->isChecked() == false) {
					ui->checkBox_1_15->click();
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
				if (ui->checkBox_2_10->isChecked() == false) {
					ui->checkBox_2_10->click();
				}
				if (ui->checkBox_2_10->isChecked() == false) {
					ui->checkBox_2_10->click();
				}
				break;

			case 1:
				if (ui->checkBox_2_11->isChecked() == false) {
					ui->checkBox_2_11->click();
				}
				if (ui->checkBox_2_11->isChecked() == false) {
					ui->checkBox_2_11->click();
				}
				break;

			case 2:
				if (ui->checkBox_2_12->isChecked() == false) {
					ui->checkBox_2_12->click();
				}
				if (ui->checkBox_2_12->isChecked() == false) {
					ui->checkBox_2_12->click();
				}
				break;

			case 3:
				if (ui->checkBox_2_13->isChecked() == false) {
					ui->checkBox_2_13->click();
				}
				if (ui->checkBox_2_13->isChecked() == false) {
					ui->checkBox_2_13->click();
				}
				break;

			case 4:
				if (ui->checkBox_2_14->isChecked() == false) {
					ui->checkBox_2_14->click();
				}
				if (ui->checkBox_2_14->isChecked() == false) {
					ui->checkBox_2_14->click();
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
				if (ui->checkBox_2_05->isChecked() == false) {
					ui->checkBox_2_05->click();
				}
				if (ui->checkBox_2_05->isChecked() == false) {
					ui->checkBox_2_05->click();
				}
				break;

			case 1:
				if (ui->checkBox_2_06->isChecked() == false) {
					ui->checkBox_2_06->click();
				}
				if (ui->checkBox_2_06->isChecked() == false) {
					ui->checkBox_2_06->click();
				}
				break;

			case 2:
				if (ui->checkBox_2_07->isChecked() == false) {
					ui->checkBox_2_07->click();
				}
				if (ui->checkBox_2_07->isChecked() == false) {
					ui->checkBox_2_07->click();
				}
				break;

			case 3:
				if (ui->checkBox_2_08->isChecked() == false) {
					ui->checkBox_2_08->click();
				}
				if (ui->checkBox_2_08->isChecked() == false) {
					ui->checkBox_2_08->click();
				}
				break;

			case 4:
				if (ui->checkBox_2_09->isChecked() == false) {
					ui->checkBox_2_09->click();
				}
				if (ui->checkBox_2_09->isChecked() == false) {
					ui->checkBox_2_09->click();
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
				if (ui->checkBox_2_00->isChecked() == false) {
					ui->checkBox_2_00->click();
				}
				if (ui->checkBox_2_00->isChecked() == false) {
					ui->checkBox_2_00->click();
				}
				break;

			case 1:
				if (ui->checkBox_2_01->isChecked() == false) {
					ui->checkBox_2_01->click();
				}
				if (ui->checkBox_2_01->isChecked() == false) {
					ui->checkBox_2_01->click();
				}
				break;

			case 2:
				if (ui->checkBox_2_02->isChecked() == false) {
					ui->checkBox_2_02->click();
				}
				if (ui->checkBox_2_02->isChecked() == false) {
					ui->checkBox_2_02->click();
				}
				break;

			case 3:
				if (ui->checkBox_2_03->isChecked() == false) {
					ui->checkBox_2_03->click();
				}
				if (ui->checkBox_2_03->isChecked() == false) {
					ui->checkBox_2_03->click();
				}
				break;

			case 4:
				if (ui->checkBox_2_04->isChecked() == false) {
					ui->checkBox_2_04->click();
				}
				if (ui->checkBox_2_04->isChecked() == false) {
					ui->checkBox_2_04->click();
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
				if (ui->checkBox_2_15->isChecked() == false) {
					ui->checkBox_2_15->click();
				}
				if (ui->checkBox_2_15->isChecked() == false) {
					ui->checkBox_2_15->click();
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
				if (ui->checkBox_3_10->isChecked() == false) {
					ui->checkBox_3_10->click();
				}
				if (ui->checkBox_3_10->isChecked() == false) {
					ui->checkBox_3_10->click();
				}
				break;

			case 1:
				if (ui->checkBox_3_11->isChecked() == false) {
					ui->checkBox_3_11->click();
				}
				if (ui->checkBox_3_11->isChecked() == false) {
					ui->checkBox_3_11->click();
				}
				break;

			case 2:
				if (ui->checkBox_3_12->isChecked() == false) {
					ui->checkBox_3_12->click();
				}
				if (ui->checkBox_3_12->isChecked() == false) {
					ui->checkBox_3_12->click();
				}
				break;

			case 3:
				if (ui->checkBox_3_13->isChecked() == false) {
					ui->checkBox_3_13->click();
				}
				if (ui->checkBox_3_13->isChecked() == false) {
					ui->checkBox_3_13->click();
				}
				break;

			case 4:
				if (ui->checkBox_3_14->isChecked() == false) {
					ui->checkBox_3_14->click();
				}
				if (ui->checkBox_3_14->isChecked() == false) {
					ui->checkBox_3_14->click();
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
				if (ui->checkBox_3_05->isChecked() == false) {
					ui->checkBox_3_05->click();
				}
				if (ui->checkBox_3_05->isChecked() == false) {
					ui->checkBox_3_05->click();
				}
				break;

			case 1:
				if (ui->checkBox_3_06->isChecked() == false) {
					ui->checkBox_3_06->click();
				}
				if (ui->checkBox_3_06->isChecked() == false) {
					ui->checkBox_3_06->click();
				}
				break;

			case 2:
				if (ui->checkBox_3_07->isChecked() == false) {
					ui->checkBox_3_07->click();
				}
				if (ui->checkBox_3_07->isChecked() == false) {
					ui->checkBox_3_07->click();
				}
				break;

			case 3:
				if (ui->checkBox_3_08->isChecked() == false) {
					ui->checkBox_3_08->click();
				}
				if (ui->checkBox_3_08->isChecked() == false) {
					ui->checkBox_3_08->click();
				}
				break;

			case 4:
				if (ui->checkBox_3_09->isChecked() == false) {
					ui->checkBox_3_09->click();
				}
				if (ui->checkBox_3_09->isChecked() == false) {
					ui->checkBox_3_09->click();
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
				if (ui->checkBox_3_00->isChecked() == false) {
					ui->checkBox_3_00->click();
				}
				if (ui->checkBox_3_00->isChecked() == false) {
					ui->checkBox_3_00->click();
				}
				break;

			case 1:
				if (ui->checkBox_3_01->isChecked() == false) {
					ui->checkBox_3_01->click();
				}
				if (ui->checkBox_3_01->isChecked() == false) {
					ui->checkBox_3_01->click();
				}
				break;

			case 2:
				if (ui->checkBox_3_02->isChecked() == false) {
					ui->checkBox_3_02->click();
				}
				if (ui->checkBox_3_02->isChecked() == false) {
					ui->checkBox_3_02->click();
				}
				break;

			case 3:
				if (ui->checkBox_3_03->isChecked() == false) {
					ui->checkBox_3_03->click();
				}
				if (ui->checkBox_3_03->isChecked() == false) {
					ui->checkBox_3_03->click();
				}
				break;

			case 4:
				if (ui->checkBox_3_04->isChecked() == false) {
					ui->checkBox_3_04->click();
				}
				if (ui->checkBox_3_04->isChecked() == false) {
					ui->checkBox_3_04->click();
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
				if (ui->checkBox_3_15->isChecked() == false) {
					ui->checkBox_3_15->click();
				}
				if (ui->checkBox_3_15->isChecked() == false) {
					ui->checkBox_3_15->click();
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
				if (ui->checkBox_4_10->isChecked() == false) {
					ui->checkBox_4_10->click();
				}
				if (ui->checkBox_4_10->isChecked() == false) {
					ui->checkBox_4_10->click();
				}
				break;

			case 1:
				if (ui->checkBox_4_11->isChecked() == false) {
					ui->checkBox_4_11->click();
				}
				if (ui->checkBox_4_11->isChecked() == false) {
					ui->checkBox_4_11->click();
				}
				break;

			case 2:
				if (ui->checkBox_4_12->isChecked() == false) {
					ui->checkBox_4_12->click();
				}
				if (ui->checkBox_4_12->isChecked() == false) {
					ui->checkBox_4_12->click();
				}
				break;

			case 3:
				if (ui->checkBox_4_13->isChecked() == false) {
					ui->checkBox_4_13->click();
				}
				if (ui->checkBox_4_13->isChecked() == false) {
					ui->checkBox_4_13->click();
				}
				break;

			case 4:
				if (ui->checkBox_4_14->isChecked() == false) {
					ui->checkBox_4_14->click();
				}
				if (ui->checkBox_4_14->isChecked() == false) {
					ui->checkBox_4_14->click();
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
				if (ui->checkBox_4_05->isChecked() == false) {
					ui->checkBox_4_05->click();
				}
				if (ui->checkBox_4_05->isChecked() == false) {
					ui->checkBox_4_05->click();
				}
				break;

			case 1:
				if (ui->checkBox_4_06->isChecked() == false) {
					ui->checkBox_4_06->click();
				}
				if (ui->checkBox_4_06->isChecked() == false) {
					ui->checkBox_4_06->click();
				}
				break;

			case 2:
				if (ui->checkBox_4_07->isChecked() == false) {
					ui->checkBox_4_07->click();
				}
				if (ui->checkBox_4_07->isChecked() == false) {
					ui->checkBox_4_07->click();
				}
				break;

			case 3:
				if (ui->checkBox_4_08->isChecked() == false) {
					ui->checkBox_4_08->click();
				}
				if (ui->checkBox_4_08->isChecked() == false) {
					ui->checkBox_4_08->click();
				}
				break;

			case 4:
				if (ui->checkBox_4_09->isChecked() == false) {
					ui->checkBox_4_09->click();
				}
				if (ui->checkBox_4_09->isChecked() == false) {
					ui->checkBox_4_09->click();
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
				if (ui->checkBox_4_00->isChecked() == false) {
					ui->checkBox_4_00->click();
				}
				if (ui->checkBox_4_00->isChecked() == false) {
					ui->checkBox_4_00->click();
				}
				break;

			case 1:
				if (ui->checkBox_4_01->isChecked() == false) {
					ui->checkBox_4_01->click();
				}
				if (ui->checkBox_4_01->isChecked() == false) {
					ui->checkBox_4_01->click();
				}
				break;

			case 2:
				if (ui->checkBox_4_02->isChecked() == false) {
					ui->checkBox_4_02->click();
				}
				if (ui->checkBox_4_02->isChecked() == false) {
					ui->checkBox_4_02->click();
				}
				break;

			case 3:
				if (ui->checkBox_4_03->isChecked() == false) {
					ui->checkBox_4_03->click();
				}
				if (ui->checkBox_4_03->isChecked() == false) {
					ui->checkBox_4_03->click();
				}
				break;

			case 4:
				if (ui->checkBox_4_04->isChecked() == false) {
					ui->checkBox_4_04->click();
				}
				if (ui->checkBox_4_04->isChecked() == false) {
					ui->checkBox_4_04->click();
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
				if (ui->checkBox_4_15->isChecked() == false) {
					ui->checkBox_4_15->click();
				}
				if (ui->checkBox_4_15->isChecked() == false) {
					ui->checkBox_4_15->click();
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
				if (ui->checkBox_5_10->isChecked() == false) {
					ui->checkBox_5_10->click();
				}
				if (ui->checkBox_5_10->isChecked() == false) {
					ui->checkBox_5_10->click();
				}
				break;

			case 1:
				if (ui->checkBox_5_11->isChecked() == false) {
					ui->checkBox_5_11->click();
				}
				if (ui->checkBox_5_11->isChecked() == false) {
					ui->checkBox_5_11->click();
				}
				break;

			case 2:
				if (ui->checkBox_5_12->isChecked() == false) {
					ui->checkBox_5_12->click();
				}
				if (ui->checkBox_5_12->isChecked() == false) {
					ui->checkBox_5_12->click();
				}
				break;

			case 3:
				if (ui->checkBox_5_13->isChecked() == false) {
					ui->checkBox_5_13->click();
				}
				if (ui->checkBox_5_13->isChecked() == false) {
					ui->checkBox_5_13->click();
				}
				break;

			case 4:
				if (ui->checkBox_5_14->isChecked() == false) {
					ui->checkBox_5_14->click();
				}
				if (ui->checkBox_5_14->isChecked() == false) {
					ui->checkBox_5_14->click();
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
				if (ui->checkBox_5_05->isChecked() == false) {
					ui->checkBox_5_05->click();
				}
				if (ui->checkBox_5_05->isChecked() == false) {
					ui->checkBox_5_05->click();
				}
				break;

			case 1:
				if (ui->checkBox_5_06->isChecked() == false) {
					ui->checkBox_5_06->click();
				}
				if (ui->checkBox_5_06->isChecked() == false) {
					ui->checkBox_5_06->click();
				}
				break;

			case 2:
				if (ui->checkBox_5_07->isChecked() == false) {
					ui->checkBox_5_07->click();
				}
				if (ui->checkBox_5_07->isChecked() == false) {
					ui->checkBox_5_07->click();
				}
				break;

			case 3:
				if (ui->checkBox_5_08->isChecked() == false) {
					ui->checkBox_5_08->click();
				}
				if (ui->checkBox_5_08->isChecked() == false) {
					ui->checkBox_5_08->click();
				}
				break;

			case 4:
				if (ui->checkBox_5_09->isChecked() == false) {
					ui->checkBox_5_09->click();
				}
				if (ui->checkBox_5_09->isChecked() == false) {
					ui->checkBox_5_09->click();
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
				if (ui->checkBox_5_00->isChecked() == false) {
					ui->checkBox_5_00->click();
				}
				if (ui->checkBox_5_00->isChecked() == false) {
					ui->checkBox_5_00->click();
				}
				break;

			case 1:
				if (ui->checkBox_5_01->isChecked() == false) {
					ui->checkBox_5_01->click();
				}
				if (ui->checkBox_5_01->isChecked() == false) {
					ui->checkBox_5_01->click();
				}
				break;

			case 2:
				if (ui->checkBox_5_02->isChecked() == false) {
					ui->checkBox_5_02->click();
				}
				if (ui->checkBox_5_02->isChecked() == false) {
					ui->checkBox_5_02->click();
				}
				break;

			case 3:
				if (ui->checkBox_5_03->isChecked() == false) {
					ui->checkBox_5_03->click();
				}
				if (ui->checkBox_5_03->isChecked() == false) {
					ui->checkBox_5_03->click();
				}
				break;

			case 4:
				if (ui->checkBox_5_04->isChecked() == false) {
					ui->checkBox_5_04->click();
				}
				if (ui->checkBox_5_04->isChecked() == false) {
					ui->checkBox_5_04->click();
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
				if (ui->checkBox_5_15->isChecked() == false) {
					ui->checkBox_5_15->click();
				}
				if (ui->checkBox_5_15->isChecked() == false) {
					ui->checkBox_5_15->click();
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
				if (ui->checkBox_6_10->isChecked() == false) {
					ui->checkBox_6_10->click();
				}
				if (ui->checkBox_6_10->isChecked() == false) {
					ui->checkBox_6_10->click();
				}
				break;

			case 1:
				if (ui->checkBox_6_11->isChecked() == false) {
					ui->checkBox_6_11->click();
				}
				if (ui->checkBox_6_11->isChecked() == false) {
					ui->checkBox_6_11->click();
				}
				break;

			case 2:
				if (ui->checkBox_6_12->isChecked() == false) {
					ui->checkBox_6_12->click();
				}
				if (ui->checkBox_6_12->isChecked() == false) {
					ui->checkBox_6_12->click();
				}
				break;

			case 3:
				if (ui->checkBox_6_13->isChecked() == false) {
					ui->checkBox_6_13->click();
				}
				if (ui->checkBox_6_13->isChecked() == false) {
					ui->checkBox_6_13->click();
				}
				break;

			case 4:
				if (ui->checkBox_6_14->isChecked() == false) {
					ui->checkBox_6_14->click();
				}
				if (ui->checkBox_6_14->isChecked() == false) {
					ui->checkBox_6_14->click();
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
				if (ui->checkBox_6_05->isChecked() == false) {
					ui->checkBox_6_05->click();
				}
				if (ui->checkBox_6_05->isChecked() == false) {
					ui->checkBox_6_05->click();
				}
				break;

			case 1:
				if (ui->checkBox_6_06->isChecked() == false) {
					ui->checkBox_6_06->click();
				}
				if (ui->checkBox_6_06->isChecked() == false) {
					ui->checkBox_6_06->click();
				}
				break;

			case 2:
				if (ui->checkBox_6_07->isChecked() == false) {
					ui->checkBox_6_07->click();
				}
				if (ui->checkBox_6_07->isChecked() == false) {
					ui->checkBox_6_07->click();
				}
				break;

			case 3:
				if (ui->checkBox_6_08->isChecked() == false) {
					ui->checkBox_6_08->click();
				}
				if (ui->checkBox_6_08->isChecked() == false) {
					ui->checkBox_6_08->click();
				}
				break;

			case 4:
				if (ui->checkBox_6_09->isChecked() == false) {
					ui->checkBox_6_09->click();
				}
				if (ui->checkBox_6_09->isChecked() == false) {
					ui->checkBox_6_09->click();
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
				if (ui->checkBox_6_00->isChecked() == false) {
					ui->checkBox_6_00->click();
				}
				if (ui->checkBox_6_00->isChecked() == false) {
					ui->checkBox_6_00->click();
				}
				break;

			case 1:
				if (ui->checkBox_6_01->isChecked() == false) {
					ui->checkBox_6_01->click();
				}
				if (ui->checkBox_6_01->isChecked() == false) {
					ui->checkBox_6_01->click();
				}
				break;

			case 2:
				if (ui->checkBox_6_02->isChecked() == false) {
					ui->checkBox_6_02->click();
				}
				if (ui->checkBox_6_02->isChecked() == false) {
					ui->checkBox_6_02->click();
				}
				break;

			case 3:
				if (ui->checkBox_6_03->isChecked() == false) {
					ui->checkBox_6_03->click();
				}
				if (ui->checkBox_6_03->isChecked() == false) {
					ui->checkBox_6_03->click();
				}
				break;

			case 4:
				if (ui->checkBox_6_04->isChecked() == false) {
					ui->checkBox_6_04->click();
				}
				if (ui->checkBox_6_04->isChecked() == false) {
					ui->checkBox_6_04->click();
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
				if (ui->checkBox_6_15->isChecked() == false) {
					ui->checkBox_6_15->click();
				}
				if (ui->checkBox_6_15->isChecked() == false) {
					ui->checkBox_6_15->click();
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
				if (ui->checkBox_7_10->isChecked() == false) {
					ui->checkBox_7_10->click();
				}
				if (ui->checkBox_7_10->isChecked() == false) {
					ui->checkBox_7_10->click();
				}
				break;

			case 1:
				if (ui->checkBox_7_11->isChecked() == false) {
					ui->checkBox_7_11->click();
				}
				if (ui->checkBox_7_11->isChecked() == false) {
					ui->checkBox_7_11->click();
				}
				break;

			case 2:
				if (ui->checkBox_7_12->isChecked() == false) {
					ui->checkBox_7_12->click();
				}
				if (ui->checkBox_7_12->isChecked() == false) {
					ui->checkBox_7_12->click();
				}
				break;

			case 3:
				if (ui->checkBox_7_13->isChecked() == false) {
					ui->checkBox_7_13->click();
				}
				if (ui->checkBox_7_13->isChecked() == false) {
					ui->checkBox_7_13->click();
				}
				break;

			case 4:
				if (ui->checkBox_7_14->isChecked() == false) {
					ui->checkBox_7_14->click();
				}
				if (ui->checkBox_7_14->isChecked() == false) {
					ui->checkBox_7_14->click();
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
				if (ui->checkBox_7_05->isChecked() == false) {
					ui->checkBox_7_05->click();
				}
				if (ui->checkBox_7_05->isChecked() == false) {
					ui->checkBox_7_05->click();
				}
				break;

			case 1:
				if (ui->checkBox_7_06->isChecked() == false) {
					ui->checkBox_7_06->click();
				}
				if (ui->checkBox_7_06->isChecked() == false) {
					ui->checkBox_7_06->click();
				}
				break;

			case 2:
				if (ui->checkBox_7_07->isChecked() == false) {
					ui->checkBox_7_07->click();
				}
				if (ui->checkBox_7_07->isChecked() == false) {
					ui->checkBox_7_07->click();
				}
				break;

			case 3:
				if (ui->checkBox_7_08->isChecked() == false) {
					ui->checkBox_7_08->click();
				}
				if (ui->checkBox_7_08->isChecked() == false) {
					ui->checkBox_7_08->click();
				}
				break;

			case 4:
				if (ui->checkBox_7_09->isChecked() == false) {
					ui->checkBox_7_09->click();
				}
				if (ui->checkBox_7_09->isChecked() == false) {
					ui->checkBox_7_09->click();
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
				if (ui->checkBox_7_00->isChecked() == false) {
					ui->checkBox_7_00->click();
				}
				if (ui->checkBox_7_00->isChecked() == false) {
					ui->checkBox_7_00->click();
				}
				break;

			case 1:
				if (ui->checkBox_7_01->isChecked() == false) {
					ui->checkBox_7_01->click();
				}
				if (ui->checkBox_7_01->isChecked() == false) {
					ui->checkBox_7_01->click();
				}
				break;

			case 2:
				if (ui->checkBox_7_02->isChecked() == false) {
					ui->checkBox_7_02->click();
				}
				if (ui->checkBox_7_02->isChecked() == false) {
					ui->checkBox_7_02->click();
				}
				break;

			case 3:
				if (ui->checkBox_7_03->isChecked() == false) {
					ui->checkBox_7_03->click();
				}
				if (ui->checkBox_7_03->isChecked() == false) {
					ui->checkBox_7_03->click();
				}
				break;

			case 4:
				if (ui->checkBox_7_04->isChecked() == false) {
					ui->checkBox_7_04->click();
				}
				if (ui->checkBox_7_04->isChecked() == false) {
					ui->checkBox_7_04->click();
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
				if (ui->checkBox_7_15->isChecked() == false) {
					ui->checkBox_7_15->click();
				}
				if (ui->checkBox_7_15->isChecked() == false) {
					ui->checkBox_7_15->click();
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
				if (ui->checkBox_8_10->isChecked() == false) {
					ui->checkBox_8_10->click();
				}
				if (ui->checkBox_8_10->isChecked() == false) {
					ui->checkBox_8_10->click();
				}
				break;

			case 1:
				if (ui->checkBox_8_11->isChecked() == false) {
					ui->checkBox_8_11->click();
				}
				if (ui->checkBox_8_11->isChecked() == false) {
					ui->checkBox_8_11->click();
				}
				break;

			case 2:
				if (ui->checkBox_8_12->isChecked() == false) {
					ui->checkBox_8_12->click();
				}
				if (ui->checkBox_8_12->isChecked() == false) {
					ui->checkBox_8_12->click();
				}
				break;

			case 3:
				if (ui->checkBox_8_13->isChecked() == false) {
					ui->checkBox_8_13->click();
				}
				if (ui->checkBox_8_13->isChecked() == false) {
					ui->checkBox_8_13->click();
				}
				break;

			case 4:
				if (ui->checkBox_8_14->isChecked() == false) {
					ui->checkBox_8_14->click();
				}
				if (ui->checkBox_8_14->isChecked() == false) {
					ui->checkBox_8_14->click();
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
				if (ui->checkBox_8_05->isChecked() == false) {
					ui->checkBox_8_05->click();
				}
				if (ui->checkBox_8_05->isChecked() == false) {
					ui->checkBox_8_05->click();
				}
				break;

			case 1:
				if (ui->checkBox_8_06->isChecked() == false) {
					ui->checkBox_8_06->click();
				}
				if (ui->checkBox_8_06->isChecked() == false) {
					ui->checkBox_8_06->click();
				}
				break;

			case 2:
				if (ui->checkBox_8_07->isChecked() == false) {
					ui->checkBox_8_07->click();
				}
				if (ui->checkBox_8_07->isChecked() == false) {
					ui->checkBox_8_07->click();
				}
				break;

			case 3:
				if (ui->checkBox_8_08->isChecked() == false) {
					ui->checkBox_8_08->click();
				}
				if (ui->checkBox_8_08->isChecked() == false) {
					ui->checkBox_8_08->click();
				}
				break;

			case 4:
				if (ui->checkBox_8_09->isChecked() == false) {
					ui->checkBox_8_09->click();
				}
				if (ui->checkBox_8_09->isChecked() == false) {
					ui->checkBox_8_09->click();
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
				if (ui->checkBox_8_00->isChecked() == false) {
					ui->checkBox_8_00->click();
				}
				if (ui->checkBox_8_00->isChecked() == false) {
					ui->checkBox_8_00->click();
				}
				break;

			case 1:
				if (ui->checkBox_8_01->isChecked() == false) {
					ui->checkBox_8_01->click();
				}
				if (ui->checkBox_8_01->isChecked() == false) {
					ui->checkBox_8_01->click();
				}
				break;

			case 2:
				if (ui->checkBox_8_02->isChecked() == false) {
					ui->checkBox_8_02->click();
				}
				if (ui->checkBox_8_02->isChecked() == false) {
					ui->checkBox_8_02->click();
				}
				break;

			case 3:
				if (ui->checkBox_8_03->isChecked() == false) {
					ui->checkBox_8_03->click();
				}
				if (ui->checkBox_8_03->isChecked() == false) {
					ui->checkBox_8_03->click();
				}
				break;

			case 4:
				if (ui->checkBox_8_04->isChecked() == false) {
					ui->checkBox_8_04->click();
				}
				if (ui->checkBox_8_04->isChecked() == false) {
					ui->checkBox_8_04->click();
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
				if (ui->checkBox_8_15->isChecked() == false) {
					ui->checkBox_8_15->click();
				}
				if (ui->checkBox_8_15->isChecked() == false) {
					ui->checkBox_8_15->click();
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
				if (ui->checkBox_9_10->isChecked() == false) {
					ui->checkBox_9_10->click();
				}
				if (ui->checkBox_9_10->isChecked() == false) {
					ui->checkBox_9_10->click();
				}
				break;

			case 1:
				if (ui->checkBox_9_11->isChecked() == false) {
					ui->checkBox_9_11->click();
				}
				if (ui->checkBox_9_11->isChecked() == false) {
					ui->checkBox_9_11->click();
				}
				break;

			case 2:
				if (ui->checkBox_9_12->isChecked() == false) {
					ui->checkBox_9_12->click();
				}
				if (ui->checkBox_9_12->isChecked() == false) {
					ui->checkBox_9_12->click();
				}
				break;

			case 3:
				if (ui->checkBox_9_13->isChecked() == false) {
					ui->checkBox_9_13->click();
				}
				if (ui->checkBox_9_13->isChecked() == false) {
					ui->checkBox_9_13->click();
				}
				break;

			case 4:
				if (ui->checkBox_9_14->isChecked() == false) {
					ui->checkBox_9_14->click();
				}
				if (ui->checkBox_9_14->isChecked() == false) {
					ui->checkBox_9_14->click();
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
				if (ui->checkBox_9_05->isChecked() == false) {
					ui->checkBox_9_05->click();
				}
				if (ui->checkBox_9_05->isChecked() == false) {
					ui->checkBox_9_05->click();
				}
				break;

			case 1:
				if (ui->checkBox_9_06->isChecked() == false) {
					ui->checkBox_9_06->click();
				}
				if (ui->checkBox_9_06->isChecked() == false) {
					ui->checkBox_9_06->click();
				}
				break;

			case 2:
				if (ui->checkBox_9_07->isChecked() == false) {
					ui->checkBox_9_07->click();
				}
				if (ui->checkBox_9_07->isChecked() == false) {
					ui->checkBox_9_07->click();
				}
				break;

			case 3:
				if (ui->checkBox_9_08->isChecked() == false) {
					ui->checkBox_9_08->click();
				}
				if (ui->checkBox_9_08->isChecked() == false) {
					ui->checkBox_9_08->click();
				}
				break;

			case 4:
				if (ui->checkBox_9_09->isChecked() == false) {
					ui->checkBox_9_09->click();
				}
				if (ui->checkBox_9_09->isChecked() == false) {
					ui->checkBox_9_09->click();
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
				if (ui->checkBox_9_00->isChecked() == false) {
					ui->checkBox_9_00->click();
				}
				if (ui->checkBox_9_00->isChecked() == false) {
					ui->checkBox_9_00->click();
				}
				break;

			case 1:
				if (ui->checkBox_9_01->isChecked() == false) {
					ui->checkBox_9_01->click();
				}
				if (ui->checkBox_9_01->isChecked() == false) {
					ui->checkBox_9_01->click();
				}
				break;

			case 2:
				if (ui->checkBox_9_02->isChecked() == false) {
					ui->checkBox_9_02->click();
				}
				if (ui->checkBox_9_02->isChecked() == false) {
					ui->checkBox_9_02->click();
				}
				break;

			case 3:
				if (ui->checkBox_9_03->isChecked() == false) {
					ui->checkBox_9_03->click();
				}
				if (ui->checkBox_9_03->isChecked() == false) {
					ui->checkBox_9_03->click();
				}
				break;

			case 4:
				if (ui->checkBox_9_04->isChecked() == false) {
					ui->checkBox_9_04->click();
				}
				if (ui->checkBox_9_04->isChecked() == false) {
					ui->checkBox_9_04->click();
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
				if (ui->checkBox_9_15->isChecked() == false) {
					ui->checkBox_9_15->click();
				}
				if (ui->checkBox_9_15->isChecked() == false) {
					ui->checkBox_9_15->click();
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
				if (ui->checkBox_a_10->isChecked() == false) {
					ui->checkBox_a_10->click();
				}
				if (ui->checkBox_a_10->isChecked() == false) {
					ui->checkBox_a_10->click();
				}
				break;

			case 1:
				if (ui->checkBox_a_11->isChecked() == false) {
					ui->checkBox_a_11->click();
				}
				if (ui->checkBox_a_11->isChecked() == false) {
					ui->checkBox_a_11->click();
				}
				break;

			case 2:
				if (ui->checkBox_a_12->isChecked() == false) {
					ui->checkBox_a_12->click();
				}
				if (ui->checkBox_a_12->isChecked() == false) {
					ui->checkBox_a_12->click();
				}
				break;

			case 3:
				if (ui->checkBox_a_13->isChecked() == false) {
					ui->checkBox_a_13->click();
				}
				if (ui->checkBox_a_13->isChecked() == false) {
					ui->checkBox_a_13->click();
				}
				break;

			case 4:
				if (ui->checkBox_a_14->isChecked() == false) {
					ui->checkBox_a_14->click();
				}
				if (ui->checkBox_a_14->isChecked() == false) {
					ui->checkBox_a_14->click();
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
				if (ui->checkBox_a_05->isChecked() == false) {
					ui->checkBox_a_05->click();
				}
				if (ui->checkBox_a_05->isChecked() == false) {
					ui->checkBox_a_05->click();
				}
				break;

			case 1:
				if (ui->checkBox_a_06->isChecked() == false) {
					ui->checkBox_a_06->click();
				}
				if (ui->checkBox_a_06->isChecked() == false) {
					ui->checkBox_a_06->click();
				}
				break;

			case 2:
				if (ui->checkBox_a_07->isChecked() == false) {
					ui->checkBox_a_07->click();
				}
				if (ui->checkBox_a_07->isChecked() == false) {
					ui->checkBox_a_07->click();
				}
				break;

			case 3:
				if (ui->checkBox_a_08->isChecked() == false) {
					ui->checkBox_a_08->click();
				}
				if (ui->checkBox_a_08->isChecked() == false) {
					ui->checkBox_a_08->click();
				}
				break;

			case 4:
				if (ui->checkBox_a_09->isChecked() == false) {
					ui->checkBox_a_09->click();
				}
				if (ui->checkBox_a_09->isChecked() == false) {
					ui->checkBox_a_09->click();
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
				if (ui->checkBox_a_00->isChecked() == false) {
					ui->checkBox_a_00->click();
				}
				if (ui->checkBox_a_00->isChecked() == false) {
					ui->checkBox_a_00->click();
				}
				break;

			case 1:
				if (ui->checkBox_a_01->isChecked() == false) {
					ui->checkBox_a_01->click();
				}
				if (ui->checkBox_a_01->isChecked() == false) {
					ui->checkBox_a_01->click();
				}
				break;

			case 2:
				if (ui->checkBox_a_02->isChecked() == false) {
					ui->checkBox_a_02->click();
				}
				if (ui->checkBox_a_02->isChecked() == false) {
					ui->checkBox_a_02->click();
				}
				break;

			case 3:
				if (ui->checkBox_a_03->isChecked() == false) {
					ui->checkBox_a_03->click();
				}
				if (ui->checkBox_a_03->isChecked() == false) {
					ui->checkBox_a_03->click();
				}
				break;

			case 4:
				if (ui->checkBox_a_04->isChecked() == false) {
					ui->checkBox_a_04->click();
				}
				if (ui->checkBox_a_04->isChecked() == false) {
					ui->checkBox_a_04->click();
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
				if (ui->checkBox_a_15->isChecked() == false) {
					ui->checkBox_a_15->click();
				}
				if (ui->checkBox_a_15->isChecked() == false) {
					ui->checkBox_a_15->click();
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
				if (ui->checkBox_b_10->isChecked() == false) {
					ui->checkBox_b_10->click();
				}
				if (ui->checkBox_b_10->isChecked() == false) {
					ui->checkBox_b_10->click();
				}
				break;

			case 1:
				if (ui->checkBox_b_11->isChecked() == false) {
					ui->checkBox_b_11->click();
				}
				if (ui->checkBox_b_11->isChecked() == false) {
					ui->checkBox_b_11->click();
				}
				break;

			case 2:
				if (ui->checkBox_b_12->isChecked() == false) {
					ui->checkBox_b_12->click();
				}
				if (ui->checkBox_b_12->isChecked() == false) {
					ui->checkBox_b_12->click();
				}
				break;

			case 3:
				if (ui->checkBox_b_13->isChecked() == false) {
					ui->checkBox_b_13->click();
				}
				if (ui->checkBox_b_13->isChecked() == false) {
					ui->checkBox_b_13->click();
				}
				break;

			case 4:
				if (ui->checkBox_b_14->isChecked() == false) {
					ui->checkBox_b_14->click();
				}
				if (ui->checkBox_b_14->isChecked() == false) {
					ui->checkBox_b_14->click();
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
				if (ui->checkBox_b_05->isChecked() == false) {
					ui->checkBox_b_05->click();
				}
				if (ui->checkBox_b_05->isChecked() == false) {
					ui->checkBox_b_05->click();
				}
				break;

			case 1:
				if (ui->checkBox_b_06->isChecked() == false) {
					ui->checkBox_b_06->click();
				}
				if (ui->checkBox_b_06->isChecked() == false) {
					ui->checkBox_b_06->click();
				}
				break;

			case 2:
				if (ui->checkBox_b_07->isChecked() == false) {
					ui->checkBox_b_07->click();
				}
				if (ui->checkBox_b_07->isChecked() == false) {
					ui->checkBox_b_07->click();
				}
				break;

			case 3:
				if (ui->checkBox_b_08->isChecked() == false) {
					ui->checkBox_b_08->click();
				}
				if (ui->checkBox_b_08->isChecked() == false) {
					ui->checkBox_b_08->click();
				}
				break;

			case 4:
				if (ui->checkBox_b_09->isChecked() == false) {
					ui->checkBox_b_09->click();
				}
				if (ui->checkBox_b_09->isChecked() == false) {
					ui->checkBox_b_09->click();
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
				if (ui->checkBox_b_00->isChecked() == false) {
					ui->checkBox_b_00->click();
				}
				if (ui->checkBox_b_00->isChecked() == false) {
					ui->checkBox_b_00->click();
				}
				break;

			case 1:
				if (ui->checkBox_b_01->isChecked() == false) {
					ui->checkBox_b_01->click();
				}
				if (ui->checkBox_b_01->isChecked() == false) {
					ui->checkBox_b_01->click();
				}
				break;

			case 2:
				if (ui->checkBox_b_02->isChecked() == false) {
					ui->checkBox_b_02->click();
				}
				if (ui->checkBox_b_02->isChecked() == false) {
					ui->checkBox_b_02->click();
				}
				break;

			case 3:
				if (ui->checkBox_b_03->isChecked() == false) {
					ui->checkBox_b_03->click();
				}
				if (ui->checkBox_b_03->isChecked() == false) {
					ui->checkBox_b_03->click();
				}
				break;

			case 4:
				if (ui->checkBox_b_04->isChecked() == false) {
					ui->checkBox_b_04->click();
				}
				if (ui->checkBox_b_04->isChecked() == false) {
					ui->checkBox_b_04->click();
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
				if (ui->checkBox_b_15->isChecked() == false) {
					ui->checkBox_b_15->click();
				}
				if (ui->checkBox_b_15->isChecked() == false) {
					ui->checkBox_b_15->click();
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
				if (ui->checkBox_c_10->isChecked() == false) {
					ui->checkBox_c_10->click();
				}
				if (ui->checkBox_c_10->isChecked() == false) {
					ui->checkBox_c_10->click();
				}
				break;

			case 1:
				if (ui->checkBox_c_11->isChecked() == false) {
					ui->checkBox_c_11->click();
				}
				if (ui->checkBox_c_11->isChecked() == false) {
					ui->checkBox_c_11->click();
				}
				break;

			case 2:
				if (ui->checkBox_c_12->isChecked() == false) {
					ui->checkBox_c_12->click();
				}
				if (ui->checkBox_c_12->isChecked() == false) {
					ui->checkBox_c_12->click();
				}
				break;

			case 3:
				if (ui->checkBox_c_13->isChecked() == false) {
					ui->checkBox_c_13->click();
				}
				if (ui->checkBox_c_13->isChecked() == false) {
					ui->checkBox_c_13->click();
				}
				break;

			case 4:
				if (ui->checkBox_c_14->isChecked() == false) {
					ui->checkBox_c_14->click();
				}
				if (ui->checkBox_c_14->isChecked() == false) {
					ui->checkBox_c_14->click();
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
				if (ui->checkBox_c_05->isChecked() == false) {
					ui->checkBox_c_05->click();
				}
				if (ui->checkBox_c_05->isChecked() == false) {
					ui->checkBox_c_05->click();
				}
				break;

			case 1:
				if (ui->checkBox_c_06->isChecked() == false) {
					ui->checkBox_c_06->click();
				}
				if (ui->checkBox_c_06->isChecked() == false) {
					ui->checkBox_c_06->click();
				}
				break;

			case 2:
				if (ui->checkBox_c_07->isChecked() == false) {
					ui->checkBox_c_07->click();
				}
				if (ui->checkBox_c_07->isChecked() == false) {
					ui->checkBox_c_07->click();
				}
				break;

			case 3:
				if (ui->checkBox_c_08->isChecked() == false) {
					ui->checkBox_c_08->click();
				}
				if (ui->checkBox_c_08->isChecked() == false) {
					ui->checkBox_c_08->click();
				}
				break;

			case 4:
				if (ui->checkBox_c_09->isChecked() == false) {
					ui->checkBox_c_09->click();
				}
				if (ui->checkBox_c_09->isChecked() == false) {
					ui->checkBox_c_09->click();
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
				if (ui->checkBox_c_00->isChecked() == false) {
					ui->checkBox_c_00->click();
				}
				if (ui->checkBox_c_00->isChecked() == false) {
					ui->checkBox_c_00->click();
				}
				break;

			case 1:
				if (ui->checkBox_c_01->isChecked() == false) {
					ui->checkBox_c_01->click();
				}
				if (ui->checkBox_c_01->isChecked() == false) {
					ui->checkBox_c_01->click();
				}
				break;

			case 2:
				if (ui->checkBox_c_02->isChecked() == false) {
					ui->checkBox_c_02->click();
				}
				if (ui->checkBox_c_02->isChecked() == false) {
					ui->checkBox_c_02->click();
				}
				break;

			case 3:
				if (ui->checkBox_c_03->isChecked() == false) {
					ui->checkBox_c_03->click();
				}
				if (ui->checkBox_c_03->isChecked() == false) {
					ui->checkBox_c_03->click();
				}
				break;

			case 4:
				if (ui->checkBox_c_04->isChecked() == false) {
					ui->checkBox_c_04->click();
				}
				if (ui->checkBox_c_04->isChecked() == false) {
					ui->checkBox_c_04->click();
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
				if (ui->checkBox_c_15->isChecked() == false) {
					ui->checkBox_c_15->click();
				}
				if (ui->checkBox_c_15->isChecked() == false) {
					ui->checkBox_c_15->click();
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
				if (ui->checkBox_d_10->isChecked() == false) {
					ui->checkBox_d_10->click();
				}
				if (ui->checkBox_d_10->isChecked() == false) {
					ui->checkBox_d_10->click();
				}
				break;

			case 1:
				if (ui->checkBox_d_11->isChecked() == false) {
					ui->checkBox_d_11->click();
				}
				if (ui->checkBox_d_11->isChecked() == false) {
					ui->checkBox_d_11->click();
				}
				break;

			case 2:
				if (ui->checkBox_d_12->isChecked() == false) {
					ui->checkBox_d_12->click();
				}
				if (ui->checkBox_d_12->isChecked() == false) {
					ui->checkBox_d_12->click();
				}
				break;

			case 3:
				if (ui->checkBox_d_13->isChecked() == false) {
					ui->checkBox_d_13->click();
				}
				if (ui->checkBox_d_13->isChecked() == false) {
					ui->checkBox_d_13->click();
				}
				break;

			case 4:
				if (ui->checkBox_d_14->isChecked() == false) {
					ui->checkBox_d_14->click();
				}
				if (ui->checkBox_d_14->isChecked() == false) {
					ui->checkBox_d_14->click();
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
				if (ui->checkBox_d_05->isChecked() == false) {
					ui->checkBox_d_05->click();
				}
				if (ui->checkBox_d_05->isChecked() == false) {
					ui->checkBox_d_05->click();
				}
				break;

			case 1:
				if (ui->checkBox_d_06->isChecked() == false) {
					ui->checkBox_d_06->click();
				}
				if (ui->checkBox_d_06->isChecked() == false) {
					ui->checkBox_d_06->click();
				}
				break;

			case 2:
				if (ui->checkBox_d_07->isChecked() == false) {
					ui->checkBox_d_07->click();
				}
				if (ui->checkBox_d_07->isChecked() == false) {
					ui->checkBox_d_07->click();
				}
				break;

			case 3:
				if (ui->checkBox_d_08->isChecked() == false) {
					ui->checkBox_d_08->click();
				}
				if (ui->checkBox_d_08->isChecked() == false) {
					ui->checkBox_d_08->click();
				}
				break;

			case 4:
				if (ui->checkBox_d_09->isChecked() == false) {
					ui->checkBox_d_09->click();
				}
				if (ui->checkBox_d_09->isChecked() == false) {
					ui->checkBox_d_09->click();
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
				if (ui->checkBox_d_00->isChecked() == false) {
					ui->checkBox_d_00->click();
				}
				if (ui->checkBox_d_00->isChecked() == false) {
					ui->checkBox_d_00->click();
				}
				break;

			case 1:
				if (ui->checkBox_d_01->isChecked() == false) {
					ui->checkBox_d_01->click();
				}
				if (ui->checkBox_d_01->isChecked() == false) {
					ui->checkBox_d_01->click();
				}
				break;

			case 2:
				if (ui->checkBox_d_02->isChecked() == false) {
					ui->checkBox_d_02->click();
				}
				if (ui->checkBox_d_02->isChecked() == false) {
					ui->checkBox_d_02->click();
				}
				break;

			case 3:
				if (ui->checkBox_d_03->isChecked() == false) {
					ui->checkBox_d_03->click();
				}
				if (ui->checkBox_d_03->isChecked() == false) {
					ui->checkBox_d_03->click();
				}
				break;

			case 4:
				if (ui->checkBox_d_04->isChecked() == false) {
					ui->checkBox_d_04->click();
				}
				if (ui->checkBox_d_04->isChecked() == false) {
					ui->checkBox_d_04->click();
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
				if (ui->checkBox_d_15->isChecked() == false) {
					ui->checkBox_d_15->click();
				}
				if (ui->checkBox_d_15->isChecked() == false) {
					ui->checkBox_d_15->click();
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
				if (ui->checkBox_e_10->isChecked() == false) {
					ui->checkBox_e_10->click();
				}
				if (ui->checkBox_e_10->isChecked() == false) {
					ui->checkBox_e_10->click();
				}
				break;

			case 1:
				if (ui->checkBox_e_11->isChecked() == false) {
					ui->checkBox_e_11->click();
				}
				if (ui->checkBox_e_11->isChecked() == false) {
					ui->checkBox_e_11->click();
				}
				break;

			case 2:
				if (ui->checkBox_e_12->isChecked() == false) {
					ui->checkBox_e_12->click();
				}
				if (ui->checkBox_e_12->isChecked() == false) {
					ui->checkBox_e_12->click();
				}
				break;

			case 3:
				if (ui->checkBox_e_13->isChecked() == false) {
					ui->checkBox_e_13->click();
				}
				if (ui->checkBox_e_13->isChecked() == false) {
					ui->checkBox_e_13->click();
				}
				break;

			case 4:
				if (ui->checkBox_e_14->isChecked() == false) {
					ui->checkBox_e_14->click();
				}
				if (ui->checkBox_e_14->isChecked() == false) {
					ui->checkBox_e_14->click();
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
				if (ui->checkBox_e_05->isChecked() == false) {
					ui->checkBox_e_05->click();
				}
				if (ui->checkBox_e_05->isChecked() == false) {
					ui->checkBox_e_05->click();
				}
				break;

			case 1:
				if (ui->checkBox_e_06->isChecked() == false) {
					ui->checkBox_e_06->click();
				}
				if (ui->checkBox_e_06->isChecked() == false) {
					ui->checkBox_e_06->click();
				}
				break;

			case 2:
				if (ui->checkBox_e_07->isChecked() == false) {
					ui->checkBox_e_07->click();
				}
				if (ui->checkBox_e_07->isChecked() == false) {
					ui->checkBox_e_07->click();
				}
				break;

			case 3:
				if (ui->checkBox_e_08->isChecked() == false) {
					ui->checkBox_e_08->click();
				}
				if (ui->checkBox_e_08->isChecked() == false) {
					ui->checkBox_e_08->click();
				}
				break;

			case 4:
				if (ui->checkBox_e_09->isChecked() == false) {
					ui->checkBox_e_09->click();
				}
				if (ui->checkBox_e_09->isChecked() == false) {
					ui->checkBox_e_09->click();
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
				if (ui->checkBox_e_00->isChecked() == false) {
					ui->checkBox_e_00->click();
				}
				if (ui->checkBox_e_00->isChecked() == false) {
					ui->checkBox_e_00->click();
				}
				break;

			case 1:
				if (ui->checkBox_e_01->isChecked() == false) {
					ui->checkBox_e_01->click();
				}
				if (ui->checkBox_e_01->isChecked() == false) {
					ui->checkBox_e_01->click();
				}
				break;

			case 2:
				if (ui->checkBox_e_02->isChecked() == false) {
					ui->checkBox_e_02->click();
				}
				if (ui->checkBox_e_02->isChecked() == false) {
					ui->checkBox_e_02->click();
				}
				break;

			case 3:
				if (ui->checkBox_e_03->isChecked() == false) {
					ui->checkBox_e_03->click();
				}
				if (ui->checkBox_e_03->isChecked() == false) {
					ui->checkBox_e_03->click();
				}
				break;

			case 4:
				if (ui->checkBox_e_04->isChecked() == false) {
					ui->checkBox_e_04->click();
				}
				if (ui->checkBox_e_04->isChecked() == false) {
					ui->checkBox_e_04->click();
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
				if (ui->checkBox_e_15->isChecked() == false) {
					ui->checkBox_e_15->click();
				}
				if (ui->checkBox_e_15->isChecked() == false) {
					ui->checkBox_e_15->click();
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
				if (ui->checkBox_f_10->isChecked() == false) {
					ui->checkBox_f_10->click();
				}
				if (ui->checkBox_f_10->isChecked() == false) {
					ui->checkBox_f_10->click();
				}
				break;

			case 1:
				if (ui->checkBox_f_11->isChecked() == false) {
					ui->checkBox_f_11->click();
				}
				if (ui->checkBox_f_11->isChecked() == false) {
					ui->checkBox_f_11->click();
				}
				break;

			case 2:
				if (ui->checkBox_f_12->isChecked() == false) {
					ui->checkBox_f_12->click();
				}
				if (ui->checkBox_f_12->isChecked() == false) {
					ui->checkBox_f_12->click();
				}
				break;

			case 3:
				if (ui->checkBox_f_13->isChecked() == false) {
					ui->checkBox_f_13->click();
				}
				if (ui->checkBox_f_13->isChecked() == false) {
					ui->checkBox_f_13->click();
				}
				break;

			case 4:
				if (ui->checkBox_f_14->isChecked() == false) {
					ui->checkBox_f_14->click();
				}
				if (ui->checkBox_f_14->isChecked() == false) {
					ui->checkBox_f_14->click();
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
				if (ui->checkBox_f_05->isChecked() == false) {
					ui->checkBox_f_05->click();
				}
				if (ui->checkBox_f_05->isChecked() == false) {
					ui->checkBox_f_05->click();
				}
				break;

			case 1:
				if (ui->checkBox_f_06->isChecked() == false) {
					ui->checkBox_f_06->click();
				}
				if (ui->checkBox_f_06->isChecked() == false) {
					ui->checkBox_f_06->click();
				}
				break;

			case 2:
				if (ui->checkBox_f_07->isChecked() == false) {
					ui->checkBox_f_07->click();
				}
				if (ui->checkBox_f_07->isChecked() == false) {
					ui->checkBox_f_07->click();
				}
				break;

			case 3:
				if (ui->checkBox_f_08->isChecked() == false) {
					ui->checkBox_f_08->click();
				}
				if (ui->checkBox_f_08->isChecked() == false) {
					ui->checkBox_f_08->click();
				}
				break;

			case 4:
				if (ui->checkBox_f_09->isChecked() == false) {
					ui->checkBox_f_09->click();
				}
				if (ui->checkBox_f_09->isChecked() == false) {
					ui->checkBox_f_09->click();
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
				if (ui->checkBox_f_00->isChecked() == false) {
					ui->checkBox_f_00->click();
				}
				if (ui->checkBox_f_00->isChecked() == false) {
					ui->checkBox_f_00->click();
				}
				break;

			case 1:
				if (ui->checkBox_f_01->isChecked() == false) {
					ui->checkBox_f_01->click();
				}
				if (ui->checkBox_f_01->isChecked() == false) {
					ui->checkBox_f_01->click();
				}
				break;

			case 2:
				if (ui->checkBox_f_02->isChecked() == false) {
					ui->checkBox_f_02->click();
				}
				if (ui->checkBox_f_02->isChecked() == false) {
					ui->checkBox_f_02->click();
				}
				break;

			case 3:
				if (ui->checkBox_f_03->isChecked() == false) {
					ui->checkBox_f_03->click();
				}
				if (ui->checkBox_f_03->isChecked() == false) {
					ui->checkBox_f_03->click();
				}
				break;

			case 4:
				if (ui->checkBox_f_04->isChecked() == false) {
					ui->checkBox_f_04->click();
				}
				if (ui->checkBox_f_04->isChecked() == false) {
					ui->checkBox_f_04->click();
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
				if (ui->checkBox_f_15->isChecked() == false) {
					ui->checkBox_f_15->click();
				}
				if (ui->checkBox_f_15->isChecked() == false) {
					ui->checkBox_f_15->click();
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
				if (ui->checkBox_0_10->isChecked() == true) {
					ui->checkBox_0_10->click();
				}
				if (ui->checkBox_0_10->isChecked() == true) {
					ui->checkBox_0_10->click();
				}
				break;

			case 1:
				if (ui->checkBox_0_11->isChecked() == true) {
					ui->checkBox_0_11->click();
				}
				if (ui->checkBox_0_11->isChecked() == true) {
					ui->checkBox_0_11->click();
				}
				break;

			case 2:
				if (ui->checkBox_0_12->isChecked() == true) {
					ui->checkBox_0_12->click();
				}
				if (ui->checkBox_0_12->isChecked() == true) {
					ui->checkBox_0_12->click();
				}
				break;

			case 3:
				if (ui->checkBox_0_13->isChecked() == true) {
					ui->checkBox_0_13->click();
				}
				if (ui->checkBox_0_13->isChecked() == true) {
					ui->checkBox_0_13->click();
				}
				break;

			case 4:
				if (ui->checkBox_0_14->isChecked() == true) {
					ui->checkBox_0_14->click();
				}
				if (ui->checkBox_0_14->isChecked() == true) {
					ui->checkBox_0_14->click();
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
				if (ui->checkBox_0_05->isChecked() == true) {
					ui->checkBox_0_05->click();
				}
				if (ui->checkBox_0_05->isChecked() == true) {
					ui->checkBox_0_05->click();
				}
				break;

			case 1:
				if (ui->checkBox_0_06->isChecked() == true) {
					ui->checkBox_0_06->click();
				}
				if (ui->checkBox_0_06->isChecked() == true) {
					ui->checkBox_0_06->click();
				}
				break;

			case 2:
				if (ui->checkBox_0_07->isChecked() == true) {
					ui->checkBox_0_07->click();
				}
				if (ui->checkBox_0_07->isChecked() == true) {
					ui->checkBox_0_07->click();
				}
				break;

			case 3:
				if (ui->checkBox_0_08->isChecked() == true) {
					ui->checkBox_0_08->click();
				}
				if (ui->checkBox_0_08->isChecked() == true) {
					ui->checkBox_0_08->click();
				}
				break;

			case 4:
				if (ui->checkBox_0_09->isChecked() == true) {
					ui->checkBox_0_09->click();
				}
				if (ui->checkBox_0_09->isChecked() == true) {
					ui->checkBox_0_09->click();
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
				if (ui->checkBox_0_00->isChecked() == true) {
					ui->checkBox_0_00->click();
				}
				if (ui->checkBox_0_00->isChecked() == true) {
					ui->checkBox_0_00->click();
				}
				break;

			case 1:
				if (ui->checkBox_0_01->isChecked() == true) {
					ui->checkBox_0_01->click();
				}
				if (ui->checkBox_0_01->isChecked() == true) {
					ui->checkBox_0_01->click();
				}
				break;

			case 2:
				if (ui->checkBox_0_02->isChecked() == true) {
					ui->checkBox_0_02->click();
				}
				if (ui->checkBox_0_02->isChecked() == true) {
					ui->checkBox_0_02->click();
				}
				break;

			case 3:
				if (ui->checkBox_0_03->isChecked() == true) {
					ui->checkBox_0_03->click();
				}
				if (ui->checkBox_0_03->isChecked() == true) {
					ui->checkBox_0_03->click();
				}
				break;

			case 4:
				if (ui->checkBox_0_04->isChecked() == true) {
					ui->checkBox_0_04->click();
				}
				if (ui->checkBox_0_04->isChecked() == true) {
					ui->checkBox_0_04->click();
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
				if (ui->checkBox_0_15->isChecked() == true) {
					ui->checkBox_0_15->click();
				}
				if (ui->checkBox_0_15->isChecked() == true) {
					ui->checkBox_0_15->click();
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
				if (ui->checkBox_1_10->isChecked() == true) {
					ui->checkBox_1_10->click();
				}
				if (ui->checkBox_1_10->isChecked() == true) {
					ui->checkBox_1_10->click();
				}
				break;

			case 1:
				if (ui->checkBox_1_11->isChecked() == true) {
					ui->checkBox_1_11->click();
				}
				if (ui->checkBox_1_11->isChecked() == true) {
					ui->checkBox_1_11->click();
				}
				break;

			case 2:
				if (ui->checkBox_1_12->isChecked() == true) {
					ui->checkBox_1_12->click();
				}
				if (ui->checkBox_1_12->isChecked() == true) {
					ui->checkBox_1_12->click();
				}
				break;

			case 3:
				if (ui->checkBox_1_13->isChecked() == true) {
					ui->checkBox_1_13->click();
				}
				if (ui->checkBox_1_13->isChecked() == true) {
					ui->checkBox_1_13->click();
				}
				break;

			case 4:
				if (ui->checkBox_1_14->isChecked() == true) {
					ui->checkBox_1_14->click();
				}
				if (ui->checkBox_1_14->isChecked() == true) {
					ui->checkBox_1_14->click();
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
				if (ui->checkBox_1_05->isChecked() == true) {
					ui->checkBox_1_05->click();
				}
				if (ui->checkBox_1_05->isChecked() == true) {
					ui->checkBox_1_05->click();
				}
				break;

			case 1:
				if (ui->checkBox_1_06->isChecked() == true) {
					ui->checkBox_1_06->click();
				}
				if (ui->checkBox_1_06->isChecked() == true) {
					ui->checkBox_1_06->click();
				}
				break;

			case 2:
				if (ui->checkBox_1_07->isChecked() == true) {
					ui->checkBox_1_07->click();
				}
				if (ui->checkBox_1_07->isChecked() == true) {
					ui->checkBox_1_07->click();
				}
				break;

			case 3:
				if (ui->checkBox_1_08->isChecked() == true) {
					ui->checkBox_1_08->click();
				}
				if (ui->checkBox_1_08->isChecked() == true) {
					ui->checkBox_1_08->click();
				}
				break;

			case 4:
				if (ui->checkBox_1_09->isChecked() == true) {
					ui->checkBox_1_09->click();
				}
				if (ui->checkBox_1_09->isChecked() == true) {
					ui->checkBox_1_09->click();
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
				if (ui->checkBox_1_00->isChecked() == true) {
					ui->checkBox_1_00->click();
				}
				if (ui->checkBox_1_00->isChecked() == true) {
					ui->checkBox_1_00->click();
				}
				break;

			case 1:
				if (ui->checkBox_1_01->isChecked() == true) {
					ui->checkBox_1_01->click();
				}
				if (ui->checkBox_1_01->isChecked() == true) {
					ui->checkBox_1_01->click();
				}
				break;

			case 2:
				if (ui->checkBox_1_02->isChecked() == true) {
					ui->checkBox_1_02->click();
				}
				if (ui->checkBox_1_02->isChecked() == true) {
					ui->checkBox_1_02->click();
				}
				break;

			case 3:
				if (ui->checkBox_1_03->isChecked() == true) {
					ui->checkBox_1_03->click();
				}
				if (ui->checkBox_1_03->isChecked() == true) {
					ui->checkBox_1_03->click();
				}
				break;

			case 4:
				if (ui->checkBox_1_04->isChecked() == true) {
					ui->checkBox_1_04->click();
				}
				if (ui->checkBox_1_04->isChecked() == true) {
					ui->checkBox_1_04->click();
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
				if (ui->checkBox_1_15->isChecked() == true) {
					ui->checkBox_1_15->click();
				}
				if (ui->checkBox_1_15->isChecked() == true) {
					ui->checkBox_1_15->click();
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
				if (ui->checkBox_2_10->isChecked() == true) {
					ui->checkBox_2_10->click();
				}
				if (ui->checkBox_2_10->isChecked() == true) {
					ui->checkBox_2_10->click();
				}
				break;

			case 1:
				if (ui->checkBox_2_11->isChecked() == true) {
					ui->checkBox_2_11->click();
				}
				if (ui->checkBox_2_11->isChecked() == true) {
					ui->checkBox_2_11->click();
				}
				break;

			case 2:
				if (ui->checkBox_2_12->isChecked() == true) {
					ui->checkBox_2_12->click();
				}
				if (ui->checkBox_2_12->isChecked() == true) {
					ui->checkBox_2_12->click();
				}
				break;

			case 3:
				if (ui->checkBox_2_13->isChecked() == true) {
					ui->checkBox_2_13->click();
				}
				if (ui->checkBox_2_13->isChecked() == true) {
					ui->checkBox_2_13->click();
				}
				break;

			case 4:
				if (ui->checkBox_2_14->isChecked() == true) {
					ui->checkBox_2_14->click();
				}
				if (ui->checkBox_2_14->isChecked() == true) {
					ui->checkBox_2_14->click();
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
				if (ui->checkBox_2_05->isChecked() == true) {
					ui->checkBox_2_05->click();
				}
				if (ui->checkBox_2_05->isChecked() == true) {
					ui->checkBox_2_05->click();
				}
				break;

			case 1:
				if (ui->checkBox_2_06->isChecked() == true) {
					ui->checkBox_2_06->click();
				}
				if (ui->checkBox_2_06->isChecked() == true) {
					ui->checkBox_2_06->click();
				}
				break;

			case 2:
				if (ui->checkBox_2_07->isChecked() == true) {
					ui->checkBox_2_07->click();
				}
				if (ui->checkBox_2_07->isChecked() == true) {
					ui->checkBox_2_07->click();
				}
				break;

			case 3:
				if (ui->checkBox_2_08->isChecked() == true) {
					ui->checkBox_2_08->click();
				}
				if (ui->checkBox_2_08->isChecked() == true) {
					ui->checkBox_2_08->click();
				}
				break;

			case 4:
				if (ui->checkBox_2_09->isChecked() == true) {
					ui->checkBox_2_09->click();
				}
				if (ui->checkBox_2_09->isChecked() == true) {
					ui->checkBox_2_09->click();
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
				if (ui->checkBox_2_00->isChecked() == true) {
					ui->checkBox_2_00->click();
				}
				if (ui->checkBox_2_00->isChecked() == true) {
					ui->checkBox_2_00->click();
				}
				break;

			case 1:
				if (ui->checkBox_2_01->isChecked() == true) {
					ui->checkBox_2_01->click();
				}
				if (ui->checkBox_2_01->isChecked() == true) {
					ui->checkBox_2_01->click();
				}
				break;

			case 2:
				if (ui->checkBox_2_02->isChecked() == true) {
					ui->checkBox_2_02->click();
				}
				if (ui->checkBox_2_02->isChecked() == true) {
					ui->checkBox_2_02->click();
				}
				break;

			case 3:
				if (ui->checkBox_2_03->isChecked() == true) {
					ui->checkBox_2_03->click();
				}
				if (ui->checkBox_2_03->isChecked() == true) {
					ui->checkBox_2_03->click();
				}
				break;

			case 4:
				if (ui->checkBox_2_04->isChecked() == true) {
					ui->checkBox_2_04->click();
				}
				if (ui->checkBox_2_04->isChecked() == true) {
					ui->checkBox_2_04->click();
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
				if (ui->checkBox_2_15->isChecked() == true) {
					ui->checkBox_2_15->click();
				}
				if (ui->checkBox_2_15->isChecked() == true) {
					ui->checkBox_2_15->click();
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
				if (ui->checkBox_3_10->isChecked() == true) {
					ui->checkBox_3_10->click();
				}
				if (ui->checkBox_3_10->isChecked() == true) {
					ui->checkBox_3_10->click();
				}
				break;

			case 1:
				if (ui->checkBox_3_11->isChecked() == true) {
					ui->checkBox_3_11->click();
				}
				if (ui->checkBox_3_11->isChecked() == true) {
					ui->checkBox_3_11->click();
				}
				break;

			case 2:
				if (ui->checkBox_3_12->isChecked() == true) {
					ui->checkBox_3_12->click();
				}
				if (ui->checkBox_3_12->isChecked() == true) {
					ui->checkBox_3_12->click();
				}
				break;

			case 3:
				if (ui->checkBox_3_13->isChecked() == true) {
					ui->checkBox_3_13->click();
				}
				if (ui->checkBox_3_13->isChecked() == true) {
					ui->checkBox_3_13->click();
				}
				break;

			case 4:
				if (ui->checkBox_3_14->isChecked() == true) {
					ui->checkBox_3_14->click();
				}
				if (ui->checkBox_3_14->isChecked() == true) {
					ui->checkBox_3_14->click();
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
				if (ui->checkBox_3_05->isChecked() == true) {
					ui->checkBox_3_05->click();
				}
				if (ui->checkBox_3_05->isChecked() == true) {
					ui->checkBox_3_05->click();
				}
				break;

			case 1:
				if (ui->checkBox_3_06->isChecked() == true) {
					ui->checkBox_3_06->click();
				}
				if (ui->checkBox_3_06->isChecked() == true) {
					ui->checkBox_3_06->click();
				}
				break;

			case 2:
				if (ui->checkBox_3_07->isChecked() == true) {
					ui->checkBox_3_07->click();
				}
				if (ui->checkBox_3_07->isChecked() == true) {
					ui->checkBox_3_07->click();
				}
				break;

			case 3:
				if (ui->checkBox_3_08->isChecked() == true) {
					ui->checkBox_3_08->click();
				}
				if (ui->checkBox_3_08->isChecked() == true) {
					ui->checkBox_3_08->click();
				}
				break;

			case 4:
				if (ui->checkBox_3_09->isChecked() == true) {
					ui->checkBox_3_09->click();
				}
				if (ui->checkBox_3_09->isChecked() == true) {
					ui->checkBox_3_09->click();
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
				if (ui->checkBox_3_00->isChecked() == true) {
					ui->checkBox_3_00->click();
				}
				if (ui->checkBox_3_00->isChecked() == true) {
					ui->checkBox_3_00->click();
				}
				break;

			case 1:
				if (ui->checkBox_3_01->isChecked() == true) {
					ui->checkBox_3_01->click();
				}
				if (ui->checkBox_3_01->isChecked() == true) {
					ui->checkBox_3_01->click();
				}
				break;

			case 2:
				if (ui->checkBox_3_02->isChecked() == true) {
					ui->checkBox_3_02->click();
				}
				if (ui->checkBox_3_02->isChecked() == true) {
					ui->checkBox_3_02->click();
				}
				break;

			case 3:
				if (ui->checkBox_3_03->isChecked() == true) {
					ui->checkBox_3_03->click();
				}
				if (ui->checkBox_3_03->isChecked() == true) {
					ui->checkBox_3_03->click();
				}
				break;

			case 4:
				if (ui->checkBox_3_04->isChecked() == true) {
					ui->checkBox_3_04->click();
				}
				if (ui->checkBox_3_04->isChecked() == true) {
					ui->checkBox_3_04->click();
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
				if (ui->checkBox_3_15->isChecked() == true) {
					ui->checkBox_3_15->click();
				}
				if (ui->checkBox_3_15->isChecked() == true) {
					ui->checkBox_3_15->click();
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
				if (ui->checkBox_4_10->isChecked() == true) {
					ui->checkBox_4_10->click();
				}
				if (ui->checkBox_4_10->isChecked() == true) {
					ui->checkBox_4_10->click();
				}
				break;

			case 1:
				if (ui->checkBox_4_11->isChecked() == true) {
					ui->checkBox_4_11->click();
				}
				if (ui->checkBox_4_11->isChecked() == true) {
					ui->checkBox_4_11->click();
				}
				break;

			case 2:
				if (ui->checkBox_4_12->isChecked() == true) {
					ui->checkBox_4_12->click();
				}
				if (ui->checkBox_4_12->isChecked() == true) {
					ui->checkBox_4_12->click();
				}
				break;

			case 3:
				if (ui->checkBox_4_13->isChecked() == true) {
					ui->checkBox_4_13->click();
				}
				if (ui->checkBox_4_13->isChecked() == true) {
					ui->checkBox_4_13->click();
				}
				break;

			case 4:
				if (ui->checkBox_4_14->isChecked() == true) {
					ui->checkBox_4_14->click();
				}
				if (ui->checkBox_4_14->isChecked() == true) {
					ui->checkBox_4_14->click();
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
				if (ui->checkBox_4_05->isChecked() == true) {
					ui->checkBox_4_05->click();
				}
				if (ui->checkBox_4_05->isChecked() == true) {
					ui->checkBox_4_05->click();
				}
				break;

			case 1:
				if (ui->checkBox_4_06->isChecked() == true) {
					ui->checkBox_4_06->click();
				}
				if (ui->checkBox_4_06->isChecked() == true) {
					ui->checkBox_4_06->click();
				}
				break;

			case 2:
				if (ui->checkBox_4_07->isChecked() == true) {
					ui->checkBox_4_07->click();
				}
				if (ui->checkBox_4_07->isChecked() == true) {
					ui->checkBox_4_07->click();
				}
				break;

			case 3:
				if (ui->checkBox_4_08->isChecked() == true) {
					ui->checkBox_4_08->click();
				}
				if (ui->checkBox_4_08->isChecked() == true) {
					ui->checkBox_4_08->click();
				}
				break;

			case 4:
				if (ui->checkBox_4_09->isChecked() == true) {
					ui->checkBox_4_09->click();
				}
				if (ui->checkBox_4_09->isChecked() == true) {
					ui->checkBox_4_09->click();
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
				if (ui->checkBox_4_00->isChecked() == true) {
					ui->checkBox_4_00->click();
				}
				if (ui->checkBox_4_00->isChecked() == true) {
					ui->checkBox_4_00->click();
				}
				break;

			case 1:
				if (ui->checkBox_4_01->isChecked() == true) {
					ui->checkBox_4_01->click();
				}
				if (ui->checkBox_4_01->isChecked() == true) {
					ui->checkBox_4_01->click();
				}
				break;

			case 2:
				if (ui->checkBox_4_02->isChecked() == true) {
					ui->checkBox_4_02->click();
				}
				if (ui->checkBox_4_02->isChecked() == true) {
					ui->checkBox_4_02->click();
				}
				break;

			case 3:
				if (ui->checkBox_4_03->isChecked() == true) {
					ui->checkBox_4_03->click();
				}
				if (ui->checkBox_4_03->isChecked() == true) {
					ui->checkBox_4_03->click();
				}
				break;

			case 4:
				if (ui->checkBox_4_04->isChecked() == true) {
					ui->checkBox_4_04->click();
				}
				if (ui->checkBox_4_04->isChecked() == true) {
					ui->checkBox_4_04->click();
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
				if (ui->checkBox_4_15->isChecked() == true) {
					ui->checkBox_4_15->click();
				}
				if (ui->checkBox_4_15->isChecked() == true) {
					ui->checkBox_4_15->click();
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
				if (ui->checkBox_5_10->isChecked() == true) {
					ui->checkBox_5_10->click();
				}
				if (ui->checkBox_5_10->isChecked() == true) {
					ui->checkBox_5_10->click();
				}
				break;

			case 1:
				if (ui->checkBox_5_11->isChecked() == true) {
					ui->checkBox_5_11->click();
				}
				if (ui->checkBox_5_11->isChecked() == true) {
					ui->checkBox_5_11->click();
				}
				break;

			case 2:
				if (ui->checkBox_5_12->isChecked() == true) {
					ui->checkBox_5_12->click();
				}
				if (ui->checkBox_5_12->isChecked() == true) {
					ui->checkBox_5_12->click();
				}
				break;

			case 3:
				if (ui->checkBox_5_13->isChecked() == true) {
					ui->checkBox_5_13->click();
				}
				if (ui->checkBox_5_13->isChecked() == true) {
					ui->checkBox_5_13->click();
				}
				break;

			case 4:
				if (ui->checkBox_5_14->isChecked() == true) {
					ui->checkBox_5_14->click();
				}
				if (ui->checkBox_5_14->isChecked() == true) {
					ui->checkBox_5_14->click();
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
				if (ui->checkBox_5_05->isChecked() == true) {
					ui->checkBox_5_05->click();
				}
				if (ui->checkBox_5_05->isChecked() == true) {
					ui->checkBox_5_05->click();
				}
				break;

			case 1:
				if (ui->checkBox_5_06->isChecked() == true) {
					ui->checkBox_5_06->click();
				}
				if (ui->checkBox_5_06->isChecked() == true) {
					ui->checkBox_5_06->click();
				}
				break;

			case 2:
				if (ui->checkBox_5_07->isChecked() == true) {
					ui->checkBox_5_07->click();
				}
				if (ui->checkBox_5_07->isChecked() == true) {
					ui->checkBox_5_07->click();
				}
				break;

			case 3:
				if (ui->checkBox_5_08->isChecked() == true) {
					ui->checkBox_5_08->click();
				}
				if (ui->checkBox_5_08->isChecked() == true) {
					ui->checkBox_5_08->click();
				}
				break;

			case 4:
				if (ui->checkBox_5_09->isChecked() == true) {
					ui->checkBox_5_09->click();
				}
				if (ui->checkBox_5_09->isChecked() == true) {
					ui->checkBox_5_09->click();
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
				if (ui->checkBox_5_00->isChecked() == true) {
					ui->checkBox_5_00->click();
				}
				if (ui->checkBox_5_00->isChecked() == true) {
					ui->checkBox_5_00->click();
				}
				break;

			case 1:
				if (ui->checkBox_5_01->isChecked() == true) {
					ui->checkBox_5_01->click();
				}
				if (ui->checkBox_5_01->isChecked() == true) {
					ui->checkBox_5_01->click();
				}
				break;

			case 2:
				if (ui->checkBox_5_02->isChecked() == true) {
					ui->checkBox_5_02->click();
				}
				if (ui->checkBox_5_02->isChecked() == true) {
					ui->checkBox_5_02->click();
				}
				break;

			case 3:
				if (ui->checkBox_5_03->isChecked() == true) {
					ui->checkBox_5_03->click();
				}
				if (ui->checkBox_5_03->isChecked() == true) {
					ui->checkBox_5_03->click();
				}
				break;

			case 4:
				if (ui->checkBox_5_04->isChecked() == true) {
					ui->checkBox_5_04->click();
				}
				if (ui->checkBox_5_04->isChecked() == true) {
					ui->checkBox_5_04->click();
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
				if (ui->checkBox_5_15->isChecked() == true) {
					ui->checkBox_5_15->click();
				}
				if (ui->checkBox_5_15->isChecked() == true) {
					ui->checkBox_5_15->click();
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
				if (ui->checkBox_6_10->isChecked() == true) {
					ui->checkBox_6_10->click();
				}
				if (ui->checkBox_6_10->isChecked() == true) {
					ui->checkBox_6_10->click();
				}
				break;

			case 1:
				if (ui->checkBox_6_11->isChecked() == true) {
					ui->checkBox_6_11->click();
				}
				if (ui->checkBox_6_11->isChecked() == true) {
					ui->checkBox_6_11->click();
				}
				break;

			case 2:
				if (ui->checkBox_6_12->isChecked() == true) {
					ui->checkBox_6_12->click();
				}
				if (ui->checkBox_6_12->isChecked() == true) {
					ui->checkBox_6_12->click();
				}
				break;

			case 3:
				if (ui->checkBox_6_13->isChecked() == true) {
					ui->checkBox_6_13->click();
				}
				if (ui->checkBox_6_13->isChecked() == true) {
					ui->checkBox_6_13->click();
				}
				break;

			case 4:
				if (ui->checkBox_6_14->isChecked() == true) {
					ui->checkBox_6_14->click();
				}
				if (ui->checkBox_6_14->isChecked() == true) {
					ui->checkBox_6_14->click();
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
				if (ui->checkBox_6_05->isChecked() == true) {
					ui->checkBox_6_05->click();
				}
				if (ui->checkBox_6_05->isChecked() == true) {
					ui->checkBox_6_05->click();
				}
				break;

			case 1:
				if (ui->checkBox_6_06->isChecked() == true) {
					ui->checkBox_6_06->click();
				}
				if (ui->checkBox_6_06->isChecked() == true) {
					ui->checkBox_6_06->click();
				}
				break;

			case 2:
				if (ui->checkBox_6_07->isChecked() == true) {
					ui->checkBox_6_07->click();
				}
				if (ui->checkBox_6_07->isChecked() == true) {
					ui->checkBox_6_07->click();
				}
				break;

			case 3:
				if (ui->checkBox_6_08->isChecked() == true) {
					ui->checkBox_6_08->click();
				}
				if (ui->checkBox_6_08->isChecked() == true) {
					ui->checkBox_6_08->click();
				}
				break;

			case 4:
				if (ui->checkBox_6_09->isChecked() == true) {
					ui->checkBox_6_09->click();
				}
				if (ui->checkBox_6_09->isChecked() == true) {
					ui->checkBox_6_09->click();
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
				if (ui->checkBox_6_00->isChecked() == true) {
					ui->checkBox_6_00->click();
				}
				if (ui->checkBox_6_00->isChecked() == true) {
					ui->checkBox_6_00->click();
				}
				break;

			case 1:
				if (ui->checkBox_6_01->isChecked() == true) {
					ui->checkBox_6_01->click();
				}
				if (ui->checkBox_6_01->isChecked() == true) {
					ui->checkBox_6_01->click();
				}
				break;

			case 2:
				if (ui->checkBox_6_02->isChecked() == true) {
					ui->checkBox_6_02->click();
				}
				if (ui->checkBox_6_02->isChecked() == true) {
					ui->checkBox_6_02->click();
				}
				break;

			case 3:
				if (ui->checkBox_6_03->isChecked() == true) {
					ui->checkBox_6_03->click();
				}
				if (ui->checkBox_6_03->isChecked() == true) {
					ui->checkBox_6_03->click();
				}
				break;

			case 4:
				if (ui->checkBox_6_04->isChecked() == true) {
					ui->checkBox_6_04->click();
				}
				if (ui->checkBox_6_04->isChecked() == true) {
					ui->checkBox_6_04->click();
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
				if (ui->checkBox_6_15->isChecked() == true) {
					ui->checkBox_6_15->click();
				}
				if (ui->checkBox_6_15->isChecked() == true) {
					ui->checkBox_6_15->click();
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
				if (ui->checkBox_7_10->isChecked() == true) {
					ui->checkBox_7_10->click();
				}
				if (ui->checkBox_7_10->isChecked() == true) {
					ui->checkBox_7_10->click();
				}
				break;

			case 1:
				if (ui->checkBox_7_11->isChecked() == true) {
					ui->checkBox_7_11->click();
				}
				if (ui->checkBox_7_11->isChecked() == true) {
					ui->checkBox_7_11->click();
				}
				break;

			case 2:
				if (ui->checkBox_7_12->isChecked() == true) {
					ui->checkBox_7_12->click();
				}
				if (ui->checkBox_7_12->isChecked() == true) {
					ui->checkBox_7_12->click();
				}
				break;

			case 3:
				if (ui->checkBox_7_13->isChecked() == true) {
					ui->checkBox_7_13->click();
				}
				if (ui->checkBox_7_13->isChecked() == true) {
					ui->checkBox_7_13->click();
				}
				break;

			case 4:
				if (ui->checkBox_7_14->isChecked() == true) {
					ui->checkBox_7_14->click();
				}
				if (ui->checkBox_7_14->isChecked() == true) {
					ui->checkBox_7_14->click();
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
				if (ui->checkBox_7_05->isChecked() == true) {
					ui->checkBox_7_05->click();
				}
				if (ui->checkBox_7_05->isChecked() == true) {
					ui->checkBox_7_05->click();
				}
				break;

			case 1:
				if (ui->checkBox_7_06->isChecked() == true) {
					ui->checkBox_7_06->click();
				}
				if (ui->checkBox_7_06->isChecked() == true) {
					ui->checkBox_7_06->click();
				}
				break;

			case 2:
				if (ui->checkBox_7_07->isChecked() == true) {
					ui->checkBox_7_07->click();
				}
				if (ui->checkBox_7_07->isChecked() == true) {
					ui->checkBox_7_07->click();
				}
				break;

			case 3:
				if (ui->checkBox_7_08->isChecked() == true) {
					ui->checkBox_7_08->click();
				}
				if (ui->checkBox_7_08->isChecked() == true) {
					ui->checkBox_7_08->click();
				}
				break;

			case 4:
				if (ui->checkBox_7_09->isChecked() == true) {
					ui->checkBox_7_09->click();
				}
				if (ui->checkBox_7_09->isChecked() == true) {
					ui->checkBox_7_09->click();
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
				if (ui->checkBox_7_00->isChecked() == true) {
					ui->checkBox_7_00->click();
				}
				if (ui->checkBox_7_00->isChecked() == true) {
					ui->checkBox_7_00->click();
				}
				break;

			case 1:
				if (ui->checkBox_7_01->isChecked() == true) {
					ui->checkBox_7_01->click();
				}
				if (ui->checkBox_7_01->isChecked() == true) {
					ui->checkBox_7_01->click();
				}
				break;

			case 2:
				if (ui->checkBox_7_02->isChecked() == true) {
					ui->checkBox_7_02->click();
				}
				if (ui->checkBox_7_02->isChecked() == true) {
					ui->checkBox_7_02->click();
				}
				break;

			case 3:
				if (ui->checkBox_7_03->isChecked() == true) {
					ui->checkBox_7_03->click();
				}
				if (ui->checkBox_7_03->isChecked() == true) {
					ui->checkBox_7_03->click();
				}
				break;

			case 4:
				if (ui->checkBox_7_04->isChecked() == true) {
					ui->checkBox_7_04->click();
				}
				if (ui->checkBox_7_04->isChecked() == true) {
					ui->checkBox_7_04->click();
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
				if (ui->checkBox_7_15->isChecked() == true) {
					ui->checkBox_7_15->click();
				}
				if (ui->checkBox_7_15->isChecked() == true) {
					ui->checkBox_7_15->click();
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
				if (ui->checkBox_8_10->isChecked() == true) {
					ui->checkBox_8_10->click();
				}
				if (ui->checkBox_8_10->isChecked() == true) {
					ui->checkBox_8_10->click();
				}
				break;

			case 1:
				if (ui->checkBox_8_11->isChecked() == true) {
					ui->checkBox_8_11->click();
				}
				if (ui->checkBox_8_11->isChecked() == true) {
					ui->checkBox_8_11->click();
				}
				break;

			case 2:
				if (ui->checkBox_8_12->isChecked() == true) {
					ui->checkBox_8_12->click();
				}
				if (ui->checkBox_8_12->isChecked() == true) {
					ui->checkBox_8_12->click();
				}
				break;

			case 3:
				if (ui->checkBox_8_13->isChecked() == true) {
					ui->checkBox_8_13->click();
				}
				if (ui->checkBox_8_13->isChecked() == true) {
					ui->checkBox_8_13->click();
				}
				break;

			case 4:
				if (ui->checkBox_8_14->isChecked() == true) {
					ui->checkBox_8_14->click();
				}
				if (ui->checkBox_8_14->isChecked() == true) {
					ui->checkBox_8_14->click();
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
				if (ui->checkBox_8_05->isChecked() == true) {
					ui->checkBox_8_05->click();
				}
				if (ui->checkBox_8_05->isChecked() == true) {
					ui->checkBox_8_05->click();
				}
				break;

			case 1:
				if (ui->checkBox_8_06->isChecked() == true) {
					ui->checkBox_8_06->click();
				}
				if (ui->checkBox_8_06->isChecked() == true) {
					ui->checkBox_8_06->click();
				}
				break;

			case 2:
				if (ui->checkBox_8_07->isChecked() == true) {
					ui->checkBox_8_07->click();
				}
				if (ui->checkBox_8_07->isChecked() == true) {
					ui->checkBox_8_07->click();
				}
				break;

			case 3:
				if (ui->checkBox_8_08->isChecked() == true) {
					ui->checkBox_8_08->click();
				}
				if (ui->checkBox_8_08->isChecked() == true) {
					ui->checkBox_8_08->click();
				}
				break;

			case 4:
				if (ui->checkBox_8_09->isChecked() == true) {
					ui->checkBox_8_09->click();
				}
				if (ui->checkBox_8_09->isChecked() == true) {
					ui->checkBox_8_09->click();
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
				if (ui->checkBox_8_00->isChecked() == true) {
					ui->checkBox_8_00->click();
				}
				if (ui->checkBox_8_00->isChecked() == true) {
					ui->checkBox_8_00->click();
				}
				break;

			case 1:
				if (ui->checkBox_8_01->isChecked() == true) {
					ui->checkBox_8_01->click();
				}
				if (ui->checkBox_8_01->isChecked() == true) {
					ui->checkBox_8_01->click();
				}
				break;

			case 2:
				if (ui->checkBox_8_02->isChecked() == true) {
					ui->checkBox_8_02->click();
				}
				if (ui->checkBox_8_02->isChecked() == true) {
					ui->checkBox_8_02->click();
				}
				break;

			case 3:
				if (ui->checkBox_8_03->isChecked() == true) {
					ui->checkBox_8_03->click();
				}
				if (ui->checkBox_8_03->isChecked() == true) {
					ui->checkBox_8_03->click();
				}
				break;

			case 4:
				if (ui->checkBox_8_04->isChecked() == true) {
					ui->checkBox_8_04->click();
				}
				if (ui->checkBox_8_04->isChecked() == true) {
					ui->checkBox_8_04->click();
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
				if (ui->checkBox_8_15->isChecked() == true) {
					ui->checkBox_8_15->click();
				}
				if (ui->checkBox_8_15->isChecked() == true) {
					ui->checkBox_8_15->click();
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
				if (ui->checkBox_9_10->isChecked() == true) {
					ui->checkBox_9_10->click();
				}
				if (ui->checkBox_9_10->isChecked() == true) {
					ui->checkBox_9_10->click();
				}
				break;

			case 1:
				if (ui->checkBox_9_11->isChecked() == true) {
					ui->checkBox_9_11->click();
				}
				if (ui->checkBox_9_11->isChecked() == true) {
					ui->checkBox_9_11->click();
				}
				break;

			case 2:
				if (ui->checkBox_9_12->isChecked() == true) {
					ui->checkBox_9_12->click();
				}
				if (ui->checkBox_9_12->isChecked() == true) {
					ui->checkBox_9_12->click();
				}
				break;

			case 3:
				if (ui->checkBox_9_13->isChecked() == true) {
					ui->checkBox_9_13->click();
				}
				if (ui->checkBox_9_13->isChecked() == true) {
					ui->checkBox_9_13->click();
				}
				break;

			case 4:
				if (ui->checkBox_9_14->isChecked() == true) {
					ui->checkBox_9_14->click();
				}
				if (ui->checkBox_9_14->isChecked() == true) {
					ui->checkBox_9_14->click();
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
				if (ui->checkBox_9_05->isChecked() == true) {
					ui->checkBox_9_05->click();
				}
				if (ui->checkBox_9_05->isChecked() == true) {
					ui->checkBox_9_05->click();
				}
				break;

			case 1:
				if (ui->checkBox_9_06->isChecked() == true) {
					ui->checkBox_9_06->click();
				}
				if (ui->checkBox_9_06->isChecked() == true) {
					ui->checkBox_9_06->click();
				}
				break;

			case 2:
				if (ui->checkBox_9_07->isChecked() == true) {
					ui->checkBox_9_07->click();
				}
				if (ui->checkBox_9_07->isChecked() == true) {
					ui->checkBox_9_07->click();
				}
				break;

			case 3:
				if (ui->checkBox_9_08->isChecked() == true) {
					ui->checkBox_9_08->click();
				}
				if (ui->checkBox_9_08->isChecked() == true) {
					ui->checkBox_9_08->click();
				}
				break;

			case 4:
				if (ui->checkBox_9_09->isChecked() == true) {
					ui->checkBox_9_09->click();
				}
				if (ui->checkBox_9_09->isChecked() == true) {
					ui->checkBox_9_09->click();
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
				if (ui->checkBox_9_00->isChecked() == true) {
					ui->checkBox_9_00->click();
				}
				if (ui->checkBox_9_00->isChecked() == true) {
					ui->checkBox_9_00->click();
				}
				break;

			case 1:
				if (ui->checkBox_9_01->isChecked() == true) {
					ui->checkBox_9_01->click();
				}
				if (ui->checkBox_9_01->isChecked() == true) {
					ui->checkBox_9_01->click();
				}
				break;

			case 2:
				if (ui->checkBox_9_02->isChecked() == true) {
					ui->checkBox_9_02->click();
				}
				if (ui->checkBox_9_02->isChecked() == true) {
					ui->checkBox_9_02->click();
				}
				break;

			case 3:
				if (ui->checkBox_9_03->isChecked() == true) {
					ui->checkBox_9_03->click();
				}
				if (ui->checkBox_9_03->isChecked() == true) {
					ui->checkBox_9_03->click();
				}
				break;

			case 4:
				if (ui->checkBox_9_04->isChecked() == true) {
					ui->checkBox_9_04->click();
				}
				if (ui->checkBox_9_04->isChecked() == true) {
					ui->checkBox_9_04->click();
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
				if (ui->checkBox_9_15->isChecked() == true) {
					ui->checkBox_9_15->click();
				}
				if (ui->checkBox_9_15->isChecked() == true) {
					ui->checkBox_9_15->click();
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
				if (ui->checkBox_a_10->isChecked() == true) {
					ui->checkBox_a_10->click();
				}
				if (ui->checkBox_a_10->isChecked() == true) {
					ui->checkBox_a_10->click();
				}
				break;

			case 1:
				if (ui->checkBox_a_11->isChecked() == true) {
					ui->checkBox_a_11->click();
				}
				if (ui->checkBox_a_11->isChecked() == true) {
					ui->checkBox_a_11->click();
				}
				break;

			case 2:
				if (ui->checkBox_a_12->isChecked() == true) {
					ui->checkBox_a_12->click();
				}
				if (ui->checkBox_a_12->isChecked() == true) {
					ui->checkBox_a_12->click();
				}
				break;

			case 3:
				if (ui->checkBox_a_13->isChecked() == true) {
					ui->checkBox_a_13->click();
				}
				if (ui->checkBox_a_13->isChecked() == true) {
					ui->checkBox_a_13->click();
				}
				break;

			case 4:
				if (ui->checkBox_a_14->isChecked() == true) {
					ui->checkBox_a_14->click();
				}
				if (ui->checkBox_a_14->isChecked() == true) {
					ui->checkBox_a_14->click();
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
				if (ui->checkBox_a_05->isChecked() == true) {
					ui->checkBox_a_05->click();
				}
				if (ui->checkBox_a_05->isChecked() == true) {
					ui->checkBox_a_05->click();
				}
				break;

			case 1:
				if (ui->checkBox_a_06->isChecked() == true) {
					ui->checkBox_a_06->click();
				}
				if (ui->checkBox_a_06->isChecked() == true) {
					ui->checkBox_a_06->click();
				}
				break;

			case 2:
				if (ui->checkBox_a_07->isChecked() == true) {
					ui->checkBox_a_07->click();
				}
				if (ui->checkBox_a_07->isChecked() == true) {
					ui->checkBox_a_07->click();
				}
				break;

			case 3:
				if (ui->checkBox_a_08->isChecked() == true) {
					ui->checkBox_a_08->click();
				}
				if (ui->checkBox_a_08->isChecked() == true) {
					ui->checkBox_a_08->click();
				}
				break;

			case 4:
				if (ui->checkBox_a_09->isChecked() == true) {
					ui->checkBox_a_09->click();
				}
				if (ui->checkBox_a_09->isChecked() == true) {
					ui->checkBox_a_09->click();
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
				if (ui->checkBox_a_00->isChecked() == true) {
					ui->checkBox_a_00->click();
				}
				if (ui->checkBox_a_00->isChecked() == true) {
					ui->checkBox_a_00->click();
				}
				break;

			case 1:
				if (ui->checkBox_a_01->isChecked() == true) {
					ui->checkBox_a_01->click();
				}
				if (ui->checkBox_a_01->isChecked() == true) {
					ui->checkBox_a_01->click();
				}
				break;

			case 2:
				if (ui->checkBox_a_02->isChecked() == true) {
					ui->checkBox_a_02->click();
				}
				if (ui->checkBox_a_02->isChecked() == true) {
					ui->checkBox_a_02->click();
				}
				break;

			case 3:
				if (ui->checkBox_a_03->isChecked() == true) {
					ui->checkBox_a_03->click();
				}
				if (ui->checkBox_a_03->isChecked() == true) {
					ui->checkBox_a_03->click();
				}
				break;

			case 4:
				if (ui->checkBox_a_04->isChecked() == true) {
					ui->checkBox_a_04->click();
				}
				if (ui->checkBox_a_04->isChecked() == true) {
					ui->checkBox_a_04->click();
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
				if (ui->checkBox_a_15->isChecked() == true) {
					ui->checkBox_a_15->click();
				}
				if (ui->checkBox_a_15->isChecked() == true) {
					ui->checkBox_a_15->click();
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
				if (ui->checkBox_b_10->isChecked() == true) {
					ui->checkBox_b_10->click();
				}
				if (ui->checkBox_b_10->isChecked() == true) {
					ui->checkBox_b_10->click();
				}
				break;

			case 1:
				if (ui->checkBox_b_11->isChecked() == true) {
					ui->checkBox_b_11->click();
				}
				if (ui->checkBox_b_11->isChecked() == true) {
					ui->checkBox_b_11->click();
				}
				break;

			case 2:
				if (ui->checkBox_b_12->isChecked() == true) {
					ui->checkBox_b_12->click();
				}
				if (ui->checkBox_b_12->isChecked() == true) {
					ui->checkBox_b_12->click();
				}
				break;

			case 3:
				if (ui->checkBox_b_13->isChecked() == true) {
					ui->checkBox_b_13->click();
				}
				if (ui->checkBox_b_13->isChecked() == true) {
					ui->checkBox_b_13->click();
				}
				break;

			case 4:
				if (ui->checkBox_b_14->isChecked() == true) {
					ui->checkBox_b_14->click();
				}
				if (ui->checkBox_b_14->isChecked() == true) {
					ui->checkBox_b_14->click();
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
				if (ui->checkBox_b_05->isChecked() == true) {
					ui->checkBox_b_05->click();
				}
				if (ui->checkBox_b_05->isChecked() == true) {
					ui->checkBox_b_05->click();
				}
				break;

			case 1:
				if (ui->checkBox_b_06->isChecked() == true) {
					ui->checkBox_b_06->click();
				}
				if (ui->checkBox_b_06->isChecked() == true) {
					ui->checkBox_b_06->click();
				}
				break;

			case 2:
				if (ui->checkBox_b_07->isChecked() == true) {
					ui->checkBox_b_07->click();
				}
				if (ui->checkBox_b_07->isChecked() == true) {
					ui->checkBox_b_07->click();
				}
				break;

			case 3:
				if (ui->checkBox_b_08->isChecked() == true) {
					ui->checkBox_b_08->click();
				}
				if (ui->checkBox_b_08->isChecked() == true) {
					ui->checkBox_b_08->click();
				}
				break;

			case 4:
				if (ui->checkBox_b_09->isChecked() == true) {
					ui->checkBox_b_09->click();
				}
				if (ui->checkBox_b_09->isChecked() == true) {
					ui->checkBox_b_09->click();
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
				if (ui->checkBox_b_00->isChecked() == true) {
					ui->checkBox_b_00->click();
				}
				if (ui->checkBox_b_00->isChecked() == true) {
					ui->checkBox_b_00->click();
				}
				break;

			case 1:
				if (ui->checkBox_b_01->isChecked() == true) {
					ui->checkBox_b_01->click();
				}
				if (ui->checkBox_b_01->isChecked() == true) {
					ui->checkBox_b_01->click();
				}
				break;

			case 2:
				if (ui->checkBox_b_02->isChecked() == true) {
					ui->checkBox_b_02->click();
				}
				if (ui->checkBox_b_02->isChecked() == true) {
					ui->checkBox_b_02->click();
				}
				break;

			case 3:
				if (ui->checkBox_b_03->isChecked() == true) {
					ui->checkBox_b_03->click();
				}
				if (ui->checkBox_b_03->isChecked() == true) {
					ui->checkBox_b_03->click();
				}
				break;

			case 4:
				if (ui->checkBox_b_04->isChecked() == true) {
					ui->checkBox_b_04->click();
				}
				if (ui->checkBox_b_04->isChecked() == true) {
					ui->checkBox_b_04->click();
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
				if (ui->checkBox_b_15->isChecked() == true) {
					ui->checkBox_b_15->click();
				}
				if (ui->checkBox_b_15->isChecked() == true) {
					ui->checkBox_b_15->click();
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
				if (ui->checkBox_c_10->isChecked() == true) {
					ui->checkBox_c_10->click();
				}
				if (ui->checkBox_c_10->isChecked() == true) {
					ui->checkBox_c_10->click();
				}
				break;

			case 1:
				if (ui->checkBox_c_11->isChecked() == true) {
					ui->checkBox_c_11->click();
				}
				if (ui->checkBox_c_11->isChecked() == true) {
					ui->checkBox_c_11->click();
				}
				break;

			case 2:
				if (ui->checkBox_c_12->isChecked() == true) {
					ui->checkBox_c_12->click();
				}
				if (ui->checkBox_c_12->isChecked() == true) {
					ui->checkBox_c_12->click();
				}
				break;

			case 3:
				if (ui->checkBox_c_13->isChecked() == true) {
					ui->checkBox_c_13->click();
				}
				if (ui->checkBox_c_13->isChecked() == true) {
					ui->checkBox_c_13->click();
				}
				break;

			case 4:
				if (ui->checkBox_c_14->isChecked() == true) {
					ui->checkBox_c_14->click();
				}
				if (ui->checkBox_c_14->isChecked() == true) {
					ui->checkBox_c_14->click();
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
				if (ui->checkBox_c_05->isChecked() == true) {
					ui->checkBox_c_05->click();
				}
				if (ui->checkBox_c_05->isChecked() == true) {
					ui->checkBox_c_05->click();
				}
				break;

			case 1:
				if (ui->checkBox_c_06->isChecked() == true) {
					ui->checkBox_c_06->click();
				}
				if (ui->checkBox_c_06->isChecked() == true) {
					ui->checkBox_c_06->click();
				}
				break;

			case 2:
				if (ui->checkBox_c_07->isChecked() == true) {
					ui->checkBox_c_07->click();
				}
				if (ui->checkBox_c_07->isChecked() == true) {
					ui->checkBox_c_07->click();
				}
				break;

			case 3:
				if (ui->checkBox_c_08->isChecked() == true) {
					ui->checkBox_c_08->click();
				}
				if (ui->checkBox_c_08->isChecked() == true) {
					ui->checkBox_c_08->click();
				}
				break;

			case 4:
				if (ui->checkBox_c_09->isChecked() == true) {
					ui->checkBox_c_09->click();
				}
				if (ui->checkBox_c_09->isChecked() == true) {
					ui->checkBox_c_09->click();
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
				if (ui->checkBox_c_00->isChecked() == true) {
					ui->checkBox_c_00->click();
				}
				if (ui->checkBox_c_00->isChecked() == true) {
					ui->checkBox_c_00->click();
				}
				break;

			case 1:
				if (ui->checkBox_c_01->isChecked() == true) {
					ui->checkBox_c_01->click();
				}
				if (ui->checkBox_c_01->isChecked() == true) {
					ui->checkBox_c_01->click();
				}
				break;

			case 2:
				if (ui->checkBox_c_02->isChecked() == true) {
					ui->checkBox_c_02->click();
				}
				if (ui->checkBox_c_02->isChecked() == true) {
					ui->checkBox_c_02->click();
				}
				break;

			case 3:
				if (ui->checkBox_c_03->isChecked() == true) {
					ui->checkBox_c_03->click();
				}
				if (ui->checkBox_c_03->isChecked() == true) {
					ui->checkBox_c_03->click();
				}
				break;

			case 4:
				if (ui->checkBox_c_04->isChecked() == true) {
					ui->checkBox_c_04->click();
				}
				if (ui->checkBox_c_04->isChecked() == true) {
					ui->checkBox_c_04->click();
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
				if (ui->checkBox_c_15->isChecked() == true) {
					ui->checkBox_c_15->click();
				}
				if (ui->checkBox_c_15->isChecked() == true) {
					ui->checkBox_c_15->click();
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
				if (ui->checkBox_d_10->isChecked() == true) {
					ui->checkBox_d_10->click();
				}
				if (ui->checkBox_d_10->isChecked() == true) {
					ui->checkBox_d_10->click();
				}
				break;

			case 1:
				if (ui->checkBox_d_11->isChecked() == true) {
					ui->checkBox_d_11->click();
				}
				if (ui->checkBox_d_11->isChecked() == true) {
					ui->checkBox_d_11->click();
				}
				break;

			case 2:
				if (ui->checkBox_d_12->isChecked() == true) {
					ui->checkBox_d_12->click();
				}
				if (ui->checkBox_d_12->isChecked() == true) {
					ui->checkBox_d_12->click();
				}
				break;

			case 3:
				if (ui->checkBox_d_13->isChecked() == true) {
					ui->checkBox_d_13->click();
				}
				if (ui->checkBox_d_13->isChecked() == true) {
					ui->checkBox_d_13->click();
				}
				break;

			case 4:
				if (ui->checkBox_d_14->isChecked() == true) {
					ui->checkBox_d_14->click();
				}
				if (ui->checkBox_d_14->isChecked() == true) {
					ui->checkBox_d_14->click();
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
				if (ui->checkBox_d_05->isChecked() == true) {
					ui->checkBox_d_05->click();
				}
				if (ui->checkBox_d_05->isChecked() == true) {
					ui->checkBox_d_05->click();
				}
				break;

			case 1:
				if (ui->checkBox_d_06->isChecked() == true) {
					ui->checkBox_d_06->click();
				}
				if (ui->checkBox_d_06->isChecked() == true) {
					ui->checkBox_d_06->click();
				}
				break;

			case 2:
				if (ui->checkBox_d_07->isChecked() == true) {
					ui->checkBox_d_07->click();
				}
				if (ui->checkBox_d_07->isChecked() == true) {
					ui->checkBox_d_07->click();
				}
				break;

			case 3:
				if (ui->checkBox_d_08->isChecked() == true) {
					ui->checkBox_d_08->click();
				}
				if (ui->checkBox_d_08->isChecked() == true) {
					ui->checkBox_d_08->click();
				}
				break;

			case 4:
				if (ui->checkBox_d_09->isChecked() == true) {
					ui->checkBox_d_09->click();
				}
				if (ui->checkBox_d_09->isChecked() == true) {
					ui->checkBox_d_09->click();
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
				if (ui->checkBox_d_00->isChecked() == true) {
					ui->checkBox_d_00->click();
				}
				if (ui->checkBox_d_00->isChecked() == true) {
					ui->checkBox_d_00->click();
				}
				break;

			case 1:
				if (ui->checkBox_d_01->isChecked() == true) {
					ui->checkBox_d_01->click();
				}
				if (ui->checkBox_d_01->isChecked() == true) {
					ui->checkBox_d_01->click();
				}
				break;

			case 2:
				if (ui->checkBox_d_02->isChecked() == true) {
					ui->checkBox_d_02->click();
				}
				if (ui->checkBox_d_02->isChecked() == true) {
					ui->checkBox_d_02->click();
				}
				break;

			case 3:
				if (ui->checkBox_d_03->isChecked() == true) {
					ui->checkBox_d_03->click();
				}
				if (ui->checkBox_d_03->isChecked() == true) {
					ui->checkBox_d_03->click();
				}
				break;

			case 4:
				if (ui->checkBox_d_04->isChecked() == true) {
					ui->checkBox_d_04->click();
				}
				if (ui->checkBox_d_04->isChecked() == true) {
					ui->checkBox_d_04->click();
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
				if (ui->checkBox_d_15->isChecked() == true) {
					ui->checkBox_d_15->click();
				}
				if (ui->checkBox_d_15->isChecked() == true) {
					ui->checkBox_d_15->click();
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
				if (ui->checkBox_e_10->isChecked() == true) {
					ui->checkBox_e_10->click();
				}
				if (ui->checkBox_e_10->isChecked() == true) {
					ui->checkBox_e_10->click();
				}
				break;

			case 1:
				if (ui->checkBox_e_11->isChecked() == true) {
					ui->checkBox_e_11->click();
				}
				if (ui->checkBox_e_11->isChecked() == true) {
					ui->checkBox_e_11->click();
				}
				break;

			case 2:
				if (ui->checkBox_e_12->isChecked() == true) {
					ui->checkBox_e_12->click();
				}
				if (ui->checkBox_e_12->isChecked() == true) {
					ui->checkBox_e_12->click();
				}
				break;

			case 3:
				if (ui->checkBox_e_13->isChecked() == true) {
					ui->checkBox_e_13->click();
				}
				if (ui->checkBox_e_13->isChecked() == true) {
					ui->checkBox_e_13->click();
				}
				break;

			case 4:
				if (ui->checkBox_e_14->isChecked() == true) {
					ui->checkBox_e_14->click();
				}
				if (ui->checkBox_e_14->isChecked() == true) {
					ui->checkBox_e_14->click();
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
				if (ui->checkBox_e_05->isChecked() == true) {
					ui->checkBox_e_05->click();
				}
				if (ui->checkBox_e_05->isChecked() == true) {
					ui->checkBox_e_05->click();
				}
				break;

			case 1:
				if (ui->checkBox_e_06->isChecked() == true) {
					ui->checkBox_e_06->click();
				}
				if (ui->checkBox_e_06->isChecked() == true) {
					ui->checkBox_e_06->click();
				}
				break;

			case 2:
				if (ui->checkBox_e_07->isChecked() == true) {
					ui->checkBox_e_07->click();
				}
				if (ui->checkBox_e_07->isChecked() == true) {
					ui->checkBox_e_07->click();
				}
				break;

			case 3:
				if (ui->checkBox_e_08->isChecked() == true) {
					ui->checkBox_e_08->click();
				}
				if (ui->checkBox_e_08->isChecked() == true) {
					ui->checkBox_e_08->click();
				}
				break;

			case 4:
				if (ui->checkBox_e_09->isChecked() == true) {
					ui->checkBox_e_09->click();
				}
				if (ui->checkBox_e_09->isChecked() == true) {
					ui->checkBox_e_09->click();
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
				if (ui->checkBox_e_00->isChecked() == true) {
					ui->checkBox_e_00->click();
				}
				if (ui->checkBox_e_00->isChecked() == true) {
					ui->checkBox_e_00->click();
				}
				break;

			case 1:
				if (ui->checkBox_e_01->isChecked() == true) {
					ui->checkBox_e_01->click();
				}
				if (ui->checkBox_e_01->isChecked() == true) {
					ui->checkBox_e_01->click();
				}
				break;

			case 2:
				if (ui->checkBox_e_02->isChecked() == true) {
					ui->checkBox_e_02->click();
				}
				if (ui->checkBox_e_02->isChecked() == true) {
					ui->checkBox_e_02->click();
				}
				break;

			case 3:
				if (ui->checkBox_e_03->isChecked() == true) {
					ui->checkBox_e_03->click();
				}
				if (ui->checkBox_e_03->isChecked() == true) {
					ui->checkBox_e_03->click();
				}
				break;

			case 4:
				if (ui->checkBox_e_04->isChecked() == true) {
					ui->checkBox_e_04->click();
				}
				if (ui->checkBox_e_04->isChecked() == true) {
					ui->checkBox_e_04->click();
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
				if (ui->checkBox_e_15->isChecked() == true) {
					ui->checkBox_e_15->click();
				}
				if (ui->checkBox_e_15->isChecked() == true) {
					ui->checkBox_e_15->click();
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
				if (ui->checkBox_f_10->isChecked() == true) {
					ui->checkBox_f_10->click();
				}
				if (ui->checkBox_f_10->isChecked() == true) {
					ui->checkBox_f_10->click();
				}
				break;

			case 1:
				if (ui->checkBox_f_11->isChecked() == true) {
					ui->checkBox_f_11->click();
				}
				if (ui->checkBox_f_11->isChecked() == true) {
					ui->checkBox_f_11->click();
				}
				break;

			case 2:
				if (ui->checkBox_f_12->isChecked() == true) {
					ui->checkBox_f_12->click();
				}
				if (ui->checkBox_f_12->isChecked() == true) {
					ui->checkBox_f_12->click();
				}
				break;

			case 3:
				if (ui->checkBox_f_13->isChecked() == true) {
					ui->checkBox_f_13->click();
				}
				if (ui->checkBox_f_13->isChecked() == true) {
					ui->checkBox_f_13->click();
				}
				break;

			case 4:
				if (ui->checkBox_f_14->isChecked() == true) {
					ui->checkBox_f_14->click();
				}
				if (ui->checkBox_f_14->isChecked() == true) {
					ui->checkBox_f_14->click();
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
				if (ui->checkBox_f_05->isChecked() == true) {
					ui->checkBox_f_05->click();
				}
				if (ui->checkBox_f_05->isChecked() == true) {
					ui->checkBox_f_05->click();
				}
				break;

			case 1:
				if (ui->checkBox_f_06->isChecked() == true) {
					ui->checkBox_f_06->click();
				}
				if (ui->checkBox_f_06->isChecked() == true) {
					ui->checkBox_f_06->click();
				}
				break;

			case 2:
				if (ui->checkBox_f_07->isChecked() == true) {
					ui->checkBox_f_07->click();
				}
				if (ui->checkBox_f_07->isChecked() == true) {
					ui->checkBox_f_07->click();
				}
				break;

			case 3:
				if (ui->checkBox_f_08->isChecked() == true) {
					ui->checkBox_f_08->click();
				}
				if (ui->checkBox_f_08->isChecked() == true) {
					ui->checkBox_f_08->click();
				}
				break;

			case 4:
				if (ui->checkBox_f_09->isChecked() == true) {
					ui->checkBox_f_09->click();
				}
				if (ui->checkBox_f_09->isChecked() == true) {
					ui->checkBox_f_09->click();
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
				if (ui->checkBox_f_00->isChecked() == true) {
					ui->checkBox_f_00->click();
				}
				if (ui->checkBox_f_00->isChecked() == true) {
					ui->checkBox_f_00->click();
				}
				break;

			case 1:
				if (ui->checkBox_f_01->isChecked() == true) {
					ui->checkBox_f_01->click();
				}
				if (ui->checkBox_f_01->isChecked() == true) {
					ui->checkBox_f_01->click();
				}
				break;

			case 2:
				if (ui->checkBox_f_02->isChecked() == true) {
					ui->checkBox_f_02->click();
				}
				if (ui->checkBox_f_02->isChecked() == true) {
					ui->checkBox_f_02->click();
				}
				break;

			case 3:
				if (ui->checkBox_f_03->isChecked() == true) {
					ui->checkBox_f_03->click();
				}
				if (ui->checkBox_f_03->isChecked() == true) {
					ui->checkBox_f_03->click();
				}
				break;

			case 4:
				if (ui->checkBox_f_04->isChecked() == true) {
					ui->checkBox_f_04->click();
				}
				if (ui->checkBox_f_04->isChecked() == true) {
					ui->checkBox_f_04->click();
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
				if (ui->checkBox_f_15->isChecked() == true) {
					ui->checkBox_f_15->click();
				}
				if (ui->checkBox_f_15->isChecked() == true) {
					ui->checkBox_f_15->click();
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

void Display::DisplayDigit() {
	uint8_t xPos = 0;
	uint8_t andOperator = 1;
	const uint8_t andOperator_127 = 127;

	clearPointAll();

	for (uint8_t i = 0; i < 16; i += 1) {
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

			switch (dispBuffer[i] & andOperator_127) {
			case 0:
			case 7:
			case 64:
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
				clearPoint(xPos + 0, 2);
				clearPoint(xPos + 2, 2);
				break;

			case 115:  // 'P'
				clearPoint(xPos + 2, 0);
				clearPoint(xPos + 2, 2);
				break;

			case 63:   // '0'
				clearPoint(xPos + 0, 4);
				clearPoint(xPos + 2, 0);
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
			case 113:  // 'F'
			case 121:  // 'E'
				clearPoint(xPos + 2, 2);
				break;

			case 125:  // '6'
				clearPoint(xPos + 0, 0);
				clearPoint(xPos + 2, 2);
				break;

			case 111:  // '9'
				clearPoint(xPos + 2, 4);
			case 84:
			case 80:   // 'r'
				clearPoint(xPos + 0, 2);
				break;

			default:
				ui->label->setText("Buffer");
				break;
			}
			andOperator *= 2;
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

				myCalculator->abortOperation();
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
		myCalculator->digitClicked(0);
	}
}

void Display::digitClicked_1()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(77); // o.k.
	}
	else {
		myCalculator->digitClicked(1);
	}
}

void Display::digitClicked_2()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(78); // o.k.
	}
	else {
		myCalculator->digitClicked(2);
	}
}

void Display::digitClicked_3()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(79); // o.k.
	}
	else {
		myCalculator->digitClicked(3);
	}
}

void Display::digitClicked_4()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(65); // o.k.
	}
	else {
		myCalculator->digitClicked(4);
	}
}

void Display::digitClicked_5()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(66); // o.k.
	}
	else {
		myCalculator->digitClicked(5);
	}
}

void Display::digitClicked_6()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(67); // o.k.
	}
	else {
		myCalculator->digitClicked(6);
	}
}

void Display::digitClicked_7()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(53); // o.k.
	}
	else {
		myCalculator->digitClicked(7);
	}
}

void Display::digitClicked_8()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(54); // o.k.
	}
	else {
		myCalculator->digitClicked(8);
	}
}

void Display::digitClicked_9()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(55); // o.k.
	}
	else {
		myCalculator->digitClicked(9);
	}
}

void Display::pointClicked()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(91); // o.k.
	}
	else {
		myCalculator->pointClicked();
	}
}

void Display::unaryOperatorClicked_1_x()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(39); // o.k.
	}
	else {
		myCalculator->unaryOperatorClicked('x');
	}
}

void Display::unaryOperatorClicked_pow_2()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(51); // o.k.
	}
	else {
		myCalculator->unaryOperatorClicked('p');
	}
}

void Display::unaryOperatorClicked_sqrt()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(63); // o.k.
	}
	else {
		myCalculator->unaryOperatorClicked('s');
	}
}

void Display::clear()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(41); // o.k.
	}
	else {
		myCalculator->clear();
	}
}

void Display::changeSignClicked()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(42); // o.k.
	}
	else {
		myCalculator->changeSignClicked();
	}
}

void Display::OperatorClicked_Div()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(44); //
	}
	else {
		myCalculator->multiplicativeOperatorClicked('/');
	}
}

void Display::OperatorClicked_Mul()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(56); //
	}
	else {
		myCalculator->multiplicativeOperatorClicked('*');
	}
}

void Display::OperatorClicked_Sub()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(68); //
	}
	else {
		myCalculator->additiveOperatorClicked('-');
	}
}

void Display::OperatorClicked_Add()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(80); //
	}
	else {
		myCalculator->additiveOperatorClicked('+');
	}
}

void Display::equalClicked()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(92); //
	}
	else {
		myCalculator->equalClicked();
	}
}

void Display::PiClicked()
{
	if (ui->checkBox_on_off->isChecked() == true) {
		myK1003->KeyPressed(89); // o.k.
		// myK1003->PiClicked(); // o.k.
	}
	else {
		myCalculator->unaryOperatorClicked('t');
	}
}

void Display::InitProcessor()
{
	myK1003->InitProcessor();
}

void Display::stop_CPU()
{
	myK1003->stop_CPU();
}