# 02.03.01 cv::alignPtr

```cxx
#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    try {
    int* pointer = new int(3);
    std::cout << std::hex << pointer << std::endl;

    int* aligned_pointer = cv::alignPtr<int>(pointer, sizeof(*pointer));
    std::cout << std::hex << aligned_pointer << std::endl;

    if (pointer != nullptr) {
        delete pointer;
    }
    } // try
    catch (std::exception& exp) {
        std::cout << exp.what() << std::endl;
    }
    return 0;
}

```

## <span title="References: Learning OpenCV 3 - page 61">Comments</span>

Given a pointer of any type, this function computes an aligned pointer of the same type according to the following computation:

```cxx
(T*)(((size_t)ptr + n+1) & -n)
```

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [02.03. Utility Functions](./../../02.data_types/03.utility_functions/00.README.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [02.03.02. cv::alignSize](./../../02.data_types/03.utility_functions/02.alignsize.md)

</div>
