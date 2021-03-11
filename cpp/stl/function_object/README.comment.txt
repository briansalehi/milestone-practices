<p>On a conceptual level, function objects are objects that work as functions. On an implementation level, however, function objects are objects of a class that implement <code>operator()</code>. Although functions and function pointers can also be classified as function objects, it is the capability of an object of a class that implements <code>operator()</code> to carry state (that is, values in member attributes of the class) that makes it useful with Standard Template Library (STL) algorithms.</p>

<p>Function objects as typically used by a C++ programmer working with STL are classifiable into the following types:</p>

<ul>
	<li><b>Unary function</b>: A function called with one argument; for example, <code>f(x)</code>.
	<li><b>Unary Predicate</b>: When a unary function returns a bool, it is called a predicate.</li>
	<li><b>Binary function</b>: A function called with two arguments; for example, <code>f(x, y)</code>.</li>
	<li><b>Binary Predicate</b>: A binary function that returns a bool is called a binary predicate.</li>
</ul>

<p>Function objects that return a boolean type are naturally suited for use in algorithms that help in decision making. <code>find()</code> and <code>sort()</code> are two such algorithms.</p>

<p>A function object that combines two function objects is called an adaptive function object.</p>
