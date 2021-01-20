# 02.02.05 cv::DataType

```cxx
#include <iostream>
#include <typeinfo>
#include <string>
#include <opencv2/core/core.hpp>

template <typename _Tp>
constexpr void show(const std::string& description, const _Tp& object) {
    std::cout << description << ": " << object << std::endl;
}

int main()
{
    // cv::Rect is an alias for cv::Rect_<int>
    cv::DataType<cv::Rect> rect_type;
    std::cout << "data type: cv::Rect" << std::endl;

    // enumeration
    show("generic_type", rect_type.generic_type);
    //show("depth", rect_type.depth);
    show("channels", rect_type.channels);
    show("fmt", rect_type.fmt);
    //show("type", rect_type.type);

    return 0;
}

```

## Comments

no comments

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [02.02.04. cv::Exception](./../../02.data_types/02.helper_objects/04.exception.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [02.02.06. cv::InputArray, cv::OutputArray, cv::noArray](./../../02.data_types/02.helper_objects/06.array.md)

</div>
