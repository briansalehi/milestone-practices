# 02.01.22 delete methods

```cxx
class Base {
public:
    Base(): number{0} {};
    Base(int input): number{input} {};
    Base(Base& base) = delete; // cannot be used
    Base& operator= (Base& base) = delete; // cannot be used

private:
    int number;
};

int main()
{
    Base alpha(3);
    /*
    Base beta = alpha; // not permited!
    */

    return 0;
}

```

## Output

no output provided

## Comments *[not verified]*

To prevent an object from being assigned to another object, copy constructor
and assignment operator should be put in private section.  
Another way of doing that is to explicitely use **delete** keyword to
declare that specified function is deleted.  
Deleted functions are declared and are known to the functions stack, but they
cannot be used.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.01.21. default methods](./../../02.object_oriented/01.classes&objects/21.default-methods.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.02. Inheritance](./../../02.object_oriented/02.inheritance/README.md)

</div>
