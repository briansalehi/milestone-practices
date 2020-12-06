#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    std::string sample("ABC");
    std::cout << "sample string: " << sample << std::endl;

    // reversing by iterators
    reverse(sample.begin(), sample.end());
    std::cout << "reversed string: " << sample << std::endl;

    return 0;
}
