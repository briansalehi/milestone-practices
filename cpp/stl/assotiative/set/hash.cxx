#include <iostream>
#include <unordered_set>

template <typename C>
void describe(const C& container) {
    for (auto iterator = container.cbegin(); iterator != container.cend(); ++iterator) {
        std::cout << *iterator << " ";
    }
    std::cout << std::endl;
    std::cout << "size: " << container.size() << std::endl;
    std::cout << "bucket: " << container.bucket_count() << std::endl;
    std::cout << "load factor: " << container.load_factor() << std::endl;
    std::cout << "max load factor: " << container.max_load_factor() << std::endl << std::endl;
}

int main()
{
    std::unordered_set<int> integers{1,2,3,4};
    describe(integers);

    integers.insert(5);
    describe(integers);

    return 0;
}
