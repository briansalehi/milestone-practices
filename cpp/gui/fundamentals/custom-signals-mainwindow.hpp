#pragma once

#include <QApplication>
#include <QMainWindow>
#include <QMoveEvent>
#include <QMouseEvent>
#include <QVBoxLayout>
#include <QDateTime>
#include <QStatusBar>
#include <QPoint>
#include <QLabel>

class MainWindow : public QMainWindow
{
	Q_OBJECT

public slots:
	void updateMousePosition(QPoint pos);

signals:
	void mouseMoved(QPoint pos);

public:
	MainWindow(QWidget *parent = nullptr);

protected:
	void mousePressEvent(QMouseEvent *event) override;

private:
	QLabel *mousePosition;
	QWidget *windowCentralWidget;
};
