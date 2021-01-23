#include "input-dialog-mainwindow.hpp"

MainWindow::MainWindow()
{
	setWindowTitle("Input Dialog Sample");
	setWindowIcon(QIcon("dialog.png"));
	resize(300, 100);

	editAction = new QAction("&Edit");
	editingToolBar = addToolBar("Editing Toolbar");
	editingToolBar->addAction(editAction);

	QObject::connect(editAction, &QAction::triggered, this, &MainWindow::getInput);
	emit editAction->triggered();
}

void MainWindow::getInput()
{
	bool ok;
	QInputDialog::getInt(
		this,							// parent widget
		tr("Input Dialog Title"),		// title
		tr("Input dialog description"),	// description
		1,								// number of inputs
		1,								// minimum number
		10,								// maximum number
		1,								// incremental step between min and max
		&ok								// user response (Ok button or cancel)
	);

	if (ok) {
		// action
	}
}

