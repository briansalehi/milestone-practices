Graphs and Charts



Since Qt 5.7, several modules that were only available for commercial users before have become free for all the open source package users, which includes the Qt Charts module. Therefore, it is considered a very new module for most Qt users who don't own the commercial license.



Do note that, unlike most of the Qt modules that are available under an LGPLv3 license, the Qt Chart module is offered under an GPLv3 license. Unlike LGPLv3, a GPLv3 license requires you to release the source code of your application, while your application must also be licensed under GPLv3. This means that you are not allowed to static-link Qt Chart with your application. It also prevents the module from being used in proprietary software.



The Qt Charts module provides the following chart types:
Line and spline charts
Bar charts
Pie charts
Polar charts
Area and scatter charts
Box-and-whiskers charts
Candlestick charts



Line and spline charts



These charts are typically presented as a series of points/markers that are connected by lines. In a line chart, the points are connected by straight lines to show the changes of the variables over a period of time. On the other hand, spline charts are very similar to line charts except the points are connected by a spline/curve line instead of straight lines:



Bar charts



A bar chart is quite similar to a line chart, except it doesn't connect the data along an axis. Instead, a bar chart displays its data using individual rectangular shapes, where its height is determined by the value of the data. This means that the higher the value, the taller the rectangular shape will become:



Pie charts



A pie chart presents its data in the form of pie slices. The size of each slice of pie will be determined by the overall percentage of its value compared to the rest of the data. Therefore, pie charts are normally used to display fraction, ratio, percentage, or a share of a set of data:



Sometimes, a pie chart can also be displayed in a donut shape (also known as donut chart):



Polar charts



Polar charts present data in a circular graph, where the placement of the data is based on both the angle and the distance from the center of the graph, which means the higher the value of the data, the further away the point is from the center of the chart. You can display multiple types of graphs within the polar chart, such as line, spline, area, and scatter to visualize the data:



Area and scatter charts



An area chart displays its data as an area or shape to indicate volume. It's usually used to compare the differences between two or more datasets.



Scatter charts, on the other hand, are used to display a collection of data points, and for showing the non-linear relationship between two or more datasets.



Box-and-whiskers charts



Candlestick charts



Box-and-whiskers charts present data as quartiles extended with whiskers that show the variability of the values. The boxes may have lines extending vertically called whiskers. These lines indicate variability outside the upper and lower quartiles, and any point outside those lines or whiskers is considered an outlier. Box-and-whisker charts are most commonly used in statistical analysis, such as stock market analysis:



Candlestick charts are visually quite similar to the box-and-whiskers charts, except they are used to represent the difference between the opening and closing value, while showing the direction of the value (whether increasing or decreasing) through different colors. If the value of a particular piece of data stays the same, the rectangular shape will not be shown at all:



For more information regarding the different types of charts supported by Qt, please head over to the following link: https://doc.qt.io/qt-5/qtcharts-overview.html.



Implementing charts and graphs



After you have created the new project, open up the project file (.pro) and add the charts module to your project, like so:
QT += core gui charts



Then, open up mainwindow.h and add the following to include the header files that are required for using the charts module:
#include <QtCharts> 
#include <QChartView> 
#include <QBarSet> 
#include <QBarSeries>



The QtCharts and QtChartView headers are both essential for Qt's charts module.



Next, open mainwindow.ui and drag either Vertical Layout or Horizontal Layout to the central widget. Then, select the central widget and click either Layout Horizontally or Layout Vertically. The layout direction is not particularly important, as we will only create a single chart here:
--
![charts-layout.png]



After that, right-click on the layout widget you just dragged to the central widget, and select Morph into | QFrame.



Now open up mainwindow.cpp and add the following code:



MainWindow::MainWindow(QWidget *parent) : 
   QMainWindow(parent), 
   ui(new Ui::MainWindow) 
{ 
   ui->setupUi(this); 
 
   QBarSet *set0 = new QBarSet("Jane"); 
   QBarSet *set1 = new QBarSet("John"); 
   QBarSet *set2 = new QBarSet("Axel"); 
   QBarSet *set3 = new QBarSet("Mary"); 
   QBarSet *set4 = new QBarSet("Samantha"); 
 
   *set0 << 10 << 20 << 30 << 40 << 50 << 60; 
   *set1 << 50 << 70 << 40 << 45 << 80 << 70; 
   *set2 << 30 << 50 << 80 << 13 << 80 << 50; 
   *set3 << 50 << 60 << 70 << 30 << 40 << 25; 
   *set4 << 90 << 70 << 50 << 30 << 16 << 42; 
 
   QBarSeries *series = new QBarSeries(); 
   series->append(set0); 
   series->append(set1); 
   series->append(set2); 
   series->append(set3); 
   series->append(set4); 
}



Then, we also added six different items of data to each category, which will later be represented in the form of bars/rectangular shapes.



Next, initiate the QChart object and add the series to it. We also set the chart's title and enable animation:



QChart *chart = new QChart(); 
chart->addSeries(series); 
chart->setTitle("Student Performance"); 
chart->setAnimationOptions(QChart::SeriesAnimations);



After that, we create a bar chart category axis and apply it to the bar chart's x axis.



QStringList categories; 
categories << "Jan" << "Feb" << "Mar" << "Apr" << "May" << "Jun"; 
QBarCategoryAxis *axis = new QBarCategoryAxis(); 
axis->append(categories); 
chart->createDefaultAxes(); 
chart->setAxisX(axis, series);



Then, we create a chart view for Qt to render the bar chart and set it as a child of the frame widget in the main window; otherwise, it won't be rendered on the main window:



QChartView *chartView = new QChartView(chart); 
chartView->setParent(ui->verticalFrame);



Click the Run button in Qt Creator, and you should see something like this:
--
![bar-chart-result.png]



Next, let's do a pie chart



First, instead of QBarSet and QBarSeries, we include QPieSeries and QPieSlice:



#include <QPieSeries> 
#include <QPieSlice>



Then, create a QPieSeries object and set up the name and value of each data.



After that, set one of the slices to a different visual style and make it pop out from the rest.



Then, create a QChart object and link it with the QPieSeriesobject that we have created:



QPieSeries *series = new QPieSeries(); 
series->append("Jane", 10); 
series->append("Joe", 20); 
series->append("Andy", 30); 
series->append("Barbara", 40); 
series->append("Jason", 50); 
 
QPieSlice *slice = series->slices().at(1); 
slice->setExploded(); // Explode this chart 
slice->setLabelVisible(); // Make label visible 
slice->setPen(QPen(Qt::darkGreen, 2)); // Set line color 
slice->setBrush(Qt::green); // Set slice color 
 
QChart *chart = new QChart(); 
chart->addSeries(series); 
chart->setTitle("Students Performance");



QChartView *chartView = new QChartView(chart);chartView->setParent(ui->verticalFrame);



you should be able to see something like this:
--
![pie-chart-result.png]



For more examples of how to create different charts in Qt, please check out their sample code at the following link: https://doc.qt.io/qt-5/qtcharts-examples.html.

