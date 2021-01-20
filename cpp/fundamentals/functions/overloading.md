# 01.07.07 function overloading

```cxx
int function(int arg) {
    return arg;
}

double function(double arg) {
    return arg;
}

int main()
{
    int one = function(1);
    double pi = function(3.14);

    return 0;
}

```

## Output

no output provided

## Comments *[not verified]*

As previously discussed, functions have the concept of **signature** which makes them distinguishable even if they have the same name!  
Consider following functions, all are of the same name but with different signatures:  

```cxx
void function(int x);
void function(double x);
int function(int x);
```

Don't forget that following two functions are identical when you use default argument values:

```cxx
void function();
void function(int x = 1);
```

Function overloading has its own price too.  
For each function, there will be memory occupation, make function overloads as few as possible.  
Also, consider using default arguments for functions having same signature type but with different argument numbers.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.07.06. multiple *return* statements](./../../01.the_basics/07.functions/06.return.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.07.08. passing an array to a function](./../../01.the_basics/07.functions/08.passing.md)

</div>
