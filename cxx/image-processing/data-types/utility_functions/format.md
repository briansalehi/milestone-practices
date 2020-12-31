# 02.03.14 cv::format

```cxx
#include <iostream>
#include <string>
#include <opencv2/core/core.hpp>

int main()
{
    std::string message = cv::format("this is a %d characters length message", 38);
    std::cout << message << std::endl;
    return 0;
}

```

## <span title="References: Learning OpenCV 3 - page 64">Comments</span>

This function is essentially the same as *sprintf()* from the standard library.

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [02.03.13. cvFloor](./../../02.data_types/03.utility_functions/13.cvfloor.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [02.03.15. cv::getCPUTickCount](./../../02.data_types/03.utility_functions/15.getcputickcount.md)

</div>
