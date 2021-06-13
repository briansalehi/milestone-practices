In recent times, most applications integrate with some database for storing
information for further processing and future use.

Qt comes with modules and classes that make connecting to databases
effortless. The MySql database will be used to illustrate the examples in this
chapter, but the same principles will apply to other databases.

Database Connection



Qt supports multiple different types of database systems:
MySQL (or MariaDB)
SQLite (version 2 and 3)
IBM DB2
Oracle
ODBC
PostgreSQL
Sybase Adaptive Server



The SQLite database is usually used offline and it doesn't require any setup as it uses an on-disk file format for storing data.



SQL commands



SELECT



INSERT



UPDATE



DELETE



JOIN



open up your project file (.pro), which in my case is DatabaseConnection.pro, and add the sql keyword at the back of the first line, like so:
QT += core sql



import the relevant headers to main.cpp, like so:



#include <QCoreApplication> 
#include <QtSql> 
#include <QSqlDatabase> 
#include <QSqlQuery> 
#include <QDebug> int main(int argc, char *argv[]) 
{ 
   QCoreApplication a(argc, argv); 
   return a.exec(); 
}



Next, we'll add some code to the main.cpp file.



int main(int argc, char *argv[]) 
{ 
   QCoreApplication a(argc, argv); 
   QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL"); 
   db.setHostName("127.0.0.1"); 
   db.setPort(3306); 
   db.setDatabaseName("test"); 
   db.setUserName("testuser"); 
   db.setPassword("testpass"); 
   if (db.open()) 
   { 
         qDebug() << "Connected!"; 
   } 
   else 
   { 
         qDebug() << "Failed to connect."; 
         return 0; 
   } 
   return a.exec(); 
}



Next, we can start playing around with SQL commands



Add the following code before return a.exec():



QString command = "SELECT name FROM department"; 
QSqlQuery query(db); 
if (query.exec(command)) 
{ 
   while(query.next()) 
   { 
         QString name = query.value("name").toString(); 
         qDebug() << name; 
   } 
}



Let's try out something more complex:



QString command = "SELECT my_user.username, department.name AS deptname FROM (SELECT * FROM user WHERE status = 0) AS my_user INNER JOIN department ON department.id = my_user.deptID"; 
QSqlQuery query(db); 
if (query.exec(command)) 
{ 
   while(query.next()) 
   { 
         QString username = query.value("username").toString(); 
         QString department = query.value("deptname").toString(); 
         qDebug() << username << department; 
   } 
}



The very first thing we need to do now is to name the widgets that are important in this login page, which are the Username input, Password input, and the Submit button.



When one widget is emitting a signal, another widget will be notified and will proceed to run a specific function that is designed to react to the particular signal.



go back to mainwindow.cpp and add the following code to the on_loginButton_clicked() function:



void MainWindow::on_loginButton_clicked() 
{ 
   QString username = ui->userInput->text(); 
   QString password = ui->passwordInput->text(); 
   qDebug() << username << password; 
}



Now, click the Run button and wait for the application to start. Then, key in any random username and password, followed by clicking on the submit button. You should now see your username and password being displayed on the application output window in Qt Creator.



Next, we'll copy the SQL integration code we have written previously into mainwindow.cpp:



MainWindow::MainWindow(QWidget *parent) : 
   QMainWindow(parent),    ui(new Ui::MainWindow) 
{ 
   ui->setupUi(this); 
 
   db = QSqlDatabase::addDatabase("QMYSQL"); 
   db.setHostName("127.0.0.1"); 
   db.setPort(3306); 
   db.setDatabaseName("test"); 
   db.setUserName("testuser"); 
   db.setPassword("testpass"); 
 
   if (db.open()) 
   { 
         qDebug() << "Connected!"; 
   } 
   else 
   { 
         qDebug() << "Failed to connect."; 
   } 
}



QSqlDatabase db has now been relocated to mainwindow.h:



private: 
   Ui::MainWindow *ui; 
   QSqlDatabase db;



void MainWindow::on_loginButton_clicked() 
{ 
   QString username = ui->userInput->text(); 
   QString password = ui->passwordInput->text(); 
 
   qDebug() << username << password; 
 
   QString command = "SELECT * FROM user WHERE username = '" + username    + "' AND password = '" + pas
sword + "' AND status = 0"; 
   QSqlQuery query(db); 
   if (query.exec(command)) 
   { 
         if (query.size() > 0) 
         { 
               QMessageBox::information(this, "Login success.", "You                have successfully 
logged in!"); 
         } 
         else 
         { 
               QMessageBox::information(this, "Login failed.", "Login                failed. Please try 
again..."); 
         } 
   } }

