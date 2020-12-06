#include <iostream>
using namespace std;

struct ClassB {
    ClassB () { cout << "Class B constructor" << endl; }
    ~ClassB () { cout << "Class B destructor" << endl; }
};

struct ClassA {
    ClassA () { cout << "Class A constructor" << endl; }
    ~ClassA () { cout << "Class A destructor" << endl; }
};

void funcB () {
    cout << "function B invoked" << endl;
    ClassA a;
    ClassB b;
    throw ("Exception thrown from B"); // no catch for this throw in function B
}

void funcA () {
    cout << "function A invoked" << endl;
    try {
        ClassA a;
        ClassB b;
        funcB ();
    }
    catch (const char* exp) { // nearest catch to thrown exception B is catch A
        cout << "Exception catched in A" << endl;
        cout << exp << endl;
    }
}

int main ()
{
    try {
        funcA ();
    }
    catch (const char* exp) { // main will continue like there was no problem
        cout << "Exception occured in main()" << endl;
        cout << exp << endl;
    }

    cout << "All good in main()" << endl;

    return 0;
}