#include <iostream>
#include <string>
#include <cstring>

class Message
{
public:
    Message(const char* msg): text(nullptr)
	{
        text = new char[strlen(msg)+1];
        strcpy(text, msg);
    }

    Message& operator= (const Message& pair)
	{
        if ((this != &pair) && (pair.text != nullptr)) {
            if (text != nullptr) {
                delete [] text;
            }
            
            text = new char[strlen(pair.text)+1];
            strcpy(text, pair.text);
        }

        return *this;
    }

    operator const char*()
	{
        return text;
    }

    virtual ~Message()
	{
        delete [] text;
    }

private:
    char* text;
};

int main()
{
    Message msg1("first message");
    Message msg2("second message");
    std::cout << msg1 << std::endl;
    msg1 = msg2;
    std::cout << msg1 << std::endl;

    return 0;
}
