
#pragma once


#include <QtCore/QCoreApplication>
#include <QtGui/QGuiApplication>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QTextBrowser>		// Hyper-text
#include <QtWidgets/QLineEdit>			// 한 줄로 된 문자열 입력 받을 때 사용
#include <QtWidgets/QComboBox>	
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSlider>
#include <QtWidgets/QDial>
#include <QtWidgets/QBoxLayout>			// QHBoxLayout, QVBoxLayout
#include <QtWidgets/QGridLayout>		// QGridLayout
#include <QtWidgets/QStackedLayout>		// QStackedLayout
#include <QtWidgets/QSplitter>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QDialog>
#include <QtWidgets/QTabWidget>

#if defined(WIN32) | defined(WIN64)
#	if defined(DEBUG) | defined(_DEBUG)
#		pragma comment(lib, "qtmaind.lib")
#		pragma comment(lib, "Qt5Cored.lib")			// QCoreApplication, QString
#		pragma comment(lib, "Qt5Guid.lib")			// QGuiApplication
#		pragma comment(lib, "QT5Widgetsd.lib")		// QLabel
#	else
#		pragma comment(lib, "qtmain.lib")
#		pragma comment(lib, "Qt5Core.lib")			// QCoreApplication
#		pragma comment(lib, "Qt5Gui.lib")			// QGuiApplication
#		pragma comment(lib, "QT5Widgets.lib")		// QLabel
#	endif
#endif

