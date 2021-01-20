# 03 Standard Template Library (STL)

The Standard Template Library (STL) is a collection of useful classes for common  
data structures. In addition to the string class, which we have seen many times, it  
also provides data structures for the following standard containers. We discuss  
many of these data structures later in this book, so don’t worry if their names seem  
unfamiliar.

* stack			Container with last-in, first-out access
* queue			Container with first-in, first-out access
* deque			Double-ended queue
* vector		Resizeable array
* list			Doubly linked list
* priority\_queue	Queue ordered by value
* set			Set
* map			Associative array (dictionary)

### Table of Content

* [03.01. Introduction to STL](./01.introduction/README.md)
* [03.02. the STL String Class (std::string)](./02.string/README.md)
  * [03.02.01. string instantiation](./02.string/01.instantiation.md)
  * [03.02.02. accessing character contents of a string](./02.string/02.contents.md)
  * [03.02.03. finding character or substring in a string](./02.string/03.substring.md)
  * [03.02.04. turncating string](./02.string/04.truncate.md)
  * [03.02.05. string reversal](./02.string/05.reverse.md)
  * [03.02.06. string conversion](./02.string/06.conversion.md)
  * [03.02.07. (C++14) operator ""s](./02.string/07.operator.md)
* [03.03. the STL Dynamic Arrays (std::vector, std::deque)](./03.array/README.md)
  * [03.03.01. vector instantiation](./03.array/01.instantiate.md)
  * [03.03.02. inserting element at the end](./03.array/02.pushback.md)
  * [03.03.03. inserting element in the middle](./03.array/03.insert.md)
  * [03.03.04. accessing vector elements using array semantics](./03.array/04.subscript.md)
  * [03.03.05. accessing vector elements using pointer semantics](./03.array/05.semantics.md)
  * [03.03.06. remove an element from vector](./03.array/06.remove.md)
  * [03.03.07. size and capacity of vector](./03.array/07.memory.md)
  * [03.03.08. reserving memory for vector](./03.array/08.reserve.md)
  * [03.03.09. deque (pronounciation rythmes as *deck*)](./03.array/09.deque.md)
  * [03.03.10. measuring the distance of two elements](./03.array/10.distance.md)
  * [03.03.11. clear a container](./03.array/11.clear.md)
  * [03.03.12. array](./03.array/12.array.md)
* [03.04. the STL std::list and std::forward_list](./04.list/README.md)
  * [03.04.01. list instantiation](./04.list/01.instantiation.md)
  * [03.04.02. pushing elements into list](./04.list/02.push.md)
  * [03.04.03. inserting elements in the middle of list](./04.list/03.insertion.md)
  * [03.04.04. removing element from list](./04.list/04.remove.md)
  * [03.04.05. reversing list elements](./04.list/05.reverse.md)
  * [03.04.06. sorting list elements](./04.list/06.sort.md)
  * [03.04.07. sorting list comprising class](./04.list/07.sort_class.md)
  * [03.04.08. std::forward_list](./04.list/08.forward_list.md)
* [03.05. the STL std::set and std::multiset](./05.set/README.md)
  * [03.05.01. set instantiation](./05.set/01.instantiation.md)
  * [03.05.02. set insertion](./05.set/02.insertion.md)
  * [03.05.03. finding element in set](./05.set/03.find.md)
  * [03.05.04. erasing elements from set](./05.set/04.erase.md)
  * [03.05.05. hash set implementation (std::unordred_set, std::unordered_multiset)](./05.set/05.hash.md)
* [03.06. the STL std::map Classes](./06.map/README.md)
  * [03.06.01. map instantiation](./06.map/01.instantiation.md)
  * [03.06.02. inserting element in map](./06.map/02.insertion.md)
  * [03.06.03. finding element in map](./06.map/03.find.md)
  * [03.06.04. erasing element in map](./06.map/04.erase.md)
  * [03.06.05. custom predicate for searching map](./06.map/05.predicate.md)
  * [03.06.06. hash (unordered_map & unordered_multimap)](./06.map/06.hash.md)

### Quick Access

<div class="previous_section pagination">

#### &#11057; Previous Section

* [02. Object Oriented C++ Programming](./../02.object_oriented/README.md)
</div>

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.06.13. static_assert](./../02.object_oriented/06.templates/13.static-assert.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [03.01. Introduction to STL](./../03.stl/01.introduction/README.md)

</div>
<div class="next_section pagination">

#### &#8694; Next Section

* [04. More Advanced Topics on STL](./../04.more_stl/README.md)

</div>
