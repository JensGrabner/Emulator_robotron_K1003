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

/*
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
*/

void Display::setPoint_new(uint8_t x_all) {
	switch (x_all) {

	case 0:
		if ( pixel_0_f == false ) {
			ui->frame_0_f->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_0_f->setAutoFillBackground(true);
			pixel_0_f = true;
		}
		break;

	case 1:
		if ( pixel_0_e == false ) {
			ui->frame_0_e->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_0_e->setAutoFillBackground(true);
			pixel_0_e = true;
		}
		break;

	case 2:
		if ( pixel_0_a == false ) {
			ui->frame_0_a->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_0_a->setAutoFillBackground(true);
			pixel_0_a = true;
		}
		break;

	case 3:
		if ( pixel_0_g == false ) {
			ui->frame_0_g->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_0_g->setAutoFillBackground(true);
			pixel_0_g = true;
		}
		break;

	case 4:
		if ( pixel_0_d == false ) {
			ui->frame_0_d->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_0_d->setAutoFillBackground(true);
			pixel_0_d = true;
		}
		break;

	case 5:
		if ( pixel_0_dp == false ) {
			ui->frame_0_dp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_0_dp->setAutoFillBackground(true);
			pixel_0_dp = true;
		}
		break;

	case 6:
		if ( pixel_0_b == false ) {
			ui->frame_0_b->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_0_b->setAutoFillBackground(true);
			pixel_0_b = true;
		}
		break;

	case 7:
		if ( pixel_0_c == false ) {
			ui->frame_0_c->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_0_c->setAutoFillBackground(true);
			pixel_0_c = true;
		}
		break;

	case 8:
		if ( pixel_0_aa == false ) {
			ui->frame_0_aa->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_0_aa->setAutoFillBackground(true);
			pixel_0_aa = true;
		}
		break;

	case 9:
		if ( pixel_0_gg == false ) {
			ui->frame_0_gg->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_0_gg->setAutoFillBackground(true);
			pixel_0_gg = true;
		}
		break;

	case 10:
		if ( pixel_0_dd == false ) {
			ui->frame_0_dd->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_0_dd->setAutoFillBackground(true);
			pixel_0_dd = true;
		}
		break;

	case 11:
		if ( pixel_0_pp == false ) {
			ui->frame_0_pp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_0_pp->setAutoFillBackground(true);
			pixel_0_pp = true;
		}
		break;

	case 12:
		if ( pixel_1_f == false ) {
			ui->frame_1_f->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_1_f->setAutoFillBackground(true);
			pixel_1_f = true;
		}
		break;

	case 13:
		if ( pixel_1_e == false ) {
			ui->frame_1_e->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_1_e->setAutoFillBackground(true);
			pixel_1_e = true;
		}
		break;

	case 14:
		if ( pixel_1_a == false ) {
			ui->frame_1_a->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_1_a->setAutoFillBackground(true);
			pixel_1_a = true;
		}
		break;

	case 15:
		if ( pixel_1_g == false ) {
			ui->frame_1_g->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_1_g->setAutoFillBackground(true);
			pixel_1_g = true;
		}
		break;

	case 16:
		if ( pixel_1_d == false ) {
			ui->frame_1_d->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_1_d->setAutoFillBackground(true);
			pixel_1_d = true;
		}
		break;

	case 17:
		if ( pixel_1_dp == false ) {
			ui->frame_1_dp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_1_dp->setAutoFillBackground(true);
			pixel_1_dp = true;
		}
		break;

	case 18:
		if ( pixel_1_b == false ) {
			ui->frame_1_b->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_1_b->setAutoFillBackground(true);
			pixel_1_b = true;
		}
		break;

	case 19:
		if ( pixel_1_c == false ) {
			ui->frame_1_c->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_1_c->setAutoFillBackground(true);
			pixel_1_c = true;
		}
		break;

	case 20:
		if ( pixel_1_aa == false ) {
			ui->frame_1_aa->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_1_aa->setAutoFillBackground(true);
			pixel_1_aa = true;
		}
		break;

	case 21:
		if ( pixel_1_gg == false ) {
			ui->frame_1_gg->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_1_gg->setAutoFillBackground(true);
			pixel_1_gg = true;
		}
		break;

	case 22:
		if ( pixel_1_dd == false ) {
			ui->frame_1_dd->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_1_dd->setAutoFillBackground(true);
			pixel_1_dd = true;
		}
		break;

	case 23:
		if ( pixel_1_pp == false ) {
			ui->frame_1_pp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_1_pp->setAutoFillBackground(true);
			pixel_1_pp = true;
		}
		break;

	case 24:
		if ( pixel_2_f == false ) {
			ui->frame_2_f->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_2_f->setAutoFillBackground(true);
			pixel_2_f = true;
		}
		break;

	case 25:
		if ( pixel_2_e == false ) {
			ui->frame_2_e->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_2_e->setAutoFillBackground(true);
			pixel_2_e = true;
		}
		break;

	case 26:
		if ( pixel_2_a == false ) {
			ui->frame_2_a->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_2_a->setAutoFillBackground(true);
			pixel_2_a = true;
		}
		break;

	case 27:
		if ( pixel_2_g == false ) {
			ui->frame_2_g->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_2_g->setAutoFillBackground(true);
			pixel_2_g = true;
		}
		break;

	case 28:
		if ( pixel_2_d == false ) {
			ui->frame_2_d->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_2_d->setAutoFillBackground(true);
			pixel_2_d = true;
		}
		break;

	case 29:
		if ( pixel_2_dp == false ) {
			ui->frame_2_dp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_2_dp->setAutoFillBackground(true);
			pixel_2_dp = true;
		}
		break;

	case 30:
		if ( pixel_2_b == false ) {
			ui->frame_2_b->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_2_b->setAutoFillBackground(true);
			pixel_2_b = true;
		}
		break;

	case 31:
		if ( pixel_2_c == false ) {
			ui->frame_2_c->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_2_c->setAutoFillBackground(true);
			pixel_2_c = true;
		}
		break;

	case 32:
		if ( pixel_2_aa == false ) {
			ui->frame_2_aa->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_2_aa->setAutoFillBackground(true);
			pixel_2_aa = true;
		}
		break;

	case 33:
		if ( pixel_2_gg == false ) {
			ui->frame_2_gg->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_2_gg->setAutoFillBackground(true);
			pixel_2_gg = true;
		}
		break;

	case 34:
		if ( pixel_2_dd == false ) {
			ui->frame_2_dd->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_2_dd->setAutoFillBackground(true);
			pixel_2_dd = true;
		}
		break;

	case 35:
		if ( pixel_2_pp == false ) {
			ui->frame_2_pp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_2_pp->setAutoFillBackground(true);
			pixel_2_pp = true;
		}
		break;

	case 36:
		if ( pixel_3_f == false ) {
			ui->frame_3_f->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_3_f->setAutoFillBackground(true);
			pixel_3_f = true;
		}
		break;

	case 37:
		if ( pixel_3_e == false ) {
			ui->frame_3_e->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_3_e->setAutoFillBackground(true);
			pixel_3_e = true;
		}
		break;

	case 38:
		if ( pixel_3_a == false ) {
			ui->frame_3_a->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_3_a->setAutoFillBackground(true);
			pixel_3_a = true;
		}
		break;

	case 39:
		if ( pixel_3_g == false ) {
			ui->frame_3_g->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_3_g->setAutoFillBackground(true);
			pixel_3_g = true;
		}
		break;

	case 40:
		if ( pixel_3_d == false ) {
			ui->frame_3_d->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_3_d->setAutoFillBackground(true);
			pixel_3_d = true;
		}
		break;

	case 41:
		if ( pixel_3_dp == false ) {
			ui->frame_3_dp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_3_dp->setAutoFillBackground(true);
			pixel_3_dp = true;
		}
		break;

	case 42:
		if ( pixel_3_b == false ) {
			ui->frame_3_b->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_3_b->setAutoFillBackground(true);
			pixel_3_b = true;
		}
		break;

	case 43:
		if ( pixel_3_c == false ) {
			ui->frame_3_c->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_3_c->setAutoFillBackground(true);
			pixel_3_c = true;
		}
		break;

	case 44:
		if ( pixel_3_aa == false ) {
			ui->frame_3_aa->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_3_aa->setAutoFillBackground(true);
			pixel_3_aa = true;
		}
		break;

	case 45:
		if ( pixel_3_gg == false ) {
			ui->frame_3_gg->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_3_gg->setAutoFillBackground(true);
			pixel_3_gg = true;
		}
		break;

	case 46:
		if ( pixel_3_dd == false ) {
			ui->frame_3_dd->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_3_dd->setAutoFillBackground(true);
			pixel_3_dd = true;
		}
		break;

	case 47:
		if ( pixel_3_pp == false ) {
			ui->frame_3_pp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_3_pp->setAutoFillBackground(true);
			pixel_3_pp = true;
		}
		break;

	case 48:
		if ( pixel_4_f == false ) {
			ui->frame_4_f->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_4_f->setAutoFillBackground(true);
			pixel_4_f = true;
		}
		break;

	case 49:
		if ( pixel_4_e == false ) {
			ui->frame_4_e->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_4_e->setAutoFillBackground(true);
			pixel_4_e = true;
		}
		break;

	case 50:
		if ( pixel_4_a == false ) {
			ui->frame_4_a->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_4_a->setAutoFillBackground(true);
			pixel_4_a = true;
		}
		break;

	case 51:
		if ( pixel_4_g == false ) {
			ui->frame_4_g->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_4_g->setAutoFillBackground(true);
			pixel_4_g = true;
		}
		break;

	case 52:
		if ( pixel_4_d == false ) {
			ui->frame_4_d->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_4_d->setAutoFillBackground(true);
			pixel_4_d = true;
		}
		break;

	case 53:
		if ( pixel_4_dp == false ) {
			ui->frame_4_dp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_4_dp->setAutoFillBackground(true);
			pixel_4_dp = true;
		}
		break;

	case 54:
		if ( pixel_4_b == false ) {
			ui->frame_4_b->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_4_b->setAutoFillBackground(true);
			pixel_4_b = true;
		}
		break;

	case 55:
		if ( pixel_4_c == false ) {
			ui->frame_4_c->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_4_c->setAutoFillBackground(true);
			pixel_4_c = true;
		}
		break;

	case 56:
		if ( pixel_4_aa == false ) {
			ui->frame_4_aa->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_4_aa->setAutoFillBackground(true);
			pixel_4_aa = true;
		}
		break;

	case 57:
		if ( pixel_4_gg == false ) {
			ui->frame_4_gg->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_4_gg->setAutoFillBackground(true);
			pixel_4_gg = true;
		}
		break;

	case 58:
		if ( pixel_4_dd == false ) {
			ui->frame_4_dd->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_4_dd->setAutoFillBackground(true);
			pixel_4_dd = true;
		}
		break;

	case 59:
		if ( pixel_4_pp == false ) {
			ui->frame_4_pp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_4_pp->setAutoFillBackground(true);
			pixel_4_pp = true;
		}
		break;

	case 60:
		if ( pixel_5_f == false ) {
			ui->frame_5_f->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_5_f->setAutoFillBackground(true);
			pixel_5_f = true;
		}
		break;

	case 61:
		if ( pixel_5_e == false ) {
			ui->frame_5_e->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_5_e->setAutoFillBackground(true);
			pixel_5_e = true;
		}
		break;

	case 62:
		if ( pixel_5_a == false ) {
			ui->frame_5_a->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_5_a->setAutoFillBackground(true);
			pixel_5_a = true;
		}
		break;

	case 63:
		if ( pixel_5_g == false ) {
			ui->frame_5_g->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_5_g->setAutoFillBackground(true);
			pixel_5_g = true;
		}
		break;

	case 64:
		if ( pixel_5_d == false ) {
			ui->frame_5_d->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_5_d->setAutoFillBackground(true);
			pixel_5_d = true;
		}
		break;

	case 65:
		if ( pixel_5_dp == false ) {
			ui->frame_5_dp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_5_dp->setAutoFillBackground(true);
			pixel_5_dp = true;
		}
		break;

	case 66:
		if ( pixel_5_b == false ) {
			ui->frame_5_b->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_5_b->setAutoFillBackground(true);
			pixel_5_b = true;
		}
		break;

	case 67:
		if ( pixel_5_c == false ) {
			ui->frame_5_c->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_5_c->setAutoFillBackground(true);
			pixel_5_c = true;
		}
		break;

	case 68:
		if ( pixel_5_aa == false ) {
			ui->frame_5_aa->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_5_aa->setAutoFillBackground(true);
			pixel_5_aa = true;
		}
		break;

	case 69:
		if ( pixel_5_gg == false ) {
			ui->frame_5_gg->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_5_gg->setAutoFillBackground(true);
			pixel_5_gg = true;
		}
		break;

	case 70:
		if ( pixel_5_dd == false ) {
			ui->frame_5_dd->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_5_dd->setAutoFillBackground(true);
			pixel_5_dd = true;
		}
		break;

	case 71:
		if ( pixel_5_pp == false ) {
			ui->frame_5_pp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_5_pp->setAutoFillBackground(true);
			pixel_5_pp = true;
		}
		break;

	case 72:
		if ( pixel_6_f == false ) {
			ui->frame_6_f->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_6_f->setAutoFillBackground(true);
			pixel_6_f = true;
		}
		break;

	case 73:
		if ( pixel_6_e == false ) {
			ui->frame_6_e->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_6_e->setAutoFillBackground(true);
			pixel_6_e = true;
		}
		break;

	case 74:
		if ( pixel_6_a == false ) {
			ui->frame_6_a->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_6_a->setAutoFillBackground(true);
			pixel_6_a = true;
		}
		break;

	case 75:
		if ( pixel_6_g == false ) {
			ui->frame_6_g->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_6_g->setAutoFillBackground(true);
			pixel_6_g = true;
		}
		break;

	case 76:
		if ( pixel_6_d == false ) {
			ui->frame_6_d->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_6_d->setAutoFillBackground(true);
			pixel_6_d = true;
		}
		break;

	case 77:
		if ( pixel_6_dp == false ) {
			ui->frame_6_dp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_6_dp->setAutoFillBackground(true);
			pixel_6_dp = true;
		}
		break;

	case 78:
		if ( pixel_6_b == false ) {
			ui->frame_6_b->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_6_b->setAutoFillBackground(true);
			pixel_6_b = true;
		}
		break;

	case 79:
		if ( pixel_6_c == false ) {
			ui->frame_6_c->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_6_c->setAutoFillBackground(true);
			pixel_6_c = true;
		}
		break;

	case 80:
		if ( pixel_6_aa == false ) {
			ui->frame_6_aa->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_6_aa->setAutoFillBackground(true);
			pixel_6_aa = true;
		}
		break;

	case 81:
		if ( pixel_6_gg == false ) {
			ui->frame_6_gg->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_6_gg->setAutoFillBackground(true);
			pixel_6_gg = true;
		}
		break;

	case 82:
		if ( pixel_6_dd == false ) {
			ui->frame_6_dd->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_6_dd->setAutoFillBackground(true);
			pixel_6_dd = true;
		}
		break;

	case 83:
		if ( pixel_6_pp == false ) {
			ui->frame_6_pp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_6_pp->setAutoFillBackground(true);
			pixel_6_pp = true;
		}
		break;

	case 84:
		if ( pixel_7_f == false ) {
			ui->frame_7_f->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_7_f->setAutoFillBackground(true);
			pixel_7_f = true;
		}
		break;

	case 85:
		if ( pixel_7_e == false ) {
			ui->frame_7_e->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_7_e->setAutoFillBackground(true);
			pixel_7_e = true;
		}
		break;

	case 86:
		if ( pixel_7_a == false ) {
			ui->frame_7_a->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_7_a->setAutoFillBackground(true);
			pixel_7_a = true;
		}
		break;

	case 87:
		if ( pixel_7_g == false ) {
			ui->frame_7_g->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_7_g->setAutoFillBackground(true);
			pixel_7_g = true;
		}
		break;

	case 88:
		if ( pixel_7_d == false ) {
			ui->frame_7_d->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_7_d->setAutoFillBackground(true);
			pixel_7_d = true;
		}
		break;

	case 89:
		if ( pixel_7_dp == false ) {
			ui->frame_7_dp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_7_dp->setAutoFillBackground(true);
			pixel_7_dp = true;
		}
		break;

	case 90:
		if ( pixel_7_b == false ) {
			ui->frame_7_b->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_7_b->setAutoFillBackground(true);
			pixel_7_b = true;
		}
		break;

	case 91:
		if ( pixel_7_c == false ) {
			ui->frame_7_c->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_7_c->setAutoFillBackground(true);
			pixel_7_c = true;
		}
		break;

	case 92:
		if ( pixel_7_aa == false ) {
			ui->frame_7_aa->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_7_aa->setAutoFillBackground(true);
			pixel_7_aa = true;
		}
		break;

	case 93:
		if ( pixel_7_gg == false ) {
			ui->frame_7_gg->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_7_gg->setAutoFillBackground(true);
			pixel_7_gg = true;
		}
		break;

	case 94:
		if ( pixel_7_dd == false ) {
			ui->frame_7_dd->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_7_dd->setAutoFillBackground(true);
			pixel_7_dd = true;
		}
		break;

	case 95:
		if ( pixel_7_pp == false ) {
			ui->frame_7_pp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_7_pp->setAutoFillBackground(true);
			pixel_7_pp = true;
		}
		break;

	case 96:
		if ( pixel_8_f == false ) {
			ui->frame_8_f->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_8_f->setAutoFillBackground(true);
			pixel_8_f = true;
		}
		break;

	case 97:
		if ( pixel_8_e == false ) {
			ui->frame_8_e->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_8_e->setAutoFillBackground(true);
			pixel_8_e = true;
		}
		break;

	case 98:
		if ( pixel_8_a == false ) {
			ui->frame_8_a->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_8_a->setAutoFillBackground(true);
			pixel_8_a = true;
		}
		break;

	case 99:
		if ( pixel_8_g == false ) {
			ui->frame_8_g->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_8_g->setAutoFillBackground(true);
			pixel_8_g = true;
		}
		break;

	case 100:
		if ( pixel_8_d == false ) {
			ui->frame_8_d->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_8_d->setAutoFillBackground(true);
			pixel_8_d = true;
		}
		break;

	case 101:
		if ( pixel_8_dp == false ) {
			ui->frame_8_dp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_8_dp->setAutoFillBackground(true);
			pixel_8_dp = true;
		}
		break;

	case 102:
		if ( pixel_8_b == false ) {
			ui->frame_8_b->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_8_b->setAutoFillBackground(true);
			pixel_8_b = true;
		}
		break;

	case 103:
		if ( pixel_8_c == false ) {
			ui->frame_8_c->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_8_c->setAutoFillBackground(true);
			pixel_8_c = true;
		}
		break;

	case 104:
		if ( pixel_8_aa == false ) {
			ui->frame_8_aa->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_8_aa->setAutoFillBackground(true);
			pixel_8_aa = true;
		}
		break;

	case 105:
		if ( pixel_8_gg == false ) {
			ui->frame_8_gg->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_8_gg->setAutoFillBackground(true);
			pixel_8_gg = true;
		}
		break;

	case 106:
		if ( pixel_8_dd == false ) {
			ui->frame_8_dd->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_8_dd->setAutoFillBackground(true);
			pixel_8_dd = true;
		}
		break;

	case 107:
		if ( pixel_8_pp == false ) {
			ui->frame_8_pp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_8_pp->setAutoFillBackground(true);
			pixel_8_pp = true;
		}
		break;

	case 108:
		if ( pixel_9_f == false ) {
			ui->frame_9_f->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_9_f->setAutoFillBackground(true);
			pixel_9_f = true;
		}
		break;

	case 109:
		if ( pixel_9_e == false ) {
			ui->frame_9_e->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_9_e->setAutoFillBackground(true);
			pixel_9_e = true;
		}
		break;

	case 110:
		if ( pixel_9_a == false ) {
			ui->frame_9_a->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_9_a->setAutoFillBackground(true);
			pixel_9_a = true;
		}
		break;

	case 111:
		if ( pixel_9_g == false ) {
			ui->frame_9_g->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_9_g->setAutoFillBackground(true);
			pixel_9_g = true;
		}
		break;

	case 112:
		if ( pixel_9_d == false ) {
			ui->frame_9_d->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_9_d->setAutoFillBackground(true);
			pixel_9_d = true;
		}
		break;

	case 113:
		if ( pixel_9_dp == false ) {
			ui->frame_9_dp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_9_dp->setAutoFillBackground(true);
			pixel_9_dp = true;
		}
		break;

	case 114:
		if ( pixel_9_b == false ) {
			ui->frame_9_b->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_9_b->setAutoFillBackground(true);
			pixel_9_b = true;
		}
		break;

	case 115:
		if ( pixel_9_c == false ) {
			ui->frame_9_c->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_9_c->setAutoFillBackground(true);
			pixel_9_c = true;
		}
		break;

	case 116:
		if ( pixel_9_aa == false ) {
			ui->frame_9_aa->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_9_aa->setAutoFillBackground(true);
			pixel_9_aa = true;
		}
		break;

	case 117:
		if ( pixel_9_gg == false ) {
			ui->frame_9_gg->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_9_gg->setAutoFillBackground(true);
			pixel_9_gg = true;
		}
		break;

	case 118:
		if ( pixel_9_dd == false ) {
			ui->frame_9_dd->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_9_dd->setAutoFillBackground(true);
			pixel_9_dd = true;
		}
		break;

	case 119:
		if ( pixel_9_pp == false ) {
			ui->frame_9_pp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_9_pp->setAutoFillBackground(true);
			pixel_9_pp = true;
		}
		break;

	case 120:
		if ( pixel_10_f == false ) {
			ui->frame_10_f->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_10_f->setAutoFillBackground(true);
			pixel_10_f = true;
		}
		break;

	case 121:
		if ( pixel_10_e == false ) {
			ui->frame_10_e->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_10_e->setAutoFillBackground(true);
			pixel_10_e = true;
		}
		break;

	case 122:
		if ( pixel_10_a == false ) {
			ui->frame_10_a->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_10_a->setAutoFillBackground(true);
			pixel_10_a = true;
		}
		break;

	case 123:
		if ( pixel_10_g == false ) {
			ui->frame_10_g->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_10_g->setAutoFillBackground(true);
			pixel_10_g = true;
		}
		break;

	case 124:
		if ( pixel_10_d == false ) {
			ui->frame_10_d->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_10_d->setAutoFillBackground(true);
			pixel_10_d = true;
		}
		break;

	case 125:
		if ( pixel_10_dp == false ) {
			ui->frame_10_dp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_10_dp->setAutoFillBackground(true);
			pixel_10_dp = true;
		}
		break;

	case 126:
		if ( pixel_10_b == false ) {
			ui->frame_10_b->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_10_b->setAutoFillBackground(true);
			pixel_10_b = true;
		}
		break;

	case 127:
		if ( pixel_10_c == false ) {
			ui->frame_10_c->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_10_c->setAutoFillBackground(true);
			pixel_10_c = true;
		}
		break;

	case 128:
		if ( pixel_10_aa == false ) {
			ui->frame_10_aa->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_10_aa->setAutoFillBackground(true);
			pixel_10_aa = true;
		}
		break;

	case 129:
		if ( pixel_10_gg == false ) {
			ui->frame_10_gg->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_10_gg->setAutoFillBackground(true);
			pixel_10_gg = true;
		}
		break;

	case 130:
		if ( pixel_10_dd == false ) {
			ui->frame_10_dd->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_10_dd->setAutoFillBackground(true);
			pixel_10_dd = true;
		}
		break;

	case 131:
		if ( pixel_10_pp == false ) {
			ui->frame_10_pp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_10_pp->setAutoFillBackground(true);
			pixel_10_pp = true;
		}
		break;

	case 132:
		if ( pixel_11_f == false ) {
			ui->frame_11_f->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_11_f->setAutoFillBackground(true);
			pixel_11_f = true;
		}
		break;

	case 133:
		if ( pixel_11_e == false ) {
			ui->frame_11_e->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_11_e->setAutoFillBackground(true);
			pixel_11_e = true;
		}
		break;

	case 134:
		if ( pixel_11_a == false ) {
			ui->frame_11_a->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_11_a->setAutoFillBackground(true);
			pixel_11_a = true;
		}
		break;

	case 135:
		if ( pixel_11_g == false ) {
			ui->frame_11_g->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_11_g->setAutoFillBackground(true);
			pixel_11_g = true;
		}
		break;

	case 136:
		if ( pixel_11_d == false ) {
			ui->frame_11_d->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_11_d->setAutoFillBackground(true);
			pixel_11_d = true;
		}
		break;

	case 137:
		if ( pixel_11_dp == false ) {
			ui->frame_11_dp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_11_dp->setAutoFillBackground(true);
			pixel_11_dp = true;
		}
		break;

	case 138:
		if ( pixel_11_b == false ) {
			ui->frame_11_b->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_11_b->setAutoFillBackground(true);
			pixel_11_b = true;
		}
		break;

	case 139:
		if ( pixel_11_c == false ) {
			ui->frame_11_c->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_11_c->setAutoFillBackground(true);
			pixel_11_c = true;
		}
		break;

	case 140:
		if ( pixel_11_aa == false ) {
			ui->frame_11_aa->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_11_aa->setAutoFillBackground(true);
			pixel_11_aa = true;
		}
		break;

	case 141:
		if ( pixel_11_gg == false ) {
			ui->frame_11_gg->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_11_gg->setAutoFillBackground(true);
			pixel_11_gg = true;
		}
		break;

	case 142:
		if ( pixel_11_dd == false ) {
			ui->frame_11_dd->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_11_dd->setAutoFillBackground(true);
			pixel_11_dd = true;
		}
		break;

	case 143:
		if ( pixel_11_pp == false ) {
			ui->frame_11_pp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_11_pp->setAutoFillBackground(true);
			pixel_11_pp = true;
		}
		break;

	case 144:
		if ( pixel_12_f == false ) {
			ui->frame_12_f->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_12_f->setAutoFillBackground(true);
			pixel_12_f = true;
		}
		break;

	case 145:
		if ( pixel_12_e == false ) {
			ui->frame_12_e->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_12_e->setAutoFillBackground(true);
			pixel_12_e = true;
		}
		break;

	case 146:
		if ( pixel_12_a == false ) {
			ui->frame_12_a->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_12_a->setAutoFillBackground(true);
			pixel_12_a = true;
		}
		break;

	case 147:
		if ( pixel_12_g == false ) {
			ui->frame_12_g->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_12_g->setAutoFillBackground(true);
			pixel_12_g = true;
		}
		break;

	case 148:
		if ( pixel_12_d == false ) {
			ui->frame_12_d->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_12_d->setAutoFillBackground(true);
			pixel_12_d = true;
		}
		break;

	case 149:
		if ( pixel_12_dp == false ) {
			ui->frame_12_dp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_12_dp->setAutoFillBackground(true);
			pixel_12_dp = true;
		}
		break;

	case 150:
		if ( pixel_12_b == false ) {
			ui->frame_12_b->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_12_b->setAutoFillBackground(true);
			pixel_12_b = true;
		}
		break;

	case 151:
		if ( pixel_12_c == false ) {
			ui->frame_12_c->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_12_c->setAutoFillBackground(true);
			pixel_12_c = true;
		}
		break;

	case 152:
		if ( pixel_12_aa == false ) {
			ui->frame_12_aa->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_12_aa->setAutoFillBackground(true);
			pixel_12_aa = true;
		}
		break;

	case 153:
		if ( pixel_12_gg == false ) {
			ui->frame_12_gg->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_12_gg->setAutoFillBackground(true);
			pixel_12_gg = true;
		}
		break;

	case 154:
		if ( pixel_12_dd == false ) {
			ui->frame_12_dd->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_12_dd->setAutoFillBackground(true);
			pixel_12_dd = true;
		}
		break;

	case 155:
		if ( pixel_12_pp == false ) {
			ui->frame_12_pp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_12_pp->setAutoFillBackground(true);
			pixel_12_pp = true;
		}
		break;

	case 156:
		if ( pixel_13_f == false ) {
			ui->frame_13_f->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_13_f->setAutoFillBackground(true);
			pixel_13_f = true;
		}
		break;

	case 157:
		if ( pixel_13_e == false ) {
			ui->frame_13_e->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_13_e->setAutoFillBackground(true);
			pixel_13_e = true;
		}
		break;

	case 158:
		if ( pixel_13_a == false ) {
			ui->frame_13_a->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_13_a->setAutoFillBackground(true);
			pixel_13_a = true;
		}
		break;

	case 159:
		if ( pixel_13_g == false ) {
			ui->frame_13_g->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_13_g->setAutoFillBackground(true);
			pixel_13_g = true;
		}
		break;

	case 160:
		if ( pixel_13_d == false ) {
			ui->frame_13_d->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_13_d->setAutoFillBackground(true);
			pixel_13_d = true;
		}
		break;

	case 161:
		if ( pixel_13_dp == false ) {
			ui->frame_13_dp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_13_dp->setAutoFillBackground(true);
			pixel_13_dp = true;
		}
		break;

	case 162:
		if ( pixel_13_b == false ) {
			ui->frame_13_b->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_13_b->setAutoFillBackground(true);
			pixel_13_b = true;
		}
		break;

	case 163:
		if ( pixel_13_c == false ) {
			ui->frame_13_c->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_13_c->setAutoFillBackground(true);
			pixel_13_c = true;
		}
		break;

	case 164:
		if ( pixel_13_aa == false ) {
			ui->frame_13_aa->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_13_aa->setAutoFillBackground(true);
			pixel_13_aa = true;
		}
		break;

	case 165:
		if ( pixel_13_gg == false ) {
			ui->frame_13_gg->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_13_gg->setAutoFillBackground(true);
			pixel_13_gg = true;
		}
		break;

	case 166:
		if ( pixel_13_dd == false ) {
			ui->frame_13_dd->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_13_dd->setAutoFillBackground(true);
			pixel_13_dd = true;
		}
		break;

	case 167:
		if ( pixel_13_pp == false ) {
			ui->frame_13_pp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_13_pp->setAutoFillBackground(true);
			pixel_13_pp = true;
		}
		break;

	case 168:
		if ( pixel_14_f == false ) {
			ui->frame_14_f->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_14_f->setAutoFillBackground(true);
			pixel_14_f = true;
		}
		break;

	case 169:
		if ( pixel_14_e == false ) {
			ui->frame_14_e->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_14_e->setAutoFillBackground(true);
			pixel_14_e = true;
		}
		break;

	case 170:
		if ( pixel_14_a == false ) {
			ui->frame_14_a->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_14_a->setAutoFillBackground(true);
			pixel_14_a = true;
		}
		break;

	case 171:
		if ( pixel_14_g == false ) {
			ui->frame_14_g->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_14_g->setAutoFillBackground(true);
			pixel_14_g = true;
		}
		break;

	case 172:
		if ( pixel_14_d == false ) {
			ui->frame_14_d->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_14_d->setAutoFillBackground(true);
			pixel_14_d = true;
		}
		break;

	case 173:
		if ( pixel_14_dp == false ) {
			ui->frame_14_dp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_14_dp->setAutoFillBackground(true);
			pixel_14_dp = true;
		}
		break;

	case 174:
		if ( pixel_14_b == false ) {
			ui->frame_14_b->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_14_b->setAutoFillBackground(true);
			pixel_14_b = true;
		}
		break;

	case 175:
		if ( pixel_14_c == false ) {
			ui->frame_14_c->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_14_c->setAutoFillBackground(true);
			pixel_14_c = true;
		}
		break;

	case 176:
		if ( pixel_14_aa == false ) {
			ui->frame_14_aa->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_14_aa->setAutoFillBackground(true);
			pixel_14_aa = true;
		}
		break;

	case 177:
		if ( pixel_14_gg == false ) {
			ui->frame_14_gg->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_14_gg->setAutoFillBackground(true);
			pixel_14_gg = true;
		}
		break;

	case 178:
		if ( pixel_14_dd == false ) {
			ui->frame_14_dd->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_14_dd->setAutoFillBackground(true);
			pixel_14_dd = true;
		}
		break;

	case 179:
		if ( pixel_14_pp == false ) {
			ui->frame_14_pp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_14_pp->setAutoFillBackground(true);
			pixel_14_pp = true;
		}
		break;

	case 180:
		if ( pixel_15_f == false ) {
			ui->frame_15_f->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_15_f->setAutoFillBackground(true);
			pixel_15_f = true;
		}
		break;

	case 181:
		if ( pixel_15_e == false ) {
			ui->frame_15_e->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_15_e->setAutoFillBackground(true);
			pixel_15_e = true;
		}
		break;

	case 182:
		if ( pixel_15_a == false ) {
			ui->frame_15_a->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_15_a->setAutoFillBackground(true);
			pixel_15_a = true;
		}
		break;

	case 183:
		if ( pixel_15_g == false ) {
			ui->frame_15_g->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_15_g->setAutoFillBackground(true);
			pixel_15_g = true;
		}
		break;

	case 184:
		if ( pixel_15_d == false ) {
			ui->frame_15_d->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_15_d->setAutoFillBackground(true);
			pixel_15_d = true;
		}
		break;

	case 185:
		if ( pixel_15_dp == false ) {
			ui->frame_15_dp->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_15_dp->setAutoFillBackground(true);
			pixel_15_dp = true;
		}
		break;

	case 186:
		if ( pixel_15_b == false ) {
			ui->frame_15_b->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_15_b->setAutoFillBackground(true);
			pixel_15_b = true;
		}
		break;

	case 187:
		if ( pixel_15_c == false ) {
			ui->frame_15_c->setStyleSheet(QString::fromUtf8("background-color: darkRed;"));
			ui->frame_15_c->setAutoFillBackground(true);
			pixel_15_c = true;
		}
		break;

	default:
		ui->label->setText("no Point");
		break;
 	}	
}

