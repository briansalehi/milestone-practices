#pragma once

#include <QApplication>
#include <QMainWindow>
#include <QInputDialog>
#include <QToolBar>
#include <QAction>

class MainWindow : public QMainWindow
{
	Q_OBJECT
	
public:
	MainWindow();

private slots:
	void getInput();

private:
	QToolBar *editingToolBar;
	QAction *editAction;
};
