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

        if (base.member != nullptr) {
            member = new char[strlen(base.member)+1];
            strcpy(member, base.member);
            std::cout << "copied member address: " << std::hex << &member << std::endl;
        }
    };

    Base(const Base&& base) {
        std::cout << "Move Constructor Invoked" << std::endl;

        if (base.member) {
            member = new char[strlen(base.member)+1];
            strcpy(member, base.member);
            std::cout << "rvalue address: " << std::hex << &base.member << std::endl;
            std::cout << "lvalue address: " << std::hex << &member << std::endl;
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

Base copyObject(Base&base) {
	return base;
}

Base moveObject(Base& base) {
    return std::move(base);
}

int main()
{
	try {
		Base object("using move semantics");
		Base concrete = copyObject(object);
		Base reference = moveObject(object);
	} catch (std::exception& exp) {
		std::cerr << exp.what() << std::endl;
	}
    return 0;
}
