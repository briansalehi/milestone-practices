# 02.03.23 cv::getNumThreads

```cxx
#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    int count = cv::getNumThreads();
    std::cout << count << std::endl;
    return 0;
}

```

## <span title="References: Learning OpenCV 3 - page 65">Comments</span>

Returns the current number of threads being used by OpenCV.

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [02.03.22. cv::getThreadNum](./../../02.data_types/03.utility_functions/22.getthreadnum.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [02.03.24. cv::setNumThreads](./../../02.data_types/03.utility_functions/24.setnumthreads.md)

</div>
