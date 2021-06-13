In this chapter you will just practice basics of popular wigets.

Qt Designer is normally used by developers to design GUIs for desktop applications, while Qt Quick Designer is usually used for mobile and embedded platforms.

The GUI file saved by Qt Designer carries the .ui extension, which is saved in XML format. The file stores the attributes of each and every widget placed by the GUI designer, such as position, size, margin, tooltip, layout direction, and so on. It also saves the signal-and-slot event names within itself for easily connecting with the code in the later stages.

On the other hand, Qt Quick Designer saves GUI files in both .ui.qml and .qml formats.

Instead of XML format, Qt Quick Designer saves its data in a declarative language similar to JavaScript called QML. QML not only allows the designer to customize their GUI in a CSS-like (Cascading Style Sheets) fashion, it also allows the programmer to write functional JavaScript within the QML file. As we mentioned earlier, .ui.qml is the file format used for visual decoration only while .qml contains application logic.

Qt's Widgets Application uses a styling system called Qt Style Sheets, which is similar to the web technology's styling system—CSS (Cascading Style Sheet). All you need to do is write the style description of the widget and Qt will render it accordingly. The syntax of Qt Style Sheets is pretty much the same as CSS.

Qt Style Sheets:
QLineEdit { color: blue; background-color: black; }

CSS:
h1 { color: blue; background-color: black; }

You can change a widget's style sheet by using two methods—using C++ code directly or by using the properties editor. If you're using C++ code, you can call the QObject::setStyleSheet() function, like so:
myButton->setStyleSheet("background-color: green");

You can also achieve the same result by writing the same declaration into the styleSheet property of the widget in Qt Designer:
QPushButton#myButton { background-color: green }