/*
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
*/

void Display::clearPoint_new(uint8_t x_all) {
	switch (x_all) {

	case 0:
		if ( pixel_0_f == true ) {
			ui->frame_0_f->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_0_f->setAutoFillBackground(true);
			pixel_0_f = false;
		}
		break;

	case 1:
		if ( pixel_0_e == true ) {
			ui->frame_0_e->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_0_e->setAutoFillBackground(true);
			pixel_0_e = false;
		}
		break;

	case 2:
		if ( pixel_0_a == true ) {
			ui->frame_0_a->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_0_a->setAutoFillBackground(true);
			pixel_0_a = false;
		}
		break;

	case 3:
		if ( pixel_0_g == true ) {
			ui->frame_0_g->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_0_g->setAutoFillBackground(true);
			pixel_0_g = false;
		}
		break;

	case 4:
		if ( pixel_0_d == true ) {
			ui->frame_0_d->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_0_d->setAutoFillBackground(true);
			pixel_0_d = false;
		}
		break;

	case 5:
		if ( pixel_0_dp == true ) {
			ui->frame_0_dp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_0_dp->setAutoFillBackground(true);
			pixel_0_dp = false;
		}
		break;

	case 6:
		if ( pixel_0_b == true ) {
			ui->frame_0_b->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_0_b->setAutoFillBackground(true);
			pixel_0_b = false;
		}
		break;

	case 7:
		if ( pixel_0_c == true ) {
			ui->frame_0_c->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_0_c->setAutoFillBackground(true);
			pixel_0_c = false;
		}
		break;

	case 8:
		if ( pixel_0_aa == true ) {
			ui->frame_0_aa->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_0_aa->setAutoFillBackground(true);
			pixel_0_aa = false;
		}
		break;

	case 9:
		if ( pixel_0_gg == true ) {
			ui->frame_0_gg->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_0_gg->setAutoFillBackground(true);
			pixel_0_gg = false;
		}
		break;

	case 10:
		if ( pixel_0_dd == true ) {
			ui->frame_0_dd->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_0_dd->setAutoFillBackground(true);
			pixel_0_dd = false;
		}
		break;

	case 11:
		if ( pixel_0_pp == true ) {
			ui->frame_0_pp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_0_pp->setAutoFillBackground(true);
			pixel_0_pp = false;
		}
		break;

	case 12:
		if ( pixel_1_f == true ) {
			ui->frame_1_f->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_1_f->setAutoFillBackground(true);
			pixel_1_f = false;
		}
		break;

	case 13:
		if ( pixel_1_e == true ) {
			ui->frame_1_e->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_1_e->setAutoFillBackground(true);
			pixel_1_e = false;
		}
		break;

	case 14:
		if ( pixel_1_a == true ) {
			ui->frame_1_a->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_1_a->setAutoFillBackground(true);
			pixel_1_a = false;
		}
		break;

	case 15:
		if ( pixel_1_g == true ) {
			ui->frame_1_g->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_1_g->setAutoFillBackground(true);
			pixel_1_g = false;
		}
		break;

	case 16:
		if ( pixel_1_d == true ) {
			ui->frame_1_d->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_1_d->setAutoFillBackground(true);
			pixel_1_d = false;
		}
		break;

	case 17:
		if ( pixel_1_dp == true ) {
			ui->frame_1_dp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_1_dp->setAutoFillBackground(true);
			pixel_1_dp = false;
		}
		break;

	case 18:
		if ( pixel_1_b == true ) {
			ui->frame_1_b->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_1_b->setAutoFillBackground(true);
			pixel_1_b = false;
		}
		break;

	case 19:
		if ( pixel_1_c == true ) {
			ui->frame_1_c->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_1_c->setAutoFillBackground(true);
			pixel_1_c = false;
		}
		break;

	case 20:
		if ( pixel_1_aa == true ) {
			ui->frame_1_aa->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_1_aa->setAutoFillBackground(true);
			pixel_1_aa = false;
		}
		break;

	case 21:
		if ( pixel_1_gg == true ) {
			ui->frame_1_gg->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_1_gg->setAutoFillBackground(true);
			pixel_1_gg = false;
		}
		break;

	case 22:
		if ( pixel_1_dd == true ) {
			ui->frame_1_dd->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_1_dd->setAutoFillBackground(true);
			pixel_1_dd = false;
		}
		break;

	case 23:
		if ( pixel_1_pp == true ) {
			ui->frame_1_pp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_1_pp->setAutoFillBackground(true);
			pixel_1_pp = false;
		}
		break;

	case 24:
		if ( pixel_2_f == true ) {
			ui->frame_2_f->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_2_f->setAutoFillBackground(true);
			pixel_2_f = false;
		}
		break;

	case 25:
		if ( pixel_2_e == true ) {
			ui->frame_2_e->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_2_e->setAutoFillBackground(true);
			pixel_2_e = false;
		}
		break;

	case 26:
		if ( pixel_2_a == true ) {
			ui->frame_2_a->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_2_a->setAutoFillBackground(true);
			pixel_2_a = false;
		}
		break;

	case 27:
		if ( pixel_2_g == true ) {
			ui->frame_2_g->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_2_g->setAutoFillBackground(true);
			pixel_2_g = false;
		}
		break;

	case 28:
		if ( pixel_2_d == true ) {
			ui->frame_2_d->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_2_d->setAutoFillBackground(true);
			pixel_2_d = false;
		}
		break;

	case 29:
		if ( pixel_2_dp == true ) {
			ui->frame_2_dp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_2_dp->setAutoFillBackground(true);
			pixel_2_dp = false;
		}
		break;

	case 30:
		if ( pixel_2_b == true ) {
			ui->frame_2_b->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_2_b->setAutoFillBackground(true);
			pixel_2_b = false;
		}
		break;

	case 31:
		if ( pixel_2_c == true ) {
			ui->frame_2_c->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_2_c->setAutoFillBackground(true);
			pixel_2_c = false;
		}
		break;

	case 32:
		if ( pixel_2_aa == true ) {
			ui->frame_2_aa->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_2_aa->setAutoFillBackground(true);
			pixel_2_aa = false;
		}
		break;

	case 33:
		if ( pixel_2_gg == true ) {
			ui->frame_2_gg->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_2_gg->setAutoFillBackground(true);
			pixel_2_gg = false;
		}
		break;

	case 34:
		if ( pixel_2_dd == true ) {
			ui->frame_2_dd->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_2_dd->setAutoFillBackground(true);
			pixel_2_dd = false;
		}
		break;

	case 35:
		if ( pixel_2_pp == true ) {
			ui->frame_2_pp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_2_pp->setAutoFillBackground(true);
			pixel_2_pp = false;
		}
		break;

	case 36:
		if ( pixel_3_f == true ) {
			ui->frame_3_f->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_3_f->setAutoFillBackground(true);
			pixel_3_f = false;
		}
		break;

	case 37:
		if ( pixel_3_e == true ) {
			ui->frame_3_e->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_3_e->setAutoFillBackground(true);
			pixel_3_e = false;
		}
		break;

	case 38:
		if ( pixel_3_a == true ) {
			ui->frame_3_a->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_3_a->setAutoFillBackground(true);
			pixel_3_a = false;
		}
		break;

	case 39:
		if ( pixel_3_g == true ) {
			ui->frame_3_g->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_3_g->setAutoFillBackground(true);
			pixel_3_g = false;
		}
		break;

	case 40:
		if ( pixel_3_d == true ) {
			ui->frame_3_d->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_3_d->setAutoFillBackground(true);
			pixel_3_d = false;
		}
		break;

	case 41:
		if ( pixel_3_dp == true ) {
			ui->frame_3_dp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_3_dp->setAutoFillBackground(true);
			pixel_3_dp = false;
		}
		break;

	case 42:
		if ( pixel_3_b == true ) {
			ui->frame_3_b->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_3_b->setAutoFillBackground(true);
			pixel_3_b = false;
		}
		break;

	case 43:
		if ( pixel_3_c == true ) {
			ui->frame_3_c->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_3_c->setAutoFillBackground(true);
			pixel_3_c = false;
		}
		break;

	case 44:
		if ( pixel_3_aa == true ) {
			ui->frame_3_aa->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_3_aa->setAutoFillBackground(true);
			pixel_3_aa = false;
		}
		break;

	case 45:
		if ( pixel_3_gg == true ) {
			ui->frame_3_gg->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_3_gg->setAutoFillBackground(true);
			pixel_3_gg = false;
		}
		break;

	case 46:
		if ( pixel_3_dd == true ) {
			ui->frame_3_dd->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_3_dd->setAutoFillBackground(true);
			pixel_3_dd = false;
		}
		break;

	case 47:
		if ( pixel_3_pp == true ) {
			ui->frame_3_pp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_3_pp->setAutoFillBackground(true);
			pixel_3_pp = false;
		}
		break;

	case 48:
		if ( pixel_4_f == true ) {
			ui->frame_4_f->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_4_f->setAutoFillBackground(true);
			pixel_4_f = false;
		}
		break;

	case 49:
		if ( pixel_4_e == true ) {
			ui->frame_4_e->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_4_e->setAutoFillBackground(true);
			pixel_4_e = false;
		}
		break;

	case 50:
		if ( pixel_4_a == true ) {
			ui->frame_4_a->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_4_a->setAutoFillBackground(true);
			pixel_4_a = false;
		}
		break;

	case 51:
		if ( pixel_4_g == true ) {
			ui->frame_4_g->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_4_g->setAutoFillBackground(true);
			pixel_4_g = false;
		}
		break;

	case 52:
		if ( pixel_4_d == true ) {
			ui->frame_4_d->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_4_d->setAutoFillBackground(true);
			pixel_4_d = false;
		}
		break;

	case 53:
		if ( pixel_4_dp == true ) {
			ui->frame_4_dp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_4_dp->setAutoFillBackground(true);
			pixel_4_dp = false;
		}
		break;

	case 54:
		if ( pixel_4_b == true ) {
			ui->frame_4_b->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_4_b->setAutoFillBackground(true);
			pixel_4_b = false;
		}
		break;

	case 55:
		if ( pixel_4_c == true ) {
			ui->frame_4_c->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_4_c->setAutoFillBackground(true);
			pixel_4_c = false;
		}
		break;

	case 56:
		if ( pixel_4_aa == true ) {
			ui->frame_4_aa->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_4_aa->setAutoFillBackground(true);
			pixel_4_aa = false;
		}
		break;

	case 57:
		if ( pixel_4_gg == true ) {
			ui->frame_4_gg->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_4_gg->setAutoFillBackground(true);
			pixel_4_gg = false;
		}
		break;

	case 58:
		if ( pixel_4_dd == true ) {
			ui->frame_4_dd->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_4_dd->setAutoFillBackground(true);
			pixel_4_dd = false;
		}
		break;

	case 59:
		if ( pixel_4_pp == true ) {
			ui->frame_4_pp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_4_pp->setAutoFillBackground(true);
			pixel_4_pp = false;
		}
		break;

	case 60:
		if ( pixel_5_f == true ) {
			ui->frame_5_f->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_5_f->setAutoFillBackground(true);
			pixel_5_f = false;
		}
		break;

	case 61:
		if ( pixel_5_e == true ) {
			ui->frame_5_e->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_5_e->setAutoFillBackground(true);
			pixel_5_e = false;
		}
		break;

	case 62:
		if ( pixel_5_a == true ) {
			ui->frame_5_a->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_5_a->setAutoFillBackground(true);
			pixel_5_a = false;
		}
		break;

	case 63:
		if ( pixel_5_g == true ) {
			ui->frame_5_g->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_5_g->setAutoFillBackground(true);
			pixel_5_g = false;
		}
		break;

	case 64:
		if ( pixel_5_d == true ) {
			ui->frame_5_d->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_5_d->setAutoFillBackground(true);
			pixel_5_d = false;
		}
		break;

	case 65:
		if ( pixel_5_dp == true ) {
			ui->frame_5_dp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_5_dp->setAutoFillBackground(true);
			pixel_5_dp = false;
		}
		break;

	case 66:
		if ( pixel_5_b == true ) {
			ui->frame_5_b->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_5_b->setAutoFillBackground(true);
			pixel_5_b = false;
		}
		break;

	case 67:
		if ( pixel_5_c == true ) {
			ui->frame_5_c->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_5_c->setAutoFillBackground(true);
			pixel_5_c = false;
		}
		break;

	case 68:
		if ( pixel_5_aa == true ) {
			ui->frame_5_aa->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_5_aa->setAutoFillBackground(true);
			pixel_5_aa = false;
		}
		break;

	case 69:
		if ( pixel_5_gg == true ) {
			ui->frame_5_gg->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_5_gg->setAutoFillBackground(true);
			pixel_5_gg = false;
		}
		break;

	case 70:
		if ( pixel_5_dd == true ) {
			ui->frame_5_dd->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_5_dd->setAutoFillBackground(true);
			pixel_5_dd = false;
		}
		break;

	case 71:
		if ( pixel_5_pp == true ) {
			ui->frame_5_pp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_5_pp->setAutoFillBackground(true);
			pixel_5_pp = false;
		}
		break;

	case 72:
		if ( pixel_6_f == true ) {
			ui->frame_6_f->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_6_f->setAutoFillBackground(true);
			pixel_6_f = false;
		}
		break;

	case 73:
		if ( pixel_6_e == true ) {
			ui->frame_6_e->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_6_e->setAutoFillBackground(true);
			pixel_6_e = false;
		}
		break;

	case 74:
		if ( pixel_6_a == true ) {
			ui->frame_6_a->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_6_a->setAutoFillBackground(true);
			pixel_6_a = false;
		}
		break;

	case 75:
		if ( pixel_6_g == true ) {
			ui->frame_6_g->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_6_g->setAutoFillBackground(true);
			pixel_6_g = false;
		}
		break;

	case 76:
		if ( pixel_6_d == true ) {
			ui->frame_6_d->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_6_d->setAutoFillBackground(true);
			pixel_6_d = false;
		}
		break;

	case 77:
		if ( pixel_6_dp == true ) {
			ui->frame_6_dp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_6_dp->setAutoFillBackground(true);
			pixel_6_dp = false;
		}
		break;

	case 78:
		if ( pixel_6_b == true ) {
			ui->frame_6_b->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_6_b->setAutoFillBackground(true);
			pixel_6_b = false;
		}
		break;

	case 79:
		if ( pixel_6_c == true ) {
			ui->frame_6_c->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_6_c->setAutoFillBackground(true);
			pixel_6_c = false;
		}
		break;

	case 80:
		if ( pixel_6_aa == true ) {
			ui->frame_6_aa->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_6_aa->setAutoFillBackground(true);
			pixel_6_aa = false;
		}
		break;

	case 81:
		if ( pixel_6_gg == true ) {
			ui->frame_6_gg->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_6_gg->setAutoFillBackground(true);
			pixel_6_gg = false;
		}
		break;

	case 82:
		if ( pixel_6_dd == true ) {
			ui->frame_6_dd->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_6_dd->setAutoFillBackground(true);
			pixel_6_dd = false;
		}
		break;

	case 83:
		if ( pixel_6_pp == true ) {
			ui->frame_6_pp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_6_pp->setAutoFillBackground(true);
			pixel_6_pp = false;
		}
		break;

	case 84:
		if ( pixel_7_f == true ) {
			ui->frame_7_f->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_7_f->setAutoFillBackground(true);
			pixel_7_f = false;
		}
		break;

	case 85:
		if ( pixel_7_e == true ) {
			ui->frame_7_e->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_7_e->setAutoFillBackground(true);
			pixel_7_e = false;
		}
		break;

	case 86:
		if ( pixel_7_a == true ) {
			ui->frame_7_a->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_7_a->setAutoFillBackground(true);
			pixel_7_a = false;
		}
		break;

	case 87:
		if ( pixel_7_g == true ) {
			ui->frame_7_g->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_7_g->setAutoFillBackground(true);
			pixel_7_g = false;
		}
		break;

	case 88:
		if ( pixel_7_d == true ) {
			ui->frame_7_d->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_7_d->setAutoFillBackground(true);
			pixel_7_d = false;
		}
		break;

	case 89:
		if ( pixel_7_dp == true ) {
			ui->frame_7_dp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_7_dp->setAutoFillBackground(true);
			pixel_7_dp = false;
		}
		break;

	case 90:
		if ( pixel_7_b == true ) {
			ui->frame_7_b->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_7_b->setAutoFillBackground(true);
			pixel_7_b = false;
		}
		break;

	case 91:
		if ( pixel_7_c == true ) {
			ui->frame_7_c->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_7_c->setAutoFillBackground(true);
			pixel_7_c = false;
		}
		break;

	case 92:
		if ( pixel_7_aa == true ) {
			ui->frame_7_aa->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_7_aa->setAutoFillBackground(true);
			pixel_7_aa = false;
		}
		break;

	case 93:
		if ( pixel_7_gg == true ) {
			ui->frame_7_gg->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_7_gg->setAutoFillBackground(true);
			pixel_7_gg = false;
		}
		break;

	case 94:
		if ( pixel_7_dd == true ) {
			ui->frame_7_dd->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_7_dd->setAutoFillBackground(true);
			pixel_7_dd = false;
		}
		break;

	case 95:
		if ( pixel_7_pp == true ) {
			ui->frame_7_pp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_7_pp->setAutoFillBackground(true);
			pixel_7_pp = false;
		}
		break;

	case 96:
		if ( pixel_8_f == true ) {
			ui->frame_8_f->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_8_f->setAutoFillBackground(true);
			pixel_8_f = false;
		}
		break;

	case 97:
		if ( pixel_8_e == true ) {
			ui->frame_8_e->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_8_e->setAutoFillBackground(true);
			pixel_8_e = false;
		}
		break;

	case 98:
		if ( pixel_8_a == true ) {
			ui->frame_8_a->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_8_a->setAutoFillBackground(true);
			pixel_8_a = false;
		}
		break;

	case 99:
		if ( pixel_8_g == true ) {
			ui->frame_8_g->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_8_g->setAutoFillBackground(true);
			pixel_8_g = false;
		}
		break;

	case 100:
		if ( pixel_8_d == true ) {
			ui->frame_8_d->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_8_d->setAutoFillBackground(true);
			pixel_8_d = false;
		}
		break;

	case 101:
		if ( pixel_8_dp == true ) {
			ui->frame_8_dp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_8_dp->setAutoFillBackground(true);
			pixel_8_dp = false;
		}
		break;

	case 102:
		if ( pixel_8_b == true ) {
			ui->frame_8_b->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_8_b->setAutoFillBackground(true);
			pixel_8_b = false;
		}
		break;

	case 103:
		if ( pixel_8_c == true ) {
			ui->frame_8_c->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_8_c->setAutoFillBackground(true);
			pixel_8_c = false;
		}
		break;

	case 104:
		if ( pixel_8_aa == true ) {
			ui->frame_8_aa->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_8_aa->setAutoFillBackground(true);
			pixel_8_aa = false;
		}
		break;

	case 105:
		if ( pixel_8_gg == true ) {
			ui->frame_8_gg->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_8_gg->setAutoFillBackground(true);
			pixel_8_gg = false;
		}
		break;

	case 106:
		if ( pixel_8_dd == true ) {
			ui->frame_8_dd->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_8_dd->setAutoFillBackground(true);
			pixel_8_dd = false;
		}
		break;

	case 107:
		if ( pixel_8_pp == true ) {
			ui->frame_8_pp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_8_pp->setAutoFillBackground(true);
			pixel_8_pp = false;
		}
		break;

	case 108:
		if ( pixel_9_f == true ) {
			ui->frame_9_f->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_9_f->setAutoFillBackground(true);
			pixel_9_f = false;
		}
		break;

	case 109:
		if ( pixel_9_e == true ) {
			ui->frame_9_e->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_9_e->setAutoFillBackground(true);
			pixel_9_e = false;
		}
		break;

	case 110:
		if ( pixel_9_a == true ) {
			ui->frame_9_a->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_9_a->setAutoFillBackground(true);
			pixel_9_a = false;
		}
		break;

	case 111:
		if ( pixel_9_g == true ) {
			ui->frame_9_g->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_9_g->setAutoFillBackground(true);
			pixel_9_g = false;
		}
		break;

	case 112:
		if ( pixel_9_d == true ) {
			ui->frame_9_d->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_9_d->setAutoFillBackground(true);
			pixel_9_d = false;
		}
		break;

	case 113:
		if ( pixel_9_dp == true ) {
			ui->frame_9_dp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_9_dp->setAutoFillBackground(true);
			pixel_9_dp = false;
		}
		break;

	case 114:
		if ( pixel_9_b == true ) {
			ui->frame_9_b->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_9_b->setAutoFillBackground(true);
			pixel_9_b = false;
		}
		break;

	case 115:
		if ( pixel_9_c == true ) {
			ui->frame_9_c->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_9_c->setAutoFillBackground(true);
			pixel_9_c = false;
		}
		break;

	case 116:
		if ( pixel_9_aa == true ) {
			ui->frame_9_aa->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_9_aa->setAutoFillBackground(true);
			pixel_9_aa = false;
		}
		break;

	case 117:
		if ( pixel_9_gg == true ) {
			ui->frame_9_gg->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_9_gg->setAutoFillBackground(true);
			pixel_9_gg = false;
		}
		break;

	case 118:
		if ( pixel_9_dd == true ) {
			ui->frame_9_dd->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_9_dd->setAutoFillBackground(true);
			pixel_9_dd = false;
		}
		break;

	case 119:
		if ( pixel_9_pp == true ) {
			ui->frame_9_pp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_9_pp->setAutoFillBackground(true);
			pixel_9_pp = false;
		}
		break;

	case 120:
		if ( pixel_10_f == true ) {
			ui->frame_10_f->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_10_f->setAutoFillBackground(true);
			pixel_10_f = false;
		}
		break;

	case 121:
		if ( pixel_10_e == true ) {
			ui->frame_10_e->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_10_e->setAutoFillBackground(true);
			pixel_10_e = false;
		}
		break;

	case 122:
		if ( pixel_10_a == true ) {
			ui->frame_10_a->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_10_a->setAutoFillBackground(true);
			pixel_10_a = false;
		}
		break;

	case 123:
		if ( pixel_10_g == true ) {
			ui->frame_10_g->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_10_g->setAutoFillBackground(true);
			pixel_10_g = false;
		}
		break;

	case 124:
		if ( pixel_10_d == true ) {
			ui->frame_10_d->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_10_d->setAutoFillBackground(true);
			pixel_10_d = false;
		}
		break;

	case 125:
		if ( pixel_10_dp == true ) {
			ui->frame_10_dp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_10_dp->setAutoFillBackground(true);
			pixel_10_dp = false;
		}
		break;

	case 126:
		if ( pixel_10_b == true ) {
			ui->frame_10_b->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_10_b->setAutoFillBackground(true);
			pixel_10_b = false;
		}
		break;

	case 127:
		if ( pixel_10_c == true ) {
			ui->frame_10_c->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_10_c->setAutoFillBackground(true);
			pixel_10_c = false;
		}
		break;

	case 128:
		if ( pixel_10_aa == true ) {
			ui->frame_10_aa->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_10_aa->setAutoFillBackground(true);
			pixel_10_aa = false;
		}
		break;

	case 129:
		if ( pixel_10_gg == true ) {
			ui->frame_10_gg->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_10_gg->setAutoFillBackground(true);
			pixel_10_gg = false;
		}
		break;

	case 130:
		if ( pixel_10_dd == true ) {
			ui->frame_10_dd->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_10_dd->setAutoFillBackground(true);
			pixel_10_dd = false;
		}
		break;

	case 131:
		if ( pixel_10_pp == true ) {
			ui->frame_10_pp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_10_pp->setAutoFillBackground(true);
			pixel_10_pp = false;
		}
		break;

	case 132:
		if ( pixel_11_f == true ) {
			ui->frame_11_f->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_11_f->setAutoFillBackground(true);
			pixel_11_f = false;
		}
		break;

	case 133:
		if ( pixel_11_e == true ) {
			ui->frame_11_e->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_11_e->setAutoFillBackground(true);
			pixel_11_e = false;
		}
		break;

	case 134:
		if ( pixel_11_a == true ) {
			ui->frame_11_a->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_11_a->setAutoFillBackground(true);
			pixel_11_a = false;
		}
		break;

	case 135:
		if ( pixel_11_g == true ) {
			ui->frame_11_g->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_11_g->setAutoFillBackground(true);
			pixel_11_g = false;
		}
		break;

	case 136:
		if ( pixel_11_d == true ) {
			ui->frame_11_d->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_11_d->setAutoFillBackground(true);
			pixel_11_d = false;
		}
		break;

	case 137:
		if ( pixel_11_dp == true ) {
			ui->frame_11_dp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_11_dp->setAutoFillBackground(true);
			pixel_11_dp = false;
		}
		break;

	case 138:
		if ( pixel_11_b == true ) {
			ui->frame_11_b->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_11_b->setAutoFillBackground(true);
			pixel_11_b = false;
		}
		break;

	case 139:
		if ( pixel_11_c == true ) {
			ui->frame_11_c->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_11_c->setAutoFillBackground(true);
			pixel_11_c = false;
		}
		break;

	case 140:
		if ( pixel_11_aa == true ) {
			ui->frame_11_aa->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_11_aa->setAutoFillBackground(true);
			pixel_11_aa = false;
		}
		break;

	case 141:
		if ( pixel_11_gg == true ) {
			ui->frame_11_gg->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_11_gg->setAutoFillBackground(true);
			pixel_11_gg = false;
		}
		break;

	case 142:
		if ( pixel_11_dd == true ) {
			ui->frame_11_dd->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_11_dd->setAutoFillBackground(true);
			pixel_11_dd = false;
		}
		break;

	case 143:
		if ( pixel_11_pp == true ) {
			ui->frame_11_pp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_11_pp->setAutoFillBackground(true);
			pixel_11_pp = false;
		}
		break;

	case 144:
		if ( pixel_12_f == true ) {
			ui->frame_12_f->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_12_f->setAutoFillBackground(true);
			pixel_12_f = false;
		}
		break;

	case 145:
		if ( pixel_12_e == true ) {
			ui->frame_12_e->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_12_e->setAutoFillBackground(true);
			pixel_12_e = false;
		}
		break;

	case 146:
		if ( pixel_12_a == true ) {
			ui->frame_12_a->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_12_a->setAutoFillBackground(true);
			pixel_12_a = false;
		}
		break;

	case 147:
		if ( pixel_12_g == true ) {
			ui->frame_12_g->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_12_g->setAutoFillBackground(true);
			pixel_12_g = false;
		}
		break;

	case 148:
		if ( pixel_12_d == true ) {
			ui->frame_12_d->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_12_d->setAutoFillBackground(true);
			pixel_12_d = false;
		}
		break;

	case 149:
		if ( pixel_12_dp == true ) {
			ui->frame_12_dp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_12_dp->setAutoFillBackground(true);
			pixel_12_dp = false;
		}
		break;

	case 150:
		if ( pixel_12_b == true ) {
			ui->frame_12_b->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_12_b->setAutoFillBackground(true);
			pixel_12_b = false;
		}
		break;

	case 151:
		if ( pixel_12_c == true ) {
			ui->frame_12_c->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_12_c->setAutoFillBackground(true);
			pixel_12_c = false;
		}
		break;

	case 152:
		if ( pixel_12_aa == true ) {
			ui->frame_12_aa->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_12_aa->setAutoFillBackground(true);
			pixel_12_aa = false;
		}
		break;

	case 153:
		if ( pixel_12_gg == true ) {
			ui->frame_12_gg->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_12_gg->setAutoFillBackground(true);
			pixel_12_gg = false;
		}
		break;

	case 154:
		if ( pixel_12_dd == true ) {
			ui->frame_12_dd->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_12_dd->setAutoFillBackground(true);
			pixel_12_dd = false;
		}
		break;

	case 155:
		if ( pixel_12_pp == true ) {
			ui->frame_12_pp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_12_pp->setAutoFillBackground(true);
			pixel_12_pp = false;
		}
		break;

	case 156:
		if ( pixel_13_f == true ) {
			ui->frame_13_f->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_13_f->setAutoFillBackground(true);
			pixel_13_f = false;
		}
		break;

	case 157:
		if ( pixel_13_e == true ) {
			ui->frame_13_e->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_13_e->setAutoFillBackground(true);
			pixel_13_e = false;
		}
		break;

	case 158:
		if ( pixel_13_a == true ) {
			ui->frame_13_a->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_13_a->setAutoFillBackground(true);
			pixel_13_a = false;
		}
		break;

	case 159:
		if ( pixel_13_g == true ) {
			ui->frame_13_g->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_13_g->setAutoFillBackground(true);
			pixel_13_g = false;
		}
		break;

	case 160:
		if ( pixel_13_d == true ) {
			ui->frame_13_d->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_13_d->setAutoFillBackground(true);
			pixel_13_d = false;
		}
		break;

	case 161:
		if ( pixel_13_dp == true ) {
			ui->frame_13_dp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_13_dp->setAutoFillBackground(true);
			pixel_13_dp = false;
		}
		break;

	case 162:
		if ( pixel_13_b == true ) {
			ui->frame_13_b->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_13_b->setAutoFillBackground(true);
			pixel_13_b = false;
		}
		break;

	case 163:
		if ( pixel_13_c == true ) {
			ui->frame_13_c->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_13_c->setAutoFillBackground(true);
			pixel_13_c = false;
		}
		break;

	case 164:
		if ( pixel_13_aa == true ) {
			ui->frame_13_aa->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_13_aa->setAutoFillBackground(true);
			pixel_13_aa = false;
		}
		break;

	case 165:
		if ( pixel_13_gg == true ) {
			ui->frame_13_gg->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_13_gg->setAutoFillBackground(true);
			pixel_13_gg = false;
		}
		break;

	case 166:
		if ( pixel_13_dd == true ) {
			ui->frame_13_dd->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_13_dd->setAutoFillBackground(true);
			pixel_13_dd = false;
		}
		break;

	case 167:
		if ( pixel_13_pp == true ) {
			ui->frame_13_pp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_13_pp->setAutoFillBackground(true);
			pixel_13_pp = false;
		}
		break;

	case 168:
		if ( pixel_14_f == true ) {
			ui->frame_14_f->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_14_f->setAutoFillBackground(true);
			pixel_14_f = false;
		}
		break;

	case 169:
		if ( pixel_14_e == true ) {
			ui->frame_14_e->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_14_e->setAutoFillBackground(true);
			pixel_14_e = false;
		}
		break;

	case 170:
		if ( pixel_14_a == true ) {
			ui->frame_14_a->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_14_a->setAutoFillBackground(true);
			pixel_14_a = false;
		}
		break;

	case 171:
		if ( pixel_14_g == true ) {
			ui->frame_14_g->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_14_g->setAutoFillBackground(true);
			pixel_14_g = false;
		}
		break;

	case 172:
		if ( pixel_14_d == true ) {
			ui->frame_14_d->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_14_d->setAutoFillBackground(true);
			pixel_14_d = false;
		}
		break;

	case 173:
		if ( pixel_14_dp == true ) {
			ui->frame_14_dp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_14_dp->setAutoFillBackground(true);
			pixel_14_dp = false;
		}
		break;

	case 174:
		if ( pixel_14_b == true ) {
			ui->frame_14_b->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_14_b->setAutoFillBackground(true);
			pixel_14_b = false;
		}
		break;

	case 175:
		if ( pixel_14_c == true ) {
			ui->frame_14_c->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_14_c->setAutoFillBackground(true);
			pixel_14_c = false;
		}
		break;

	case 176:
		if ( pixel_14_aa == true ) {
			ui->frame_14_aa->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_14_aa->setAutoFillBackground(true);
			pixel_14_aa = false;
		}
		break;

	case 177:
		if ( pixel_14_gg == true ) {
			ui->frame_14_gg->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_14_gg->setAutoFillBackground(true);
			pixel_14_gg = false;
		}
		break;

	case 178:
		if ( pixel_14_dd == true ) {
			ui->frame_14_dd->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_14_dd->setAutoFillBackground(true);
			pixel_14_dd = false;
		}
		break;

	case 179:
		if ( pixel_14_pp == true ) {
			ui->frame_14_pp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_14_pp->setAutoFillBackground(true);
			pixel_14_pp = false;
		}
		break;

	case 180:
		if ( pixel_15_f == true ) {
			ui->frame_15_f->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_15_f->setAutoFillBackground(true);
			pixel_15_f = false;
		}
		break;

	case 181:
		if ( pixel_15_e == true ) {
			ui->frame_15_e->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_15_e->setAutoFillBackground(true);
			pixel_15_e = false;
		}
		break;

	case 182:
		if ( pixel_15_a == true ) {
			ui->frame_15_a->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_15_a->setAutoFillBackground(true);
			pixel_15_a = false;
		}
		break;

	case 183:
		if ( pixel_15_g == true ) {
			ui->frame_15_g->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_15_g->setAutoFillBackground(true);
			pixel_15_g = false;
		}
		break;

	case 184:
		if ( pixel_15_d == true ) {
			ui->frame_15_d->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_15_d->setAutoFillBackground(true);
			pixel_15_d = false;
		}
		break;

	case 185:
		if ( pixel_15_dp == true ) {
			ui->frame_15_dp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_15_dp->setAutoFillBackground(true);
			pixel_15_dp = false;
		}
		break;

	case 186:
		if ( pixel_15_b == true ) {
			ui->frame_15_b->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_15_b->setAutoFillBackground(true);
			pixel_15_b = false;
		}
		break;

	case 187:
		if ( pixel_15_c == true ) {
			ui->frame_15_c->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);"));
			ui->frame_15_c->setAutoFillBackground(true);
			pixel_15_c = false;
		}
		break;

	default:
		ui->label->setText("no Point");
		break;
 	}	
}

