# 02.03.13 cvFloor

```cxx
#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    int floor = cvFloor(12.4);
    std::cout << floor << std::endl;
    return 0;
}

```

## <span title="References: Learning OpenCV 3 - page 64">Comments</span>

Given a floating-point number x, **cv::Floor()** computes the largest integer not larger than x.
If the input value is outside of the range representable by a 32-bit integer, the result is undefined.

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [02.03.12. cv::fastFree&lpar;&rpar;](./../../02.data_types/03.utility_functions/12.fastfree.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [02.03.14. cv::format](./../../02.data_types/03.utility_functions/14.format.md)

</div>
