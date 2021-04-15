#include <iostream>

struct Message
{
    void operator() (const char* msg) const
	{
        std::cout << msg << std::endl;
    }
};

int main()
{
    Message msg;
    msg("Cxx programming");
}
