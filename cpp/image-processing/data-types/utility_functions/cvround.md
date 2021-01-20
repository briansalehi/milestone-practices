# 02.03.21 cvRound

```cxx
#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    int is_round = cvRound(1.1);
    std::cout << is_round << std::endl;
    return 0;
}

```

## <span title="References: Learning OpenCV 3 - page 66">Comments</span>

Given a floating-point number x, **cvRound()** computes the integer closest to x.

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [02.03.20. cvIsNaN](./../../02.data_types/03.utility_functions/20.cvisnan.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [02.03.22. cv::getThreadNum](./../../02.data_types/03.utility_functions/22.getthreadnum.md)

</div>
