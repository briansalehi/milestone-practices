# 02.03.24 cv::setNumThreads

```cxx
#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    cv::setNumThreads(1);
    std::cout << cv::getNumThreads() << std::endl;
    return 0;
}

```

## <span title="References: Learning OpenCV 3 - page 66">Comments</span>

When OpenCV is compiled with OpenMP support, this function sets the number of threads that OpenCV will use in parallel OpenMP regions.

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [02.03.23. cv::getNumThreads](./../../02.data_types/03.utility_functions/23.getnumthreads.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [02.03.25. cv::useOptimized](./../../02.data_types/03.utility_functions/25.useoptimized.md)

</div>
