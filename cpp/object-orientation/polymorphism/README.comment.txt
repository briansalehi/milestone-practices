<p><b>Polymorphism</b> is that feature of object-oriented languages that allows objects of different types to be treated similarly.</p>

![virtual-function-table.jpg]

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

<pre class="language-bash command-line" data-host="milestone">
	<code>
		Base Method Invoked
	</code>
</pre>

<p><code>DoSomething(Base&)</code> doesn’t care if the object sent was a Derived, handles it as a Base, and invokes <code>Base::DoSomething()</code>.</p>

<p>What we would ideally expect is that an object of type <code>Derived</code> behaves like a <code>Derived</code> even if the method invoked is <code>Base::DoSomething()</code>. In other words, when <code>object.DoSomething()</code> is invoked, we expect it to execute <code>Derived::DoSomething()</code>. Such polymorphic behavior where an object of known type class <code>Base</code> can behave as its actual type; namely, class Derived, can be implemented by making <code>Base::DoSomething()</code> a <code>virtual</code> function.</p>

<p>Use of keyword <code>virtual</code> means that the compiler ensures that any overriding variant of the requested <code>Base</code> class method is invoked.</p>

<pre class="language-cpp line-numbers" data-line="6-9,16-19,22,25,32,33">
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

*****

Virtual Copy Constructors

*****

It is technically  impossible in C++ to have virtual copy constructors. Yet, such a feature would help you create a collection (for example, a static array) of type Base*, each element being a  specialization of that type:

*****

Fish* pFishes[3];
Fishes[0] = new Tuna();
Fishes[1] = new Carp();
Fishes[2] = new Trout();

*****

Then assigning it into another array of the same type, where the virtual copy constructor ensures a deep copy of the derived class objects as well, ensures that Tuna, Carp, and Trout are copied as Tuna, Carp, and Trout even though the copy constructor is  operating on type Fish*.

*****

Virtual copy constructors are not possible because the virtual keyword in context of base class methods being overridden by implementations available in the derived class are about polymorphic behavior generated at runtime. Constructors, on the other hand, are not polymorphic in nature as they can construct only a fixed type, and hence C++ does not allow usage of the virtual copy constructors.

*****

Having said that, there is a nice workaround in the form of defining your own clone function that allows you to do just that:

*****

class Fish { public:
 virtual Fish* Clone() const = 0; // pure virtual function };
class Tuna:public Fish {

*****

Thus, virtual function Clone is a simulated virtual copy constructor that needs to be explicitly invoked

*****

0: #include <iostream>  1: using namespace std;
 2: 
 3: class Fish  4: {  5: public:
 6: virtual Fish* Clone() = 0;
 7: virtual void Swim() = 0;
 8: virtual ~Fish() {};
 9: };
10: 
11: class Tuna: public Fish 12: { 13: public:
14: Fish* Clone() override 15: { 16: return new Tuna (*this);
17: } 18: 
19: void Swim() override final 20: { 21: cout << "Tuna swims fast in the sea" << endl;
22: } 23: };
24: 
25: class BluefinTuna final:public Tuna 26: { 27: public:
28: Fish* Clone() override 29: { 30: return new BluefinTuna(*this);
31: } 32: 
33: // Cannot override Tuna::Swim as it is "final" in Tuna 34: };
35: 
36: class Carp final: public Fish

*****

11 // ... other members public:
 Tuna * Clone() const // virtual clone function  { return new Tuna(*this); // return new Tuna that is a copy of this  } };

*****

37: { 38: Fish* Clone() override 39: { 40: return new Carp(*this);
41: } 42: void Swim() override final 43: { 44: cout << "Carp swims slow in the lake" << endl;
45: } 46: };
47: 
48: int main() 49: { 50: const int ARRAY_SIZE = 4;
51: 
52: Fish* myFishes[ARRAY_SIZE] = {NULL};
53: myFishes[0] = new Tuna();
54: myFishes[1] = new Carp();
55: myFishes[2] = new BluefinTuna();
56: myFishes[3] = new Carp();
57: 
58: Fish* myNewFishes[ARRAY_SIZE];
59: for (int index = 0; index < ARRAY_SIZE; ++index) 60: myNewFishes[index] = myFishes[index]->Clone();
 61: 
 62: // invoke a virtual method to check  63: for (int index = 0; index < ARRAY_SIZE; ++index)  64: myNewFishes[index]->Swim();
 65: 
 66: // memory cleanup  67: for (int index = 0; index < ARRAY_SIZE; ++index)  68: {  69: delete myFishes[index];
 70: delete myNewFishes[index];
 71: }  72: 
 73: return 0;
 74: }
