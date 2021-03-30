In addition to encapsulating data and methods, classes can also encapsulate operators that make it easy to operate on instances of this class. You can use these operators to perform operations such as  assignment or addition on class objects

*****

Just like functions, operators can also be overloaded.

*****

On a syntactical level, there is very little that differentiates an operator from a function, save for the use of the keyword operator. An operator declaration looks quite like a function declaration:
return_type operator operator_symbol (...parameter list...);

*****

So, why does C++ provide operators when functions are also supported?

*****

Consider a utility class Date that encapsulates the day, month, and year:

*****

Date holiday (12, 25, 2016); // initialized to Dec 25, 2016

*****

Assuming that you want to add a day and get the instance to contain the next day—Dec 26, 2016—which of the following two options would be more intuitive?

*****

Option 1 (using the increment operator):
++ holiday;
 ■ Option 2 (using a member function Increment()):
holiday.Increment(); // Dec 26, 2016

*****

Clearly, Option 1 scores over method Increment(). The operator-based mechanism facilitates consumption by supplying ease of use and intuitiveness.

*****

Implementing operator (<) in class Date would help you compare two instances of class Date like this:

*****

if(date1 < date2) {  // Do something } else {  // Do something else }

*****

On a broad level, operators in C++ can be classified into two types: unary operators and binary operators.

*****

A unary operator that is implemented in the global namespace or as a static member function of a class uses the following structure:

*****

return_type operator operator_type (parameter_type) {  // ... implementation }

*****

A unary operator that is a (non-static) member of a class has a similar structure but is lacking in parameters, because the single parameter that it works upon is the instance of the class itself (*this):

*****

return_type operator operator_type () {  // ... implementation }

*****

The unary operators that can be overloaded (or redefined) are shown in Table 12.1.

*****

Operator Name ++ Increment --Decrement * Pointer dereference - > Member selection !
Logical NOT & Address-of

*****

~ One’s complement + Unary plus -Unary negation Conversion operators Conversion into other types

*****

Unary Increment/Decrement Operator

*****

A unary prefix increment operator (++) can be programmed using the following syntax within the class declaration:

*****

// Unary increment operator (prefix) Date& operator ++ () {  // operator implementation code  return *this;
}

*****

The postfix increment operator (++), on the other hand, has a different return type and an input parameter (that is not always used):

*****

Date operator ++ (int) {  // Store a copy of the current state of the object, before incrementing day  Date copy (*this);
 // increment implementation code  // Return state before increment (because, postfix)  return copy;
}

*****

The prefix and postfix decrement operators have a similar syntax as the increment  operators, just that the declaration would contain a -- where you see a ++.

*****

To avoid implicit conversions, use keyword explicit at the beginning of an operator declaration, as follows:

*****

explicit operator const char*() {  // conversion code here }

*****

Using explicit would force the programmer to assert his  intention to convert using a cast:

*****

string strHoliday(static_cast<const char*>(Holiday));

*****

strHoliday=static_cast<const char*>(Date(11,11,2016));

*****

Casting, including static_cast, is discussed in detail in Lesson 13, “Casting Operators.”

*****

Program as many operators as you think your class would be used with.

*****

If your application needs an integer representation of a Date, then you may program it as follows:

*****

explicit operator int() {  return day + month + year;
}

*****

This would allow an instance of Date to be used or transacted as an integer:

*****

FuncTakesInt(static_cast<int>(Date(12, 25, 2016)));

*****

Dereference Operator

*****

Member Selection Operator (->)

*****

Binary Operators

*****

Operators that function on two operands are called binary operators. The definition of a binary operator implemented as a global function or a static member function is the  following:

*****

return_type operator_type (parameter1, parameter2);

*****

The definition of a binary operator implemented as a class member is return_type operator_type (parameter);

*****

The reason the class member version of a binary operator accepts only one parameter is that the second parameter is usually derived from the attributes of the class itself.

*****

Table 12.2 contains binary operators that can be overloaded or redefined in your C++ application.

*****

Operator Name , Comma != Inequality % Modulus %= Modulus/assignment & Bitwise AND && Logical AND &= Bitwise AND/assignment * Multiplication *= Multiplication/assignment + Addition += Addition/assignment -Subtraction -= Subtraction/assignment

*****

- >* Pointer-to-member selection / Division /= Division/assignment < Less than << Left shift <<= Left shift/assignment <= Less than or equal to = Assignment, Copy Assignment and Move Assignment == Equality > Greater than >= Greater than or equal to >> Right shift >>= Right shift/assignment ^ Exclusive OR ^= Exclusive OR/assignment | Bitwise inclusive OR |= Bitwise inclusive OR/assignment || Logical OR [] Subscript operator

*****

Binary Addition (a+b) and Subtraction (a-b) Operators

*****

Similar to the increment/decrement operators, the binary plus and minus, when defined, enable you to add or subtract the value of a supported data type from an object of the class that implements these operators.

*****

Addition Assignment (+=) and Subtraction Assignment (-=) Operators

*****

Overloading Equality (==) and Inequality (!=) Operators

*****

What do you expect when the user of class Date compares one instance to another:

*****

if (date1 == date2) {  // Do something } else {  // Do something else }

*****

A generic expression of the equality operator is the following:

*****

bool operator== (const ClassType& compareTo) {  // comparison code here, return true if equal else false }

*****

The inequality operator can reuse the equality operator:

*****

bool operator!= (const ClassType& compareTo) {  // comparison code here, return true if inequal else false }

*****

Overloading <, >, <=, and >= Operators

*****

You need to program the less-than (<), greater-than (>), less-than-equals (<=), and greater-than-equals (>=) operators to enable conditional checking akin to the following:

*****

if (date1 < date2) {// do something} or if (date1 <= date2) {// do something}

*****

or if (date1 > date2) {// do something} or if (date1 >= date2) {// do something}

*****

Overloading Copy Assignment Operator (=)

*****

There are times when you want to assign the contents of an instance of a class to another, like this:

*****

Date holiday(12, 25, 2016);
Date anotherHoliday(1, 1, 2017);
anotherHoliday = holiday; // uses copy assignment operator

*****

This assignment invokes the default copy assignment operator that the compiler has built in to your class when you have not supplied one. Depending on the nature of your class, the default copy assignment operator might be inadequate, especially if your class is managing a resource that will not be copied. This problem with the default copy assignment operator is similar to the one with the default copy constructor discussed in Lesson 9. To ensure deep copies, as with the copy constructor, you need to specify an accompanying copy assignment operator:

*****

ClassType& operator= (const ClassType& copySource) {  if(this != &copySource) // protection against copy into self  { // copy assignment operator implementation  }  return *this;
}

*****

Subscript Operator ([])

*****

The operator that allow array-style [] access to a class is called subscript operator. 
The typical syntax of a subscript operator is:

*****

return_type& operator [] (subscript_type& subscript);

*****

Using keyword const is important even when programming  operators.

*****

You can

*****

implement two subscript operators—one as a const function and the other as a non-const one:

*****

char& operator [] (int index); // use to write / change buffer at index char& operator [] (int index) const; // used only for accessing char at index

*****

The compiler will invoke the const function for read operations and the non-const  version for operations that write into the MyString object. Thus, you can (if you want to) have separate functionalities in the two subscript operations.

*****

Function Operator ()

*****

The operator () that make objects behave like a function is called a function operator. 
They find application in the standard template library (STL) and are typically used in STL algorithms. Their usage can include making decisions; such function objects are typically called unary or binary predicates, depending on the number of operands they work on.

*****

Move Constructor and Move Assignment Operator

*****

The move constructor and the move assignment operators are performance optimization features that have become a part of the standard in C++11, ensuring that temporary values (rvalues that don’t exist beyond the statement) are not wastefully copied. This is particularly useful when handling a class that manages a dynamically allocated resource, such as a dynamic array class or a string class.

*****

The syntax of the move constructor is as follows:

*****

class Sample { private:
 Type* ptrResource;
public:
 Sample(Sample&& moveSource) // Move constructor, note &&  { ptrResource = moveSource.ptrResource; // take ownership, start move moveSource.ptrResource = NULL;
 }  Sample& operator= (Sample&& moveSource)//move assignment operator, note &&  {

*****

if(this != &moveSource) { delete [] ptrResource; // free own resource ptrResource = moveSource.ptrResource; // take ownership, start move moveSource.ptrResource = NULL; // free move source of ownership }  }  Sample(); // default constructor  Sample(const Sample& copySource); // copy constructor  Sample& operator= (const Sample& copySource); // copy assignment };

*****

C++11 extended the standard’s support of literals by allowing you to define your own literals. For instance, if you were working on a scientific application that deals with thermodynamics, you may want all your temperatures to be stored and operated using a scale called Kelvin. You may now declare all your temperatures using a syntax similar to the following:

*****

Temperature k1 = 32.15_F;
Temperature k2 = 0.0_C;

*****

Using literals _F and _C that you have defined, you have made your application a lot sim-pler to read and therefore maintain. 
To define your own literal, you define operator "" like this:

*****

ReturnType operator "" YourLiteral(ValueType value) {  // conversion code here }

*****

Depending on the nature of the user defined literal, the ValueType parameter would be restricted to one of the following:

*****

unsigned long long int for integral literal long double for floating point literal char, wchar_t, char16_t, and char32_t for character literal const char* for raw string literal const char* together with size_t for string literal const wchar_t* together with size_t for string literal const char16_t* together with size_t for string literal const char32_t* together with size_t for string literal

*****

Operators That Cannot Be Overloaded

*****

With all the flexibility that C++ gives you in customizing the behavior of the operators and making your classes easy to use, it still keeps some cards to itself by not allowing you to change or alter the behavior of some operators that are expected to perform  consistently. The operators that cannot be redefined are shown in Table 12.3.

*****

Operator Name .
Member selection .* Pointer-to-member selection ::
Scope resolution ? :
Conditional ternary operator sizeof Gets the size of an object/class type

