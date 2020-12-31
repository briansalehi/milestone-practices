# 02.03.22 cv::getThreadNum

```cxx
#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    int thread_id = cv::getThreadNum();
    std::cout << thread_id << std::endl;
    return 0;
}

```

## <span title="References: Learning OpenCV 3 - page 65">Comments</span>

Returns the current thread id number.

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [02.03.21. cvRound](./../../02.data_types/03.utility_functions/21.cvround.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [02.03.23. cv::getNumThreads](./../../02.data_types/03.utility_functions/23.getnumthreads.md)

</div>
