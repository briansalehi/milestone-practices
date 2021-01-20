# 02.03.04 cv::deallocate &lpar;will be removed&rpar;

```cxx
#include <iostream>
#include <opencv2/opencv.hpp>

int main()
{
    /**
    @param size_t size of buffer to be allocated
    */
    /*
    int* pointer = cv::allocate<int>(4);
    std::cout << sizeof(pointer) << std::endl;
    cv::deallocate<int>(pointer, sizeof(pointer));
    */
    return 0;
}

```

## <span title="References: Learning OpenCV 3 - page 62">Comments</span>

This function seem not to exist in opencv2, in that case it will be removed soon.

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [02.03.03. cv::allocate &lpar;will be removed&rpar;](./../../02.data_types/03.utility_functions/03.allocate.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [02.03.05. cv::fastatan2](./../../02.data_types/03.utility_functions/05.fastatan2.md)

</div>
