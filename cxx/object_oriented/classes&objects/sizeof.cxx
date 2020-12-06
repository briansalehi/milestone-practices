#include <iostream>
#include <cstring>

class Message {
public:
    Message(const char* raw) {
        std::cout << "Constructor Invoked" << std::endl;
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

    ~Message() {
        std::cout << "Distructor Invoked" << std::endl;
        delete [] message;
    }

private:
    char* message;
};

int main()
{
    Message msg("Cxx Programming");
    std::cout << "length: " << msg.length() << std::endl;
    std::cout << "message: " << msg.show() << std::endl;

    // size of class does not contain method data
    std::cout << "size of object: " << sizeof(msg) << std::endl;

    return 0;
}
