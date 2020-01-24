#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Display.h"
// #include "mytimer.h"
// #include "Calculator.h"

MainWindow::MainWindow(QWidget* parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)

{
	myDisplay = new Display(ui);
	ui->setupUi(this);

	/*
	timer = new QTimer();
	connect(timer, SIGNAL(timeout()), this, SLOT(slotTimerAlarm()));
	timer->start(1000);
	*/

	QObject::connect(
		ui->toolButton_003, SIGNAL(pressed()),
		this, SLOT(Button_003_pressed())
	);
	QObject::connect(
		ui->toolButton_003, SIGNAL(released()),
		this, SLOT(Button_003_released())
	);

	QObject::connect(
		ui->toolButton_013, SIGNAL(pressed()),
		this, SLOT(Button_013_pressed())
	);
	QObject::connect(
		ui->toolButton_013, SIGNAL(released()),
		this, SLOT(Button_013_released())
	);

	QObject::connect(
		ui->toolButton_023, SIGNAL(pressed()),
		this, SLOT(Button_023_pressed())
	);
	QObject::connect(
		ui->toolButton_023, SIGNAL(released()),
		this, SLOT(Button_023_released())
	);

	QObject::connect(
		ui->toolButton_004, SIGNAL(pressed()),
		this, SLOT(Button_004_pressed())
	);
	QObject::connect(
		ui->toolButton_004, SIGNAL(released()),
		this, SLOT(Button_004_released())
	);

	QObject::connect(
		ui->toolButton_014, SIGNAL(pressed()),
		this, SLOT(Button_014_pressed())
	);
	QObject::connect(
		ui->toolButton_014, SIGNAL(released()),
		this, SLOT(Button_014_released())
	);

	QObject::connect(
		ui->toolButton_024, SIGNAL(pressed()),
		this, SLOT(Button_024_pressed())
	);
	QObject::connect(
		ui->toolButton_024, SIGNAL(released()),
		this, SLOT(Button_024_released())
	);

	QObject::connect(
		ui->toolButton_005, SIGNAL(pressed()),
		this, SLOT(Button_005_pressed())
	);
	QObject::connect(
		ui->toolButton_005, SIGNAL(released()),
		this, SLOT(Button_005_released())
	);

	QObject::connect(
		ui->toolButton_015, SIGNAL(pressed()),
		this, SLOT(Button_015_pressed())
	);
	QObject::connect(
		ui->toolButton_015, SIGNAL(released()),
		this, SLOT(Button_015_released())
	);

	QObject::connect(
		ui->toolButton_006, SIGNAL(pressed()),
		this, SLOT(Button_006_pressed())
	);
	QObject::connect(
		ui->toolButton_006, SIGNAL(released()),
		this, SLOT(Button_006_released())
	);

	QObject::connect(
		ui->toolButton_016, SIGNAL(pressed()),
		this, SLOT(Button_016_pressed())
	);
	QObject::connect(
		ui->toolButton_016, SIGNAL(released()),
		this, SLOT(Button_016_released())
	);

	QObject::connect(
		ui->toolButton_026, SIGNAL(pressed()),
		this, SLOT(Button_026_pressed())
	);
	QObject::connect(
		ui->toolButton_026, SIGNAL(released()),
		this, SLOT(Button_026_released())
	);

	QObject::connect(
		ui->toolButton_025, SIGNAL(pressed()),
		this, SLOT(Button_025_pressed())
	);
	QObject::connect(
		ui->toolButton_025, SIGNAL(released()),
		this, SLOT(Button_025_released())
	);

	QObject::connect(
		ui->toolButton_007, SIGNAL(pressed()),
		this, SLOT(Button_007_pressed())
	);
	QObject::connect(
		ui->toolButton_007, SIGNAL(released()),
		this, SLOT(Button_007_released())
	);

	QObject::connect(
		ui->toolButton_017, SIGNAL(pressed()),
		this, SLOT(Button_017_pressed())
	);
	QObject::connect(
		ui->toolButton_017, SIGNAL(released()),
		this, SLOT(Button_017_released())
	);

	QObject::connect(
		ui->toolButton_027, SIGNAL(pressed()),
		this, SLOT(Button_027_pressed())
	);
	QObject::connect(
		ui->toolButton_027, SIGNAL(released()),
		this, SLOT(Button_027_released())
	);

	QObject::connect(
		ui->toolButton_053, SIGNAL(pressed()),
		this, SLOT(Button_053_pressed())
	);
	QObject::connect(
		ui->toolButton_053, SIGNAL(released()),
		this, SLOT(Button_053_released())
	);

	QObject::connect(
		ui->toolButton_054, SIGNAL(pressed()),
		this, SLOT(Button_054_pressed())
	);
	QObject::connect(
		ui->toolButton_054, SIGNAL(released()),
		this, SLOT(Button_054_released())
	);

	QObject::connect(
		ui->toolButton_055, SIGNAL(pressed()),
		this, SLOT(Button_055_pressed())
	);
	QObject::connect(
		ui->toolButton_055, SIGNAL(released()),
		this, SLOT(Button_055_released())
	);

	QObject::connect(
		ui->toolButton_056, SIGNAL(pressed()),
		this, SLOT(Button_056_pressed())
	);
	QObject::connect(
		ui->toolButton_056, SIGNAL(released()),
		this, SLOT(Button_056_released())
	);

	QObject::connect(
		ui->toolButton_057, SIGNAL(pressed()),
		this, SLOT(Button_057_pressed())
	);
	QObject::connect(
		ui->toolButton_057, SIGNAL(released()),
		this, SLOT(Button_057_released())
	);

	QObject::connect(
		ui->toolButton_063, SIGNAL(pressed()),
		this, SLOT(Button_063_pressed())
	);
	QObject::connect(
		ui->toolButton_063, SIGNAL(released()),
		this, SLOT(Button_063_released())
	);

	QObject::connect(
		ui->toolButton_064, SIGNAL(pressed()),
		this, SLOT(Button_064_pressed())
	);
	QObject::connect(
		ui->toolButton_064, SIGNAL(released()),
		this, SLOT(Button_064_released())
	);

	QObject::connect(
		ui->toolButton_065, SIGNAL(pressed()),
		this, SLOT(Button_065_pressed() )
	);
	QObject::connect(
		ui->toolButton_065, SIGNAL(released()),
		this, SLOT(Button_065_released())
	);

	QObject::connect(
		ui->toolButton_066, SIGNAL(pressed()),
		this, SLOT(Button_066_pressed())
	);
	QObject::connect(
		ui->toolButton_066, SIGNAL(released()),
		this, SLOT(Button_066_released())
	);

	QObject::connect(
		ui->toolButton_067, SIGNAL(pressed()),
		this, SLOT(Button_067_pressed())
	);
	QObject::connect(
		ui->toolButton_067, SIGNAL(released()),
		this, SLOT(Button_067_released())
	);

	QObject::connect(
		ui->toolButton_071, SIGNAL(pressed()),
		this, SLOT(Button_071_pressed())
	);
	QObject::connect(
		ui->toolButton_071, SIGNAL(released()),
		this, SLOT(Button_071_released())
	);

	QObject::connect(
		ui->toolButton_073, SIGNAL(pressed()),
		this, SLOT(Button_073_pressed())
	);
	QObject::connect(
		ui->toolButton_073, SIGNAL(released()),
		this, SLOT(Button_073_released())
	);

	QObject::connect(
		ui->toolButton_074, SIGNAL(pressed()),
		this, SLOT(Button_074_pressed())
	);
	QObject::connect(
		ui->toolButton_074, SIGNAL(released()),
		this, SLOT(Button_074_released())
	);

	QObject::connect(
		ui->toolButton_075, SIGNAL(pressed()),
		this, SLOT(Button_075_pressed())
	);
	QObject::connect(
		ui->toolButton_075, SIGNAL(released()),
		this, SLOT(Button_075_released())
	);

	QObject::connect(
		ui->toolButton_076, SIGNAL(pressed()),
		this, SLOT(Button_076_pressed())
	);
	QObject::connect(
		ui->toolButton_076, SIGNAL(released()),
		this, SLOT(Button_076_released())
	);

	QObject::connect(
		ui->toolButton_077, SIGNAL(pressed()),
		this, SLOT(Button_077_pressed())
	);
	QObject::connect(
		ui->toolButton_077, SIGNAL(released()),
		this, SLOT(Button_077_released())
	);

	QObject::connect(
		ui->toolButton_101, SIGNAL(pressed()),
		this, SLOT(Button_101_pressed())
	);
	QObject::connect(
		ui->toolButton_101, SIGNAL(released()),
		this, SLOT(Button_101_released())
	);

	QObject::connect(
		ui->toolButton_103, SIGNAL(pressed()),
		this, SLOT(Button_103_pressed())
	);
	QObject::connect(
		ui->toolButton_103, SIGNAL(released()),
		this, SLOT(Button_103_released())
	);

	QObject::connect(
		ui->toolButton_104, SIGNAL(pressed()),
		this, SLOT(Button_104_pressed())
	);
	QObject::connect(
		ui->toolButton_104, SIGNAL(released()),
		this, SLOT(Button_104_released())
	);

	QObject::connect(
		ui->toolButton_105, SIGNAL(pressed()),
		this, SLOT(Button_105_pressed())
	);
	QObject::connect(
		ui->toolButton_105, SIGNAL(released()),
		this, SLOT(Button_105_released())
	);

	QObject::connect(
		ui->toolButton_106, SIGNAL(pressed()),
		this, SLOT(Button_106_pressed())
	);
	QObject::connect(
		ui->toolButton_106, SIGNAL(released()),
		this, SLOT(Button_106_released())
	);

	QObject::connect(
		ui->toolButton_107, SIGNAL(pressed()),
		this, SLOT(Button_107_pressed())
	);
	QObject::connect(
		ui->toolButton_107, SIGNAL(released()),
		this, SLOT(Button_107_released())
	);

	QObject::connect(
		ui->toolButton_111, SIGNAL(pressed()),
		this, SLOT(Button_111_pressed())
	);
	QObject::connect(
		ui->toolButton_111, SIGNAL(released()),
		this, SLOT(Button_111_released())
	);

	QObject::connect(
		ui->toolButton_113, SIGNAL(pressed()),
		this, SLOT(Button_113_pressed())
	);
	QObject::connect(
		ui->toolButton_113, SIGNAL(released()),
		this, SLOT(Button_113_released())
	);

	QObject::connect(
		ui->toolButton_114, SIGNAL(pressed()),
		this, SLOT(Button_114_pressed())
	);
	QObject::connect(
		ui->toolButton_114, SIGNAL(released()),
		this, SLOT(Button_114_released())
	);

	QObject::connect(
		ui->toolButton_115, SIGNAL(pressed()),
		this, SLOT(Button_115_pressed())
	);
	QObject::connect(
		ui->toolButton_115, SIGNAL(released()),
		this, SLOT(Button_115_released())
	);

	QObject::connect(
		ui->toolButton_116, SIGNAL(pressed()),
		this, SLOT(Button_116_pressed())
	);
	QObject::connect(
		ui->toolButton_116, SIGNAL(released()),
		this, SLOT(Button_116_released())
	);

	QObject::connect(
		ui->toolButton_117, SIGNAL(pressed()),
		this, SLOT(Button_117_pressed())
	);
	QObject::connect(
		ui->toolButton_117, SIGNAL(released()),
		this, SLOT(Button_117_released())
	);

	QObject::connect(
		ui->toolButton_121, SIGNAL(pressed()),
		this, SLOT(Button_121_pressed())
	);
	QObject::connect(
		ui->toolButton_121, SIGNAL(released()),
		this, SLOT(Button_121_released())
	);

	QObject::connect(
		ui->toolButton_123, SIGNAL(pressed()),
		this, SLOT(Button_123_pressed())
	);
	QObject::connect(
		ui->toolButton_123, SIGNAL(released()),
		this, SLOT(Button_123_released())
	);

	QObject::connect(
		ui->toolButton_124, SIGNAL(pressed()),
		this, SLOT(Button_124_pressed())
	);
	QObject::connect(
		ui->toolButton_124, SIGNAL(released()),
		this, SLOT(Button_124_released())
	);

	QObject::connect(
		ui->toolButton_125, SIGNAL(pressed()),
		this, SLOT(Button_125_pressed())
	);
	QObject::connect(
		ui->toolButton_125, SIGNAL(released()),
		this, SLOT(Button_125_released())
	);

	QObject::connect(
		ui->toolButton_126, SIGNAL(pressed()),
		this, SLOT(Button_126_pressed())
	);
	QObject::connect(
		ui->toolButton_126, SIGNAL(released()),
		this, SLOT(Button_126_released())
	);

	QObject::connect(
		ui->toolButton_127, SIGNAL(pressed()),
		this, SLOT(Button_127_pressed())
	);
	QObject::connect(
		ui->toolButton_127, SIGNAL(released()),
		this, SLOT(Button_127_released())
	);

	QObject::connect(
		ui->toolButton_133, SIGNAL(pressed()),
		this, SLOT(Button_133_pressed())
	);
	QObject::connect(
		ui->toolButton_133, SIGNAL(released()),
		this, SLOT(Button_133_released())
	);

	QObject::connect(
		ui->toolButton_135, SIGNAL(pressed()),
		this, SLOT(Button_135_pressed())
	);
	QObject::connect(
		ui->toolButton_135, SIGNAL(released()),
		this, SLOT(Button_135_released())
	);

	QObject::connect(
		ui->toolButton_137, SIGNAL(pressed()),
		this, SLOT(Button_137_pressed())
	);
	QObject::connect(
		ui->toolButton_137, SIGNAL(released()),
		this, SLOT(Button_137_released())
	);

	QObject::connect(
		ui->toolButton_141, SIGNAL(pressed()),
		this, SLOT(Button_141_pressed())
	);
	QObject::connect(
		ui->toolButton_141, SIGNAL(released()),
		this, SLOT(Button_141_released())
	);

	QObject::connect(
		ui->toolButton_142, SIGNAL(pressed()),
		this, SLOT(Button_142_pressed())
	);
	QObject::connect(
		ui->toolButton_142, SIGNAL(released()),
		this, SLOT(Button_142_released())
	);

	QObject::connect(
		ui->toolButton_143, SIGNAL(pressed()),
		this, SLOT(Button_143_pressed())
	);
	QObject::connect(
		ui->toolButton_143, SIGNAL(released()),
		this, SLOT(Button_143_released())
	);

	QObject::connect(
		ui->toolButton_144, SIGNAL(pressed()),
		this, SLOT(Button_144_pressed())
	);
	QObject::connect(
		ui->toolButton_144, SIGNAL(released()),
		this, SLOT(Button_144_released())
	);

	QObject::connect(
		ui->toolButton_145, SIGNAL(pressed()),
		this, SLOT(Button_145_pressed())
	);
	QObject::connect(
		ui->toolButton_145, SIGNAL(released()),
		this, SLOT(Button_145_released())
	);

	QObject::connect(
		ui->toolButton_146, SIGNAL(pressed()),
		this, SLOT(Button_146_pressed())
	);
	QObject::connect(
		ui->toolButton_146, SIGNAL(released()),
		this, SLOT(Button_146_released())
	);

	QObject::connect(
		ui->toolButton_147, SIGNAL(pressed()),
		this, SLOT(Button_147_pressed())
	);
	QObject::connect(
		ui->toolButton_147, SIGNAL(released()),
		this, SLOT(Button_147_released())
	);

	QObject::connect(
		ui->toolButton_151, SIGNAL(pressed()),
		this, SLOT(Button_151_pressed())
	);
	QObject::connect(
		ui->toolButton_151, SIGNAL(released()),
		this, SLOT(Button_151_released())
	);

	QObject::connect(
		ui->toolButton_152, SIGNAL(pressed()),
		this, SLOT(Button_152_pressed())
	);
	QObject::connect(
		ui->toolButton_152, SIGNAL(released()),
		this, SLOT(Button_152_released())
	);

	QObject::connect(
		ui->toolButton_153, SIGNAL(pressed()),
		this, SLOT(Button_153_pressed())
	);
	QObject::connect(
		ui->toolButton_153, SIGNAL(released()),
		this, SLOT(Button_153_released())
	);

	QObject::connect(
		ui->toolButton_154, SIGNAL(pressed()),
		this, SLOT(Button_154_pressed())
	);
	QObject::connect(
		ui->toolButton_154, SIGNAL(released()),
		this, SLOT(Button_154_released())
	);

	QObject::connect(
		ui->toolButton_155, SIGNAL(pressed()),
		this, SLOT(Button_155_pressed())
	);
	QObject::connect(
		ui->toolButton_155, SIGNAL(released()),
		this, SLOT(Button_155_released())
	);

	QObject::connect(
		ui->toolButton_156, SIGNAL(pressed()),
		this, SLOT(Button_156_pressed())
	);
	QObject::connect(
		ui->toolButton_156, SIGNAL(released()),
		this, SLOT(Button_156_released())
	);

	QObject::connect(
		ui->toolButton_157, SIGNAL(pressed()),
		this, SLOT(Button_157_pressed())
	);
	QObject::connect(
		ui->toolButton_157, SIGNAL(released()),
		this, SLOT(Button_157_released())
	);

	QObject::connect(
		ui->toolButton_161, SIGNAL(pressed()),
		this, SLOT(Button_161_pressed())
	);
	QObject::connect(
		ui->toolButton_161, SIGNAL(released()),
		this, SLOT(Button_161_released())
	);

	QObject::connect(
		ui->toolButton_162, SIGNAL(pressed()),
		this, SLOT(Button_162_pressed())
	);
	QObject::connect(
		ui->toolButton_162, SIGNAL(released()),
		this, SLOT(Button_162_released())
	);

	QObject::connect(
		ui->toolButton_163, SIGNAL(pressed()),
		this, SLOT(Button_163_pressed())
	);
	QObject::connect(
		ui->toolButton_163, SIGNAL(released()),
		this, SLOT(Button_163_released())
	);

	QObject::connect(
		ui->toolButton_164, SIGNAL(pressed()),
		this, SLOT(Button_164_pressed())
	);
	QObject::connect(
		ui->toolButton_164, SIGNAL(released()),
		this, SLOT(Button_164_released())
	);

	QObject::connect(
		ui->toolButton_165, SIGNAL(pressed()),
		this, SLOT(Button_165_pressed())
	);
	QObject::connect(
		ui->toolButton_165, SIGNAL(released()),
		this, SLOT(Button_165_released())
	);

	QObject::connect(
		ui->toolButton_166, SIGNAL(pressed()),
		this, SLOT(Button_166_pressed())
	);
	QObject::connect(
		ui->toolButton_166, SIGNAL(released()),
		this, SLOT(Button_166_released())
	);

	QObject::connect(
		ui->toolButton_167, SIGNAL(pressed()),
		this, SLOT(Button_167_pressed())
	);
	QObject::connect(
		ui->toolButton_167, SIGNAL(released()),
		this, SLOT(Button_167_released())
	);

	QObject::connect(
		ui->commandLink_Button_on_off, SIGNAL(pressed()),
		this, SLOT(Button_on_off_pressed())
	);
	QObject::connect(
		ui->commandLink_Button_on_off, SIGNAL(released()),
		this, SLOT(Button_on_off_released())
	);
}

