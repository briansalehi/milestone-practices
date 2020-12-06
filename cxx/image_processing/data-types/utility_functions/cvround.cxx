#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    int is_round = cvRound(1.1);
    std::cout << is_round << std::endl;
    return 0;
}
