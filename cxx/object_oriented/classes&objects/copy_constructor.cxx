#include <iostream>
#include <string>
#include <cstring>

class Message {
private:
    char* message;

public:
    Message(const char* raw) {
        std::cout << "constructor invoked" << std::endl;
        message = NULL;

        if (raw != NULL) {
            message = new char[strlen(raw)+1];
            strcpy(message, raw);

            std::cout << "message is at address: " << std::hex << &message << std::endl;
        }
    }

    Message(const Message& cpymsg) {
        std::cout << "copy constructor invoked" << std::endl;
        message = NULL;

        if (cpymsg.message != NULL) {
            message = new char[strlen(cpymsg.message)+1];
            strcpy(message, cpymsg.message);

            std::cout << "copied message is at address: " << std::hex << &message << std::endl;
        }
    }

    void show() {
        std::cout << "message text: ";
        std::cout << message << std::endl;
    }

    void length() {
        std::cout << "message length: ";
        std::cout << std::dec << strlen(message) << std::endl;
    }

    // destructor
    ~Message() {
        std::cout << "destructor invoked" << std::endl;
        delete [] message;
    }
};

// copy of object pointer
void get_info(Message raw) {
    raw.length();
    raw.show();
}

int main()
{
    Message msg("Cxx Programming");
    get_info(msg);

    return 0;
}
