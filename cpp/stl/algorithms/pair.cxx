#include <iostream>
#include <string>

int main()
{
    std::pair<int, std::string> element(1, "first");
    std::cout << element.first << " " << element.second << std::endl;

    return 0;
}
