#include <iostream>
#include <memory> // unique_ptr

int main()
{
    std::unique_ptr<char> alphabet(new char);
    *alphabet = 'a';

    // if you ever needed to capture a unique pointer in lambda, use std::move
    auto lambda = [capture = std::move(alphabet)] { std::cout << *capture << std::endl; };

    lambda();
    return 0;
}
