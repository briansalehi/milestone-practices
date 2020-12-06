# 01.07.01 function declaration

```cxx
const double pi = 3.141592;

// function declaration
double Area(double r);
double Circumference(double r);

int main()
{
    double radius = 2;
    double area = Area(radius);
    double circumference = Circumference(radius);

    return 0;
}

// function definition
double Area(double r) { return pi * r * r; }
double Circumference(double r) { return 2 * pi * r; }

```

## Output

no output provided

## Comments *[not verified]*

Any function in program must be declared before the main function.  
This can be done in two ways:

* write function declaration before **main** and then write function definition after it
* write function definition before **main** once.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.07. Organizing Code with Functions](./../../01.the_basics/07.functions/README.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.07.02. multiple parameters](./../../01.the_basics/07.functions/02.parameters.md)

</div>
