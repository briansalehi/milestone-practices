#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    std::string sample("AbCdEfGhIjK");
    std::cout << "original std::string: " << sample << std::endl;

    transform(sample.begin(), sample.end(), sample.begin(), ::toupper);
    std::cout << "converted to upper case: " << sample << std::endl;

    transform(sample.begin(), sample.end(), sample.begin(), ::tolower);
    std::cout << "converted to lower case: " << sample << std::endl;

    return 0;
}
