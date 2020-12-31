# 02.03.20 cvIsNaN

```cxx
#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    bool is_nan = cvIsNaN(1.1);
    std::cout << std::boolalpha << is_nan << std::endl;
    return 0;
}

```

## <span title="References: Learning OpenCV 3 - page 66">Comments</span>

The return value of **cvIsNAN()** is 1 if x is **Not a Number** and 0 otherwise.

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [02.03.19. cvIsInf](./../../02.data_types/03.utility_functions/19.cvisinf.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [02.03.21. cvRound](./../../02.data_types/03.utility_functions/21.cvround.md)

</div>
