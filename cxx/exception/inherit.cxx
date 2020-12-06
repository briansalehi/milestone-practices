#include <exception>
#include <iostream>
#include <string>
using namespace std;

class customException: public exception {
private:
    string reason;

public:
    customException (const char* why): reason(why) {}

    virtual const char* what () const throw() {
        return reason.c_str();
    }
};

const double Divide (const int& dividen, const int& divisor) {
    if (divisor == 0)
        throw customException ("dividing by zero is a crime");

    return (dividen / divisor);
}

int main ()
{
    int dividen = 0;
    int divisor = 0;

    cout << "Enter dividen and divisor: ";
    cin >> dividen >> divisor;
    cout << dividen << " " << divisor << endl;

    try {
        cout << "result: " << Divide (dividen, divisor) << endl;
    }
    catch (const customException& exp) {
        cout << "Exception: " << exp.what () << endl;
    }

    return 0;
}