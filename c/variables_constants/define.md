# 01.02.03 define preprocessor

```c
#define PI 3.1415

int main(void)
{
    int pi = PI;

    return 0;
}

```

## Output

no output provided

## Comments *[not verified]*

There are 4 types of constants in C:

*    literal constants
* => define preprocessor
*    const keyword
*    enumeration

**define** is a preprocessor directive that substitutes an expression in compile time.  
Generally, it's just a simple string replacement and has no types.

Constants declared by define preprocessor cannot be modified after their creation,
as they are only string substitutions.

### Quick Access

<div class="quick_access">
<div class="previous_page" style="float:left">

#### &#8592; Previous Page

* [01.02.02. constant literals](./../../01.the_basics/02.variables_constants/02.literal.md)

</div>
<div class="next_page" style="float:right">

#### &#8594; Next Page

* [01.02.04. const keyword](./../../01.the_basics/02.variables_constants/04.const.md)

</div>
</div>
