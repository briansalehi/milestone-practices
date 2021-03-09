#include <iostream>
#include <fstream>
#include <iomanip>
#include <string_view>

struct Human
{
    unsigned int age;
	const char* name;

	Human() {};
    Human(const char* iname, const unsigned int iage): age(iage), name(iname) {};

	void whois() const
	{
		std::cout << name << " is " << age << " years old." << std::endl;
	}
};

int main()
{
	// write class data into file
	std::ofstream wfile;
    wfile.open("file.temp", std::ios_base::out);

    if (wfile.is_open()) {
        Human worker ("Brian", 25);
		// dangerious!
        wfile.write(reinterpret_cast<const char*>(&worker), sizeof(worker));
        wfile.close();
		std::cout << "Wrote object into file" << std::endl;
    }

	// read class data from file into object
	std::ifstream rfile;
    rfile.open("file.temp", std::ios_base::in);

    if (rfile.is_open()) {
        Human someone;
        rfile.read((char*)&someone, sizeof(someone));
        rfile.close();
        
		std::cout << "Read object from file" << std::endl;
		someone.whois();
    }

    return 0;
}
