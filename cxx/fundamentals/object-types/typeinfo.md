# 01.03.10 typeinfo

```cxx
#include <typeinfo>
#include <iostream>

class Base {
public:
    Base() = default;
};

int function(const int param) {
    return param;
}

double function(const double param) {
    return param;
}

int main()
{
    double number = 3.141592;
    int (*ifp)(const int) = function;
    double (*dfp)(const double) = function;

    // name() method indicates the type of object was given
    std::cout << typeid(number).name() << std::endl;

    std::cout << typeid(Base).name() << std::endl;
    // hash_code() returns a hash value identifying the object
    std::cout << typeid(Base).hash_code() << std::endl;

    std::cout << typeid(*ifp).name() << std::endl;
    std::cout << typeid(dfp).name() << std::endl;


    // before() method clarifies which type precedes the other 
    if (typeid(char).before(typeid(int))) {
        std::cout << "int has higher priority over char in this compiler" << std::endl;
    }
    else {
        std::cout << "char has higher priority over int in this compiler" << std::endl;
    }

    return 0;
}

```

## Output

```txt
d
4Base
1646098473708828226
FiiE
PFddE
int has higher priority over char in this compiler
```

## Comments *[not verified]*

Using *implicit* type declaration makes your code readable for sure,
but it won't hide the fact that you need to know what kind of types you are using in your program.  
Type deductions also make it even harder when variable types are complex.  

To find a variable's type, you can you **typeid()** object in *typeinfo* header file,
and use **name()** method to show the type name.  
Also using **before()** method clarifies which type precedes the other.

The output **d** represents type **double**.
**4Base** indicates the name of class named Base,
**FiiE** means function with signature of ii,
**PFddE** means pointer to function with signature of dd.  
this is how Cxx language finds its functions, variables and objects!
So, when using 4 overloaded functions all having the same name, it's not a magic that Cxx can find the proper function.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.03.09. *auto* keyword](./../../01.the_basics/03.variables&constants/09.auto.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.03.11. *typedef* keyword](./../../01.the_basics/03.variables&constants/11.typedef.md)

</div>
