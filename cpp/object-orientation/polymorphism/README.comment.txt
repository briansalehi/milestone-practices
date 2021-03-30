Polymorphism is that feature of object-oriented languages that allows objects of different types to be treated similarly.

![virtual-function-table.jpg]

*****

In Lesson 10, “Implementing Inheritance,” you found out how Tuna and Carp inherit public method Swim() from Fish as shown in Listing 10.1. It is, however, possible that both Tuna and Carp provide their own Tuna::Swim() and Carp::Swim() methods to make Tuna and Carp different swimmers. Yet, as each of them is also a Fish, if a user with an instance of Tuna uses the base class type to invoke Fish::Swim(), he ends up executing only the generic part Fish::Swim() and not Tuna::Swim(), even though that base class instance Fish is a part of a Tuna. This problem is demonstrated in Listing 11.1.

*****

0: #include <iostream>  1: using namespace std;
When you are programming, you should program your classes correctly and create inheritance hierarchies that make sense, keeping the design and purpose of the application in perspective.
 2:
 3: class Fish  4: {  5: public:
 6: void Swim()  7: {  8: cout << "Fish swims! " << endl;
 9: } 10: };
11:

*****

12: class Tuna:public Fish 13: { 14: public:
15: // override Fish::Swim 16: void Swim() 17: { 18: cout << "Tuna swims!" << endl;
19: } 20: };
21:
22: void MakeFishSwim(Fish& inputFish) 23: { 24: // calling Fish::Swim 25: inputFish.Swim();
26: } 27:
28: int main() 29: { 30: Tuna myDinner;
31:
32: // calling Tuna::Swim 33: myDinner.Swim();
34:
35: // sending Tuna as Fish 36: MakeFishSwim(myDinner);
37:
38: return 0;
39: }

*****

Output ▼ Tuna swims!
Fish swims!

*****

MakeFishSwim(Fish&) doesn’t care if the object sent was a Tuna, handles it as a Fish, and invokes Fish::Swim().

*****

What the user would ideally expect is that an object of type Tuna behaves like a tuna even if the method invoked is Fish::Swim(). In other words, when inputFish.Swim() is invoked in Line 25, he expects it to execute Tuna::Swim(). Such polymorphic behavior where an object of known type class Fish can behave as its actual type; namely, derived class Tuna, can be implemented by making Fish::Swim() a virtual function

*****

What you expect is that the object Fish swims as a Tuna if it is part of a Tuna

*****

You can ensure this by declaring function Swim() in the base class Fish as a virtual function:

*****

class Base {  virtual ReturnType FunctionName (Parameter List);
};
class Derived {  ReturnType FunctionName (Parameter List);
};

*****

Use of keyword virtual means that the compiler ensures that any overriding variant of the requested base class method is invoked.
--
code

*****

polymorphism: treating different fishes as a common type Fish, yet ensuring that the right implementation of Swim() supplied by the derived types is executed.

*****

Virtual Destructors

*****

What happens when a function calls operator delete using a pointer of type Base* that actually points to an instance of type Derived?

*****

This flaw means that the destructor of a deriving class that has been instantiated on the free store using new would not be invoked if delete is called using a pointer of type Base*. This can result in resources not being released, memory leaks, and so on and is a problem that is not to be taken lightly.

*****

Always declare the base class destructor as virtual:

*****

