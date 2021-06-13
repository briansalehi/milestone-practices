Item Views and Dialogs



Working with item view widgets



Other than displaying data using different types of chart, we can also display this data using different types of item view. An item view widget presents data by rendering it visually, usually along the vertical axis.



A two-dimensional item view, often known as a table view, displays data in both vertical and horizontal directions.



The other method is the manual way, in which the programmer must tell Qt which data goes into which column and row. This method is much simpler than the model-view, but much slower when compared to its performance. However, for small amounts of data, the performance issue can be negligible, making this a good approach.



Under the Item Widgets (Item-Based) category are three different widgets called List Widget, Tree Widget, and Table Widget. Each of these item widgets displays data in a different way. Pick the one that suits your needs:



Creating our Qt Widgets application



Once you have created the project, open up mainwindow.ui and drag the three different item widgets to your main window. After that, select the main window and click the Layout Vertically button located at the top:



Making our List Widget functional



First, open up mainwindow.cpp and write the following code to the class constructor, right after ui->setupui(this):



ui->listWidget->addItem("My Test Item");



As simple as that, you have successfully added an item to the List Widget!



There is another way to add an item to the List Widget. But before that, we must add the following headers to mainwindow.h:



#ifndef MAINWINDOW_H 
#define MAINWINDOW_H 
 
#include <QMainWindow> 
#include <QDebug> 
#include <QListWidgetItem>



Next, open up mainwindow.cpp and add the following code:



QListWidgetItem* listItem = new QListWidgetItem; 
listItem->setText("My Second Item"); 
listItem->setData(100, 1000); 
ui->listWidget->addItem(listItem);



The preceding code does the same as the previous one-line code. Except, this time, I've added an extra data to the item. The setData() function takes in two input variables—the first variable is the data-role of item, which indicates how it should be treated by Qt. If you put a value that matches the Qt::ItemDataRole enumerator, the data will affect the display, decoration, tooltip, and so on, and that may change its appearance.
In my case, I just simply set a number that doesn't match any of the enumerators in Qt::ItemDataRole so that I can store it as a hidden data for later use. To retrieve the data, you can simply call data() and insert the number that matches the one you've just set:



qDebug() << listItem->data(100);



For more information about Qt::ItemDataRole enumerators, please check out the following link: http://doc.qt.io/qt-5/qt.html#ItemDataRole-enum



As mentioned earlier, hidden data can be attached to a list item for later use. For example, you could use the list widget to display a list of products ready to be purchased by the user. Each of these items can be attached with its product ID so that when the user selects the item and places it on the cart, your system can automatically identify which product has been added to the cart by identifying the product ID stored as the data role.



In the preceding example, I stored custom data, 1000, in my list item and set its data role as 100, which does not match any of the Qt::ItemDataRole enumerators. This way, the data won't be shown to the users, and thus it can only be retrieved through C++ code.



Adding functionality to the Tree Widget



Let's take a look at the following code:



QTreeWidgetItem* treeItem = new QTreeWidgetItem; 
treeItem->setText(0, "My Test Item"); 
ui->treeWidget->addTopLevelItem(treeItem);



It's pretty much the same as the List Widget, except we have to set the column ID in the setText() function.



The most obvious distinction between a Tree Widget and other view widgets is that all its items can contain children items, recursively. Let's look at the following code to see how we can add a child item to an existing item in the Tree Widget:



QTreeWidgetItem* treeItem2 = new QTreeWidgetItem; 
treeItem2->setText(0, "My Test Subitem"); 
treeItem->addChild(treeItem2);



Table Widget



Technically, the items already exist and are reserved in the Table Widget when the columns and rows are being created. What we need to do is to create a new item and replace it with the (currently empty) item located at a specific column and row, which is why the function name is called setItem(), instead of addItem() used by the List Widget.



QTableWidgetItem* tableItem = new QTableWidgetItem; 
tableItem->setText("Testing1"); 
ui->tableWidget->setItem(0, 0, tableItem); 
 
QTableWidgetItem* tableItem2 = new QTableWidgetItem; 
tableItem2->setText("Testing2"); 
ui->tableWidget->setItem(1, 2, tableItem2);



If you are looking for more examples related to item views, please visit the following link: http://doc.qt.io/qt-5/examples-itemviews.html

