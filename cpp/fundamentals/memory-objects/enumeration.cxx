/*
Constants in C++:

    literal constants, such as literal strings
    declared by const keyword
    constant expression using constexpr keyword (C++11)
 => emulated constants using enum keyword
    defined constants, depricated
*/

#include <iostream>

enum class TrafficLight {red, yellow, green};

enum class Color {red, yellow, green};

int main()
{
    //Color x = red; // error: which red?
    //Color y = TrafficLight::red; // error: this red is not a Color
    Color z = Color::red; // OK
    //int i = Color::yellow; // error: Color::yellow is not an int
    int i = (int)Color::yellow; // explicit conversions are allowed, they will be discuessed later
    //Color c = 2; // error: 2 (type int), is not a Color
    TrafficLight light = TrafficLight::red; // OK
    return 0;
}
