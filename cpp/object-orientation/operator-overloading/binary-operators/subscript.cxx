#include <iostream>
#include <string>
#include <cstring>

class Message
{
public:
    Message(const char* msg): text(nullptr) // overloaded constructor
	{
        text = new char[strlen(msg)+1];
        strcpy(text, msg);
    }

    Message(const Message& copycon): text(nullptr) // copy constructor
	{
        if (copycon.text != nullptr) {
            text = new char[strlen(copycon.text)+1];
            strcpy(text, copycon.text);
        }
    }

    Message& operator= (const Message& pair) // copy assignment operator
	{
        if ((this != &pair) && (pair.text != nullptr)) {
            if (text != nullptr) {
                delete [] text;
            }
            
            text = new char [strlen(pair.text)+1];
            strcpy(text, pair.text);
        }

        return *this;
    }

    const char& operator[] (const unsigned int index) const // subscript operator
	{
        if (index > 0 && index < strlen(text)) {
            return text[index];
        }
        else {
            return text[0];
        }
    }

    operator const char*() // conversion operator
	{
        return text;
    }

    virtual ~Message() // destructor
	{
        if (text != nullptr) {
            delete [] text;
        }
    }

private:
    char* text;
};

int main()
{
    Message msg("Cxx programming");
    std::cout << msg << std::endl;
    std::cout << msg.operator[](0) << msg.operator[](1) << msg.operator[](2) << std::endl;

    return 0;
}