class Base { public:
 virtual ~Base() {}; // virtual destructor };

*****

This ensures that one with a pointer Base* cannot invoke delete in a way that instances of the deriving classes are not correctly destroyed.

*****

Virtual Function Table

*****

Consider a class Base that declared N virtual functions:

*****

class Base { public:
 virtual void Func1()  { // Func1 implementation  }  virtual void Func2()  { // Func2 implementation  }

*****

// .. so on and so forth  virtual void FuncN()  { // FuncN implementation  } };

*****

class Derived that inherits from Base overrides Base::Func2(), exposing the other virtual functions directly from class Base:

*****

class Derived: public Base { public:
 virtual void Func1()  { // Func2 overrides Base::Func2()}  // no implementation for Func2()  virtual void FuncN()  { // FuncN implementation  } };

*****

The compiler sees an inheritance hierarchy and understands that the Base defines certain virtual functions that have been overridden in Derived. What the compiler now does is to create a table called the Virtual Function Table (VFT) for every class that implements a virtual function or derived class that overrides it. In other words, classes Base and Derived get an instance of their own Virtual Function Table. When an object of these classes is instantiated, a hidden pointer (let’s call it VFT*) is initialized to the respective VFT. The Virtual Function Table can be visualized as a static array containing function pointers, each pointing to the virtual function (or override) of interest, as illustrated in Figure 11.1.

*****

Thus, each table is comprised of function pointers, each pointing to the available imple-mentation of a virtual function. In the case of class Derived, all except one function pointer in its VFT point to local implementations of the virtual method in Derived. 
Derived has not overridden Base::Func2(), and hence that function pointer points to the implementation in class Base.

*****

This is how Virtual Function Tables help the implementation of (subtype) polymorphism in C++.

*****

The proof of existence of a hidden Virtual Function Table pointer is demonstrated by Listing 11.5, which compares the sizeof two identical classes—one that has virtual functions and another that doesn’t.

*****

0: #include <iostream>  1: using namespace std;
 2:
 3: class SimpleClass  4: {  5: int a, b;
 6:
 7: public:
 8: void DoSomething() {}  9: };
 10:
 11: class Base  12: {  13: int a, b;
 14:
 15: public:
 16: virtual void DoSomething() {}  17: };
 18:
 19: int main()  20: {  21: cout << "sizeof(SimpleClass) = " << sizeof(SimpleClass) << endl;
 22: cout << "sizeof(Base) = " << sizeof(Base) << endl;
 23:
 24: return 0;
 25: }

*****

Output Using 32-Bit Compiler ▼ sizeof(SimpleClass) = 8 sizeof(Base) = 12

*****

Output Using 64-Bit Compiler ▼ sizeof(SimpleClass) = 8 sizeof(Base) = 16

*****

Abstract Base Classes and Pure Virtual Functions

*****

A base class that cannot be instantiated is called an abstract base class. Such a base class fulfills only one purpose, that of being derived from. C++ allows you to create an abstract base class using pure virtual functions.

*****

A virtual method is said to be pure virtual when it has a declaration as shown in the  following:

*****

class AbstractBase { public:
 virtual void DoSomething() = 0; // pure virtual method };

*****

This declaration essentially tells the compiler that DoSomething() needs to be imple-mented and by the class that derives from AbstractBase:

*****

class Derived: public AbstractBase { public:
 void DoSomething() // pure virtual fn. must be implemented  { cout << "Implemented virtual function" << endl;
 } };

*****

Abstract Base Classes are often simply called ABCs.

*****

Diamond Problem

*****

Problems caused in an inheritance hierarchy containing two or more base classes that inherit from a common base, which results in the need for ambiguity resolution in the absence of virtual inheritance, is called the Diamond Problem.

*****

The virtual keyword in C++ often is used in different contexts for different purposes.

*****

Here is a summary:

*****

A function declared virtual means that an existing overriding  function in a derived class is invoked.
An inheritance relationship declared using keyword virtual between classes Derived1 and Derived2 that inherits from class Base means that another class Derived3 that inherits from Derived1 and Derived2 still results in the creation of only one instance of Base during instantiation of type Derived3.
Thus the same keyword virtual is used to implement two  different concepts.

*****

Override

*****

Our versions of base class Fish have featured a virtual function called Swim() as seen in the following code:
--
modify text

*****

class Fish { public:
 virtual void Swim()  { cout << "Fish swims!" << endl;
 } };

*****

Assume that derived class Tuna were to define a function Swim() but with a slightly  different signature—one using const inserted unintentionally by a programmer who wants to override Fish::Swim():

*****

class Tuna:public Fish { public:
 void Swim() const  { cout << "Tuna swims!" << endl;
 } };

*****

This function Tuna::Swim() actually does not override Fish::Swim(). The signatures are different thanks to the presence of const in Tuna::Swim(). Compilation succeeds, however, and the programmer may falsely believe that he has successfully overridden the function Swim() in class Tuna. C++11 and beyond give the programmer a specifier override that is used to verify whether the function being overridden has been declared as virtual by the base class:

*****

class Tuna:public Fish { public:
 void Swim() const override // Error: no virtual fn with this sig in Fish  { cout << "Tuna swims!" << endl;
 } };

*****

Thus, override supplies a powerful way of expressing the explicit intention to override a base class virtual function, thereby getting the compiler to check whether  ■ The base class function is virtual.
 ■ The signature of the base class virtual function exactly matches the signature of the derived class function declared to override.

*****

final

*****

Specifier final, introduced in C++11, was first presented to you in Lesson 10. A class declared as final cannot be used as a base class. Similarly, a virtual function declared as final cannot be overridden in a derived class.

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
