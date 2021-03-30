Object-oriented programming is based on four important aspects: 
encapsulation, abstraction, inheritance, and polymorphism. Inheritance is a powerful way to reuse attributes and is a stepping stone towards polymorphism.

*****

class Base {  // ... base class members };
class Derived: access-specifier Base {  // ... derived class members };
--
This is the general syntax of C++ derivation.

*****

The access-specifier can be one of public (most frequently used) where a “derived class is a base class” relationship; private or protected for a “derived class has a base class” relationship.

*****

When reading about inheritance, you will come across terms such as inherits from or derives from, which essentially mean the same.

*****

Similarly, the base class is also called the super class. The class that derives from the base, also known as the derived class, can be called the subclass.

*****

protected, like public and private, is also an access speci-fier. When you declare a class attribute or function as pro-tected, you are effectively making it accessible to classes that derive (and friends), yet simultaneously making it inaccessible to everyone else outside the class, including main().

*****

protected is the access specifier you should use if you want a certain attribute in a base class to be accessible to classes that derive from this base

*****

This is an important aspect of object-oriented programming, combining data abstraction and inheritance, in ensuring that derived classes can safely inherit base class attributes that cannot be tampered with by anyone outside this hierarchical system.

*****

Base Class Initialization

*****

What if a base class were to contain an overloaded constructor that requires arguments at the time of instantiation?

*****

The clue lies in using initialization lists and in invoking the appropriate base class constructor via the constructor of the derived class as shown in the following code:

*****

class Base { public:
 Base(int someNumber) // overloaded constructor  { // Use someNumber  } };
Class Derived: public Base { public:
 Derived(): Base(25) // instantiate Base with argument 25  { // derived class constructor code  } };

*****

To ensure maximum security, if the derived classes don’t need to access a base class attribute, remember to mark the attribute private.

*****

Derived Class Overriding Base Class’s Methods

*****

If a class Derived implements the same functions with the same return values and signatures as in a class Base it inherits from, it effectively overrides that method in class Base as shown in the following code:

*****

class Base { public:
 void DoSomething()  { // implementation code… Does something  } };
class Derived:public Base { public:
 void DoSomething()  { // implementation code… Does something else  } };

*****

Thus, if method DoSomething() were to be invoked using an instance of Derived, then it would not invoke the functionality in class Base.

*****

Invoking Overridden Methods of a Base Class

*****

If you want to be invoke Fish::Swim() in Listing 10.4 via main(), you need to use the scope resolution operator (::) in the following syntax:

*****

myDinner.Fish::Swim(); // invokes Fish::Swim() using instance of Tuna

*****

Invoking Methods of a Base Class in a Derived Class

*****

Typically, Fish::Swim() would contain a generic implementation of swimming appli-cable to all fishes, tunas, and carps included. If your specialized implementations in Tuna:Swim() and Carp::Swim() need to reuse the base class’s generic implementation of Fish::Swim(), you use the scope resolution operator (::) as shown in the following code:

*****

class Carp: public Fish { public:
 Carp(): Fish(true) {}  void Swim()  { cout << "Carp swims real slow" << endl;
Fish::Swim(); // invoke base class function using operator::
 } };

*****

Derived Class Hiding Base Class’s Methods

*****

Overriding can take an extreme form where Tuna::Swim() can potentially hide all over-loaded versions of Fish::Swim() available, even causing compilation failure when the overloaded ones are used (hence, called hidden),

*****

So, if you want to invoke the Fish::Swim(bool) function via an instance of Tuna, you have the following solutions:

*****

Solution 1: Use the scope resolution operator in main():
myDinner.Fish::Swim();

*****

Solution 2: Use keyword using in class Tuna to unhide Swim() in class Fish:
class Tuna: public Fish { public:
 using Fish::Swim; // unhide all Swim() methods in class Fish  void Swim()  { cout << "Tuna swims real fast" << endl;
 } };

*****

Solution 3: Override all overloaded variants of Swim() in class Tuna (invoke  methods of Fish::Swim(...) via Tuna::Fish(...) if you want):
class Tuna: public Fish { public:
 void Swim(bool isFreshWaterFish)  { Fish::Swim(isFreshWaterFish);
 }  void Swim()  { cout << "Tuna swims real fast" << endl;
 } };

*****

Order of Construction

*****

So, when you create an object of class Tuna that derives from class Fish, was the constructor of Tuna invoked before or after the constructor of class Fish? Additionally, within the instantiation of objects in the class hierarchy, what respective order do mem-ber attributes such as Fish::isFreshWaterFish have?

*****

Thankfully, the instantiation sequence is standardized. Base class objects are instantiated before the derived class.

*****

So, the Fish part of Tuna is constructed first, so that member attributes—especially the protected and public ones contained in class Fish—are ready for consumption when class Tuna is instantiated.

*****

Within the instantiation of class Fish and class Tuna, the member attributes (such as Fish::isFreshWaterFish) are instantiated before the constructor Fish::Fish() is invoked, ensuring that member attributes are ready before the constructor works with them. The same applies to Tuna::Tuna().

*****

Order of Destruction

*****

Private Inheritance

*****

Private inheritance differs from public inheritance (which is what you have seen up to now) in that the keyword private is used in the line where the derived class declares its inheritance from a base class:

*****

class Base {  // ... base class members and methods };
class Derived: private Base // private inheritance {  // ... derived class members and methods };

*****

Private inheritance of the base class means that all public members and attributes of the base class are private (that is, inaccessible) to anyone with an instance of the derived class. In other words, even public members and methods of class Base can only be consumed by class Derived, but not by anyone else in possession of an instance of Derived.

*****

Thus, for the world outside the inheritance hierarchy, private inheritance essentially does not imply an "is-a" relationship (imagine a tuna that can’t swim!). As private inheri-tance allows base class attributes and methods to be consumed only by the subclass that derives from it, this relationship is also called a “has-a” relationship. There are a few examples of private inheritance in some things you see around you in daily life (see Table 10.2).

*****

Base Class Example Derived Class Motor Car (Car “has a” Motor) Heart Mammal (Mammal “has a” Heart) Nib Pen (Pen “has a” Nib)

*****

Protected Inheritance

*****

Protected inheritance differs from public inheritance in that the keyword protected is used in the line where the derived class declares its inheritance from a base class:

*****

class Base {  // ... base class members and methods };
class Derived: protected Base // protected inheritance {  // ... derived class members and methods };

*****

Protected inheritance is similar to private inheritance in the following ways:
 ■ It also signifies a has-a relationship.
 ■ It also lets the derived class access all public and protected members of Base.
 ■ Those outside the inheritance hierarchy with an instance of Derived cannot access public members of Base.

*****

Yet, protected inheritance is a bit different when it comes to the derived class being inherited from:

*****

class Derived2: protected Derived {  // can access public & protected members of Base};

*****

Protected inheritance hierarchy allows the subclass of the subclass (that is, Derived2) access to public and protected members of the Base as shown in Listing 10.9. This would not be possible if the inheritance between Derived and Base were private.

*****

Use private or protected inheritance only when you have to.

*****

In most cases where private inheritance is used, such as that of the Car and the Motor, the base class could have as well been a member attribute of the class Car instead of being a super- class. By inheriting from class Motor, you have essentially restricted your Car to having only one motor, for no significant gain over having an instance of class Motor as a private member.

*****

Having an instance of Motor as a private member instead of inheriting from it is called composition or aggregation. Such a class Car looks like this:

*****

class Car { private:
 Motor heartOfCar;
public:
 void Move()  { heartOfCar.SwitchIgnition();
heartOfCar.PumpFuel();
heartOfCar.FireCylinders();
 } };

*****

This can be good design as it enables you to easily add more motors as member attributes to an existing Car class without changing its inheritance hierarchy or its design with respect to its clients.

*****

The Problem of Slicing

*****

What happens when a programmer does the following?
Derived objDerived;
Base objectBase = objDerived;

*****

Or, alternatively, what if a programmer does this?
void UseBase(Base input);
...
Derived objDerived;
UseBase(objDerived); // copy of objDerived will be sliced and sent

*****

In both cases, an object of type Derived is being copied into another of type Base, either explicitly via assignment or by passing as an argument. What happens in these cases is that the compiler copies only the Base part of objDerived—that is, not the complete object. The information contained by the data members belonging to Derived is lost in the process. This is not anticipated, and this unwanted reduction of that part of data that makes the Derived a specialization of Base is called slicing.

*****

To avoid slicing problems, don’t pass parameters by value. Pass them as pointers to the base class or as a (optionally const) reference to the same.

*****

Multiple Inheritance

*****

C++ allows a class to derive from two or more base classes:

*****

class Derived: access-specifier Base1, access-specifier Base2 {  // class members };

*****

It essentially does nothing more than inherit from the three classes

*****

Avoiding Inheritance Using final

*****

Starting with C++11, compilers support specifier final. It is used to ensure that a class declared as final cannot be used as a base class.

*****

class Platypus final: public Mammal, public Bird, public Reptile { public:
 void Swim()  { cout << "Platypus: Voila, I can swim!" << endl;
 } };

*****

In addition to classes, final can also be used on member functions in controlling  polymorphic behavior. This is discussed in Lesson 11, “Polymorphism.”
