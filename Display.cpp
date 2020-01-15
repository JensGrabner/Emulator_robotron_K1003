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
	if (x > 15) {
		ui->label->setText("no Point");
		return;
	}

	if (y > 7) {
		ui->label->setText("no Point");
		return;
	}

	switch (x) {
	case 0:
		switch (y) {
		case 0:
			if ( pixel_0_a == false ) {
				ui->frame_0_a->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_0_a->setAutoFillBackground(true);
				pixel_0_a = true;
			}
			break;

		case 1:
			if ( pixel_0_b == false ) {
				ui->frame_0_b->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_0_b->setAutoFillBackground(true);
				pixel_0_b = true;
			}
			break;

		case 2:
			if ( pixel_0_c == false ) {
				ui->frame_0_c->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_0_c->setAutoFillBackground(true);
				pixel_0_c = true;
			}
			break;

		case 3:
			if ( pixel_0_d == false ) {
				ui->frame_0_d->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_0_d->setAutoFillBackground(true);
				pixel_0_d = true;
			}
			break;

		case 4:
			if ( pixel_0_e == false ) {
				ui->frame_0_e->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_0_e->setAutoFillBackground(true);
				pixel_0_e = true;
			}
			break;

		case 5:
			if ( pixel_0_f == false ) {
				ui->frame_0_f->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_0_f->setAutoFillBackground(true);
				pixel_0_f = true;
			}
			break;

		case 6:
			if ( pixel_0_g == false ) {
				ui->frame_0_g->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_0_g->setAutoFillBackground(true);
				pixel_0_g = true;
			}
			break;

		case 7:
			if ( pixel_0_dp == false ) {
				ui->frame_0_dp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_0_dp->setAutoFillBackground(true);
				pixel_0_dp = true;
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
			if ( pixel_1_a == false ) {
				ui->frame_1_a->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_1_a->setAutoFillBackground(true);
				pixel_1_a = true;
			}
			break;

		case 1:
			if ( pixel_1_b == false ) {
				ui->frame_1_b->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_1_b->setAutoFillBackground(true);
				pixel_1_b = true;
			}
			break;

		case 2:
			if ( pixel_1_c == false ) {
				ui->frame_1_c->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_1_c->setAutoFillBackground(true);
				pixel_1_c = true;
			}
			break;

		case 3:
			if ( pixel_1_d == false ) {
				ui->frame_1_d->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_1_d->setAutoFillBackground(true);
				pixel_1_d = true;
			}
			break;

		case 4:
			if ( pixel_1_e == false ) {
				ui->frame_1_e->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_1_e->setAutoFillBackground(true);
				pixel_0_e = true;
			}
			break;

		case 5:
			if ( pixel_1_f == false ) {
				ui->frame_1_f->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_1_f->setAutoFillBackground(true);
				pixel_1_f = true;
			}
			break;

		case 6:
			if ( pixel_1_g == false ) {
				ui->frame_1_g->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_1_g->setAutoFillBackground(true);
				pixel_1_g = true;
			}
			break;

		case 7:
			if ( pixel_1_dp == false ) {
				ui->frame_1_dp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_1_dp->setAutoFillBackground(true);
				pixel_1_dp = true;
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
			if ( pixel_2_a == false ) {
				ui->frame_2_a->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_2_a->setAutoFillBackground(true);
				pixel_2_a = true;
			}
			break;

		case 1:
			if ( pixel_2_b == false ) {
				ui->frame_2_b->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_2_b->setAutoFillBackground(true);
				pixel_2_b = true;
			}
			break;

		case 2:
			if ( pixel_2_c == false ) {
				ui->frame_2_c->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_2_c->setAutoFillBackground(true);
				pixel_2_c = true;
			}
			break;

		case 3:
			if ( pixel_2_d == false ) {
				ui->frame_2_d->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_2_d->setAutoFillBackground(true);
				pixel_2_d = true;
			}
			break;

		case 4:
			if ( pixel_2_e == false ) {
				ui->frame_2_e->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_2_e->setAutoFillBackground(true);
				pixel_2_e = true;
			}
			break;

		case 5:
			if ( pixel_2_f == false ) {
				ui->frame_2_f->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_2_f->setAutoFillBackground(true);
				pixel_2_f = true;
			}
			break;

		case 6:
			if ( pixel_2_g == false ) {
				ui->frame_2_g->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_2_g->setAutoFillBackground(true);
				pixel_2_g = true;
			}
			break;

		case 7:
			if ( pixel_2_dp == false ) {
				ui->frame_2_dp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_2_dp->setAutoFillBackground(true);
				pixel_2_dp = true;
			}
			break;

		default:
			ui->label->setText("no Point");
			break;
		}
		break;

	case 3:
		switch (y) {
		case 0:
			if ( pixel_3_a == false ) {
				ui->frame_3_a->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_3_a->setAutoFillBackground(true);
				pixel_3_a = true;
			}
			break;

		case 1:
			if ( pixel_3_b == false ) {
				ui->frame_3_b->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_3_b->setAutoFillBackground(true);
				pixel_3_b = true;
			}
			break;

		case 2:
			if ( pixel_3_c == false ) {
				ui->frame_3_c->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_3_c->setAutoFillBackground(true);
				pixel_3_c = true;
			}
			break;

		case 3:
			if ( pixel_3_d == false ) {
				ui->frame_3_d->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_3_d->setAutoFillBackground(true);
				pixel_3_d = true;
			}
			break;

		case 4:
			if ( pixel_3_e == false ) {
				ui->frame_3_e->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_3_e->setAutoFillBackground(true);
				pixel_3_e = true;
			}
			break;

		case 5:
			if ( pixel_3_f == false ) {
				ui->frame_3_f->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_3_f->setAutoFillBackground(true);
				pixel_3_f = true;
			}
			break;

		case 6:
			if ( pixel_3_g == false ) {
				ui->frame_3_g->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_3_g->setAutoFillBackground(true);
				pixel_3_g = true;
			}
			break;

		case 7:
			if ( pixel_3_dp == false ) {
				ui->frame_3_dp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_3_dp->setAutoFillBackground(true);
				pixel_3_dp = true;
			}
			break;

		default:
			ui->label->setText("no Point");
			break;
		}
		break;

	case 4:
		switch (y) {
		case 0:
			if ( pixel_4_a == false ) {
				ui->frame_4_a->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_4_a->setAutoFillBackground(true);
				pixel_4_a = true;
			}
			break;

		case 1:
			if ( pixel_4_b == false ) {
				ui->frame_4_b->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_4_b->setAutoFillBackground(true);
				pixel_4_b = true;
			}
			break;

		case 2:
			if ( pixel_4_c == false ) {
				ui->frame_4_c->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_4_c->setAutoFillBackground(true);
				pixel_4_c = true;
			}
			break;

		case 3:
			if ( pixel_4_d == false ) {
				ui->frame_4_d->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_4_d->setAutoFillBackground(true);
				pixel_4_d = true;
			}
			break;

		case 4:
			if ( pixel_4_e == false ) {
				ui->frame_4_e->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_4_e->setAutoFillBackground(true);
				pixel_4_e = true;
			}
			break;

		case 5:
			if ( pixel_4_f == false ) {
				ui->frame_4_f->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_4_f->setAutoFillBackground(true);
				pixel_4_f = true;
			}
			break;

		case 6:
			if ( pixel_4_g == false ) {
				ui->frame_4_g->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_4_g->setAutoFillBackground(true);
				pixel_4_g = true;
			}
			break;

		case 7:
			if ( pixel_4_dp == false ) {
				ui->frame_4_dp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_4_dp->setAutoFillBackground(true);
				pixel_4_dp = true;
			}
			break;

		default:
			ui->label->setText("no Point");
			break;
		}
		break;

	case 5:
		switch (y) {
		case 0:
			if ( pixel_5_a == false ) {
				ui->frame_5_a->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_5_a->setAutoFillBackground(true);
				pixel_5_a = true;
			}
			break;

		case 1:
			if ( pixel_5_b == false ) {
				ui->frame_5_b->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_5_b->setAutoFillBackground(true);
				pixel_5_b = true;
			}
			break;

		case 2:
			if ( pixel_5_c == false ) {
				ui->frame_5_c->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_5_c->setAutoFillBackground(true);
				pixel_5_c = true;
			}
			break;

		case 3:
			if ( pixel_5_d == false ) {
				ui->frame_5_d->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_5_d->setAutoFillBackground(true);
				pixel_5_d = true;
			}
			break;

		case 4:
			if ( pixel_5_e == false ) {
				ui->frame_5_e->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_5_e->setAutoFillBackground(true);
				pixel_5_e = true;
			}
			break;

		case 5:
			if ( pixel_5_f == false ) {
				ui->frame_5_f->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_5_f->setAutoFillBackground(true);
				pixel_5_f = true;
			}
			break;

		case 6:
			if ( pixel_5_g == false ) {
				ui->frame_5_g->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_5_g->setAutoFillBackground(true);
				pixel_5_g = true;
			}
			break;

		case 7:
			if ( pixel_5_dp == false ) {
				ui->frame_5_dp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_5_dp->setAutoFillBackground(true);
				pixel_5_dp = true;
			}
			break;

		default:
			ui->label->setText("no Point");
			break;
		}
		break;

	case 6:
		switch (y) {
		case 0:
			if ( pixel_6_a == false ) {
				ui->frame_6_a->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_6_a->setAutoFillBackground(true);
				pixel_6_a = true;
			}
			break;

		case 1:
			if ( pixel_6_b == false ) {
				ui->frame_6_b->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_6_b->setAutoFillBackground(true);
				pixel_6_b = true;
			}
			break;

		case 2:
			if ( pixel_6_c == false ) {
				ui->frame_6_c->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_6_c->setAutoFillBackground(true);
				pixel_6_c = true;
			}
			break;

		case 3:
			if ( pixel_6_d == false ) {
				ui->frame_6_d->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_6_d->setAutoFillBackground(true);
				pixel_6_d = true;
			}
			break;

		case 4:
			if ( pixel_6_e == false ) {
				ui->frame_6_e->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_6_e->setAutoFillBackground(true);
				pixel_6_e = true;
			}
			break;

		case 5:
			if ( pixel_6_f == false ) {
				ui->frame_6_f->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_6_f->setAutoFillBackground(true);
				pixel_6_f = true;
			}
			break;

		case 6:
			if ( pixel_6_g == false ) {
				ui->frame_6_g->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_6_g->setAutoFillBackground(true);
				pixel_6_g = true;
			}
			break;

		case 7:
			if ( pixel_6_dp == false ) {
				ui->frame_6_dp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_6_dp->setAutoFillBackground(true);
				pixel_6_dp = true;
			}
			break;

		default:
			ui->label->setText("no Point");
			break;
		}
		break;

	case 7:
		switch (y) {
		case 0:
			if ( pixel_7_a == false ) {
				ui->frame_7_a->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_7_a->setAutoFillBackground(true);
				pixel_7_a = true;
			}
			break;

		case 1:
			if ( pixel_7_b == false ) {
				ui->frame_7_b->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_7_b->setAutoFillBackground(true);
				pixel_7_b = true;
			}
			break;

		case 2:
			if ( pixel_7_c == false ) {
				ui->frame_7_c->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_7_c->setAutoFillBackground(true);
				pixel_7_c = true;
			}
			break;

		case 3:
			if ( pixel_7_d == false ) {
				ui->frame_7_d->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_7_d->setAutoFillBackground(true);
				pixel_7_d = true;
			}
			break;

		case 4:
			if ( pixel_7_e == false ) {
				ui->frame_7_e->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_7_e->setAutoFillBackground(true);
				pixel_7_e = true;
			}
			break;

		case 5:
			if ( pixel_7_f == false ) {
				ui->frame_7_f->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_7_f->setAutoFillBackground(true);
				pixel_7_f = true;
			}
			break;

		case 6:
			if ( pixel_7_g == false ) {
				ui->frame_7_g->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_7_g->setAutoFillBackground(true);
				pixel_7_g = true;
			}
			break;

		case 7:
			if ( pixel_7_dp == false ) {
				ui->frame_7_dp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_7_dp->setAutoFillBackground(true);
				pixel_7_dp = true;
			}
			break;

		default:
			ui->label->setText("no Point");
			break;
		}
		break;

	case 8:
		switch (y) {
		case 0:
			if ( pixel_8_a == false ) {
				ui->frame_8_a->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_8_a->setAutoFillBackground(true);
				pixel_8_a = true;
			}
			break;

		case 1:
			if ( pixel_8_b == false ) {
				ui->frame_8_b->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_8_b->setAutoFillBackground(true);
				pixel_8_b = true;
			}
			break;

		case 2:
			if ( pixel_8_c == false ) {
				ui->frame_8_c->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_8_c->setAutoFillBackground(true);
				pixel_8_c = true;
			}
			break;

		case 3:
			if ( pixel_8_d == false ) {
				ui->frame_8_d->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_8_d->setAutoFillBackground(true);
				pixel_8_d = true;
			}
			break;

		case 4:
			if ( pixel_8_e == false ) {
				ui->frame_8_e->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_8_e->setAutoFillBackground(true);
				pixel_8_e = true;
			}
			break;

		case 5:
			if ( pixel_8_f == false ) {
				ui->frame_8_f->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_8_f->setAutoFillBackground(true);
				pixel_8_f = true;
			}
			break;

		case 6:
			if ( pixel_8_g == false ) {
				ui->frame_8_g->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_8_g->setAutoFillBackground(true);
				pixel_8_g = true;
			}
			break;

		case 7:
			if ( pixel_8_dp == false ) {
				ui->frame_8_dp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_8_dp->setAutoFillBackground(true);
				pixel_8_dp = true;
			}
			break;

		default:
			ui->label->setText("no Point");
			break;
		}
		break;

	case 9:
		switch (y) {
		case 0:
			if ( pixel_9_a == false ) {
				ui->frame_9_a->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_9_a->setAutoFillBackground(true);
				pixel_9_a = true;
			}
			break;

		case 1:
			if ( pixel_9_b == false ) {
				ui->frame_9_b->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_9_b->setAutoFillBackground(true);
				pixel_9_b = true;
			}
			break;

		case 2:
			if ( pixel_9_c == false ) {
				ui->frame_9_c->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_9_c->setAutoFillBackground(true);
				pixel_9_c = true;
			}
			break;

		case 3:
			if ( pixel_9_d == false ) {
				ui->frame_9_d->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_9_d->setAutoFillBackground(true);
				pixel_9_d = true;
			}
			break;

		case 4:
			if ( pixel_9_e == false ) {
				ui->frame_9_e->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_9_e->setAutoFillBackground(true);
				pixel_9_e = true;
			}
			break;

		case 5:
			if ( pixel_9_f == false ) {
				ui->frame_9_f->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_9_f->setAutoFillBackground(true);
				pixel_9_f = true;
			}
			break;

		case 6:
			if ( pixel_9_g == false ) {
				ui->frame_9_g->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_9_g->setAutoFillBackground(true);
				pixel_9_g = true;
			}
			break;

		case 7:
			if ( pixel_9_dp == false ) {
				ui->frame_9_dp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_9_dp->setAutoFillBackground(true);
				pixel_9_dp = true;
			}
			break;

		default:
			ui->label->setText("no Point");
			break;
		}
		break;

	case 10:
		switch (y) {
		case 0:
			if ( pixel_10_a == false ) {
				ui->frame_10_a->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_10_a->setAutoFillBackground(true);
				pixel_10_a = true;
			}
			break;

		case 1:
			if ( pixel_10_b == false ) {
				ui->frame_10_b->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_10_b->setAutoFillBackground(true);
				pixel_10_b = true;
			}
			break;

		case 2:
			if ( pixel_10_c == false ) {
				ui->frame_10_c->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_10_c->setAutoFillBackground(true);
				pixel_10_c = true;
			}
			break;

		case 3:
			if ( pixel_10_d == false ) {
				ui->frame_10_d->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_10_d->setAutoFillBackground(true);
				pixel_10_d = true;
			}
			break;

		case 4:
			if ( pixel_10_e == false ) {
				ui->frame_10_e->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_10_e->setAutoFillBackground(true);
				pixel_10_e = true;
			}
			break;

		case 5:
			if ( pixel_10_f == false ) {
				ui->frame_10_f->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_10_f->setAutoFillBackground(true);
				pixel_10_f = true;
			}
			break;

		case 6:
			if ( pixel_10_g == false ) {
				ui->frame_10_g->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_10_g->setAutoFillBackground(true);
				pixel_10_g = true;
			}
			break;

		case 7:
			if ( pixel_10_dp == false ) {
				ui->frame_10_dp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_10_dp->setAutoFillBackground(true);
				pixel_10_dp = true;
			}
			break;

		default:
			ui->label->setText("no Point");
			break;
		}
		break;

	case 11:
		switch (y) {
		case 0:
			if ( pixel_11_a == false ) {
				ui->frame_11_a->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_11_a->setAutoFillBackground(true);
				pixel_11_a = true;
			}
			break;

		case 1:
			if ( pixel_11_b == false ) {
				ui->frame_11_b->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_11_b->setAutoFillBackground(true);
				pixel_11_b = true;
			}
			break;

		case 2:
			if ( pixel_11_c == false ) {
				ui->frame_11_c->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_11_c->setAutoFillBackground(true);
				pixel_11_c = true;
			}
			break;

		case 3:
			if ( pixel_11_d == false ) {
				ui->frame_11_d->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_11_d->setAutoFillBackground(true);
				pixel_11_d = true;
			}
			break;

		case 4:
			if ( pixel_11_e == false ) {
				ui->frame_11_e->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_11_e->setAutoFillBackground(true);
				pixel_11_e = true;
			}
			break;

		case 5:
			if ( pixel_11_f == false ) {
				ui->frame_11_f->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_11_f->setAutoFillBackground(true);
				pixel_11_f = true;
			}
			break;

		case 6:
			if ( pixel_11_g == false ) {
				ui->frame_11_g->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_11_g->setAutoFillBackground(true);
				pixel_11_g = true;
			}
			break;

		case 7:
			if ( pixel_11_dp == false ) {
				ui->frame_11_dp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_11_dp->setAutoFillBackground(true);
				pixel_11_dp = true;
			}
			break;

		default:
			ui->label->setText("no Point");
			break;
		}
		break;

	case 12:
		switch (y) {
		case 0:
			if ( pixel_12_a == false ) {
				ui->frame_12_a->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_12_a->setAutoFillBackground(true);
				pixel_12_a = true;
			}
			break;

		case 1:
			if ( pixel_12_b == false ) {
				ui->frame_12_b->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_12_b->setAutoFillBackground(true);
				pixel_12_b = true;
			}
			break;

		case 2:
			if ( pixel_12_c == false ) {
				ui->frame_12_c->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_12_c->setAutoFillBackground(true);
				pixel_12_c = true;
			}
			break;

		case 3:
			if ( pixel_12_d == false ) {
				ui->frame_12_d->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_12_d->setAutoFillBackground(true);
				pixel_12_d = true;
			}
			break;

		case 4:
			if ( pixel_12_e == false ) {
				ui->frame_12_e->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_12_e->setAutoFillBackground(true);
				pixel_12_e = true;
			}
			break;

		case 5:
			if ( pixel_12_f == false ) {
				ui->frame_12_f->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_12_f->setAutoFillBackground(true);
				pixel_12_f = true;
			}
			break;

		case 6:
			if ( pixel_12_g == false ) {
				ui->frame_12_g->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_12_g->setAutoFillBackground(true);
				pixel_12_g = true;
			}
			break;

		case 7:
			if ( pixel_12_dp == false ) {
				ui->frame_12_dp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_12_dp->setAutoFillBackground(true);
				pixel_12_dp = true;
			}
			break;

		default:
			ui->label->setText("no Point");
			break;
		}
		break;

	case 13:
		switch (y) {
		case 0:
			if ( pixel_13_a == false ) {
				ui->frame_13_a->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_13_a->setAutoFillBackground(true);
				pixel_13_a = true;
			}
			break;

		case 1:
			if ( pixel_13_b == false ) {
				ui->frame_13_b->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_13_b->setAutoFillBackground(true);
				pixel_13_b = true;
			}
			break;

		case 2:
			if ( pixel_13_c == false ) {
				ui->frame_13_c->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_13_c->setAutoFillBackground(true);
				pixel_13_c = true;
			}
			break;

		case 3:
			if ( pixel_13_d == false ) {
				ui->frame_13_d->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_13_d->setAutoFillBackground(true);
				pixel_13_d = true;
			}
			break;

		case 4:
			if ( pixel_13_e == false ) {
				ui->frame_13_e->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_13_e->setAutoFillBackground(true);
				pixel_13_e = true;
			}
			break;

		case 5:
			if ( pixel_13_f == false ) {
				ui->frame_13_f->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_13_f->setAutoFillBackground(true);
				pixel_13_f = true;
			}
			break;

		case 6:
			if ( pixel_13_g == false ) {
				ui->frame_13_g->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_13_g->setAutoFillBackground(true);
				pixel_13_g = true;
			}
			break;

		case 7:
			if ( pixel_13_dp == false ) {
				ui->frame_13_dp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_13_dp->setAutoFillBackground(true);
				pixel_13_dp = true;
			}
			break;

		default:
			ui->label->setText("no Point");
			break;
		}
		break;

	case 14:
		switch (y) {
		case 0:
			if ( pixel_14_a == false ) {
				ui->frame_14_a->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_14_a->setAutoFillBackground(true);
				pixel_14_a = true;
			}
			break;

		case 1:
			if ( pixel_14_b == false ) {
				ui->frame_14_b->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_14_b->setAutoFillBackground(true);
				pixel_14_b = true;
			}
			break;

		case 2:
			if ( pixel_14_c == false ) {
				ui->frame_14_c->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_14_c->setAutoFillBackground(true);
				pixel_14_c = true;
			}
			break;

		case 3:
			if ( pixel_14_d == false ) {
				ui->frame_14_d->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_14_d->setAutoFillBackground(true);
				pixel_14_d = true;
			}
			break;

		case 4:
			if ( pixel_14_e == false ) {
				ui->frame_14_e->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_14_e->setAutoFillBackground(true);
				pixel_14_e = true;
			}
			break;

		case 5:
			if ( pixel_14_f == false ) {
				ui->frame_14_f->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_14_f->setAutoFillBackground(true);
				pixel_14_f = true;
			}
			break;

		case 6:
			if ( pixel_14_g == false ) {
				ui->frame_14_g->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_14_g->setAutoFillBackground(true);
				pixel_14_g = true;
			}
			break;

		case 7:
			if ( pixel_14_dp == false ) {
				ui->frame_14_dp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_14_dp->setAutoFillBackground(true);
				pixel_14_dp = true;
			}
			break;

		default:
			ui->label->setText("no Point");
			break;
		}
		break;

	case 15:
		switch (y) {
		case 0:
			if ( pixel_15_a == false ) {
				ui->frame_15_a->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_15_a->setAutoFillBackground(true);
				pixel_15_a = true;
			}
			break;

		case 1:
			if ( pixel_15_b == false ) {
				ui->frame_15_b->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_15_b->setAutoFillBackground(true);
				pixel_15_b = true;
			}
			break;

		case 2:
			if ( pixel_15_c == false ) {
				ui->frame_15_c->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_15_c->setAutoFillBackground(true);
				pixel_15_c = true;
			}
			break;

		case 3:
			if ( pixel_15_d == false ) {
				ui->frame_15_d->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_15_d->setAutoFillBackground(true);
				pixel_15_d = true;
			}
			break;

		case 4:
			if ( pixel_15_e == false ) {
				ui->frame_15_e->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_15_e->setAutoFillBackground(true);
				pixel_15_e = true;
			}
			break;

		case 5:
			if ( pixel_15_f == false ) {
				ui->frame_15_f->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_15_f->setAutoFillBackground(true);
				pixel_15_f = true;
			}
			break;

		case 6:
			if ( pixel_15_g == false ) {
				ui->frame_15_g->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_15_g->setAutoFillBackground(true);
				pixel_15_g = true;
			}
			break;

		case 7:
			if ( pixel_15_dp == false ) {
				ui->frame_15_dp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
				ui->frame_15_dp->setAutoFillBackground(true);
				pixel_15_dp = true;
			}
			break;

		default:
			ui->label->setText("no Point");
			break;
		}
		break;

	default:
		ui->label->setText("no Point");
		break;
	}
}

void Display::clearPoint(uint8_t x, uint8_t y) {
	if (x > 15) {
		ui->label->setText("no Point");
		return;
	}

	if (y > 7) {
		ui->label->setText("no Point");
		return;
	}

	switch (x) {
	case 0:
		switch (y) {
		case 0:
			if ( pixel_0_a == true ) {
				ui->frame_0_a->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_0_a->setAutoFillBackground(true);
				pixel_0_a = false;
			}
			break;

		case 1:
			if ( pixel_0_b == true ) {
				ui->frame_0_b->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_0_b->setAutoFillBackground(true);
				pixel_0_b = false;
			}
			break;

		case 2:
			if ( pixel_0_c == true ) {
				ui->frame_0_c->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_0_c->setAutoFillBackground(true);
				pixel_0_c = false;
			}
			break;

		case 3:
			if ( pixel_0_d == true ) {
				ui->frame_0_d->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_0_d->setAutoFillBackground(true);
				pixel_0_d = false;
			}
			break;

		case 4:
			if ( pixel_0_e == true ) {
				ui->frame_0_e->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_0_e->setAutoFillBackground(true);
				pixel_0_e = false;
			}
			break;

		case 5:
			if ( pixel_0_f == true ) {
				ui->frame_0_f->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_0_f->setAutoFillBackground(true);
				pixel_0_f = false;
			}
			break;

		case 6:
			if ( pixel_0_g == true ) {
				ui->frame_0_g->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_0_g->setAutoFillBackground(true);
				pixel_0_g = false;
			}
			break;

		case 7:
			if ( pixel_0_dp == true ) {
				ui->frame_0_dp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_0_dp->setAutoFillBackground(true);
				pixel_0_dp = false;
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
			if ( pixel_1_a == true ) {
				ui->frame_1_a->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_1_a->setAutoFillBackground(true);
				pixel_1_a = false;
			}
			break;

		case 1:
			if ( pixel_1_b == true ) {
				ui->frame_1_b->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_1_b->setAutoFillBackground(true);
				pixel_1_b = false;
			}
			break;

		case 2:
			if ( pixel_1_c == true ) {
				ui->frame_1_c->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_1_c->setAutoFillBackground(true);
				pixel_1_c = false;
			}
			break;

		case 3:
			if ( pixel_1_d == true ) {
				ui->frame_1_d->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_1_d->setAutoFillBackground(true);
				pixel_1_d = false;
			}
			break;

		case 4:
			if ( pixel_1_e == true ) {
				ui->frame_1_e->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_1_e->setAutoFillBackground(true);
				pixel_0_e = false;
			}
			break;

		case 5:
			if ( pixel_1_f == true ) {
				ui->frame_1_f->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_1_f->setAutoFillBackground(true);
				pixel_1_f = false;
			}
			break;

		case 6:
			if ( pixel_1_g == true ) {
				ui->frame_1_g->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_1_g->setAutoFillBackground(true);
				pixel_1_g = false;
			}
			break;

		case 7:
			if ( pixel_1_dp == true ) {
				ui->frame_1_dp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_1_dp->setAutoFillBackground(true);
				pixel_1_dp = false;
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
			if ( pixel_2_a == true ) {
				ui->frame_2_a->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_2_a->setAutoFillBackground(true);
				pixel_2_a = false;
			}
			break;

		case 1:
			if ( pixel_2_b == true ) {
				ui->frame_2_b->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_2_b->setAutoFillBackground(true);
				pixel_2_b = false;
			}
			break;

		case 2:
			if ( pixel_2_c == true ) {
				ui->frame_2_c->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_2_c->setAutoFillBackground(true);
				pixel_2_c = false;
			}
			break;

		case 3:
			if ( pixel_2_d == true ) {
				ui->frame_2_d->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_2_d->setAutoFillBackground(true);
				pixel_2_d = false;
			}
			break;

		case 4:
			if ( pixel_2_e == true ) {
				ui->frame_2_e->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_2_e->setAutoFillBackground(true);
				pixel_2_e = false;
			}
			break;

		case 5:
			if ( pixel_2_f == true ) {
				ui->frame_2_f->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_2_f->setAutoFillBackground(true);
				pixel_2_f = false;
			}
			break;

		case 6:
			if ( pixel_2_g == true ) {
				ui->frame_2_g->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_2_g->setAutoFillBackground(true);
				pixel_2_g = false;
			}
			break;

		case 7:
			if ( pixel_2_dp == true ) {
				ui->frame_2_dp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_2_dp->setAutoFillBackground(true);
				pixel_2_dp = false;
			}
			break;

		default:
			ui->label->setText("no Point");
			break;
		}
		break;

	case 3:
		switch (y) {
		case 0:
			if ( pixel_3_a == true ) {
				ui->frame_3_a->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_3_a->setAutoFillBackground(true);
				pixel_3_a = false;
			}
			break;

		case 1:
			if ( pixel_3_b == true ) {
				ui->frame_3_b->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_3_b->setAutoFillBackground(true);
				pixel_3_b = false;
			}
			break;

		case 2:
			if ( pixel_3_c == true ) {
				ui->frame_3_c->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_3_c->setAutoFillBackground(true);
				pixel_3_c = false;
			}
			break;

		case 3:
			if ( pixel_3_d == true ) {
				ui->frame_3_d->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_3_d->setAutoFillBackground(true);
				pixel_3_d = false;
			}
			break;

		case 4:
			if ( pixel_3_e == true ) {
				ui->frame_3_e->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_3_e->setAutoFillBackground(true);
				pixel_3_e = false;
			}
			break;

		case 5:
			if ( pixel_3_f == true ) {
				ui->frame_3_f->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_3_f->setAutoFillBackground(true);
				pixel_3_f = false;
			}
			break;

		case 6:
			if ( pixel_3_g == true ) {
				ui->frame_3_g->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_3_g->setAutoFillBackground(true);
				pixel_3_g = false;
			}
			break;

		case 7:
			if ( pixel_3_dp == true ) {
				ui->frame_3_dp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_3_dp->setAutoFillBackground(true);
				pixel_3_dp = false;
			}
			break;

		default:
			ui->label->setText("no Point");
			break;
		}
		break;

	case 4:
		switch (y) {
		case 0:
			if ( pixel_4_a == true ) {
				ui->frame_4_a->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_4_a->setAutoFillBackground(true);
				pixel_4_a = false;
			}
			break;

		case 1:
			if ( pixel_4_b == true ) {
				ui->frame_4_b->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_4_b->setAutoFillBackground(true);
				pixel_4_b = false;
			}
			break;

		case 2:
			if ( pixel_4_c == true ) {
				ui->frame_4_c->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_4_c->setAutoFillBackground(true);
				pixel_4_c = false;
			}
			break;

		case 3:
			if ( pixel_4_d == true ) {
				ui->frame_4_d->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_4_d->setAutoFillBackground(true);
				pixel_4_d = false;
			}
			break;

		case 4:
			if ( pixel_4_e == true ) {
				ui->frame_4_e->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_4_e->setAutoFillBackground(true);
				pixel_4_e = false;
			}
			break;

		case 5:
			if ( pixel_4_f == true ) {
				ui->frame_4_f->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_4_f->setAutoFillBackground(true);
				pixel_4_f = false;
			}
			break;

		case 6:
			if ( pixel_4_g == true ) {
				ui->frame_4_g->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_4_g->setAutoFillBackground(true);
				pixel_4_g = false;
			}
			break;

		case 7:
			if ( pixel_4_dp == true ) {
				ui->frame_4_dp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_4_dp->setAutoFillBackground(true);
				pixel_4_dp = false;
			}
			break;

		default:
			ui->label->setText("no Point");
			break;
		}
		break;

	case 5:
		switch (y) {
		case 0:
			if ( pixel_5_a == true ) {
				ui->frame_5_a->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_5_a->setAutoFillBackground(true);
				pixel_5_a = false;
			}
			break;

		case 1:
			if ( pixel_5_b == true ) {
				ui->frame_5_b->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_5_b->setAutoFillBackground(true);
				pixel_5_b = false;
			}
			break;

		case 2:
			if ( pixel_5_c == true ) {
				ui->frame_5_c->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_5_c->setAutoFillBackground(true);
				pixel_5_c = false;
			}
			break;

		case 3:
			if ( pixel_5_d == true ) {
				ui->frame_5_d->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_5_d->setAutoFillBackground(true);
				pixel_5_d = false;
			}
			break;

		case 4:
			if ( pixel_5_e == true ) {
				ui->frame_5_e->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_5_e->setAutoFillBackground(true);
				pixel_5_e = false;
			}
			break;

		case 5:
			if ( pixel_5_f == true ) {
				ui->frame_5_f->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_5_f->setAutoFillBackground(true);
				pixel_5_f = false;
			}
			break;

		case 6:
			if ( pixel_5_g == true ) {
				ui->frame_5_g->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_5_g->setAutoFillBackground(true);
				pixel_5_g = false;
			}
			break;

		case 7:
			if ( pixel_5_dp == true ) {
				ui->frame_5_dp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_5_dp->setAutoFillBackground(true);
				pixel_5_dp = false;
			}
			break;

		default:
			ui->label->setText("no Point");
			break;
		}
		break;

	case 6:
		switch (y) {
		case 0:
			if ( pixel_6_a == true ) {
				ui->frame_6_a->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_6_a->setAutoFillBackground(true);
				pixel_6_a = false;
			}
			break;

		case 1:
			if ( pixel_6_b == true ) {
				ui->frame_6_b->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_6_b->setAutoFillBackground(true);
				pixel_6_b = false;
			}
			break;

		case 2:
			if ( pixel_6_c == true ) {
				ui->frame_6_c->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_6_c->setAutoFillBackground(true);
				pixel_6_c = false;
			}
			break;

		case 3:
			if ( pixel_6_d == true ) {
				ui->frame_6_d->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_6_d->setAutoFillBackground(true);
				pixel_6_d = false;
			}
			break;

		case 4:
			if ( pixel_6_e == true ) {
				ui->frame_6_e->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_6_e->setAutoFillBackground(true);
				pixel_6_e = false;
			}
			break;

		case 5:
			if ( pixel_6_f == true ) {
				ui->frame_6_f->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_6_f->setAutoFillBackground(true);
				pixel_6_f = false;
			}
			break;

		case 6:
			if ( pixel_6_g == true ) {
				ui->frame_6_g->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_6_g->setAutoFillBackground(true);
				pixel_6_g = false;
			}
			break;

		case 7:
			if ( pixel_6_dp == true ) {
				ui->frame_6_dp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_6_dp->setAutoFillBackground(true);
				pixel_6_dp = false;
			}
			break;

		default:
			ui->label->setText("no Point");
			break;
		}
		break;

	case 7:
		switch (y) {
		case 0:
			if ( pixel_7_a == true ) {
				ui->frame_7_a->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_7_a->setAutoFillBackground(true);
				pixel_7_a = false;
			}
			break;

		case 1:
			if ( pixel_7_b == true ) {
				ui->frame_7_b->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_7_b->setAutoFillBackground(true);
				pixel_7_b = false;
			}
			break;

		case 2:
			if ( pixel_7_c == true ) {
				ui->frame_7_c->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_7_c->setAutoFillBackground(true);
				pixel_7_c = false;
			}
			break;

		case 3:
			if ( pixel_7_d == true ) {
				ui->frame_7_d->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_7_d->setAutoFillBackground(true);
				pixel_7_d = false;
			}
			break;

		case 4:
			if ( pixel_7_e == true ) {
				ui->frame_7_e->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_7_e->setAutoFillBackground(true);
				pixel_7_e = false;
			}
			break;

		case 5:
			if ( pixel_7_f == true ) {
				ui->frame_7_f->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_7_f->setAutoFillBackground(true);
				pixel_7_f = false;
			}
			break;

		case 6:
			if ( pixel_7_g == true ) {
				ui->frame_7_g->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_7_g->setAutoFillBackground(true);
				pixel_7_g = false;
			}
			break;

		case 7:
			if ( pixel_7_dp == true ) {
				ui->frame_7_dp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_7_dp->setAutoFillBackground(true);
				pixel_7_dp = false;
			}
			break;

		default:
			ui->label->setText("no Point");
			break;
		}
		break;

	case 8:
		switch (y) {
		case 0:
			if ( pixel_8_a == true ) {
				ui->frame_8_a->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_8_a->setAutoFillBackground(true);
				pixel_8_a = false;
			}
			break;

		case 1:
			if ( pixel_8_b == true ) {
				ui->frame_8_b->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_8_b->setAutoFillBackground(true);
				pixel_8_b = false;
			}
			break;

		case 2:
			if ( pixel_8_c == true ) {
				ui->frame_8_c->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_8_c->setAutoFillBackground(true);
				pixel_8_c = false;
			}
			break;

		case 3:
			if ( pixel_8_d == true ) {
				ui->frame_8_d->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_8_d->setAutoFillBackground(true);
				pixel_8_d = false;
			}
			break;

		case 4:
			if ( pixel_8_e == true ) {
				ui->frame_8_e->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_8_e->setAutoFillBackground(true);
				pixel_8_e = false;
			}
			break;

		case 5:
			if ( pixel_8_f == true ) {
				ui->frame_8_f->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_8_f->setAutoFillBackground(true);
				pixel_8_f = false;
			}
			break;

		case 6:
			if ( pixel_8_g == true ) {
				ui->frame_8_g->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_8_g->setAutoFillBackground(true);
				pixel_8_g = false;
			}
			break;

		case 7:
			if ( pixel_8_dp == true ) {
				ui->frame_8_dp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_8_dp->setAutoFillBackground(true);
				pixel_8_dp = false;
			}
			break;

		default:
			ui->label->setText("no Point");
			break;
		}
		break;

	case 9:
		switch (y) {
		case 0:
			if ( pixel_9_a == true ) {
				ui->frame_9_a->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_9_a->setAutoFillBackground(true);
				pixel_9_a = false;
			}
			break;

		case 1:
			if ( pixel_9_b == true ) {
				ui->frame_9_b->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_9_b->setAutoFillBackground(true);
				pixel_9_b = false;
			}
			break;

		case 2:
			if ( pixel_9_c == true ) {
				ui->frame_9_c->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_9_c->setAutoFillBackground(true);
				pixel_9_c = false;
			}
			break;

		case 3:
			if ( pixel_9_d == true ) {
				ui->frame_9_d->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_9_d->setAutoFillBackground(true);
				pixel_9_d = false;
			}
			break;

		case 4:
			if ( pixel_9_e == true ) {
				ui->frame_9_e->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_9_e->setAutoFillBackground(true);
				pixel_9_e = false;
			}
			break;

		case 5:
			if ( pixel_9_f == true ) {
				ui->frame_9_f->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_9_f->setAutoFillBackground(true);
				pixel_9_f = false;
			}
			break;

		case 6:
			if ( pixel_9_g == true ) {
				ui->frame_9_g->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_9_g->setAutoFillBackground(true);
				pixel_9_g = false;
			}
			break;

		case 7:
			if ( pixel_9_dp == true ) {
				ui->frame_9_dp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_9_dp->setAutoFillBackground(true);
				pixel_9_dp = false;
			}
			break;

		default:
			ui->label->setText("no Point");
			break;
		}
		break;

	case 10:
		switch (y) {
		case 0:
			if ( pixel_10_a == true ) {
				ui->frame_10_a->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_10_a->setAutoFillBackground(true);
				pixel_10_a = false;
			}
			break;

		case 1:
			if ( pixel_10_b == true ) {
				ui->frame_10_b->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_10_b->setAutoFillBackground(true);
				pixel_10_b = false;
			}
			break;

		case 2:
			if ( pixel_10_c == true ) {
				ui->frame_10_c->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_10_c->setAutoFillBackground(true);
				pixel_10_c = false;
			}
			break;

		case 3:
			if ( pixel_10_d == true ) {
				ui->frame_10_d->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_10_d->setAutoFillBackground(true);
				pixel_10_d = false;
			}
			break;

		case 4:
			if ( pixel_10_e == true ) {
				ui->frame_10_e->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_10_e->setAutoFillBackground(true);
				pixel_10_e = false;
			}
			break;

		case 5:
			if ( pixel_10_f == true ) {
				ui->frame_10_f->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_10_f->setAutoFillBackground(true);
				pixel_10_f = false;
			}
			break;

		case 6:
			if ( pixel_10_g == true ) {
				ui->frame_10_g->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_10_g->setAutoFillBackground(true);
				pixel_10_g = false;
			}
			break;

		case 7:
			if ( pixel_10_dp == true ) {
				ui->frame_10_dp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_10_dp->setAutoFillBackground(true);
				pixel_10_dp = false;
			}
			break;

		default:
			ui->label->setText("no Point");
			break;
		}
		break;

	case 11:
		switch (y) {
		case 0:
			if ( pixel_11_a == true ) {
				ui->frame_11_a->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_11_a->setAutoFillBackground(true);
				pixel_11_a = false;
			}
			break;

		case 1:
			if ( pixel_11_b == true ) {
				ui->frame_11_b->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_11_b->setAutoFillBackground(true);
				pixel_11_b = false;
			}
			break;

		case 2:
			if ( pixel_11_c == true ) {
				ui->frame_11_c->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_11_c->setAutoFillBackground(true);
				pixel_11_c = false;
			}
			break;

		case 3:
			if ( pixel_11_d == true ) {
				ui->frame_11_d->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_11_d->setAutoFillBackground(true);
				pixel_11_d = false;
			}
			break;

		case 4:
			if ( pixel_11_e == true ) {
				ui->frame_11_e->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_11_e->setAutoFillBackground(true);
				pixel_11_e = false;
			}
			break;

		case 5:
			if ( pixel_11_f == true ) {
				ui->frame_11_f->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_11_f->setAutoFillBackground(true);
				pixel_11_f = false;
			}
			break;

		case 6:
			if ( pixel_11_g == true ) {
				ui->frame_11_g->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_11_g->setAutoFillBackground(true);
				pixel_11_g = false;
			}
			break;

		case 7:
			if ( pixel_11_dp == true ) {
				ui->frame_11_dp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_11_dp->setAutoFillBackground(true);
				pixel_11_dp = false;
			}
			break;

		default:
			ui->label->setText("no Point");
			break;
		}
		break;

	case 12:
		switch (y) {
		case 0:
			if ( pixel_12_a == true ) {
				ui->frame_12_a->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_12_a->setAutoFillBackground(true);
				pixel_12_a = false;
			}
			break;

		case 1:
			if ( pixel_12_b == true ) {
				ui->frame_12_b->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_12_b->setAutoFillBackground(true);
				pixel_12_b = false;
			}
			break;

		case 2:
			if ( pixel_12_c == true ) {
				ui->frame_12_c->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_12_c->setAutoFillBackground(true);
				pixel_12_c = false;
			}
			break;

		case 3:
			if ( pixel_12_d == true ) {
				ui->frame_12_d->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_12_d->setAutoFillBackground(true);
				pixel_12_d = false;
			}
			break;

		case 4:
			if ( pixel_12_e == true ) {
				ui->frame_12_e->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_12_e->setAutoFillBackground(true);
				pixel_12_e = false;
			}
			break;

		case 5:
			if ( pixel_12_f == true ) {
				ui->frame_12_f->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_12_f->setAutoFillBackground(true);
				pixel_12_f = false;
			}
			break;

		case 6:
			if ( pixel_12_g == true ) {
				ui->frame_12_g->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_12_g->setAutoFillBackground(true);
				pixel_12_g = false;
			}
			break;

		case 7:
			if ( pixel_12_dp == true ) {
				ui->frame_12_dp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_12_dp->setAutoFillBackground(true);
				pixel_12_dp = false;
			}
			break;

		default:
			ui->label->setText("no Point");
			break;
		}
		break;

	case 13:
		switch (y) {
		case 0:
			if ( pixel_13_a == true ) {
				ui->frame_13_a->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_13_a->setAutoFillBackground(true);
				pixel_13_a = false;
			}
			break;

		case 1:
			if ( pixel_13_b == true ) {
				ui->frame_13_b->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_13_b->setAutoFillBackground(true);
				pixel_13_b = false;
			}
			break;

		case 2:
			if ( pixel_13_c == true ) {
				ui->frame_13_c->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_13_c->setAutoFillBackground(true);
				pixel_13_c = false;
			}
			break;

		case 3:
			if ( pixel_13_d == true ) {
				ui->frame_13_d->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_13_d->setAutoFillBackground(true);
				pixel_13_d = false;
			}
			break;

		case 4:
			if ( pixel_13_e == true ) {
				ui->frame_13_e->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_13_e->setAutoFillBackground(true);
				pixel_13_e = false;
			}
			break;

		case 5:
			if ( pixel_13_f == true ) {
				ui->frame_13_f->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_13_f->setAutoFillBackground(true);
				pixel_13_f = false;
			}
			break;

		case 6:
			if ( pixel_13_g == true ) {
				ui->frame_13_g->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_13_g->setAutoFillBackground(true);
				pixel_13_g = false;
			}
			break;

		case 7:
			if ( pixel_13_dp == true ) {
				ui->frame_13_dp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_13_dp->setAutoFillBackground(true);
				pixel_13_dp = false;
			}
			break;

		default:
			ui->label->setText("no Point");
			break;
		}
		break;

	case 14:
		switch (y) {
		case 0:
			if ( pixel_14_a == true ) {
				ui->frame_14_a->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_14_a->setAutoFillBackground(true);
				pixel_14_a = false;
			}
			break;

		case 1:
			if ( pixel_14_b == true ) {
				ui->frame_14_b->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_14_b->setAutoFillBackground(true);
				pixel_14_b = false;
			}
			break;

		case 2:
			if ( pixel_14_c == true ) {
				ui->frame_14_c->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_14_c->setAutoFillBackground(true);
				pixel_14_c = false;
			}
			break;

		case 3:
			if ( pixel_14_d == true ) {
				ui->frame_14_d->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_14_d->setAutoFillBackground(true);
				pixel_14_d = false;
			}
			break;

		case 4:
			if ( pixel_14_e == true ) {
				ui->frame_14_e->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_14_e->setAutoFillBackground(true);
				pixel_14_e = false;
			}
			break;

		case 5:
			if ( pixel_14_f == true ) {
				ui->frame_14_f->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_14_f->setAutoFillBackground(true);
				pixel_14_f = false;
			}
			break;

		case 6:
			if ( pixel_14_g == true ) {
				ui->frame_14_g->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_14_g->setAutoFillBackground(true);
				pixel_14_g = false;
			}
			break;

		case 7:
			if ( pixel_14_dp == true ) {
				ui->frame_14_dp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_14_dp->setAutoFillBackground(true);
				pixel_14_dp = false;
			}
			break;

		default:
			ui->label->setText("no Point");
			break;
		}
		break;

	case 15:
		switch (y) {
		case 0:
			if ( pixel_15_a == true ) {
				ui->frame_15_a->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_15_a->setAutoFillBackground(true);
				pixel_15_a = false;
			}
			break;

		case 1:
			if ( pixel_15_b == true ) {
				ui->frame_15_b->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_15_b->setAutoFillBackground(true);
				pixel_15_b = false;
			}
			break;

		case 2:
			if ( pixel_15_c == true ) {
				ui->frame_15_c->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_15_c->setAutoFillBackground(true);
				pixel_15_c = false;
			}
			break;

		case 3:
			if ( pixel_15_d == true ) {
				ui->frame_15_d->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_15_d->setAutoFillBackground(true);
				pixel_15_d = false;
			}
			break;

		case 4:
			if ( pixel_15_e == true ) {
				ui->frame_15_e->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_15_e->setAutoFillBackground(true);
				pixel_15_e = false;
			}
			break;

		case 5:
			if ( pixel_15_f == true ) {
				ui->frame_15_f->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_15_f->setAutoFillBackground(true);
				pixel_15_f = false;
			}
			break;

		case 6:
			if ( pixel_15_g == true ) {
				ui->frame_15_g->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_15_g->setAutoFillBackground(true);
				pixel_15_g = false;
			}
			break;

		case 7:
			if ( pixel_15_dp == true ) {
				ui->frame_15_dp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
				ui->frame_15_dp->setAutoFillBackground(true);
				pixel_15_dp = false;
			}
			break;

		default:
			ui->label->setText("no Point");
			break;
		}
		break;

	default:
		ui->label->setText("no Point");
		break;
	}
}

void Display::setPointAll() {
	for (uint8_t x = 0; x < 16; x += 1) {
		for (uint8_t y = 0; y < 8; y += 1) {
			setPoint(x, y);
		}
	}
}

void Display::clearPointAll() {
	for (uint8_t x = 0; x < 16; x += 1) {
		for (uint8_t y = 0; y < 8; y += 1) {
			clearPoint(x, y);
		}
	}
}

void Display::DisplayDigit()
{
	uint8_t andOperator = 1;

	for (uint8_t i = 0; i < 16; i += 1) {
		for (uint8_t j = 0; j < 8; j += 1) {
			switch (dispBuffer[i] & andOperator) {
			case 0:
				clearPoint(i, j);
				break;

			case 1:
			case 2:
			case 4:
			case 8:
			case 16:
			case 32:
			case 64:
			case 128:
				setPoint(i, j);
				break;

			default:
				ui->label->setText("Buffer");
				break;
			}

			andOperator *= 2;
		}

		andOperator = 1;
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