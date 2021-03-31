<p><b>Inheritance</b> is a powerful way to reuse attributes and is a stepping stone towards polymorphism.</p>

<p>This is the general syntax of C++ derivation.</p>

<pre class="language-cpp line-numbers" data-line="6">
	<code>
		class Base
		{
			// ... base class members
		};

		class Derived: access-specifier Base
		{
			// ... derived class members
		};
	</code>
</pre>

<p>The <i>access-specifier</i> can be one of <code>public</code> (most frequently used) where a “derived class <b>is a</b> base class” relationship; <code>private</code> or <code>protected</code> for a “derived class <b>has a</b> base class” relationship.</p>

<p>When reading about inheritance, you will come across terms such as inherits from or derives from, which essentially mean the same.</p>

<p>Similarly, the base class is also called the super class. The class that derives from the base, also known as the derived class, can be called the subclass.</p>

<p><code>protected</code>, like <code>public</code> and <code>private</code>, is also an access specifier. When you declare a class attribute or function as <code>protected</code>, you are effectively making it accessible to classes that derive (and <b>friends</b>), yet simultaneously making it inaccessible to everyone else outside the class, including <code>main()</code>.</p>

<p><code>protected</code> is the access specifier you should use if you want a certain attribute in a base class to be accessible to classes that derive from this base.</p>

<p>This is an important aspect of object-oriented programming, combining data <i>abstraction</i> and <i>inheritance</i>, in ensuring that derived classes can safely inherit base class attributes that cannot be tampered with by anyone outside this hierarchical system.</p>
