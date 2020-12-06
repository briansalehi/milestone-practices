# 02.03.10 cv::error

```cxx
#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    try {
    cv::error(cv::Exception(100, "exception thrown for fun", "cv::error()", __FILE__, __LINE__));
    }
    catch (cv::Exception& exp) {
        std::cout << exp.err << std::endl;
    }
    return 0;
}

```

## <span title="References: Learning OpenCV 3 - page 63">Comments</span>

Normally the constructor is not called explicitly.
Instead, the macros **CV_Error()**, **CV_Error_()** and **CV_Assert()** are used.

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [02.03.09. cv::CV_Error](./../../02.data_types/03.utility_functions/09.errors.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [02.03.11. cv::fastMalloc&lpar;&rpar;](./../../02.data_types/03.utility_functions/11.fastmalloc.md)

</div>
