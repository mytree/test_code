
#pragma once

/*
	# QWidget
	1. public functions
		- QWidget(QWidget *parent=0, WFlags f=0)	// ������. parent �� 0 �̸� �ֻ��� ����.
		- ~QWidget()					// �Ҹ���. �ڽ� ������ ���� �Ҹ�ȴ�. ���� �����̶�� ���ø����̼��� ����ȴ�.
		- WId winId() const				// ������ �ý��� ID �� ��ȯ�Ѵ�. QWidget *find(WId id)
		- bool isVisible() const		// ������ ȭ�鿡�� ���̴� �����̸� ��(True) ���� ��ȯ�Ѵ�.
		- bool isHidden() const			// ������ ȭ�鿡�� ������ �����̸� ��(True) ���� ��ȯ�Ѵ�.
		- isMinimized() const			// ������ �ּ� ������ ����(������ȭ)�̸� ��(True) ���� ��ȯ�Ѵ�.
		- isMaximized() const			// ������ �ִ� ������ �����̸� ��(True) ���� ��ȯ�Ѵ�.
		- bool isTopLevel() const		// ������ �ֻ��� �����̸� ��(True) ���� ��ȯ�Ѵ�.
		- bool isDialog() const			// ������ ��ȭ�����̸� ��(True) ���� ��ȯ�Ѵ�.
		- bool isModal() const			// ������ ���(Modal) �����̸� True ��ȯ
		- bool isPopup() const			// �˾� �����̸� True ��ȯ
		- bool isDesktop() const		// ����ũ�� �����̸� True ��ȯ
		- void stackUnder(QWidget *w)	// ����ŷ ������ �θ� �������� ���� ������ �Ʒ��� ��ġ��Ų��.
		- QWidget *parentWidget(bool sameWindow=FALSE) const	// �θ� ������ ������ ��ȯ
		- QWidget *childAt(int x, int y, bool includeThis = FALSE) const // ������ ��ġ�� �ִ� �ڽ� ������ ������ ��ȯ
	2. public slots
		- void close()		// QCloseEvent �� �������� ������ �ݴ´�.
		- void hide()		// ������ ȭ�鿡�� �����.	hideEvent()
		- void show()		// ������ ȭ�鿡 �����ش�.
		- void raise()		// ������ ����ŷ ������ ��(Top)�� �ø���.
		- void lower()		// ������ ����ŷ ������ ��(Bottom)���� ������.
	3. static public member
		QWidget *find(WId id)		// ������ �ý��� ID �� ���õ� ������ �����͸� ��ȯ�Ѵ�.
*/

class C0206_MyClass : public ITestObject {
public:
	class MyClass : public QWidget {
	public:
		MyClass() {
			QPushButton *quit = new QPushButton("Quit", this);
			quit->resize(75, 35);

			// QApplication �� �ν��Ͻ� ������ ���� ���� �ʱ� ������ 
			//	qApp ��� ���� ������ �����Ѵ�.
			QObject::connect(quit, SIGNAL(clicked()), qApp, SLOT(quit()));
		}
	};

	virtual int OnTest(int nArgNum, char** ppArgs) {
		QApplication app(nArgNum, ppArgs);
		MyClass *quit = new MyClass();
		quit->show();		
		return app.exec();
	}
};
