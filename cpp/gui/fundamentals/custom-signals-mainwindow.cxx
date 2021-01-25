#include "custom-signals-mainwindow.hpp"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
	setWindowTitle("Custom Signal");
	setWindowIcon(QIcon("icons/signal.png"));
	resize(300, 300);

	windowCentralWidget = new QWidget();
	mousePosition = new QLabel("Mouse Position");
	QVBoxLayout *innerLayout = new QVBoxLayout;
	innerLayout->addWidget(mousePosition);
	windowCentralWidget->setLayout(innerLayout);
	setCentralWidget(windowCentralWidget);
	statusBar()->showMessage("Ready");

	QObject::connect(this, SIGNAL(mouseMoved(QPoint)), this, SLOT(updateMousePosition(QPoint)));
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
	emit mouseMoved(event->pos());
}

void MainWindow::updateMousePosition(QPoint point)
{
	int x = point.x();
	int y = point.y();
	QString text = QString::number(x) + ", " + QString::number(y);
	mousePosition->setText(text);
	statusBar()->showMessage(text);
}
