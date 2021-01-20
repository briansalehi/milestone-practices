# 02.03.26 cv::setUseOptimized

```cxx
#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    cv::setUseOptimized(false);
    std::cout << cv::useOptimized() << std::endl;
    
    cv::setUseOptimized(true);
    std::cout << cv::useOptimized() << std::endl;
    return 0;
}

```

## <span title="References: Learning OpenCV 3 - page 67">Comments</span>

By default enabled.  
This function enables or disables the multithreading performance optimization.

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [02.03.25. cv::useOptimized](./../../02.data_types/03.utility_functions/25.useoptimized.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [02.04. Images and Large Array Types](./../../02.data_types/04.images/00.README.md)

</div>
