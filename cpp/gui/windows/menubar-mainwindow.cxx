#include "menubar-mainwindow.hpp"

MainWindow::MainWindow()
{
	setWindowTitle("Menu Bar Sample");
	resize(400, 300);

	QPixmap newIcon("icons/new.png");
	QPixmap openIcon("icons/open.png");
	QPixmap editIcon("icons/edit.png");
	QPixmap closeIcon("icons/close.png");
	QPixmap helpIcon("icons/help.png");
	QPixmap aboutIcon("icons/about.png");

	newAction = new QAction(newIcon, "&New", this);
	newAction->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_N));
	openAction = new QAction(openIcon, "&Open", this);
	openAction->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_O));
	closeAction = new QAction(closeIcon, "&Quit", this);
	closeAction->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_Q));
	helpAction = new QAction(helpIcon, "&Help", this);
	helpAction->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_H));
	aboutAction = new QAction(aboutIcon, "&About", this);
	aboutAction->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_A));

	fileMenu = menuBar()->addMenu("&File");
	fileMenu->addAction(newAction);
	fileMenu->addAction(openAction);
	fileMenu->addSeparator();
	fileMenu->addAction(closeAction);

	helpMenu = menuBar()->addMenu("&Help");
	helpMenu->addAction(helpAction);
	helpMenu->addSeparator();
	helpMenu->addAction(aboutAction);

	QObject::connect(closeAction, &QAction::triggered, this, &QApplication::quit);
}
