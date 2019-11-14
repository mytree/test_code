
#pragma once

/*
	# QObject::connect(sender, SIGNAL(signal), receiver, SLOT(slot));
	- sender : �ñ׳��� �߻���ų ��ü�� ������ ����
	- signal : sender �� �߻���Ű�� �ñ׳��� �����Ѵ�. �ݵ�� sender �� �����ؾ� �Ѵ�.
	- receiver : sender �� ���� �߻��� �ñ׳��� ���� ��ü�� �����͸� �����Ѵ�.
	- slot :	receiver�� ���ǵǾ� �ִ� ������ �����Ѵ�. signal �� �ݵ�� �־�� �Ѵ�.
	- �ñ׳��� �����ϴ� �Ű� ������ Ÿ�԰� ���� ���԰� ��ġ�ؾ� �Ѵ�.
	- ���� ���� �� disconnect �Լ� �̿�

	# QObject
	1. public functions
	- QObject(QObject *parent = 0)	// ������
	- virtual ~QObject()			// �Ҹ���
	- bool inherits(const char *className) const	// QObject Ŭ������ ����ϴ� ��ü�� �����ϴ� Ŭ���� �ν��Ͻ���� ��
	- bool setProperty(const char *name, const QVariant &value)	// ��ü�� name �Ӽ� ���� ����, �Ӽ������� metaObject()����
	- const QObjectList &children() const		// ��ü�� QObjectList Ŭ������ ��ȯ�Ѵ�. �ڽ� ������ 0
	- QObject *parent() const					// �θ� ��ü�� �����͸� ��ȯ�Ѵ�.
	2. Related Non-members
	- T findChild(const QString &name = QString()) const	// �̸��� name �� �ڽ� ��ü�� ã�� T�� ĳ�����ؼ� ��ȯ
*/

class C0204_Quit : public ITestObject {
public:
	virtual int OnTest(int nArgNum, char** ppArgs) {
		QApplication app(nArgNum, ppArgs);
		QPushButton *quit = new QPushButton("Quit", 0);
		quit->resize(75, 35);
		quit->show();
		QObject::connect(quit, SIGNAL(clicked()), &app, SLOT(quit()));
		return app.exec();
	}
};
