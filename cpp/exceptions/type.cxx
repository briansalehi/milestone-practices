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
    catch (std::bad_alloc& exp) { // ... means catch all exceptions
        cout << "Exception occured: " << exp.what() << endl;
    }
    catch (...) { // you can insert as many catch as you want
        cout << "Exception occured: unknown error";
    }
    
    return 0;
}