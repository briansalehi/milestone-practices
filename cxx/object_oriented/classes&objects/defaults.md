# 02.01.05 default parameters

```cxx
class Square {
private:
    int side;

public:
    // declaring no default constructor and specifying an overloaded one forces to initialize object with value

    // overloaded constructor
    Square(int length) {
        side = length;
    }
};

class Triangle {
private:
    int edge;
public:
    // default parameter value
    Triangle(int length = 1) {
        edge = length;
    }
};

int main()
{
    /*
    Square sq1; // won't work
    */

    Square sq2(3);
    Triangle tr;

    return 0;
}

```

## Output

no output provided

## Comments *[not verified]*

Constructors too, can have difault parameter values. But don't forget about the function signatures, as a function with one argument having default value does not differ with the one function having no arguments at all.  
This might make your compiler complain about ambigious function declaration.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.01.04. overloading constructors](./../../02.object_oriented/01.classes&objects/04.overloading.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.01.06. constructor initialization list](./../../02.object_oriented/01.classes&objects/06.initialization.md)

</div>
