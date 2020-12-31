# 03.02.02 cv::clipLine

```cxx
#include <iostream>
#include <opencv2/imgproc/imgproc.hpp>

int main()
{
    cv::Rect rectangle(cv::Point2i(0,0), cv::Point2i(5,5));
    cv::Point2i pt1(1,1);
    cv::Point2i pt2(4,1);
    bool contains_line = cv::clipLine(rectangle, pt1, pt2);
    if (contains_line) {
        std::cout << "rectangle:" << std::endl;
        std::cout << rectangle << std::endl;
        std::cout << "contains the line" << std::endl;
        std::cout << pt1 << std::endl;
        std::cout << pt2 << std::endl;
    }

    return 0;
}

```

## <span title="References: Learning OpenCV 3 - page 159">Comments</span>

```cxx
bool cv::clipLine(
    cv::Rect    imgRect,
    cv::Point&  pt1,
    cv::Point&  pt2
);

bool cv::clipLine(
    cv::Size    imgSize,
    cv::Point&  pt1,
    cv::Point&  pt2
);
```

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [03.02.01. cv::circle](./../../03.operations/02.drawing/01.circle.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [03.02.03. cv::ellipse](./../../03.operations/02.drawing/03.ellipse.md)

</div>
