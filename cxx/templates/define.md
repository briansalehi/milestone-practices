# 02.06.01 define macro

```cxx
// macro, preprocessor
#define AGE 23

int main()
{
    int myage = AGE;
    return 0;
}

```

## Output

no output provided

## Comments *[not verified]*

**Macro** is a kind of variable having no type, where its value
will be substituted anywhere it is specified in **compile time**.  
That is, macros are just a simple string substitution approach,
mostly useful in embedded development where there is a limited
amount of memory to hold all of the variables.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.06. Macros and Templates](./../../02.object_oriented/06.templates/README.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.06.02. multiple inclusion guard](./../../02.object_oriented/06.templates/02.guard.md)

</div>