MainWindow::~MainWindow()
{
	delete ui;
}

/*
void MainWindow::slotTimerAlarm()
{
	// * Every second update data on the current time
	// * Restart timer is not required
	// * 
	ui->label->setText(QTime::currentTime().toString("hh:mm:ss"));
}
*/

void MainWindow::Button_003_pressed()
{
	ui->toolButton_003->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_003p_920.png)"));

	myDisplay->KeyPressed(36);
	// _sleep(2);

	// ui->label->setText("Pressed");
};

void MainWindow::Button_003_released()
{
	ui->toolButton_003->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_003_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_013_pressed()
{
	ui->toolButton_013->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_013p_920.png)"));

	myDisplay->KeyPressed(37);
	// _sleep(2);

	// ui->label->setText("Pressed");
};

void MainWindow::Button_013_released()
{
	ui->toolButton_013->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_013_920.png)"));

	// ui->label->setText("Released");
}; 

void MainWindow::Button_023_pressed()
{
	ui->toolButton_023->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_023p_920.png)"));

	myDisplay->KeyPressed(38);
	// _sleep(2);

	// ui->label->setText("Pressed");
};

void MainWindow::Button_023_released()
{
	ui->toolButton_023->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_023_920.png)"));

	// ui->label->setText("Released");
}; 

