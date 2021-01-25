#include "events-mainwindow.hpp"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
	setWindowTitle("Events");
	setWindowIcon(QIcon("event.png"));
	resize(100, 50);

	datetime = new QLabel("Date and Time");
	datetime->setAlignment(Qt::AlignCenter);

	setCentralWidget(datetime);
	startTimer(1000);
}

void MainWindow::moveEvent(QMoveEvent *event)
{
	int x = event->pos().x();
	int y = event->pos().y();

	QString text = QString::number(x) + ", " + QString::number(y);

	statusBar()->showMessage(text);
}

void MainWindow::timerEvent(QTimerEvent *event)
{
	Q_UNUSED(event);
	QString datetimeString = QDateTime::currentDateTime().toString();
	datetime->setText(datetimeString);
}
