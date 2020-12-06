# 02 Object Oriented C++ Programming

C and C++ programming languages have one thing in common, C is a functional (sequencial) programming language which C++ supports it too.  
But there are two differences that C++ has but C does not.
**Object oriented programming** and type independent **template programming**.

### Table of Content

* [02.01. Classes and Objects](./01.classes&objects/README.md)
  * [02.01.01. encapsulation](./01.classes&objects/01.encapsulation.md)
  * [02.01.02. abstraction](./01.classes&objects/02.abstraction.md)
  * [02.01.03. constructor](./01.classes&objects/03.constructor.md)
  * [02.01.04. overloading constructors](./01.classes&objects/04.overloading.md)
  * [02.01.05. default parameters](./01.classes&objects/05.defaults.md)
  * [02.01.06. constructor initialization list](./01.classes&objects/06.initialization.md)
  * [02.01.07. initializer list](./01.classes&objects/07.initializer_list.md)
  * [02.01.08. destructor](./01.classes&objects/08.destructor.md)
  * [02.01.09. copy constructor](./01.classes&objects/09.copy_constructor.md)
  * [02.01.10. move constructor](./01.classes&objects/10.move_constructor.md)
  * [02.01.11. non-copyable objects](./01.classes&objects/11.non_copyable.md)
  * [02.01.12. singleton object](./01.classes&objects/12.singleton.md)
  * [02.01.13. stack prohibition](./01.classes&objects/13.stack_prohibition.md)
  * [02.01.14. type conversion](./01.classes&objects/14.conversion.md)
  * [02.01.15. size of class](./01.classes&objects/15.sizeof.md)
  * [02.01.16. struct](./01.classes&objects/16.struct.md)
  * [02.01.17. friend classes & functions](./01.classes&objects/17.friend.md)
  * [02.01.18. union](./01.classes&objects/18.union.md)
  * [02.01.19. initialization aggregation](./01.classes&objects/19.aggregation.md)
  * [02.01.20. constant expression in classes](./01.classes&objects/20.constexpr.md)
  * [02.01.21. default methods](./01.classes&objects/21.default-methods.md)
  * [02.01.22. delete methods](./01.classes&objects/22.deleted-methods.md)
* [02.02. Inheritance](./02.inheritance/README.md)
  * [02.02.01. public inheritance](./02.inheritance/01.public.md)
  * [02.02.02. protected access specifier](./02.inheritance/02.protected_access.md)
  * [02.02.03. base class initialization](./02.inheritance/03.base_initialization.md)
  * [02.02.04. overriding methods](./02.inheritance/04.override.md)
  * [02.02.05. order of constructors and destructors](./02.inheritance/05.ordering.md)
  * [02.02.06. private inheritance](./02.inheritance/06.private.md)
  * [02.02.07. protected inheritance](./02.inheritance/07.protected.md)
  * [02.02.08. slicing derived classes](./02.inheritance/08.slicing.md)
  * [02.02.09. multiple inheritance](./02.inheritance/09.multiple.md)
  * [02.02.10. final inheritance](./02.inheritance/10.final.md)
* [02.03. Polymorphism](./03.polymorphism/README.md)
  * [02.03.01. virtual method](./03.polymorphism/01.virtual.md)
  * [02.03.02. virtual destructors](./03.polymorphism/02.virtual_destructor.md)
  * [02.03.03. pure virtual function](./03.polymorphism/03.pure.md)
  * [02.03.04. diamond problem](./03.polymorphism/04.diamond.md)
  * [02.03.05. intention to override](./03.polymorphism/05.override.md)
  * [02.03.06. prevent overriding by final](./03.polymorphism/06.final.md)
  * [02.03.07. virtual copy constructor](./03.polymorphism/07.virtual_cconstructor.md)
* [02.04. Operators](./04.operators/README.md)
  * [02.04.01. unary operators](./04.operators/01.increment.md)
  * [02.04.02. friend](./04.operators/02.friend.md)
  * [02.04.03. conversion operators](./04.operators/03.stream.md)
  * [02.04.04. assignment operator](./04.operators/04.assignment.md)
  * [02.04.05. equality and inequality operator](./04.operators/05.equality.md)
  * [02.04.06. inequality](./04.operators/06.inequality.md)
  * [02.04.07. copy operator](./04.operators/07.copy.md)
  * [02.04.08. subscript operator](./04.operators/08.subscript.md)
  * [02.04.09. function operator](./04.operators/09.function.md)
  * [02.04.10. move operators](./04.operators/10.move.md)
  * [02.04.11. user defined literals](./04.operators/11.literal.md)
* [02.05. Casting Operators](./05.casting/README.md)
  * [02.05.01. static casting](./05.casting/01.static.md)
  * [02.05.02. dynamic casting](./05.casting/02.dynamic.md)
  * [02.05.03. reinterpret casting](./05.casting/03.reinterpret.md)
  * [02.05.04. constant casting](./05.casting/04.const.md)
* [02.06. Macros and Templates](./06.templates/README.md)
  * [02.06.01. define macro](./06.templates/01.define.md)
  * [02.06.02. multiple inclusion guard](./06.templates/02.guard.md)
  * [02.06.03. macro functions](./06.templates/03.functions.md)
  * [02.06.04. validate expression using assert macro](./06.templates/04.assert.md)
  * [02.06.05. template functions](./06.templates/05.function.md)
  * [02.06.06. auto return type](./06.templates/06.auto-return.md)
  * [02.06.07. template classes](./06.templates/07.class.md)
  * [02.06.08. template with multiple parameters](./06.templates/08.multiple.md)
  * [02.06.09. template default parameter](./06.templates/09.default.md)
  * [02.06.10. template specialization](./06.templates/10.special.md)
  * [02.06.11. variable or variadic templates](./06.templates/11.variadic.md)
  * [02.06.12. *tuples*](./06.templates/12.tuples.md)
  * [02.06.13. static_assert](./06.templates/13.static-assert.md)

### Quick Access

<div class="previous_section pagination">

#### &#11057; Previous Section

* [01. The Basics](./../01.the_basics/README.md)
</div>

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.08.14. storing callable objects](./../01.the_basics/08.pointers&references/14.store-lambda.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.01. Classes and Objects](./../02.object_oriented/01.classes&objects/README.md)

</div>
<div class="next_section pagination">

#### &#8694; Next Section

* [03. Standard Template Library &lpar;STL&rpar;](./../03.stl/README.md)

</div>