void MainWindow::Button_004_pressed()
{
	ui->toolButton_004->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_004p_920.png)"));

	myDisplay->KeyPressed(48);

	// ui->label->setText("Pressed");
};

void MainWindow::Button_004_released()
{
	ui->toolButton_004->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_004_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_014_pressed()
{
	ui->toolButton_014->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_014p_920.png)"));

	myDisplay->KeyPressed(49);
	// _sleep(2);

	// ui->label->setText("Pressed");
};

void MainWindow::Button_014_released()
{
	ui->toolButton_014->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_014_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_024_pressed()
{
	ui->toolButton_024->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_024p_920.png)"));

	myDisplay->KeyPressed(50);
	// _sleep(2);

	// ui->label->setText("Pressed");
};

void MainWindow::Button_024_released()
{
	ui->toolButton_024->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_024_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_005_pressed()
{
	ui->toolButton_005->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_005p_920.png)"));

	myDisplay->KeyPressed(60);  // 60
	// _sleep(2);

	// ui->label->setText("Pressed");
};

void MainWindow::Button_005_released()
{
	ui->toolButton_005->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_005_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_015_pressed()
{
	ui->toolButton_015->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_015p_920.png)"));

	myDisplay->KeyPressed(61);  // 61
	// _sleep(2);

	// ui->label->setText("Pressed");
};

