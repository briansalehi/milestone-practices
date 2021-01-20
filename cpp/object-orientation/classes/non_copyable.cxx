#include <iostream>
#include <cstring>

class Message {
private:
    char* message;
    // avoid object to be copied
    Message(const Message& copy); // private copy constructor
    Message& operator= (const Message& asign); // private copy assignment operator

public:
    Message(const char* raw) {
        std::cout << "Overloaded Constructor Invoked" << std::endl;
        message = nullptr;
        message = new char[strlen(raw)+1];
        strcpy(message, raw);
    }

    void show() {
        std::cout << "message: " << message << std::endl;
    }

    int length() {
        return strlen(message);
    }

    ~Message() {
        std::cout << "Distructor Invoked" << std::endl;
        delete [] message;
    }
};

void get_info(Message tmp) {
    tmp.show();
}

int main()
{
    Message msg("Cxx Programming");
    msg.show();

    /*
    get_info(msg); // cannot make a copy
    */
    
    return 0;
}
