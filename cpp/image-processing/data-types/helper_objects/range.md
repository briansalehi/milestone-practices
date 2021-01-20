# 02.02.03 cv::Range

```cxx
#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    cv::Range range(0,5);
    std::cout << "range: " << range << std::endl;
    std::cout << "start: " << range.start << std::endl;
    std::cout << "end: " << range.end << std::endl;
    std::cout << "size: " << range.size() << std::endl;
    std::cout << std::boolalpha << "if empty: " << range.empty() << std::endl;
    return 0;
}

```

## Comments

no comments

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [02.02.02. cv::TermCriteria](./../../02.data_types/02.helper_objects/02.termcriteria.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [02.02.04. cv::Exception](./../../02.data_types/02.helper_objects/04.exception.md)

</div>