void MainWindow::Button_015_released()
{
	ui->toolButton_015->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_015_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_025_pressed()
{
	ui->toolButton_025->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_025p_920.png)"));

	myDisplay->KeyPressed(62);  // 62
	// _sleep(2);

	// ui->label->setText("Pressed");
};

void MainWindow::Button_025_released()
{
	ui->toolButton_025->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_025_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_006_pressed()
{
	ui->toolButton_006->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_006p_920.png)"));

	if (Button_017_count > 0) {
		myDisplay->KeyPressed(85);  // 85
		// _sleep(2);
	}

	if (Button_007_count > 0) {
		myDisplay->KeyPressed(84);  // 84
		// _sleep(2);
	}

	myDisplay->KeyPressed(72);
	// _sleep(2);

	// ui->label->setText("Pressed");
};

void MainWindow::Button_006_released()
{
	ui->toolButton_006->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_006_920.png)"));

	if (Button_007_count > 0) {
		Button_007_count = 0;

		ui->toolButton_007->setStyleSheet(QString::fromUtf8(
			"background-image: url(:/images/images/button_007_920.png)"));
	}

	if (Button_017_count > 0) {
		Button_017_count = 0;

		ui->toolButton_017->setStyleSheet(QString::fromUtf8(
			"background-image: url(:/images/images/button_017_920.png)"));
	}
	// ui->label->setText("Released");
};

void MainWindow::Button_016_pressed()
{
	ui->toolButton_016->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_016p_920.png)"));

	if (Button_017_count > 0) {
		myDisplay->KeyPressed(85);  // 85
		// _sleep(2);
	}

	if (Button_007_count > 0) {
		myDisplay->KeyPressed(84);  // 84
		// _sleep(2);
	}

	myDisplay->KeyPressed(73);
	// _sleep(2);

	// ui->label->setText("Pressed");
};

void MainWindow::Button_016_released()
{
	ui->toolButton_016->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_016_920.png)"));

	if (Button_007_count > 0) {
		Button_007_count = 0;

		ui->toolButton_007->setStyleSheet(QString::fromUtf8(
			"background-image: url(:/images/images/button_007_920.png)"));
	}

	if (Button_017_count > 0) {
		Button_017_count = 0;

		ui->toolButton_017->setStyleSheet(QString::fromUtf8(
			"background-image: url(:/images/images/button_017_920.png)"));
	}
	// ui->label->setText("Released");
};

void MainWindow::Button_026_pressed()
{
	ui->toolButton_026->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_026p_920.png)"));

	if (Button_017_count > 0) {
		myDisplay->KeyPressed(85);  // 85
		// _sleep(2);
	}

	if (Button_007_count > 0) {
		myDisplay->KeyPressed(84);  // 84
		// _sleep(2);
	}

	myDisplay->KeyPressed(74);
	// _sleep(2);

	// ui->label->setText("Pressed");
};

void MainWindow::Button_026_released()
{
	ui->toolButton_026->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_026_920.png)"));

	if (Button_007_count > 0) {
		Button_007_count = 0;

		ui->toolButton_007->setStyleSheet(QString::fromUtf8(
			"background-image: url(:/images/images/button_007_920.png)"));
	}

	if (Button_017_count > 0) {
		Button_017_count = 0;

		ui->toolButton_017->setStyleSheet(QString::fromUtf8(
			"background-image: url(:/images/images/button_017_920.png)"));
	}
	// ui->label->setText("Released");
};

void MainWindow::Button_007_pressed()
{
	Button_007_count += 1;

	ui->toolButton_007->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_007p_920.png)"));

	myDisplay->KeyPressed(84);  // 84
	// _sleep(2);

	// ui->label->setText("Pressed");
};

void MainWindow::Button_007_released()
{
	Button_007_count += 1;

	if (Button_007_count > 3) {
		Button_007_count = 0;

		ui->toolButton_007->setStyleSheet(QString::fromUtf8(
			"background-image: url(:/images/images/button_007_920.png)"));
	}
	// ui->label->setText("Released");
};

void MainWindow::Button_017_pressed()
{
	Button_017_count += 1;

	ui->toolButton_017->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_017p_920.png)"));

	// myDisplay->KeyPressed(85);  // 85

	// ui->label->setText("Pressed");
};

void MainWindow::Button_017_released()
{
	Button_017_count += 1;

	if (Button_017_count > 3) {
		Button_017_count = 0;

		ui->toolButton_017->setStyleSheet(QString::fromUtf8(
			"background-image: url(:/images/images/button_017_920.png)"));
	}

	// ui->label->setText("Released");
};

void MainWindow::Button_027_pressed()
{
	ui->toolButton_027->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_027p_920.png)"));

	myDisplay->KeyPressed(86);  // 86

	// ui->label->setText("Pressed");
};

void MainWindow::Button_027_released()
{
	ui->toolButton_027->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_027_920.png)"));

	// ->label->setText("Released");
};

void MainWindow::Button_053_pressed()
{
	ui->toolButton_053->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_053p_920.png)"));

	myDisplay->KeyPressed(39); // o.k.
	// myDisplay->unaryOperatorClicked_1_x(); // 39

	// ui->label->setText("Pressed");
};

