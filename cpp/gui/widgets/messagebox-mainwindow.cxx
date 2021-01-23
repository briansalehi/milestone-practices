#include "messagebox-mainwindow.hpp"

MainWindow::MainWindow()
{
	setWindowTitle("Question Message Box");
	setWindowIcon(QIcon("icons/prompt.png"));
	resize(350, 100);

	aboutAction = new QAction(QIcon("icons/about.png"), "&About");
	helpToolBar = addToolBar("Help");
	helpToolBar->addAction(aboutAction);

	QObject::connect(aboutAction, &QAction::triggered, this, &MainWindow::alert);
	emit aboutAction->triggered();
}

void MainWindow::alert()
{
	int response = QMessageBox::question(
		this,
		tr("Message Box Title"),
		tr("Informing user the risk of taking some action"),
		QMessageBox::Discard | QMessageBox::Default,
		QMessageBox::Apply
	);

	if (response == QMessageBox::Yes) {
		// destructive action
	}
}
