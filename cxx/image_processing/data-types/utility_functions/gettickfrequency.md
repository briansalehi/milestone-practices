# 02.03.18 cv::getTickFrequency

```cxx
#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    double frequency = cv::getTickFrequency();
    std::cout << frequency << std::endl;
    return 0;
}

```

## <span title="References: Learning OpenCV 3 - page 66">Comments</span>

This function computes the conversion between clock time (i.e., seconds) and abstract ticks.

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [02.03.17. cv::getTickCount](./../../02.data_types/03.utility_functions/17.gettickcount.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [02.03.19. cvIsInf](./../../02.data_types/03.utility_functions/19.cvisinf.md)

</div>