void MainWindow::Button_053_released()
{
	ui->toolButton_053->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_053_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_054_pressed()
{
	ui->toolButton_054->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_054p_920.png)"));

	myDisplay->KeyPressed(51); // o.k.
	// myDisplay->unaryOperatorClicked_pow_2();

	// ui->label->setText("Pressed");
};
void MainWindow::Button_054_released()
{
	ui->toolButton_054->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_054_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_055_pressed()
{
	ui->toolButton_055->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_055p_920.png)"));

	myDisplay->KeyPressed(63); // o.k.
	// myDisplay->unaryOperatorClicked_sqrt();   // 63

	// ui->label->setText("Pressed");
};
void MainWindow::Button_055_released()
{
	ui->toolButton_055->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_055_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_056_pressed()
{
	ui->toolButton_056->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_056p_920.png)"));

	myDisplay->KeyPressed(75);

	// ui->label->setText("Pressed");
};

void MainWindow::Button_056_released()
{
	ui->toolButton_056->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_056_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_057_pressed()
{
	ui->toolButton_057->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_057p_920.png)"));

	myDisplay->KeyPressed(87);  // 87

	// ui->label->setText("Pressed");
};

void MainWindow::Button_057_released()
{
	ui->toolButton_057->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_057_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_063_pressed()
{
	ui->toolButton_063->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_063p_920.png)"));

	if (ui->checkBox_on_off->isChecked() == true) {
		myDisplay->KeyPressed(40); // 40
	}
	// else {
		// myDisplay->setPointAll();
	// }

	// ui->label->setText("Pressed");
};

void MainWindow::Button_063_released()
{
	ui->toolButton_063->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_063_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_064_pressed()
{
	ui->toolButton_064->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_064p_920.png)"));

	if (ui->checkBox_on_off->isChecked() == true) {
		myDisplay->KeyPressed(52); // 52
	}
	// else {
		// myDisplay->clearPointAll();
	// }

	// ui->label->setText("Pressed");
};

void MainWindow::Button_064_released()
{
	ui->toolButton_064->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_064_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_065_pressed()
{
	ui->toolButton_065->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_065p_920.png)"));

	// myDisplay->dispBufferTest();

	myDisplay->KeyPressed(64);  // 64

	// ui->label->setText("Pressed");
};

void MainWindow::Button_065_released()
{
	ui->toolButton_065->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_065_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_066_pressed()
{
	ui->toolButton_066->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_066p_920.png)"));

	myDisplay->KeyPressed(76);

	// ui->label->setText("Pressed");
};

void MainWindow::Button_066_released()
{
	ui->toolButton_066->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_066_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_067_pressed()
{
	ui->toolButton_067->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_067p_920.png)"));

	myDisplay->KeyPressed(88);  // 88

	// ui->label->setText("Pressed");
};

void MainWindow::Button_067_released()
{
	ui->toolButton_067->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_067_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_071_pressed()
{
	ui->toolButton_071->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_071p_920.png)"));

	myDisplay->KeyPressed(12);

	// ui->label->setText("Pressed");
};

void MainWindow::Button_071_released()
{
	ui->toolButton_071->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_071_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_073_pressed()
{
	ui->toolButton_073->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_073p_920.png)"));

	myDisplay->clear(); // 41

	// ui->label->setText("Pressed");
};
void MainWindow::Button_073_released()
{
	ui->toolButton_073->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_073_920.png)"));

	if (Button_113_count > 0) {
		Button_113_count = 0;

		ui->toolButton_113->setStyleSheet(QString::fromUtf8(
			"background-image: url(:/images/images/button_113_920.png)"));
	}
	// ui->label->setText("Released");
};

void MainWindow::Button_074_pressed()
{
	ui->toolButton_074->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_074p_920.png)"));

	myDisplay->KeyPressed(53); // o.k.
	// myDisplay->checkBox_komp_on(); // o.k.
	// myDisplay->digitClicked_7();

	// ui->label->setText("Pressed");
};
void MainWindow::Button_074_released()
{
	ui->toolButton_074->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_074_920.png)"));

	if (Button_113_count > 0) {
		Button_113_count = 0;

		ui->toolButton_113->setStyleSheet(QString::fromUtf8(
			"background-image: url(:/images/images/button_113_920.png)"));
	}
	if (Button_157_count > 0) {
		if (ui->checkBox_komp->isChecked() == false) {
			Button_157_count = 0;

			ui->toolButton_157->setStyleSheet(QString::fromUtf8(
				"background-image: url(:/images/images/button_157_920.png)"));
		}
	}
	if (Button_167_count > 0) {
		Button_167_count = 0;

		ui->toolButton_167->setStyleSheet(QString::fromUtf8(
			"background-image: url(:/images/images/button_167_920.png)"));
	}

	// ui->label->setText("Released");
};

void MainWindow::Button_075_pressed()
{
	ui->toolButton_075->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_075p_920.png)"));

	myDisplay->KeyPressed(65); // o.k.
	// myDisplay->checkBox_komp_off(); //  o.k.
	// myDisplay->digitClicked_4();   // 65

	// ui->label->setText("Pressed");
};
void MainWindow::Button_075_released()
{
	ui->toolButton_075->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_075_920.png)"));

	if (Button_113_count > 0) {
		Button_113_count = 0;

		ui->toolButton_113->setStyleSheet(QString::fromUtf8(
			"background-image: url(:/images/images/button_113_920.png)"));
	}
	if (Button_157_count > 0) {
		if (ui->checkBox_komp->isChecked() == false) {
			Button_157_count = 0;

			ui->toolButton_157->setStyleSheet(QString::fromUtf8(
				"background-image: url(:/images/images/button_157_920.png)"));
		}
	}
	if (Button_167_count > 0) {
		Button_167_count = 0;

		ui->toolButton_167->setStyleSheet(QString::fromUtf8(
			"background-image: url(:/images/images/button_167_920.png)"));
	}

	// ui->label->setText("Released");
};

void MainWindow::Button_076_pressed()
{
	ui->toolButton_076->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_076p_920.png)"));

	myDisplay->KeyPressed(77); // o.k.
	// myDisplay->digitClicked_1(); // 77

	// ui->label->setText("Pressed");
};
void MainWindow::Button_076_released()
{
	ui->toolButton_076->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_076_920.png)"));

	if (Button_113_count > 0) {
		Button_113_count = 0;

		ui->toolButton_113->setStyleSheet(QString::fromUtf8(
			"background-image: url(:/images/images/button_113_920.png)"));
	}
	if (Button_157_count > 0) {
		if (ui->checkBox_komp->isChecked() == false) {
			Button_157_count = 0;

			ui->toolButton_157->setStyleSheet(QString::fromUtf8(
				"background-image: url(:/images/images/button_157_920.png)"));
		}
	}
	if (Button_167_count > 0) {
		Button_167_count = 0;

		ui->toolButton_167->setStyleSheet(QString::fromUtf8(
			"background-image: url(:/images/images/button_167_920.png)"));
	}

	// ui->label->setText("Released");
};

