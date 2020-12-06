# 02.03.16 cv::getOptimalDFTSize

```cxx
#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    int size = cv::getOptimalDFTSize(10);
    std::cout << size << std::endl;
    return 0;
}

```

## <span title="References: Learning OpenCV 3 - page 65">Comments</span>

This function returns an optimal size of the array that should be passed to **cv::dft()** function as it is sensitive to array sizes.

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [02.03.15. cv::getCPUTickCount](./../../02.data_types/03.utility_functions/15.getcputickcount.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [02.03.17. cv::getTickCount](./../../02.data_types/03.utility_functions/17.gettickcount.md)

</div>
