#include <iostream>
#include <fstream>
#include <iomanip>
#include <string.h>
using namespace std;

struct Human {
    int age;
    char name[30];

    Human () {};
    Human (const char* iname, const int iage): age(iage) {
        strcpy (name, iname);
    };
};

int main ()
{
    ofstream wfile;
    wfile.open ("file.temp", ios_base::out);

    if (wfile.is_open()) {
        Human worker ("Adam", 35);
        wfile.write(reinterpret_cast <const char*> (&worker), sizeof(worker));
        wfile.close ();

        cout << "wrote object into file" << endl;
    }

    ifstream rfile;
    rfile.open ("file.temp", ios_base::in);

    if (rfile.is_open()) {
        Human someone;
        rfile.read ((char*)&someone, sizeof(someone));
        rfile.close ();
        
        cout << "read object from file" << endl;
        cout << someone.name << " is " << someone.age << " years old" << endl;
    }

    return 0;
}