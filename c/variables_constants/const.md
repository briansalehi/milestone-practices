# 01.02.04 const keyword

```c
int main(void)
{
    // pi cannot be modified
    const double pi = 3.141592;

    return 0;
}

```

## Output

no output provided

## Comments *[not verified]*

There are 4 types of constants in C:

*    literal constants
*    define preprocessor
* => const keyword
*    enumeration

Variables defined by **const** keyword are read only variables with types.  
That is, they are declared by types and they are a substitution to **define** directive.  
Generally, when you're writing C code on an embedded device or systems with limited hardware resource,
it is a good idea to use **define** directive as it only substitutes the values and will not presume
the same amount of memory used by **const** statement.  
But when coding on faster systems with having more resources to use, it is a better idea to use **const**
keyword as it's type safe and compilers will prevent mistakes.

### Quick Access

<div class="quick_access">
<div class="previous_page" style="float:left">

#### &#8592; Previous Page

* [01.02.03. define preprocessor](./../../01.the_basics/02.variables_constants/03.define.md)

</div>
<div class="next_page" style="float:right">

#### &#8594; Next Page

* [01.02.05. enumeration](./../../01.the_basics/02.variables_constants/05.enumeration.md)

</div>
</div>
