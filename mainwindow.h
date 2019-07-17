#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Display.h"
#include "K1003_sys.h"
#include "Calculator.h"
#include "ui_mainwindow.h"

namespace Ui {
	class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow(void);

	uint8_t Button_007_count = 0;
	uint8_t Button_017_count = 0;


private slots:
	void Button_003_pressed();
	void Button_003_released();
	void Button_013_pressed();
	void Button_013_released();
	void Button_023_pressed();
	void Button_023_released();
	void Button_004_pressed();
	void Button_004_released();
	void Button_014_pressed();
	void Button_014_released();
	void Button_024_pressed();
	void Button_024_released();
	void Button_005_pressed();
	void Button_005_released();
	void Button_015_pressed();
	void Button_015_released();
	void Button_025_pressed();
	void Button_025_released();
	void Button_006_pressed();
	void Button_006_released();
	void Button_016_pressed();
	void Button_016_released();
	void Button_026_pressed();
	void Button_026_released();
	void Button_007_pressed();
	void Button_007_released();
	void Button_017_pressed();
	void Button_017_released();
	void Button_027_pressed();
	void Button_027_released();
	void Button_053_pressed();
	void Button_053_released();
	void Button_054_pressed();
	void Button_054_released();
	void Button_055_pressed();
	void Button_055_released();
	void Button_056_pressed();
	void Button_056_released();
	void Button_057_pressed();
	void Button_057_released();
	void Button_063_pressed();
	void Button_063_released();
	void Button_064_pressed();
	void Button_064_released();
	void Button_065_pressed();
	void Button_065_released();
	void Button_066_pressed();
	void Button_066_released();
	void Button_067_pressed();
	void Button_067_released();
	void Button_071_pressed();
	void Button_071_released();
	void Button_073_pressed();
	void Button_073_released();
	void Button_074_pressed();
	void Button_074_released();
	void Button_075_pressed();
	void Button_075_released();
	void Button_076_pressed();
	void Button_076_released();
	void Button_077_pressed();
	void Button_077_released();
	void Button_101_pressed();
	void Button_101_released();
	void Button_103_pressed();
	void Button_103_released();
	void Button_104_pressed();
	void Button_104_released();
	void Button_105_pressed();
	void Button_105_released();
	void Button_106_pressed();
	void Button_106_released();
	void Button_107_pressed();
	void Button_107_released();
	void Button_111_pressed();
	void Button_111_released();
	void Button_113_pressed();
	void Button_113_released();
	void Button_114_pressed();
	void Button_114_released();
	void Button_115_pressed();
	void Button_115_released();
	void Button_116_pressed();
	void Button_116_released();
	void Button_117_pressed();
	void Button_117_released();
	void Button_121_pressed();
	void Button_121_released();
	void Button_123_pressed();
	void Button_123_released();
	void Button_124_pressed();
	void Button_124_released();
	void Button_125_pressed();
	void Button_125_released();
	void Button_126_pressed();
	void Button_126_released();
	void Button_127_pressed();
	void Button_127_released();
	void Button_133_pressed();
	void Button_133_released();
	void Button_135_pressed();
	void Button_135_released();
	void Button_137_pressed();
	void Button_137_released();
	void Button_141_pressed();
	void Button_141_released();
	void Button_142_pressed();
	void Button_142_released();
	void Button_143_pressed();
	void Button_143_released();
	void Button_144_pressed();
	void Button_144_released();
	void Button_145_pressed();
	void Button_145_released();
	void Button_146_pressed();
	void Button_146_released();
	void Button_147_pressed();
	void Button_147_released();
	void Button_151_pressed();
	void Button_151_released();
	void Button_152_pressed();
	void Button_152_released();
	void Button_153_pressed();
	void Button_153_released();
	void Button_154_pressed();
	void Button_154_released();
	void Button_155_pressed();
	void Button_155_released();
	void Button_156_pressed();
	void Button_156_released();
	void Button_157_pressed();
	void Button_157_released();
	void Button_161_pressed();
	void Button_161_released();
	void Button_162_pressed();
	void Button_162_released();
	void Button_163_pressed();
	void Button_163_released();
	void Button_164_pressed();
	void Button_164_released();
	void Button_165_pressed();
	void Button_165_released();
	void Button_166_pressed();
	void Button_166_released();
	void Button_167_pressed();
	void Button_167_released();
	void Button_on_off_pressed();
	void Button_on_off_released();


private:
	Ui::MainWindow* ui;
	Display* myDisplay;
	Calculator* myCalculator;
	K1003_sys* myK1003;
};

#endif // MAINWINDOW_H
