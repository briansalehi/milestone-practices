#include <iostream>
#include <exception>
using namespace std;

int main ()
{
    cout << "Enter array length (-1): ";
    
    try {
        int length = 0;
        cin >> length;
        cout << length << endl;

        int* numbers = new int [length];
        delete [] numbers;
        cout << "deallocated array" << endl;
    }
    catch (std::exception& exp) { // exception base class will catch all exceptions
        cout << "Exception: " << exp.what() << endl;
    }

    return 0;
}