void MainWindow::Button_077_pressed()
{
	ui->toolButton_077->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_077p_920.png)"));

	myDisplay->KeyPressed(89); // o.k.
	// _sleep(2);
	// myDisplay->PiClicked();  // 89

	// ui->label->setText("Pressed");
};
void MainWindow::Button_077_released()
{
	ui->toolButton_077->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_077_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_101_pressed()
{
	ui->toolButton_101->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_101p_920.png)"));

	myDisplay->KeyPressed(14);
	// _sleep(2);

	// ui->label->setText("Pressed");
};
void MainWindow::Button_101_released()
{
	ui->toolButton_101->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_101_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_103_pressed()
{
	ui->toolButton_103->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_103p_920.png)"));

	myDisplay->KeyPressed(42); // o.k.
	// _sleep(2);
	// myDisplay->changeSignClicked(); // 42

	// ui->label->setText("Pressed");
};
void MainWindow::Button_103_released()
{
	ui->toolButton_103->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_103_920.png)"));

	if (Button_113_count > 0) {
		Button_113_count = 0;

		ui->toolButton_113->setStyleSheet(QString::fromUtf8(
			"background-image: url(:/images/images/button_113_920.png)"));
	}
	// ui->label->setText("Released");
};

void MainWindow::Button_104_pressed()
{
	ui->toolButton_104->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_104p_920.png)"));

	myDisplay->KeyPressed(54); // o.k.
	// myDisplay->checkBox_stop_on(); // o.k.
	// myDisplay->digitClicked_8();

	// ui->label->setText("Pressed");
};
void MainWindow::Button_104_released()
{
	ui->toolButton_104->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_104_920.png)"));

	if (Button_113_count > 0) {
		Button_113_count = 0;

		ui->toolButton_113->setStyleSheet(QString::fromUtf8(
			"background-image: url(:/images/images/button_113_920.png)"));
	}
	if (Button_157_count > 0) {
		if (ui->checkBox_komp->isChecked() == false) {
			Button_157_count = 0;

			ui->toolButton_157->setStyleSheet(QString::fromUtf8(
				"background-image: url(:/images/images/button_157_920.png)"));
		}
	}
	if (Button_167_count > 0) {
		Button_167_count = 0;

		ui->toolButton_167->setStyleSheet(QString::fromUtf8(
			"background-image: url(:/images/images/button_167_920.png)"));
	}

	// ui->label->setText("Released");
};

void MainWindow::Button_105_pressed()
{
	ui->toolButton_105->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_105p_920.png)"));

	myDisplay->KeyPressed(66); // o.k.
	// myDisplay->checkBox_stop_off(); // o.k.
	// myDisplay->digitClicked_5();  // 66

	// ui->label->setText("Pressed");
};
void MainWindow::Button_105_released()
{
	ui->toolButton_105->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_105_920.png)"));

	if (Button_113_count > 0) {
		Button_113_count = 0;

		ui->toolButton_113->setStyleSheet(QString::fromUtf8(
			"background-image: url(:/images/images/button_113_920.png)"));
	}
	if (Button_157_count > 0) {
		if (ui->checkBox_komp->isChecked() == false) {
			Button_157_count = 0;

			ui->toolButton_157->setStyleSheet(QString::fromUtf8(
				"background-image: url(:/images/images/button_157_920.png)"));
		}
	}
	if (Button_167_count > 0) {
		Button_167_count = 0;

		ui->toolButton_167->setStyleSheet(QString::fromUtf8(
			"background-image: url(:/images/images/button_167_920.png)"));
	}

	// ui->label->setText("Released");
};

void MainWindow::Button_106_pressed()
{
	ui->toolButton_106->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_106p_920.png)"));

	myDisplay->KeyPressed(78); // o.k.
	// myDisplay->digitClicked_2(); // 78

	// ui->label->setText("Pressed");
};
void MainWindow::Button_106_released()
{
	ui->toolButton_106->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_106_920.png)"));

	if (Button_113_count > 0) {
		Button_113_count = 0;

		ui->toolButton_113->setStyleSheet(QString::fromUtf8(
			"background-image: url(:/images/images/button_113_920.png)"));
	}
	if (Button_157_count > 0) {
		if (ui->checkBox_komp->isChecked() == false) {
			Button_157_count = 0;

			ui->toolButton_157->setStyleSheet(QString::fromUtf8(
				"background-image: url(:/images/images/button_157_920.png)"));
		}
	}
	if (Button_167_count > 0) {
		Button_167_count = 0;

		ui->toolButton_167->setStyleSheet(QString::fromUtf8(
			"background-image: url(:/images/images/button_167_920.png)"));
	}

	// ui->label->setText("Released");
};

void MainWindow::Button_107_pressed()
{
	ui->toolButton_107->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_107p_920.png)"));

	myDisplay->KeyPressed(90); // o.k.
	// myDisplay->digitClicked_0();  // 90

	// ui->label->setText("Pressed");
};
void MainWindow::Button_107_released()
{
	ui->toolButton_107->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_107_920.png)"));

	if (Button_113_count > 0) {
		Button_113_count = 0;

		ui->toolButton_113->setStyleSheet(QString::fromUtf8(
			"background-image: url(:/images/images/button_113_920.png)"));
	}
	if (Button_157_count > 0) {
		if (ui->checkBox_komp->isChecked() == false) {
			Button_157_count = 0;

			ui->toolButton_157->setStyleSheet(QString::fromUtf8(
				"background-image: url(:/images/images/button_157_920.png)"));
		}
	}
	if (Button_167_count > 0) {
		Button_167_count = 0;

		ui->toolButton_167->setStyleSheet(QString::fromUtf8(
			"background-image: url(:/images/images/button_167_920.png)"));
	}

	// ui->label->setText("Released");
};

void MainWindow::Button_111_pressed()
{
	ui->toolButton_111->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_111p_920.png)"));

	myDisplay->KeyPressed(16);
	// _sleep(2);

	// ui->label->setText("Pressed");
};
void MainWindow::Button_111_released()
{
	ui->toolButton_111->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_111_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_113_pressed()
{
	Button_113_count += 1;

	ui->toolButton_113->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_113p_920.png)"));

	myDisplay->KeyPressed(43); // 43
	// _sleep(2);

	// ui->label->setText("Pressed");
};
void MainWindow::Button_113_released()
{
	Button_113_count += 1;

	if (Button_113_count > 3) {
		Button_113_count = 0;

		ui->toolButton_113->setStyleSheet(QString::fromUtf8(
			"background-image: url(:/images/images/button_113_920.png)"));
	}

	// ui->label->setText("Released");
};

