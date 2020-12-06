# 02.03.15 cv::getCPUTickCount

```cxx
#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    int64_t count = cv::getCPUTickCount();
    std::cout << count << std::endl;
    return 0;
}

```

## <span title="References: Learning OpenCV 3 - page 64">Comments</span>

This function reports the number of CPU ticks on those architectures that have such a construct.

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [02.03.14. cv::format](./../../02.data_types/03.utility_functions/14.format.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [02.03.16. cv::getOptimalDFTSize](./../../02.data_types/03.utility_functions/16.getoptimaldftsize.md)

</div>
