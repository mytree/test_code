
#pragma once

/*
	QCheckBox
	1. Public Functions
		QCheckBox(const QString &text, QWidget *parent = 0)
		void setCheckState(Qt::CheckState state)	// üũ �ڽ��� ���¸� ����. checkState()
		void setTristate(bool y = true)		// bool ���� ���� üũ �ڽ��� ������ ���·� ����, bool isTristate()
		bool isChecked() const		// üũ �ڽ��� ���õǾ����� Ȯ��
		void setText(const QString &text)		// üũ �ڽ��� ǥ���� ���ڿ� ����
	2. Public Slots
		void click()				// üũ �ڽ��� Ŭ���Ѵ�.
		void setChecked(bool)		// üũ �ڽ��� ���¸� �ٲ۴�.
		void toggle()				// üũ �ڽ��� ��۽�Ų��.
	3. Signals
		void stateChanged(int state)		// üũ �ڽ��� ���°� �ٲ� �� �߻�
		void clicked(bool checked = false)	// ���콺�� üũ �ڽ� Ŭ�� ���� �� �߻�
		void pressed()						// ���콺�� üũ �ڽ� ���� �� �߻�
		void released()						// ���콺�� üũ �ڽ� �����ٰ� ������ �� �߻�
		void toggled(bool checked)			// üũ �ڽ��� ��� ���� ���� �� �߻�
*/

class C0302_CheckBox : public ITestObject {
public:
	class CheckBox : public QWidget {
	private:
		QCheckBox		*CheckBox1;
		QCheckBox		*CheckBox2;
		QCheckBox		*CheckBox3;
		QCheckBox		*CheckBox4;
		QButtonGroup	*ButtonGroup;

	public:
		CheckBox() {
			resize(130, 110);
			ButtonGroup = new QButtonGroup(this);
			CheckBox1 = new QCheckBox("CheckBox1", this);
			CheckBox1->move(10, 10);
			ButtonGroup->addButton(CheckBox1);
			CheckBox2 = new QCheckBox("CheckBox2", this);
			CheckBox2->move(10, 30);
			ButtonGroup->addButton(CheckBox2);
			CheckBox3 = new QCheckBox("CheckBox3", this);
			CheckBox3->move(10, 50);
			ButtonGroup->addButton(CheckBox3);
			CheckBox4 = new QCheckBox("CheckBox4", this);
			CheckBox4->move(10, 70);
			ButtonGroup->addButton(CheckBox4);
		}
	};
	virtual int OnTest(int nArgNum, char** ppArgs) {
		QApplication app(nArgNum, ppArgs);

		CheckBox CheckBoxWindow;
		CheckBoxWindow.show();
		
		return app.exec();
	}
};