
#pragma once

/*
	QTextBrowser
	1. Public Functions
		QTextBrowser(QWidget *parent = 0)
		virtual QVariant loadResource(int type, const QUrl &name)	// ������ �ҷ����� ȣ��ȴ�.
		void setSearchPaths(const QStringList &paths)		// �ؽ�Ʈ �������� �����ϴ� �������� ã�� ��θ� ����
		QUrl source() const		// �ҷ��� ������ ��ġ�� ��ȯ�Ѵ�.
	2. Public Slots
		virtual void backward()		// ��� ���� �ô� ������ �̵��Ѵ�.
		virtual void forward()		// ���� ������ �̵��Ѵ�. backward() �޼ҵ带 ������ ��� ���� ���� �̵�
		virtual void home()			// Ȩ(���� ó���� �ô� ����)���� �̵��Ѵ�.
		virtual void reload()		// ���� ������ �ٽ� �ҷ��´�.
		virtual void setSource(const QUrl &name)	// �ؽ�Ʈ �������� �ҷ��� ������ ��ġ�� ����
	3. Signals
		void anchorClicked(const QUrl &link)	// ����ڰ� �������ؽ�Ʈ�� ��ũ�� Ŭ���� �� �߻�
		void backwardAvailable(bool available)	// ���� ������ �̵��ϴ� ���� �����ϸ� �߻��Ѵ�.
		void forwardAvailable(bool available)	// ���� ������ �̵��ϴ� ���� �����ϸ� �߻��Ѵ�.
		void highlighted(const QString &link)	// ���� ���� ���� �������ؽ�Ʈ�� ��ũ�� Ŭ���� �� �߻��Ѵ�.
	4. Protected Functions
		virtual void keyPressEvent(QKeyEvent *ev)	// Ű���带 ������ �Ͱ� ���õ� �̺�Ʈ

*/

class C0305_TextBrowser : public ITestObject {
public:
	virtual int OnTest(int nArgNum, char** ppArgs) {
		QApplication app(nArgNum, ppArgs);

		QUrl url("index.html");

		QTextBrowser *tb = new QTextBrowser();
		tb->setSource(url);
		tb->show();

		return app.exec();
	}
};