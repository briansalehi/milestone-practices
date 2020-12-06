# 01.01 The Anatomy of C

C is a relatively "low level" language. This characterization is not pejorative;
it simply means that C deals with the same sort of objects that most computers
do, namely characters, numbers, and addresses.
These maybe combined and moved about with the arithmetic and logical operators
implemented by real machines.

C provides no operations to deal directly with composite objects such as
character strings, sets, lists, or arrays. There are no operations that manipulate
an entire array or string, although structures may be copied as a unit. The
language does not define any storage allocation facility other than static
definition and the stack discipline provided by the local variables of functions;
there is no heap or garbage collection. Finally, C itself provides no input/output
facilities; there are no READ or WRITE statements, and no built-in file access
methods. All of these higher-level mechanisms must be provided by explicitly-
called functions. Most C implementations have included a reasonably standard
collection of such functions.

Similarly, C offers only straightforward, single-thread control flow: tests,
loops, grouping, and subprograms, but not multiprogramming, parallel operations,
synchronization, or coroutines.

Although the absence of some of these features may seem like a grave deficiency,
keeping the language down to modest size has real benefits. Since C
is relatively small, it can be described in a small space, and learned quickly.
A programmer can reasonably expect to know and understand and indeed regularly
use the entire language.

### Table of Content

* [01.01.01. main function](./01.main.md)

### Quick Access

#### &#8647; Previous Chapter

* [01.01. introduction](./../../01.the_basics/01.introduction/00.README.md)

<div class="quick_access">
<div class="previous_page" style="float:left">

#### &#8592; Previous Page

* [01. the basics](./../../01.the_basics/00.README.md)

</div>
<div class="next_page" style="float:right">

#### &#8594; Next Page

* [01.01.01. main function](./../../01.the_basics/01.introduction/01.main.md)

</div>
</div>

#### &#8649; Next Chapter

* [01.02. variables and constants](./../../01.the_basics/02.variables_constants/00.README.md)
