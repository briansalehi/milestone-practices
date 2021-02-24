#include <iostream>
#include <string>

class Human
{
public: // access modifier
    std::string name;
    short age;

    // method (function within a class)
    void introduce()
	{
        std::cout << "I am " << name << ", and I'm " << age << " years old." << std::endl;
    }
};

int main()
{
    Human person; // object
    person.name = "Brian"; // dot operator to access object elements
    person.age = 23;
    person.introduce();

    Human* Eve = new Human(); // allocating new object
    Eve->name = "Cane"; // pointer operator to access object pointer elements
    Eve->age = 1240;
    Eve->introduce();
    delete ghost; // never forget to delete newly allocated memory

    return 0;
}
