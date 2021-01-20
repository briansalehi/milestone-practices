# 02.03.08 cv::CV_Assert

```cxx
#include <opencv2/core/types.hpp>

int main()
{
    CV_Assert(1 == 1);
    CV_DbgAssert(1 == 1);
    return 0;
}

```

## <span title="References: Learning OpenCV 3 - page 63">Comments</span>

**cv::CV_Assert()** is a macro that will test the expression passed to it and, if that expression evaluates to False or 0, it will throw an exception.
The **cv::CV_Assert()** macro is always tested.
Alternatively, you can use **cv::CV_DbgAssert()** which will be tested only in debug build mode.

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [02.03.07. cv::cubeRoot](./../../02.data_types/03.utility_functions/07.cuberoot.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [02.03.09. cv::CV_Error](./../../02.data_types/03.utility_functions/09.errors.md)

</div>
