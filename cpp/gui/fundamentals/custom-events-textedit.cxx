#include "custom-events-textedit.hpp"

TextEdit::TextEdit(QWidget *parent) : QTextEdit(parent)
{
	setAcceptDrops(true);
}

void TextEdit::dragMoveEvent(QDragMoveEvent *event)
{
	event->acceptProposedAction();
}

void TextEdit::dragLeaveEvent(QDragLeaveEvent *event)
{
	event->accept();
}

void TextEdit::dragEnterEvent(QDragEnterEvent *event)
{
	event->acceptProposedAction();
}

void TextEdit::dropEvent(QDropEvent *event)
{
	const QMimeData *mimeData = event->mimeData();

	if (mimeData->hasText()) {
		QFile file(mimeData->urls().at(0).path());
		file.open(QFile::ReadOnly | QFile::Text);
		QString contents = file.readAll();
		setText(contents);
		event->acceptProposedAction();
	} else {
		event->ignore();
	}
}
