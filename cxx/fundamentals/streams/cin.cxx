#include <iostream>
#include <string>
using namespace std;

int main ()
{
    double pi = 0;
    cout << "Enter pi number: ";
    cin >> pi;

    const int buffsize = 10;
    char sentence [buffsize] = {0}; // always instantiate arrays
    cout << "Enter a sentence: ";
    cin.get (sentence, buffsize); // limit cin boundaries by std::cin::get
    cout << sentence << endl;

    string brokenname;
    cout << "Enter your fullname: ";
    cin >> brokenname; // newline would slice string
    cout << brokenname << endl;

    string fullname;
    cout << "Enter your fullname again: ";
    getline(cin, fullname); // getline will get whole string even with \0
    cout << fullname << endl;

    cout << "your pi is " << pi << endl;
    cout << "sentence is: " << sentence << endl;
    cout << "your broken name is: " << brokenname << endl;
    cout << "your fullname is: " << fullname << endl;

    return 0;
}