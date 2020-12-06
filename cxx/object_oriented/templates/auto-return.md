# 02.06.06 auto return type

```cxx
/*
    to use *auto-deduction* on return type
    of a template function, you need to
    predict that type by function's
    parameters type using *-> decltype()*
    after function declaration.
*/
template <typename T>
auto function(T parameter) -> decltype(parameter) {
    return parameter;
}

int main()
{
    int variable = function<int>(2);

    return 0;
}

```

## Output

no output provided

## Comments *[not verified]*

You can't use auto-deduction on a function's return type while you're returning an unpredicted type using a template.  
To predict a function's returning type, use **decltype** function to get the type of function parameters.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.06.05. template functions](./../../02.object_oriented/06.templates/05.function.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.06.07. template classes](./../../02.object_oriented/06.templates/07.class.md)

</div>
