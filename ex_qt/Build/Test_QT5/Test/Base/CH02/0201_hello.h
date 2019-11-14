
#pragma once

/*
	# QApplication 
	1. static public members
		int exec()		// ���ø����̼��� ����ǰų� ���� ������ ���� ������ ���� ���鼭 �̺�Ʈ ó��
	2. signals
		void lastWindowClosed()		// ������ �����찡 ���� �� �߻��Ѵ�.
	3. public slots
		void quit()					// ���ø����̼��� �����Ų��. void exit()
		void closeAllWindows()		// ��� �����츦 �ݴ´�.
*/
class C0201_Hello : public ITestObject {
public:
	virtual int OnTest(int nArgNum, char** ppArgs) {
		QApplication a(nArgNum, ppArgs);
		QLabel *hello = new QLabel("<font color=blue>Hello<i>Qt!</i>""</font>", 0);
		hello->show();
		return a.exec();
	}
};
