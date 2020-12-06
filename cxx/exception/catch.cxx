#include <iostream>
using namespace std;

int main ()
{
    cout << "how much memory do you need? ";
    try {
        int size;
        cin >> size; // type -1 to see the error
        cout << size << endl;
        
        char* letter = new char [size];
        delete [] letter;
    }
    catch (...) { // ... means catch all exceptions
        cout << "Exception occured" << endl;
    }
    
    return 0;
}