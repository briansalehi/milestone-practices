Working with dialog boxes



There are several types of message box you can use in Qt; the most basic one uses just a single line of code, like so:



QMessageBox::information(this, "Alert", "Just to let you know, something happened!");



There are three parameters you need to provide for this function. The first one is the parent of the message box, which we have set as the main window. The second parameter is for the window title, and the third parameter is for the message we want to deliver to the user.



The appearance may look different on different operating systems (Linux, macOS, and so forth).



There are a few types of icon you can use, such as information, warning, and critical.



QMessageBox::question(this, "Alert", "Just to let you know, something happened!"); 
QMessageBox::warning(this, "Alert", "Just to let you know, something happened!"); 
QMessageBox::information(this, "Alert", "Just to let you know, something happened!"); 
QMessageBox::critical(this, "Alert", "Just to let you know, something happened!");



If you don't need any icons, just call the QMessageBox::about() function instead.



You can also set the buttons you want by picking from a list of standard buttons provided by Qt, for example:



QMessageBox::question(this, "Serious Question", "Am I an awesome guy?", QMessageBox::Ignore, QMessageBox::Yes);



Since these are the built-in functions provided by Qt to create message boxes with ease, it doesn't give developers the freedom to fully customize a message box. However, Qt does allow you to create your message boxes manually using another method, which is much more customizable than the built-in method. It takes a couple more lines of code, but is still pretty simple to write:



QMessageBox msgBox; 
msgBox.setWindowTitle("Alert"); 
msgBox.setText("Just to let you know, something happened!"); 
msgBox.exec();



What about adding our own icon and customized buttons?



QMessageBox msgBox; 
msgBox.setWindowTitle("Serious Question"); 
msgBox.setText("Am I an awesome guy?"); 
msgBox.addButton("Seriously Yes!", QMessageBox::YesRole); 
msgBox.addButton("Well no thanks", QMessageBox::NoRole); 
msgBox.setIcon(QMessageBox::Question); 
msgBox.exec();



In the preceding code example, I have loaded the question icon that comes with Qt, but you can also load your own icon from the resource file if you intended to do so:



QMessageBox msgBox; 
msgBox.setWindowTitle("Serious Question"); 
msgBox.setText("Am I an awesome guy?"); 
msgBox.addButton("Seriously Yes!", QMessageBox::YesRole); 
msgBox.addButton("Well no thanks", QMessageBox::NoRole); 
QPixmap myIcon(":/images/icon.png"); 
msgBox.setIconPixmap(myIcon); 
msgBox.exec();



Qt's QMessageBox class provides us with a simple solution for checking the button event. When the message box is being created, Qt will wait for the user to pick their choice; then, it will return the button that gets triggered. By checking which button is being clicked, the developer can then proceed to trigger the relevant event. Let's take a look at the example code:



if (QMessageBox::question(this, "Question", "Some random question. Yes or no?") == QMessageBox::Yes) 
{ 
   QMessageBox::warning(this, "Yes", "You have pressed Yes!"); 
} 
else 
{ 
   QMessageBox::warning(this, "No", "You have pressed No!"); 
}



If you prefer the manual way to create your message box, the code for checking the button event is slightly longer:



QMessageBox msgBox; 
msgBox.setWindowTitle("Serious Question"); 
msgBox.setText("Am I an awesome guy?"); 
QPushButton* yesButton = msgBox.addButton("Seriously Yes!", QMessageBox::YesRole); 
QPushButton* noButton = msgBox.addButton("Well no thanks", QMessageBox::NoRole); 
msgBox.setIcon(QMessageBox::Question); 
msgBox.exec(); 
    
if (msgBox.clickedButton() == (QAbstractButton*) yesButton) 
{ 
   QMessageBox::warning(this, "Yes", "Oh thanks! :)"); 
} 
else if (msgBox.clickedButton() == (QAbstractButton*) noButton) 
{ 
   QMessageBox::warning(this, "No", "Oh why... :("); 
}



For more information regarding the dialog boxes, please visit the API documents located at the following link: http://doc.qt.io/qt-5/qdialog.html



Creating File Selection Dialogs



The File Selection Dialog essentially only does one thing—it lets the user pick the file(s) or folder they want and return the path(s) of the selected file(s) or folder



First, open up mainwindow.h and add in the following header files:



#ifndef MAINWINDOW_H 
#define MAINWINDOW_H 
 
#include <QMainWindow> 
#include <QFileDialog> 
#include <QDebug>



Next, open up mainwindow.cpp and insert the following code:



QString fileName = QFileDialog::getOpenFileName(this); 
qDebug() << fileName;



If the user has selected a file and pressed Open, the fileName variable will be filled with the absolute path of the selected file. If the user clicked the Cancel button, the fileName variable will be an empty string.



The File Selection Dialog also contains several options that can be set during the initialization step. For example:



QString fileName = QFileDialog::getOpenFileName(this, "Your title", QDir::currentPath(), "All files (*.*) ;; Document files (*.doc *.rtf);; PNG files (*.png)"); 
qDebug() << fileName;



There are three things that we have set in the preceding code they are as follows:
The window title of the File Selection Dialog
The default path that the users see when the dialog is being created
File type filters



The file type filter is very handy when you only allow the users to select a specific type of file (for example, only JPEG image files) and hide the rest.



you can also use getSaveFileName(), which will allow the user to specify a filename that does not already exist.



For more information regarding the File Selection Dialog, please visit the API documents located at the following link: http://doc.qt.io/qt-5/qfiledialog.html

