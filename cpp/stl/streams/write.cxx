#include <iostream>
#include <fstream>
#include <string>

int main()
{
    // write-only
    std::fstream wfile;
    wfile.open("file.tmp", std::ios_base::out | std::ios_base::trunc);

    if (wfile.is_open()) {
        wfile << "this string goes into the file" << std::endl;
        wfile.close();
    }

    // append
    wfile.open("file.tmp", std::ios_base::out | std::ios_base::app);

    if (wfile.is_open()) {
        wfile << "this string will be appended into the end of the file" << std::endl;
        wfile.close();
    }

    // read-only
    std::fstream rfile;
    rfile.open("file.tmp", std::ios_base::in);
    
    if (rfile.is_open()) {
        std::cout << "reading the contents of file.tmp" << std::endl;
        std::string content;
        while (rfile.good()) {
            getline(rfile, content);
            std::cout << content << std::endl;
        }
        rfile.close();
    }

    return 0;
}
