#include <iostream>
#include <string>
#include <unordered_map>

template <typename C>
void describe(const C& container) {
    for (auto iterator = container.cbegin(); iterator != container.cend(); ++iterator) {
        std::cout << iterator->first << ":" << iterator->second << " ";
    }
    std::cout << std::endl;
    std::cout << "size: " << container.size() << std::endl;
    std::cout << "bucket: " << container.bucket_count() << std::endl;
    std::cout << "load factor: " << container.load_factor() << std::endl;
    std::cout << "max load factor: " << container.max_load_factor() << std::endl << std::endl;
}

int main()
{
    std::unordered_map<int, std::string> integers;

    integers.insert(std::make_pair(1, "first"));
    integers.insert(std::make_pair(2, "second"));
    integers.insert(std::make_pair(3, "third"));
    integers.insert(std::make_pair(4, "forth"));
    describe(integers);

    integers.insert(std::make_pair(5, "fifth"));
    describe(integers);

    return 0;
}
