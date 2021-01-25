#include "custom-events-mainwindow.hpp"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
	setWindowTitle("Custom Events");
	setWindowIcon(QIcon("icons/event.png"));
	resize(300, 200);

	QWidget *mainWidget = new QWidget;
	QVBoxLayout *layout = new QVBoxLayout;
	slateDragTextEdit = new TextEdit;

	layout->addWidget(slateDragTextEdit);
	mainWidget->setLayout(layout);
	setCentralWidget(mainWidget);

	statusBar()->showMessage(QString::number(0));

	QObject::connect(slateDragTextEdit, &QTextEdit::textChanged, this, &MainWindow::updateStatusBar);
}
void MainWindow::updateStatusBar()
{
	int charCount = slateDragTextEdit->toPlainText().count();
	statusBar()->showMessage(QString::number(charCount));
}
