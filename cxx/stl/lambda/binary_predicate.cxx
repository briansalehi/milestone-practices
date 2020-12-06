#include <algorithm>
#include <iostream>
#include <string>
#include <deque>

int main()
{
    std::deque<std::string> names{"Tom","jack","Penny","alana","rick","Brian"};

    // sort container
    sort(
        names.begin()
        , names.end()
        , [](const std::string& nameA, const std::string& nameB) -> bool {
            std::string lowerA(nameA);
            transform(nameA.begin(),nameA.end(),lowerA.begin(),::tolower);

            std::string lowerB(nameB);
            transform(nameB.begin(),nameB.end(),lowerB.begin(),::tolower);

            return (lowerA < lowerB);
        }
    );

    // display container
    for_each(
        names.cbegin()
        , names.cend()
        , [](const std::string& element){ std::cout << element << std::endl; }
    );

    return 0;
}
