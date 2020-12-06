#include <iostream>
#include <string>

class Message {
public:
    void operator() (const std::string& msg) const {
        std::cout << msg << std::endl;
    }
};

int main()
{
    Message msg;
    msg("Cxx programming");
}
