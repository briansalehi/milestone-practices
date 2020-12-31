# 02.03.05 cv::fastatan2

```cxx
#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    float degrees = cv::fastAtan2(45.0, 45.0);
    std::cout << degrees << std::endl;
    return 0;
}

```

## <span title="References: Learning OpenCV 3 - page 62">Comments</span>

This function computes the arctangent of an *x, y* pair and returns the angle from the origin to the indicated point.
The result is reported in degrees ranging from 0.0 to 360.0 inclusive of 0.0 but not inculsive of 360.0.

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [02.03.04. cv::deallocate &lpar;will be removed&rpar;](./../../02.data_types/03.utility_functions/04.deallocate.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [02.03.06. cvCeil](./../../02.data_types/03.utility_functions/06.cvceil.md)

</div>
