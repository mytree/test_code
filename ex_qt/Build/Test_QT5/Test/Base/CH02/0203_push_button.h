
#pragma once

/*
	# QPushButton
	1. public functions
		void setFlat(bool)					// ��ư ����� �������� �����Ѵ�.
			void isFlat()
		void setIcon(const QIcon &icon)		// ��ư ���� ǥ�� �� �������� �����Ѵ�.
		void setText(const QString &text)	// ��ư ���� ǥ���� ���ڸ� �����Ѵ�.
			QString text()
	2. Signals
		void pressed()						// ���콺 ��ư�� ������ ���� �� �߻�. QAbstractButton Ŭ�����κ��� ��ӹ޴´�.
		void released()						// ���콺�� ��ư�� ������ �� �� �߻�. QAbstractButton Ŭ�����κ��� ��ӹ޴´�.
		void clicked()						// ���콺�� ��ư�� Ŭ���� �� �߻�.	  QAbstractButton Ŭ�����κ��� ��ӹ޴´�.
		void toggle(bool checked)			// ��� �޽��� ó��.				  QAbstractButton Ŭ�����κ��� ��ӹ޴´�.
*/

class C0203_PushButton : public ITestObject {
public:
	virtual int OnTest(int nArgNum, char** ppArgs) {
		QApplication app(nArgNum, ppArgs);
		QPushButton *quit = new QPushButton("Quit", 0);
		quit->resize(75, 35);
		quit->show();
		return app.exec();
	}
};
