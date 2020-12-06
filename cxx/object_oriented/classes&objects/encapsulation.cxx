#include <iostream>
#include <string>

// class
class Human {
public: // abstraction
    std::string name;
    short age;

    // method
    void introduce(){
        std::cout << "I am " << name << ", and I'm " << age << " years old." << std::endl;
    }
};

int main()
{
    // class instance, object man
    Human person;
    // dot operator to access object elements
    person.name = "Brian";
    person.age = 23;

    // allocating new object
    Human* ghost = new Human();
    // pointer operator to access object pointer elements
    ghost->name = "Cane";
    ghost->age = 1240;

    person.introduce();
    ghost->introduce();

    delete ghost; // never forget to delete newly allocated memory
    return 0;
}
