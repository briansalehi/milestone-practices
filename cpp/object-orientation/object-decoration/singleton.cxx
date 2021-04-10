#include <iostream>
#include <string>

class President {
private:
    std::string name;
    President() {}; // private default constructor
    President(const President& copy); // private copy constructor
    President& operator= (const President& asign); // private copy assignment operator

public:
    // in classes, static makes a member to be shared across all instances of objects
    static President& get_instance() {
        static President candidate;
        return candidate;
    }

    void introduce() {
        std::cout << "current president: " << name << std::endl;
    }

    void set_candidate(std::string president) {
        name = president;
    }

    ~President() {}
};

int main()
{
    President& US = President::get_instance();
    US.set_candidate("Donald Trump");
    US.introduce();

    /*
    President RU; // cannot make private object
    President IT = US; // cannot assign private object
    */

    return 0;
}
