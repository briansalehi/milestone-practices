# 02.02.01 cv::Ptr

```cxx
#include <iostream>
#include <opencv2/core/core.hpp>

/*
template<> inline void cv::Ptr<int>::delete_obj() {
    if (obj != nullptr) {
        delete obj;
    }
}
*/

int main()
{
    // constructor
    cv::Ptr<cv::Mat> frameA(new cv::Mat);
    cv::Ptr<cv::Mat> frameB = cv::makePtr<cv::Mat>();

    // overriden void delete_obj() method
    //cv::Ptr<int> pointer(new int);

    return 0;
}

```

## Comments

no comments

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [02.02. Helper Objects](./../../02.data_types/02.helper_objects/00.README.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [02.02.02. cv::TermCriteria](./../../02.data_types/02.helper_objects/02.termcriteria.md)

</div>
