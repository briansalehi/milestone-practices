#include <iostream>
#include <string>

int main()
{
    const char* language = "C"; // constant std::string literal
    std::string family(2, '+'); // print N times of second parameter character
    std::string job = language;
    job.append(family); // std::string concatanation by append operator
    
    std::string fname = "Jane"; // std::string assignment
    std::string lname("Doe"); // std::string instantiation
    std::string name = fname + " " + lname; // std::string concatanation by addition operator
    
    std::cout << name << " is a " << job << " programmer." << std::endl;
    return 0;
}