void MainWindow::Button_114_pressed()
{
	ui->toolButton_114->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_114p_920.png)"));

	myDisplay->KeyPressed(55); // o.k.
	// myDisplay->checkBox_bes_on(); // o.k.
	// myDisplay->digitClicked_9();

	// ui->label->setText("Pressed");
};
void MainWindow::Button_114_released()
{
	ui->toolButton_114->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_114_920.png)"));

	if (Button_113_count > 0) {
		Button_113_count = 0;

		ui->toolButton_113->setStyleSheet(QString::fromUtf8(
			"background-image: url(:/images/images/button_113_920.png)"));
	}
	if (Button_157_count > 0) {
		if (ui->checkBox_komp->isChecked() == false) {
			Button_157_count = 0;

			ui->toolButton_157->setStyleSheet(QString::fromUtf8(
				"background-image: url(:/images/images/button_157_920.png)"));
		}
	}
	if (Button_167_count > 0) {
		Button_167_count = 0;

		ui->toolButton_167->setStyleSheet(QString::fromUtf8(
			"background-image: url(:/images/images/button_167_920.png)"));
	}

	// ui->label->setText("Released");
};

void MainWindow::Button_115_pressed()
{
	ui->toolButton_115->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_115p_920.png)"));

	myDisplay->KeyPressed(67); // o.k.
	// myDisplay->checkBox_bes_off(); // o.k.
	// myDisplay->digitClicked_6();  // 67

	// ui->label->setText("Pressed");
};
void MainWindow::Button_115_released()
{
	ui->toolButton_115->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_115_920.png)"));

	if (Button_113_count > 0) {
		Button_113_count = 0;

		ui->toolButton_113->setStyleSheet(QString::fromUtf8(
			"background-image: url(:/images/images/button_113_920.png)"));
	}
	if (Button_157_count > 0) {
		if (ui->checkBox_komp->isChecked() == false) {
			Button_157_count = 0;

			ui->toolButton_157->setStyleSheet(QString::fromUtf8(
				"background-image: url(:/images/images/button_157_920.png)"));
		}
	}
	if (Button_167_count > 0) {
		Button_167_count = 0;

		ui->toolButton_167->setStyleSheet(QString::fromUtf8(
			"background-image: url(:/images/images/button_167_920.png)"));
	}

	// ui->label->setText("Released");
};

void MainWindow::Button_116_pressed()
{
	ui->toolButton_116->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_116p_920.png)"));

	myDisplay->KeyPressed(79); // o.k.
	// myDisplay->digitClicked_3(); // 79

	// ui->label->setText("Pressed");
};
void MainWindow::Button_116_released()
{
	ui->toolButton_116->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_116_920.png)"));

	if (Button_113_count > 0) {
		Button_113_count = 0;

		ui->toolButton_113->setStyleSheet(QString::fromUtf8(
			"background-image: url(:/images/images/button_113_920.png)"));
	}
	if (Button_157_count > 0) {
		if (ui->checkBox_komp->isChecked() == false) {
			Button_157_count = 0;

			ui->toolButton_157->setStyleSheet(QString::fromUtf8(
				"background-image: url(:/images/images/button_157_920.png)"));
		}
	}
	if (Button_167_count > 0) {
		Button_167_count = 0;

		ui->toolButton_167->setStyleSheet(QString::fromUtf8(
			"background-image: url(:/images/images/button_167_920.png)"));
	}

	// ui->label->setText("Released");
};

void MainWindow::Button_117_pressed()
{
	ui->toolButton_117->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_117p_920.png)"));

	myDisplay->KeyPressed(91); // o.k.
	// myDisplay->pointClicked();  // 91

	// ui->label->setText("Pressed");
};
void MainWindow::Button_117_released()
{
	ui->toolButton_117->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_117_920.png)"));

	if (Button_167_count > 0) {
		Button_167_count = 0;

		ui->toolButton_167->setStyleSheet(QString::fromUtf8(
			"background-image: url(:/images/images/button_167_920.png)"));
	}

	// ui->label->setText("Released");
};

void MainWindow::Button_121_pressed()
{
	ui->toolButton_121->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_121p_920.png)"));

	myDisplay->KeyPressed(18);
	// _sleep(2);

	// ui->label->setText("Pressed");
};

void MainWindow::Button_121_released()
{
	ui->toolButton_121->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_121_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_123_pressed()
{
	ui->toolButton_123->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_123p_920.png)"));

	myDisplay->KeyPressed(44); //  44
	// _sleep(2);
	// myDisplay->OperatorClicked_Div(); // 44

	// ui->label->setText("Pressed");
};
void MainWindow::Button_123_released()
{
	ui->toolButton_123->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_123_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_124_pressed()
{
	ui->toolButton_124->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_124p_920.png)"));

	myDisplay->KeyPressed(56); //  56
	// _sleep(2);
	// myDisplay->OperatorClicked_Mul();  // 56

	// ui->label->setText("Pressed");
};
void MainWindow::Button_124_released()
{
	ui->toolButton_124->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_124_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_125_pressed()
{
	ui->toolButton_125->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_125p_920.png)"));

	myDisplay->KeyPressed(68); //  68
	// _sleep(2);
	// myDisplay->OperatorClicked_Sub();  // 68

	// ui->label->setText("Pressed");
};
void MainWindow::Button_125_released()
{
	ui->toolButton_125->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_125_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_126_pressed()
{
	ui->toolButton_126->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_126p_920.png)"));

	myDisplay->KeyPressed(80); //
	// _sleep(2);
	// myDisplay->OperatorClicked_Add();  // 80

	// ui->label->setText("Pressed");
};
void MainWindow::Button_126_released()
{
	ui->toolButton_126->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_126_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_127_pressed()
{
	ui->toolButton_127->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_127p_920.png)"));

	myDisplay->KeyPressed(92); //
	// _sleep(2);
	// myDisplay->equalClicked();  // 92

	// ui->label->setText("Pressed");
};
void MainWindow::Button_127_released()
{
	ui->toolButton_127->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_127_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_133_pressed()
{
	ui->toolButton_133->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_133p_920.png)"));

	myDisplay->KeyPressed(32);  // *32
	// _sleep(2);

	// ui->label->setText("Pressed");
};
void MainWindow::Button_133_released()
{
	ui->toolButton_133->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_133_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_135_pressed()
{
	ui->toolButton_135->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_135p_920.png)"));

	myDisplay->KeyPressed(31);  //  31

	// ui->label->setText("Pressed");
};

void MainWindow::Button_135_released()
{
	ui->toolButton_135->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_135_920.png)"));

	myDisplay->KeyPressed(23); //  23
	// _sleep(2);

	// ui->label->setText("Released");
};

void MainWindow::Button_137_pressed()
{
	ui->toolButton_137->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_137p_920.png)"));

	// myDisplay->run_K1000_Anztest();

	myDisplay->KeyPressed(30);  // 30

	// ui->label->setText("Pressed");
};

void MainWindow::Button_137_released()
{
	ui->toolButton_137->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_137_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_141_pressed()
{
	ui->toolButton_141->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_141p_920.png)"));

	myDisplay->KeyPressed(21);  //  21
	// _sleep(2);

	// ui->label->setText("Pressed");
};

void MainWindow::Button_141_released()
{
	ui->toolButton_141->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_141_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_142_pressed()
{
	ui->toolButton_142->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_142p_920.png)"));

	myDisplay->KeyPressed(33); //  33
	// _sleep(2);

	// ui->label->setText("Pressed");
};

