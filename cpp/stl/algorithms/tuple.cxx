#include <iostream>
#include <string>
#include <tuple>

/*
    tuples can be used like pair
    except they can contain more than two variables
*/
typedef std::tuple<std::string,int,double> Tuple;

void display(const Tuple& tuple) {
    std::cout << "name: " << std::get<0>(tuple) << std::endl;
    std::cout << "precision: " << std::get<1>(tuple) << std::endl;
    std::cout << "value: " << std::get<2>(tuple) << std::endl;
}

int main()
{
    // here is a tuple sample representing: name, precision, value
    Tuple pi("pi", 4, 3.1415);
    Tuple neper = std::make_tuple("neper", 4, 2.7281);

    display(pi);
    display(neper);

    return 0;
}
