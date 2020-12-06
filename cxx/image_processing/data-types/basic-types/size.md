# 02.01.03 cv::Size

```cxx
#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    // value constructor
    cv::Size size(2,4);

    // default constructor
    cv::Size sizeA(1,1);

    // copy constructor
    cv::Size sizeB(sizeA);

    // member access
    std::cout << size.width << " x " << size.height << std::endl;

    // member function area()
    std::cout << size.area() << std::endl;

    return 0;
}

```

## <span title="References: Learning OpenCV 3 - page 46">Comments</span>

**cv::Size** template class has following aliases: **cv::Size2i** and **cv::Size2f**
which the former are **cv::Size** are the same, that is, default type of size class is of type int.
And another alias is a floating-point precision size class.

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [02.01.02. cv::Scalar](./../../02.data_types/01.basics/02.scalar.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [02.01.04. cv::Rect](./../../02.data_types/01.basics/04.rectangle.md)

</div>
