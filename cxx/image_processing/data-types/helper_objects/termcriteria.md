# 02.02.02 cv::TermCriteria

```cxx
#include <opencv2/core/types.hpp>

int main()
{
    /**
    int type: should be assigned by cv::TermCriteria::COUNT == cv::TermCriteria::MAX_ITER or cv::TermCriteria::EPS
    int maxCount
    double epsilon
    to read more about this function read ../opencv2/core/types.hpp
    */
    cv::TermCriteria criteria(cv::TermCriteria::COUNT | cv::TermCriteria::EPS, 5, 1);

    return 0;
}

```

## Comments

no comments

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [02.02.01. cv::Ptr](./../../02.data_types/02.helper_objects/01.ptr.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [02.02.03. cv::Range](./../../02.data_types/02.helper_objects/03.range.md)

</div>