void MainWindow::Button_142_released()
{
	ui->toolButton_142->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_142_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_143_pressed()
{
	ui->toolButton_143->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_143p_920.png)"));

	myDisplay->KeyPressed(45); //  45
	// _sleep(2);

	// ui->label->setText("Pressed");
};

void MainWindow::Button_143_released()
{
	ui->toolButton_143->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_143_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_144_pressed()
{
	ui->toolButton_144->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_144p_920.png)"));

	myDisplay->KeyPressed(57); //  57
	// _sleep(2);

	// ui->label->setText("Pressed");
};

void MainWindow::Button_144_released()
{
	ui->toolButton_144->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_144_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_145_pressed()
{
	ui->toolButton_145->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_145p_920.png)"));

	myDisplay->KeyPressed(69);   // 69
	// _sleep(2);

	// ui->label->setText("Pressed");
};

void MainWindow::Button_145_released()
{
	ui->toolButton_145->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_145_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_146_pressed()
{
	ui->toolButton_146->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_146p_920.png)"));

	myDisplay->KeyPressed(81); // 81
	// _sleep(2);

	// ui->label->setText("Pressed");
};

void MainWindow::Button_146_released()
{
	ui->toolButton_146->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_146_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_147_pressed()
{
	ui->toolButton_147->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_147p_920.png)"));

	myDisplay->KeyPressed(93);  // 93
	// _sleep(2);

	// ui->label->setText("Pressed");
};

void MainWindow::Button_147_released()
{
	ui->toolButton_147->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_147_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_151_pressed()
{
	ui->toolButton_151->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_151p_920.png)"));

	myDisplay->KeyPressed(22);  //  22
	// _sleep(2);

	// ui->label->setText("Pressed");
};

void MainWindow::Button_151_released()
{
	ui->toolButton_151->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_151_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_152_pressed()
{
	ui->toolButton_152->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_152p_920.png)"));

	myDisplay->KeyPressed(34); //  34
	// _sleep(2);

	// ui->label->setText("Pressed");
};

void MainWindow::Button_152_released()
{
	ui->toolButton_152->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_152_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_153_pressed()
{
	ui->toolButton_153->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_153p_920.png)"));

	myDisplay->KeyPressed(46); // 46
	// _sleep(2);

	// ui->label->setText("Pressed");
};

void MainWindow::Button_153_released()
{
	ui->toolButton_153->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_153_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_154_pressed()
{
	ui->toolButton_154->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_154p_920.png)"));

	myDisplay->KeyPressed(58); // 58
	// _sleep(2);

	// ui->label->setText("Pressed");
};

void MainWindow::Button_154_released()
{
	ui->toolButton_154->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_154_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_155_pressed()
{
	ui->toolButton_155->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_155p_920.png)"));

	myDisplay->KeyPressed(70);  // 70
	// _sleep(2);

	// ui->label->setText("Pressed");
};

void MainWindow::Button_155_released()
{
	ui->toolButton_155->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_155_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_156_pressed()
{
	ui->toolButton_156->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_156p_920.png)"));

	myDisplay->KeyPressed(82);  // 82
	// _sleep(2);

	// ui->label->setText("Pressed");
};

void MainWindow::Button_156_released()
{
	ui->toolButton_156->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_156_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_157_pressed()
{
	Button_157_count += 1;

	ui->toolButton_157->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_157p_920.png)"));

	myDisplay->KeyPressed(94);  // 94
	// _sleep(2);

	// ui->label->setText("Pressed");
};

void MainWindow::Button_157_released()
{
	Button_157_count += 1;

	if (Button_157_count > 3) {
		Button_157_count = 0;

		ui->toolButton_157->setStyleSheet(QString::fromUtf8(
			"background-image: url(:/images/images/button_157_920.png)"));
	}

	// ui->label->setText("Released");
};

void MainWindow::Button_161_pressed()
{
	ui->toolButton_161->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_161p_920.png)"));

	myDisplay->KeyPressed(23);  // 23
	// _sleep(2);

	// ui->label->setText("Pressed");
};

void MainWindow::Button_161_released()
{
	ui->toolButton_161->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_161_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_162_pressed()
{
	ui->toolButton_162->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_162p_920.png)"));

	myDisplay->KeyPressed(35); // 35
	// _sleep(2);

	// ui->label->setText("Pressed");
};

void MainWindow::Button_162_released()
{
	ui->toolButton_162->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_162_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_163_pressed()
{
	ui->toolButton_163->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_163p_920.png)"));

	myDisplay->KeyPressed(47); // 47
	// _sleep(2);

	// ui->label->setText("Pressed");
};

void MainWindow::Button_163_released()
{
	ui->toolButton_163->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_163_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_164_pressed()
{
	ui->toolButton_164->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_164p_920.png)"));

	myDisplay->KeyPressed(59); //  59
	// _sleep(2);

	// ui->label->setText("Pressed");
};

void MainWindow::Button_164_released()
{
	ui->toolButton_164->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_164_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_165_pressed()
{
	ui->toolButton_165->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_165p_920.png)"));

	myDisplay->KeyPressed(71);  // 71
	// _sleep(2);

	// ui->label->setText("Pressed");
};

void MainWindow::Button_165_released()
{
	ui->toolButton_165->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_165_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_166_pressed()
{
	ui->toolButton_166->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_166p_920.png)"));

	myDisplay->KeyPressed(83); // 83
	// _sleep(2);

	// ui->label->setText("Pressed");
};

void MainWindow::Button_166_released()
{
	ui->toolButton_166->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_166_920.png)"));

	// ui->label->setText("Released");
};

void MainWindow::Button_167_pressed()
{
	Button_167_count += 1;

	ui->toolButton_167->setStyleSheet(QString::fromUtf8(
		"background-image: url(:/images/images/button_167p_920.png)"));

	myDisplay->KeyPressed(95);  // 95

	// ui->label->setText("Pressed");
};

void MainWindow::Button_167_released()
{
	Button_167_count += 1;

	if (Button_167_count > 3) {
		Button_167_count = 0;

		ui->toolButton_167->setStyleSheet(QString::fromUtf8(
			"background-image: url(:/images/images/button_167_920.png)"));
	}
	// ui->label->setText("Released");
};

void MainWindow::Button_on_off_pressed()
{
	if (ui->checkBox_on_off->isChecked() == false) {
		ui->checkBox_on_off->click();
		ui->graphicsView_on_off_2->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 102, 51);"));
		myDisplay->InitProcessor();
	}
	else {
		ui->checkBox_on_off->click();
		ui->checkBox_on_off->click();
		ui->graphicsView_on_off_2->setStyleSheet(QString::fromUtf8("background-color: rgb(102, 153, 255);"));
		myDisplay->stop_CPU();
	}

	// ui->label->setText("Pressed");
};

void MainWindow::Button_on_off_released()
{

	// ui->label->setText("Released");
};




