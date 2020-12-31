# 06.02 Mutex

This chapter will have a review over mutex routines.  
The **mutex** header contains multiple types of locks. The **mutex** type is most commonly used type, and provides the basic lock/unlock functionality without any further complications.  
At its core, the goal of a mutex is to exclude the possibility of simultaneuos access so as to prevent data corruption, and to prevent crashes due to the use of non-thread-safe routines.

### Table of Content

* [06.02.01. mutex example](./01.example.md)
* [06.02.02. try_lock](./02.try-lock.md)
* [06.02.03. try_lock_for](./03.try-lock-for.md)
* [06.02.04. std::lock_guard](./04.lock-guard.md)
* [06.02.05. std::unique_lock](./05.unique-lock.md)
* [06.02.06. std::scoped_lock](./06.scoped-lock.md)
* [06.02.07. recursive_mutex](./07.recursive-mutex.md)

### Quick Access

<div class="previous_chapter pagination">

#### &#8647; Previous Chapter

* [06.01. Threads](./../../06.multithreading/01.threads/README.md)
</div>

<div class="previous_page pagination">

#### &#8592; Previous Page

* [06.01.08. swapping threads](./../../06.multithreading/01.threads/08.swap.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [06.02.01. mutex example](./../../06.multithreading/02.mutex/01.example.md)

</div>
<div class="next_chapter pagination">

#### &#8649; Next Chapter

* [06.03. Future and Promise](./../../06.multithreading/03.future/README.md)

</div>