void Display::setPointAll() {
	for (uint8_t point = 0; point < 188; point += 1) {
		setPoint_new(point);
	}
}

void Display::clearPointAll() {
	for (uint8_t point = 0; point < 188; point += 1) {
		clearPoint_new(point);
	}
}

/*
void Display::DisplayDigit() {
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
*/

void Display::DisplayDigit_new() {
	uint8_t andOperator = 1;
	uint8_t point = 0;
	uint8_t test_minus = 8;
	uint8_t test_blank = 0;
	uint8_t shift_left = 0;
	uint8_t diplay_out = 0;

	clearPointAll();

	for (uint8_t i = 0; i < 16; i += 1) {
		if ((dispBuffer[i] & 223) == 192) {
			shift_left += 6;
			if (i > 0) {
				if ((dispBuffer[i - 1] & 223) == 192) {
					shift_left -= 6;
				}
			}
		}
		if (i > 1) {
			if (i < 12) {
				if (dispBuffer[i + 1] == test_blank) {
					if (dispBuffer[i] == test_minus) {
						dispBuffer[i + 1] = test_minus;
						dispBuffer[i] = test_blank;
					}
				}
			}
		}

		switch (i) {
		case 0:
		case 2:
		case 13:
			shift_left = 0;
			break;
		}

		diplay_out = dispBuffer[i];

		for (uint8_t j = 0; j < 8; j += 1) {
			point  = i;
			point *= 12;
			point += j;

			point -= shift_left;

			switch (diplay_out & andOperator) {

			case 0:
				break;

			case 1:
			case 2:
			case 4:
			case 8:
			case 16:
			case 32:
			case 64:
			case 128:
				setPoint_new(point);
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
		DisplayDigit_new();
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
	// checkBox_komp_on();
}

void Display::run_K1000_Anztest()
{
	myK1003->run_K1000_Anztest();
	// checkBox_komp_on();
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

void Display::checkBox_komp_on() {
	if (ui->checkBox_komp->isChecked() == false) {
		ui->checkBox_komp->click();
	}
}

void Display::checkBox_komp_off() {
	if (ui->checkBox_komp->isChecked() == true) {
		ui->checkBox_komp->click();
		ui->checkBox_komp->click();
	}
}

void Display::checkBox_bes_on() {
	if (ui->checkBox_komp->isChecked() == false) {
		if (ui->checkBox_bes->isChecked() == false) {
			ui->checkBox_bes->click();
		}
	}
}

void Display::checkBox_bes_off() {
	if (ui->checkBox_bes->isChecked() == true) {
		ui->checkBox_bes->click();
		ui->checkBox_bes->click();
	}
}

void Display::checkBox_stop_on() {
	if (ui->checkBox_stop->isChecked() == false) {
		ui->checkBox_stop->click();
	}
}

void Display::checkBox_stop_off() {
	if (ui->checkBox_stop->isChecked() == true) {
		ui->checkBox_stop->click();
		ui->checkBox_stop->click();
	}
}

void Display::checkBox_grd__on() {
	if (ui->checkBox_grd_on->isChecked() == false) {
		ui->checkBox_grd_on->click();
	}
}

void Display::checkBox_grd__off() {
	if (ui->checkBox_grd_on->isChecked() == true) {
		ui->checkBox_grd_on->click();
		ui->checkBox_grd_on->click();
	}
}

void Display::checkBox_ngrd__on() {
	if (ui->checkBox_ngrd_on->isChecked() == false) {
		ui->checkBox_ngrd_on->click();
	}
}

void Display::checkBox_ngrd__off() {
	if (ui->checkBox_ngrd_on->isChecked() == true) {
		ui->checkBox_ngrd_on->click();
		ui->checkBox_ngrd_on->click();
	}
}
