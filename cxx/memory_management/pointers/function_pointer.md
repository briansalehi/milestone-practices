# 01.08.13 function pointer

```cxx
// simple function
void alpha(int a);

// more complex function
double beta(double array[5], int size);

// even more complex function
const double* gama(const double array[5], int size);

int main()
{
    /*
        simple usage of pointer to function.
        here alpha_p points to alpha function with no return type,
        and an int as signature (arguments).
    */
    void (*alpha_p)(int) = alpha;

    /*
        a bit more complex pointer to function.
        beta_p points to beta function with double as return type,
        and an array of double and an int as signature.
    */
    double (*beta_p)(double*, int) = beta;

    /*
        complex pointer to function.
        gama_p points to an array of three gama functions!
        each gama function having array of const double as return,
        and an array of const double and an int as signature.
        the tricky part is, [3] is put just infront of gama_p.
    */
    const double* (*gama_p[3])(const double*, int) = {gama, gama, gama};

    /*
        complex af.
        that is, gama_p_array is an array of gama_p pointers!
        the question is, how deep this rabbit hole can get?
    */
    const double* (**gama_p_array[3])(const double*, int) = {gama_p, gama_p};

    return 0;
}

// THIS PART DOES NOT REALLY MATTER
void alpha(int a) {}

double beta(double array[5], int size) {
    return 3.14;
}

const double* gama(const double array[5], int size) {
    return array;
}



```

## Output

no output provided

## Comments *[not verified]*

to declare a pointer to function, all you need to do is to write down the function prototype like this:

```cpp
void function(int);
```

then wrap the function name like this (*function).

```cpp
void (*function)(int);
```

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.08.12. pointer](./../../01.the_basics/08.pointers&references/12.pointer.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.08.14. storing callable objects](./../../01.the_basics/08.pointers&references/14.store-lambda.md)

</div>
