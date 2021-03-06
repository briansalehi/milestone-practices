#include "toolbar-mainwindow.hpp"

MainWindow::MainWindow()
{
	setWindowTitle("Toolbar Sample");
	resize(300, 100);

	fileMenu = menuBar()->addMenu("&File");
	helpMenu = menuBar()->addMenu("&Help");
	toolbar = addToolBar("Editing Toolbar");
	toolbar->setMovable(true);

	QPixmap newIcon ("icons/new.png");
	QPixmap openIcon ("icons/open.png");
	QPixmap quitIcon ("icons/quit.png");
	QPixmap helpIcon ("icons/help.png");
	QPixmap aboutIcon ("icons/about.png");

	newAction = new QAction(newIcon, "&New", this);
	newAction->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_N));
	openAction = new QAction(openIcon, "&Open", this);
	openAction->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_O));
	quitAction = new QAction(quitIcon, "&Quit", this);
	quitAction->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_Q));
	helpAction = new QAction(helpIcon, "&Help", this);
	helpAction->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_H));
	aboutAction = new QAction(aboutIcon, "&About", this);
	aboutAction->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_A));

	fileMenu->addAction(newAction);
	fileMenu->addAction(openAction);
	fileMenu->addSeparator();
	fileMenu->addAction(quitAction);
	helpMenu->addAction(helpAction);
	helpMenu->addSeparator();
	helpMenu->addAction(aboutAction);

	newToolBarAction = toolbar->addAction(newIcon, "&New");
	openToolBarAction = toolbar->addAction(openIcon, "&Open");

	QObject::connect(quitAction, &QAction::triggered, this, &QApplication::quit);
}
