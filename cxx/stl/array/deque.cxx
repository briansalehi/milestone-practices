#include <iostream>
#include <deque>

template <typename T>
void display(const std::deque<T> array) {
    for (auto elem = array.cbegin(); elem != array.cend(); ++elem) {
        std::cout << *elem << " ";
    }
    std::cout << std::endl;
}

int main()
{
    // treat std::deque just like vector except it can grow in forward too
    std::deque<int> integers{1,2,3,4,5};
    display(integers);

    // notice that std::deque stores non-contiguously, so there's no need for reserve()
    integers.push_back(6);
    display(integers);

    integers.push_front(0);
    display(integers);

    integers.pop_back();
    display(integers);

    integers.pop_front();
    display(integers);

    return 0;
}
