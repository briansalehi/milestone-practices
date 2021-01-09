#include "mainwindow.hpp"

MainWindow::MainWindow() {
	setWindowTitle("Qt Application");
	resize(400, 300);

	QLabel *mainWidget = new QLabel("Sample Application");
	mainWidget->setAlignment(Qt::AlignCenter);

	setCentralWidget(mainWidget);
};
