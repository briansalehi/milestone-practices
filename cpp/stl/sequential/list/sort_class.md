# 03.04.07 sorting list comprising class

```cxx
#include <iostream>
#include <list>
#include <string>

// generic display function
template <typename C>
void display(const C& container) {
    for (auto iterator = container.cbegin(); iterator != container.cend(); ++iterator) {
        std::cout << *iterator << std::endl;
    }
    std::cout << std::endl;
}

// sample class
struct Person {
    std::string name;
    std::string phone;
    std::string info = (name + ": "+ phone);

    Person(const std::string& iname, const std::string& iphone): name(iname), phone(iphone) {}

    bool operator== (const Person& toCompare) const {
        return (this->name == toCompare.name);
    }

    bool operator< (const Person& toCompare) const {
        return (this->name < toCompare.name);
    }

    operator const char*() const {
        return info.c_str();
    }
};

// custom sort of classes
bool sortByPhone(const Person& fisrt, const Person& second) {
    return (fisrt.phone < second.phone);
}

int main()
{
    // populate std::list with class
    std::list<Person> people;
    people.push_back(Person("Hannibal Lecter", "+1 537867249"));
    people.push_back(Person("Jack Crawford", "+1 375749356"));
    people.push_back(Person("Will Graham", "+1 736571537"));
    people.push_back(Person("Alana Bloom", "+1 873943526"));
    display(people);

    // default sort of classes(uses operator < and operator ==)
    people.sort();
    display(people);

    // custom sort of classes
    people.sort(sortByPhone);
    display(people);

    // remove class elements by remove
    people.remove(Person("Jack Crawford", "")); // spoil alert!
    display(people);

    return 0;
}

```

## Output

```txt
Hannibal Lecter: +1 537867249
Jack Crawford: +1 375749356
Will Graham: +1 736571537
Alana Bloom: +1 873943526

Alana Bloom: +1 873943526
Hannibal Lecter: +1 537867249
Jack Crawford: +1 375749356
Will Graham: +1 736571537

Jack Crawford: +1 375749356
Hannibal Lecter: +1 537867249
Will Graham: +1 736571537
Alana Bloom: +1 873943526

Hannibal Lecter: +1 537867249
Will Graham: +1 736571537
Alana Bloom: +1 873943526

```

## Comments *[not verified]*

This is a sample of specializing algorithm functions like **sort()** to sort a container of objects.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [03.04.06. sorting list elements](./../../03.stl/04.list/06.sort.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [03.04.08. std::forward_list](./../../03.stl/04.list/08.forward_list.md)

</div>
