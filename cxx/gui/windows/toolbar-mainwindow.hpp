#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QApplication>
#include <QMainWindow>
#include <QMenuBar>
#include <QMenu>
#include <QToolBar>
#include <QTableView>
#include <QAction>
#include <Qt>
#include <QtGui>
#include <QLabel>

class MainWindow : public QMainWindow {

	Q_OBJECT

public:
	MainWindow();

private:
	QMenu *fileMenu;
	QMenu *helpMenu;
	QToolBar *toolbar;

	QAction *newAction;
	QAction *openAction;
	QAction *quitAction;
	QAction *helpAction;
	QAction *aboutAction;
	QAction *newToolBarAction;
	QAction *openToolBarAction;
};

#endif
