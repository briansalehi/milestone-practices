#include <iostream>
#include <string>
#include <cstring>

class Message {
private:
    char* message;

public:
    Message(const char* raw) {
        std::cout << "constructing message" << std::endl;
        message = NULL;

        if (raw != NULL) {
            message = new char[strlen(raw)+1];
            strcpy(message, raw);
        }
    }

    void show() {
        std::cout << "message: " << message << std::endl;
    }

    void length() {
        std::cout << "length: " << strlen(message) << std::endl;
    }

    ~Message() {
        std::cout << "deleting message" << std::endl;
        delete [] message;
    }
};

int main()
{
    Message msg("Cxx programming");
    msg.length();
    msg.show();

    return 0;
}
