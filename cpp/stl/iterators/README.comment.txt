<p>Iterators in STL are template classes that in some ways are a generalization of pointers.</p>

<p>Iterators are the bridge that allows these template functions to work with containers, which are template classes, in a consistent and seamless manner.</p>

<p>Iterators supplied by STL can be broadly classified into the following:</p>

<ul>
	<li><b>Input iterator</b><p>One that can be dereferenced to reference an object. The object can be in a collection, for instance. Input iterators of the purest kinds guarantee read access only.</p></li>
	<li><b>Output iterator</b><p>One that allows the programmer to write to the collection. Output iterators of the strictest types guarantee write access only.</p></li>
	<li><b>Forward iterator</b><p>A refinement of the input and output iterators allowing both input and output. Forward iterators may be constant, allowing for read-only access to the object the iterator points to, and otherwise allow for both read and write operations, making it mutable. A forward iterator would typically find use in a  singly linked list.</p></li>
	<li><b>Bidirectional iterator</b><p>A refinement of the forward iterator in that it can be  decremented to move backward as well. A bidirectional iterator would typically find use in a doubly linked list.</p></li>
	<li><b>Random access iterators</b><p>In general, a refinement over the concept of  bidirectional iterators that allow addition and subtraction of offsets or allow one iterator to be subtracted from another to find the relative separation or distance between the two objects in a collection. A random iterator would typically find use in an array.</p></li>
</ul>
