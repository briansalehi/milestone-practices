#include <iostream>
#include <string>
#include <cstring>

class Message {
private:
    char* text;
    Message() {};

public:
    Message(const char* msg): text{nullptr} {
        text = new char[strlen(msg)+1];
        strcpy(text, msg);
    }

    Message(const Message& copycon): text{nullptr} {
        if (copycon.text != nullptr) {
            text = new char[strlen(copycon.text)+1];
            strcpy(text, copycon.text);
        }
    }

    Message& operator= (const Message& pair) {
        if ((this != &pair) && (pair.text != nullptr)) {
            if (text != nullptr) {
                delete [] text;
            }
            
            text = new char [strlen(pair.text)+1];
            strcpy(text, pair.text);
        }

        return *this;
    }

    const char& operator[] (const unsigned int index) const {
        if (index > 0 && index < strlen(text)) {
            return text[index];
        }
        else {
            return text[0];
        }
    }

    operator const char*() {
        return text;
    }

    ~Message() {
        if (text != nullptr) {
            delete [] text;
        }
    }
};

int main()
{
    Message msg("Cxx programming");
    std::cout << msg << std::endl;
    std::cout << msg.operator[](7) << msg.operator[](8) << msg.operator[](9) << std::endl;

    return 0;
}
