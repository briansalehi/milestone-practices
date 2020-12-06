# 02.03.17 cv::getTickCount

```cxx
#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    int64_t count = cv::getTickCount();
    std::cout << count << std::endl;
    return 0;
}

```

## <span title="References: Learning OpenCV 3 - page 65">Comments</span>

This function returns a tick count relative to some architecture-dependent time.

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [02.03.16. cv::getOptimalDFTSize](./../../02.data_types/03.utility_functions/16.getoptimaldftsize.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [02.03.18. cv::getTickFrequency](./../../02.data_types/03.utility_functions/18.gettickfrequency.md)

</div>
