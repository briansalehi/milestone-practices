# 02.03.19 cvIsInf

```cxx
#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    bool is_inf = cvIsInf(1.1);
    std::cout << std::boolalpha << is_inf << std::endl;
    return 0;
}

```

## <span title="References: Learning OpenCV 3 - page 66">Comments</span>

The return value of **cvIsInf()** is 1 if x is plus or minus infinity and 0 otherwise. The infinity test is the test implied by the IEEE754 standard.

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [02.03.18. cv::getTickFrequency](./../../02.data_types/03.utility_functions/18.gettickfrequency.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [02.03.20. cvIsNaN](./../../02.data_types/03.utility_functions/20.cvisnan.md)

</div>
