<p><b>Polymorphism</b> is that feature of object-oriented languages that allows objects of different types to be treated similarly.</p>

<p>In “<a href="/cpp/object-orientation/inheritance">Implementing Inheritance</a>” you found out how <code>Derived</code> classes inherit public methods of <code>Base</code> classes. It is, however, possible that <code>Derived</code> classes provide their own <code>Base::DoSomething()</code> methods to make themselves different than each other. Yet, as each of them is also a <code>Base</code>, if a user with an instance of <code>Derived</code> uses the base class type to invoke <code>Base::DoSomething()</code>, he ends up executing only the generic part <code>Base::DoSomething()</code> and not <code>Derived::DoSomething()</code>, even though that base class instance <code>Base</code> is a part of a <code>Derived</code>.</p>

<p>When you are programming, you should program your classes correctly and create inheritance hierarchies that make sense, keeping the design and purpose of the application in perspective.</p>

<pre class="language-cpp line-numbers" data-line="6-9,16-19,22,25,32,33">
	<code>
		#include &lt;iostream&gt;  

		class Base  
		{  
		public:
			void DoSomething()  
			{  
				std::cout &lt;&lt; "Base Method Invoked" &lt;&lt; std::endl;
			} 
		};

		class Derived: public Base 
		{ 
		public:
			// override Base::DoSomething 
			void DoSomething() 
			{ 
				std::cout &lt;&lt; "Derived Method Invoked" &lt;&lt; std::endl;
			} 
		};

		void function(Base& instance) 
		{ 
			// calling Base::DoSomething 
			instance.DoSomething();
		} 

		int main() 
		{ 
			Derived object;
			object.DoSomething(); // calling Derived::DoSomething 
			function(object); // sending Derived as Base 
			return 0;
		}
	</code>
</pre>

<p>This sample code will result:</p>

<pre class="language-bash">
	<code>
		Base Method Invoked
	</code>
</pre>

<p><code>DoSomething(Base&)</code> doesn’t care if the object sent was a Derived, handles it as a Base, and invokes <code>Base::DoSomething()</code>.</p>

<p>What we would ideally expect is that an object of type <code>Derived</code> behaves like a <code>Derived</code> even if the method invoked is <code>Base::DoSomething()</code>. In other words, when <code>object.DoSomething()</code> is invoked, we expect it to execute <code>Derived::DoSomething()</code>. Such polymorphic behavior where an object of known type class <code>Base</code> can behave as its actual type; namely, class Derived, can be implemented by making <code>Base::DoSomething()</code> a <code>virtual</code> function.</p>

<p>Use of keyword <code>virtual</code> means that the compiler ensures that any overriding variant of the requested <code>Base</code> class method is invoked.</p>

<pre class="language-cpp line-numbers" data-line="3">
	<code>
		struct Base
		{
			virtual ReturnType FunctionName(Parameter List);
		};

		struct Derived: public Base
		{
			ReturnType FunctionName(Parameter List);
		};
	</code>
</pre>

<p>Treating different classes as a common type Base, yet ensuring that the right implementation of DoSomething() supplied by the <code>Derived</code> types is executed defines <b>Polymorphism</b>.</p>
