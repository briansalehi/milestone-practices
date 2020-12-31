#include <iostream>
#include <cstring>

class Base {
public:
    Base(const char* input) {
        std::cout << "Constructor Invoked" << std::endl;
        member = nullptr;

        if (input != nullptr) {
            member = new char[strlen(input)+1];
            strcpy(member, input);
            std::cout << "member address: " << std::hex << &member << std::endl;
        }
    };

    Base(const Base& base) {
        std::cout << "Copy Constructor Invoked" << std::endl;
        member = nullptr;

        if (base.member != nullptr) {
            member = new char[strlen(base.member)+1];
            strcpy(member, base.member);
            std::cout << "copied member address: " << std::hex << &member << std::endl;
        }
    };

    Base(const Base&& base) {
        std::cout << "Move Constructor Invoked" << std::endl;
        member = nullptr;

        if (base.member != nullptr) {
            member = new char[strlen(base.member)+1];
            strcpy(member, base.member);
            std::cout << "movable member address: " << std::hex << &base.member << std::endl;
            std::cout << "moved member address: " << std::hex << &member << std::endl;
            delete [] base.member;
        }
    };

    ~Base() {
        std::cout << "Destructor Invoked" << std::endl;
        if (member != nullptr) {
            delete [] member;
        }
    };

private:
    char* member;
};

Base&& move(Base& base) {
    return std::move(base);
}

int main()
{
    Base object("using move semantics");
    Base reference = move(object);

    return 0;
}
