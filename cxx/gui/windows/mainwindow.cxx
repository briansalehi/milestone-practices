#include "mainwindow.hpp"

MainWindow::MainWindow() {
	setWindowTitle("Qt Application");
	resize(400, 300);

	mainWidget = new QLabel("Sample Application");

	setCentralWidget(mainWidget);
};
