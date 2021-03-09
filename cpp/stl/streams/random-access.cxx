#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

int main()
{
    
    std::fstream storage;
    storage.open("file.dat", std::ios_base::in | std::ios_base::out | std::ios_base::binary | std::ios_base::trunc);

    if (!storage.is_open()) {
        std::cerr << "failed to open file.dat\n";
        exit(EXIT_FAILURE);
    }

    char message[] = "this is a binary file";
    std::cout << "message: " << message << std::endl;
    storage.write(reinterpret_cast<const char*>(&message), sizeof(message));

    unsigned long index;
    std::cout << "index: ";
    std::cin >> index;
    while (index < 0 || index > sizeof(message)-1) {
        std::cout << "enter an index in a range of " << 0 << " to " << sizeof(message)-1 << ": ";
        std::cin >> index;
    }

    std::streampos position = (index - 1) * sizeof(char);
    storage.seekg(position);
    char character;
    storage.read(reinterpret_cast<char*>(&character), sizeof(character));
    std::cout << "character: " << character << std::endl;

    storage.close();
    storage.clear();
    return 0;
}
