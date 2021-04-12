<p>Your application code always runs in a <b>thread</b>. A <b>thread</b> is a synchronous execution entity where statements in a thread run one after another. The code inside <code>main()</code> is considered to execute the main thread of the application. In this main thread, you can create new threads that can run in parallel. Such applications that are comprised of one or more threads running in parallel in addition to the main thread are called <i>multithreaded applications</i>.</p>

<p>The OS dictates how threads are to be created, and you can create threads directly by calling those APIs supplied by the OS.</p>

<p>C++ since C++11 specifies thread functions that take care of calling the OS APIs for you, making your multithreaded application a little more portable.</p>

<p>The actual act of creating a thread is an OS-specific functionality.</p>

<p>C++ tries to supply you with a platform-independent abstraction in the form of <code>std::thread</code> in header <code>&lt;thread&gt;</code>. If you are writing for one platform, you are better off just using the OS-specific thread functions.</p>

<p>Should you need portable threads in your C++ application, do look up <a href="www.boost.org">Boost Thread Libraries</a>.</p>

<p>Multithreaded applications often need threads to “talk” to each other so that the application can function as a unit (and not a collection of runaway threads that do their stuff irrespective of the other).</p>

<p>Threads are OS-level entities, and the objects that you use to synchronize them are supplied by the OS, too. Most operating systems provide you with <b>semaphores</b> and <b>mutexes</b> for performing thread synchronization activity.</p>

<p>You use a mutex, a mutual exclusion synchronization object, to ensure that one thread has access to a piece of code at a time. In other words, a mutex is used to bracket a section of code where a thread has to wait until another thread that is currently executing it is done and releases the mutex. The next thread acquires the mutex, does its job, and releases the same. C++ starting with C++11 supplies you with an implementation of a mutex in class <code>std::mutex</code> available via header <code>&lt;mutex&gt;</code>.</p>

<p>Using semaphores, you can control the number of threads that execute a section of code. A semaphore that allows access to only one thread at a time is also called a binary semaphore.</p>

<p>Two of the most frequent issues that multithreaded applications face are the following:</p>
<ul>
	<li>Race conditions: Two or more threads trying to write to the same data. Who wins? What is the state of that object?</li>
	<li>Deadlock: Two threads waiting on each other to finish resulting in both being in a “wait” state. Your application is hung.</li>
</ul>

<p>You can avoid race conditions with good synchronization. In general, when threads are allowed to write to a shared object, you must take extra care to ensure that:</p>

<ul>
	<li>Only one thread writes at a time.</li>
	<li>No thread is allowed to read that object until the writing thread is done.</li>
</ul>

<p>You can avoid deadlocks by ensuring that in no situation do two threads wait on each other. You can either have a master thread that synchronizes worker threads or program in a way such that tasks are distributed between threads and result in clear workload distribution. A thread <i>A</i> can wait on <i>B</i>, but <i>B</i> should never need to wait on <i>A</i>.</p>
