#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main ()
{
    int number = 10;
    cout << "integer representation: " << number << endl;

    stringstream convertable;
    convertable << number;

    string numeric;
    convertable >> numeric;
    cout << "string representation: " << numeric << endl;

    return 0;
}