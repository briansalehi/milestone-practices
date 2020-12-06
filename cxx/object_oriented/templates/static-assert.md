# 02.06.13 static_assert

```cxx
template <typename T>
class Base {
public:
    Base() {
        // assert, if expression is true! that is, let it go if it's true
        static_assert(sizeof(T) == sizeof(int), "type must be int");
    }
};

int main()
{
    /*
        Due to automatic compilation of programs
        in this documentation, all programs must be
        successfully compiled.
        Therefore, to see how static_assert stops
        compilation of this sample, manually change
        type int to type char and then recompile.
    */

    Base<int> sample;
    return 0;
}

```

## Output

no output provided

## Comments *[not verified]*

**static assert** works just like **assert** function that we previously practiced. But it evaluate the expression in compile-time and compiler will give an error when the expression does not meet the requirements.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.06.12. *tuples*](./../../02.object_oriented/06.templates/12.tuples.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [03. Standard Template Library &lpar;STL&rpar;](./../../03.stl/README.md)

</div>
