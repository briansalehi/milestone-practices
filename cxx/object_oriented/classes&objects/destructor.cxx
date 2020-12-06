#include <iostream>
#include <cstring>

class Message {
private:
    char* message;

public:
    Message(const char* raw) {
        std::cout << "constructor" << std::endl;
        message = NULL;
        message = new char[strlen(raw)+1];
        strcpy(message, raw);
    }

    char* show() {
        return message;
    }

    int length() {
        return strlen(message);
    }

    // destructor
    ~Message() {
        std::cout << "distructor" << std::endl;
        delete [] message;
    }
};

int main()
{
    Message msg("Cxx Programming");
    std::cout << "length: " << msg.length() << std::endl;
    std::cout << "message: " << msg.show() << std::endl;

    return 0;
}
