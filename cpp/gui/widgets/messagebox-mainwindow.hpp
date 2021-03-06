#pragma once

#include <QApplication>
#include <QMainWindow>
#include <QMessageBox>
#include <QToolBar>
#include <QAction>

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow();

private slots:
	void alert();

private:
	QToolBar *helpToolBar;
	QAction *aboutAction;
};
