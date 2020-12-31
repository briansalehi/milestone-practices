# 02.04 Operators

The lession of this chapter can be summerized in the following rule:

Every class that allocates its own objects using **new** should:

* Define a **destructor** to free any allocated objects.
* Define a **copy constructor**, which allocates its own new member storage and copies the contents of member variables.
* Define an **assignment operator**, which deallocates old storage, allocates new storage, and copies all member variables.

### Table of Content

* [02.04.01. unary operators](./01.increment.md)
* [02.04.02. friend](./02.friend.md)
* [02.04.03. conversion operators](./03.stream.md)
* [02.04.04. assignment operator](./04.assignment.md)
* [02.04.05. equality and inequality operator](./05.equality.md)
* [02.04.06. inequality](./06.inequality.md)
* [02.04.07. copy operator](./07.copy.md)
* [02.04.08. subscript operator](./08.subscript.md)
* [02.04.09. function operator](./09.function.md)
* [02.04.10. move operators](./10.move.md)
* [02.04.11. user defined literals](./11.literal.md)

### Quick Access

<div class="previous_chapter pagination">

#### &#8647; Previous Chapter

* [02.03. Polymorphism](./../../02.object_oriented/03.polymorphism/README.md)
</div>

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.03.07. virtual copy constructor](./../../02.object_oriented/03.polymorphism/07.virtual_cconstructor.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.04.01. unary operators](./../../02.object_oriented/04.operators/01.increment.md)

</div>
<div class="next_chapter pagination">

#### &#8649; Next Chapter

* [02.05. Casting Operators](./../../02.object_oriented/05.casting/README.md)

</div>
