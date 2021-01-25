#pragma once

#include <QMoveEvent>
#include <QMouseEvent>
#include <QDateTime>
#include <QTextEdit>
#include <QTextStream>
#include <QMimeData>
#include <QMimeDatabase>
#include <QMimeType>

class TextEdit : public QTextEdit
{
	Q_OBJECT

public:
	explicit TextEdit(QWidget *parent = nullptr);

protected:
	void dragEnterEvent(QDragEnterEvent *event) override;
	void dragMoveEvent(QDragMoveEvent *event) override;
	void dragLeaveEvent(QDragLeaveEvent *event) override;
	void dropEvent(QDropEvent *event) override;
};
