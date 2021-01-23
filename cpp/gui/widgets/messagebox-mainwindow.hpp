#pragma once

#include <QApplication>
#include <QMainWindow>
#include <QMessageBox>
#include <QMenu>
#include <QMenuBar>
#include <QAction>

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow();

private slots:
	void alert();

private:
	QMenu *helpMenu;
	QAction *aboutAction;
};
