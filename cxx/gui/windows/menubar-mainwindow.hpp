#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QApplication>
#include <QMainWindow>
#include <QMenuBar>
#include <QAction>
#include <Qt>
#include <QtGui>
#include <QMenu>

class MainWindow : public QMainWindow {
	Q_OBJECT

public:
	MainWindow();

private:
	QMenu *fileMenu;
	QMenu *helpMenu;

	QAction *newAction;
	QAction *openAction;
	QAction *closeAction;
	QAction *helpAction;
	QAction *aboutAction;
};

#endif
