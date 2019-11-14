
#pragma once

/*
	# QRadioButton
	1. Public Functions
		QRadioButton(const QString &text, QWidget *parent = 0)	// ������
		bool isChecked() const		// �ش� ������ư�� ���õǾ����� Ȯ���� �ش�. QAbstractButton ���
		void setText(const QString &text)		// ���� ��ư�� ǥ���� ���ڿ� ����. QAbstractButton ���
		void click()				// ������ư Ŭ��. QAbstractButton ���
		void setChecked(bool)		// ������ư ���� ����. QAbstractButton ���
		void toggle()				// ���� ��ư�� ��۽�Ų��. QAbstractButton ���
	2. Signals
		void clicked(bool checked = false)		// ���� ��ư Ŭ�� �� �߻�
		void pressed()							// ���� ��ư ���� �� �߻�
		void released()							// ���� ��ư �����ٰ� ������ �� �߻�
		void toggled(bool checked)				// ���� ��ư ��� ���� �ٲ� �� ����
*/

class C0301_RadioButton : public ITestObject {
public:
	class RadioButton : public QWidget {
	public:
		RadioButton() {
			resize(140, 110);
			ButtonGroup = new QButtonGroup(this);
			RadioButton1 = new QRadioButton("RadioButton1", this);
			RadioButton1->move(10, 10);
			ButtonGroup->addButton(RadioButton1);		// Qt 3 : insert(RadioButton)
			RadioButton2 = new QRadioButton("RadioButton2", this);
			RadioButton2->move(10, 30);
			ButtonGroup->addButton(RadioButton2);
			RadioButton3 = new QRadioButton("RadioButton3", this);
			RadioButton3->move(10, 50);
			ButtonGroup->addButton(RadioButton3);
			RadioButton4 = new QRadioButton("RadioButton4", this);
			RadioButton4->move(10, 70);
			ButtonGroup->addButton(RadioButton4);
		}
	private:
		QRadioButton *RadioButton1;
		QRadioButton *RadioButton2;
		QRadioButton *RadioButton3;
		QRadioButton *RadioButton4;
		QButtonGroup *ButtonGroup;
	};

	virtual int OnTest(int nArgNum, char** ppArgs) {
		QApplication app(nArgNum, ppArgs);
		RadioButton RadioButtonWindow;
		RadioButtonWindow.show();
		return app.exec();
	}
};
