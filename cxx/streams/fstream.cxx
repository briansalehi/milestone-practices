#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ()
{
    // read and write, trunc creates file if not exists or already does
    fstream rwfile;
    rwfile.open ("file.temp", ios_base::in|ios_base::out|ios_base::trunc);

    if (rwfile.is_open ()) {
        rwfile << "This is a sample file\n";
        rwfile << "to demonstrate how C++ reads a file\n";
        rwfile << "and learn iterating through lines\n";
        rwfile << "using files is an interesting topic" << endl;
        rwfile.close();
    }

    // read-only file
    ifstream rfile;
    rfile.open ("file.temp", ios_base::in);
    
    if (rfile.is_open ()) {
        // read file line by line
        string fileline;
        while (rfile.good()) {
            getline (rfile, fileline);
            cout << fileline << endl;
        }
        rfile.close();
    }

    // write-only file
    ofstream wfile;
    wfile.open ("file.temp", ios_base::out);
    
    if (wfile.is_open ())
        wfile.close();

    return 0;
}
