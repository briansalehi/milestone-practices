#include "messagebox-mainwindow.hpp"

MainWindow::MainWindow()
{
	setWindowTitle("Question Message Box");
	setWindowIcon(QIcon("icons/question.png"));
	resize(350, 100);

	aboutAction = new QAction(QIcon("icons/help.png"), "&About");
	aboutAction->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_A));
	helpMenu = menuBar()->addMenu("&Help");
	helpMenu->addAction(aboutAction);

	QObject::connect(aboutAction, &QAction::triggered, this, &MainWindow::alert);
	emit aboutAction->triggered();
}

void MainWindow::alert()
{
	int response = QMessageBox::question(
		this,
		tr("Whether action should be taken?"),
		tr("Short Description of what would happen"),
		tr("Accept"),
		tr("Decline"),
		QString(),
		1,
		1
	);

	if (response == QMessageBox::Yes) {
	}
}
