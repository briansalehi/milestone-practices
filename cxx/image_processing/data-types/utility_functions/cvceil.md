# 02.03.06 cvCeil

```cxx
#include <iostream>
#include <opencv2/core/types.hpp>

int main()
{
    int ceil = cvCeil(12.4);
    std::cout << ceil << std::endl;
    return 0;
}

```

## <span title="References: Learning OpenCV 3 - page 62">Comments</span>

Given a floating point number, **cvCeil()** computes the smallest integer not smaller than given number.

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [02.03.05. cv::fastatan2](./../../02.data_types/03.utility_functions/05.fastatan2.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [02.03.07. cv::cubeRoot](./../../02.data_types/03.utility_functions/07.cuberoot.md)

</div>
