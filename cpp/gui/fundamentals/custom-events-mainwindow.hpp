#pragma once

#include <QApplication>
#include <QMainWindow>
#include <QLabel>
#include <QMoveEvent>
#include <QMouseEvent>
#include <QVBoxLayout>
#include <QDateTime>
#include <QMainWindow>
#include <QStatusBar>

#include "custom-events-textedit.hpp"

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = nullptr);

private slots:
	void updateStatusBar();

private:
	TextEdit *slateDragTextEdit;
};
