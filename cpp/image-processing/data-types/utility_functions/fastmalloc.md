# 02.03.11 cv::fastMalloc&lpar;&rpar;

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

## <span title="References: Learning OpenCV 3 - page 64">Comments</span>

**cv::fastMalloc()** works just like the *malloc()* you are familiar with, except that it is often faster, and it does buffer alignment for you.
 This means that if the buffer size passed more than 16 bytes, the returned buffer will be aligned to a 16-byte boundary.

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [02.03.10. cv::error](./../../02.data_types/03.utility_functions/10.error.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [02.03.12. cv::fastFree&lpar;&rpar;](./../../02.data_types/03.utility_functions/12.fastfree.md)

</div>
