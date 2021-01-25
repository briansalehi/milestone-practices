#pragma once

#include <QApplication>
#include <QMainWindow>
#include <QStatusBar>
#include <QMoveEvent>
#include <QTimerEvent>
#include <QDateTime>
#include <QString>
#include <QLabel>

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = nullptr);

protected:
	void moveEvent(QMoveEvent *event);
	void timerEvent(QTimerEvent *event);

private:
	QLabel *datetime;
};
