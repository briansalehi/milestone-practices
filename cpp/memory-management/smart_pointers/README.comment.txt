<p>A smart pointer in C++ is a class with overloaded operators, which behaves like a conventional pointer. Yet, it supplies additional value by ensuring proper and timely destruction of dynamically allocated data and facilitates a well-defined object lifecycle.</p>

<p>Classification of smart pointers is actually a classification of their memory resource management strategies.</p>

<p>These classifications are:</p>

<ul>
	<li>Deep copy</li>
	<li>Copy on Write (COW)</li>
	<li>Reference counted</li>
	<li>Reference linked</li>
	<li>Dest</li>
</ul>

<h4>Deep Copy</h4>

<p>In a smart pointer that implements deep copy, every smart pointer instance holds a complete copy of the object that is being managed. Whenever the smart pointer is copied, the object pointed to is also copied (thus, deep copy). When the smart pointer goes out of scope, it releases the memory it points to (via the destructor).</p>

<p>Although the deep-copy–based smart pointer does not seem to render any value over passing objects by value, its advantage becomes apparent in the treatment of polymorphic objects, as seen in the following, where it can avoid slicing:</p>

<p>The disadvantage of the deep-copy–based mechanism is performance.</p>

<h4>Copy on Write Mechanism</h4>

<p><i>Copy on Write</i> (COW as it is popularly called) attempts to optimize the performance of deep-copy smart pointers by sharing pointers until the first attempt at writing to the object is made. On the first attempt at invoking a non-const function, a COW pointer typically creates a copy of the object on which the non-const function is invoked, whereas other instances of the pointer continue sharing the source object.</p>

<p>COW has its fair share of fans. For those that swear by COW, implementing operators (*) and ( -&gt; ) in their const and non-const versions is key to the functionality of the COW pointer. The latter creates a copy.</p>

<p>The point is that when you chose a pointer implementation that follows the COW philosophy, be sure that you understand the implementation details before you proceed to use such an implementation. Otherwise, you might land in situations where you have a copy too few or a copy too many.</p>

<h4>Reference-Counted Smart Pointers</h4>

<p>Reference counting in general is a mechanism that keeps a count of the number of users of an object. When the count reduces to zero, the object is released. So, reference counting makes a very good mechanism for sharing objects without having to copy them.</p>

<p>Such smart pointers, when copied, need to have the reference count of the object in question incremented. There are at least two popular ways to keep this count:</p>

<ul>
<li>Reference count maintained in the object being pointed to</li>
<li>Reference count maintained by the pointer class in a shared object</li>
</ul>

<p>The first variant where the reference count is maintained in the object is called intrusive reference counting because the object needs to be modified. The object in this case maintains, increments, and supplies the reference count to any smart pointer class that manages it. Incidentally, this is the approach chosen by COM. The second variant where the reference count is maintained in a shared object is a mechanism where the smart pointer class can keep the reference count on the free store (a dynamically allocated  integer, for example) and when copied, the copy constructor increments this value.</p>

<p>Therefore, the reference-counting mechanism makes it pertinent that the programmer works with the smart pointers only when using the object. A smart pointer manag-ing the object and a raw pointer pointing to it is a bad idea because the smart pointer (smartly) releases the object when the count maintained by it goes down to zero, but the raw pointer continues pointing to the part of the memory that no longer belongs to your application. Similarly, reference counting can cause issues peculiar to their situation: Two objects that hold a pointer to each other are never released because their cyclic depen-dency holds their reference counts at a minimum of 1.</p>

<h4>Reference-Linked Smart Pointers</h4>

<p>Reference-linked smart pointers are ones that don’t proactively count the number of refer-ences using the object; rather, they just need to know when the number comes down to zero so that the object can be released.</p>

<p>They are called reference-linked because their implementation is based on a double-linked list. When a new smart pointer is created by copying an existing one, it is appended to the list. When a smart pointer goes out of scope or is destroyed, the destruc-tor de-indexes the smart pointer from this list. Reference linking also suffers from the problem caused by cyclic dependency, as applicable to reference-counted pointers.</p>

<h4>Destructive Copy</h4>

<p>Destructive copy is a mechanism where a smart pointer, when copied, transfers complete ownership of the object being handled to the destination and resets itself:</p>

<pre class="language-cpp line-numbers">
	<code>
		destructive_copy_smartptr <SampleClass> smartPtr (new SampleClass ());
		SomeFunc (smartPtr); // Ownership transferred to SomeFunc
		// Don't use smartPtr in the caller any more!
	</code>
</pre>

<p>Although this mechanism is obviously not intuitive to use, the advantage supplied by destructive copy smart pointers is that they ensure that at any point in time, only one active pointer points to an object. So, they make good mechanisms for returning pointers from functions, and are of use in scenarios where you can use their “destructive” proper-ties to your advantage.</p>

<p>The implementation of destructive copy pointers deviates from standard, recommended C++ programming techniques <code>std::auto_ptr</code> is by far the most popular (or notorious, depend-ing on how you look at it) pointer that follows the principles of destructive copy. Such a smart pointer is useless after it has been passed to a function or copied into another.</p>

<p><code>std::auto_ptr</code> has been deprecated in C++11. Instead, you should use <code>std::unique_ptr</code>, which cannot be passed by value due to its private copy constructor and copy assignment  operator. It can only be passed as a reference argument.</p>

<p>The copy constructor and copy assignment operators that are critical to the implementation of destructive copy smart pointers as shown in previous sample also attract maximum criticism.</p>

<p>Unlike most C++ classes, this smart pointer class cannot have the copy constructor and assignment operator accept const references, as it needs to invalidate the source after copying it.</p> 

<p>This is not only a deviation from traditional copy-constructor and assignment-operator semantics, but also makes using the smart pointer class counter intuitive. Few expect the copy source or the assignment source to be damaged after a copy or assignment step. The fact that such smart pointers destroy the source also makes them unsuitable for use in STL containers, such as the <code>std::vector</code>, or any other dynamic collection class that you might use. These containers need to copy your content internally and end up invalidating the pointers.</p>

<p>So, for more than one reason, you are advised to avoid using destructive copy smart pointers in your programs.</p>

<p>The <code>std::auto_ptr</code> was a destructive-copy–based smart pointer supported by the C++ Standard until recently. It was finally marked as deprecated in C++11, and you should use <code>std::unique_ptr</code> instead.</p>
