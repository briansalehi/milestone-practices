# 02.03.12 cv::fastFree&lpar;&rpar;

```cxx
#include <opencv2/core/types.hpp>

int main()
{
    int* memory = (int*)cv::fastMalloc(10);
    if (memory != nullptr) {
        cv::fastFree(memory);
    }
    return 0;
}

```

## <span title="References: Learning OpenCV 3 - page 63">Comments</span>

This routine deallocates buffers that were allocated with **cv::fastMalloc()**.

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [02.03.11. cv::fastMalloc&lpar;&rpar;](./../../02.data_types/03.utility_functions/11.fastmalloc.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [02.03.13. cvFloor](./../../02.data_types/03.utility_functions/13.cvfloor.md)

</div>
