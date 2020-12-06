#include <iostream>

int main()
{
    // C-style string
    char sentence[11] = {'I',' ','l','o','v','e',' ','c','x','x','\0'};
    std::cout << sentence << std::endl;
    std::cout << "size: " << sizeof(sentence) << std::endl;
    std::cout << std::endl;

    // null char won't truncate array size but breaks its content
    sentence[6] = '\0';
    std::cout << sentence << std::endl;
    std::cout << "size: " << sizeof(sentence) << std::endl;

    return 0;
}
