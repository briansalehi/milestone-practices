# 02.01.04 cv::Rect

```cxx
#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    // default constructor
    cv::Rect rectangle;

    // value constructor
    cv::Rect rectA(1,1,1,1);

    // copy constructor
    cv::Rect rectB(rectA);

    //member access
    rectangle.x = 0;
    rectangle.y = 0;
    rectangle.width = 2;
    rectangle.height = 2;
    std::cout << "rectangle members: " << rectangle.x << ", " << rectangle.y << ", " << rectangle.width << ", " << rectangle.height << std::endl;

    // conversion operator
    std::cout << "rectangle: " << rectangle << std::endl;
    std::cout << "rectA: " << rectA << std::endl;
    std::cout << "rectB: " << rectB << std::endl;

    // construct from origin and size
    cv::Point2i origin(1,1);
    cv::Size size(1,1);
    cv::Rect rectC(origin, size);
    std::cout << "rectC: " << rectC << std::endl;

    // construct from two corners
    cv::Point2i topleft(0,1);
    cv::Point2i bottomright(1,0);
    cv::Rect rectD(topleft, bottomright);
    std::cout << "rectD: " << rectD << std::endl;

    // member fuction
    int area = rectangle.area();
    std::cout << "area of rectangle: " << area << std::endl;

    std::cout << "top left corner of rectangle: " << rectangle.tl() << std::endl;
    std::cout << "bottom right corner of rectangle: " << rectangle.br() << std::endl;

    cv::Point2i point(1,1);
    bool contains = rectangle.contains(point);
    std::cout.setf(std::ios_base::boolalpha);
    std::cout << "whether rectangle contains point(1,1): " << contains << std::endl;

    // overloaded operators
    cv::Rect intersection = rectangle & rectA; // intersection of both rectangles
    cv::Rect minimum = rectangle | rectA; // minimum area rectangle containing both rectangles
    cv::Rect translate = rectangle + cv::Point2i(3,0); // translate rectangle by an amount of x
    cv::Rect enlarged = rectangle + cv::Size(1,1); // enlarge rectangle by an amount of size
    bool equality = (rectA == rectB);
    bool inequality = (rectangle != rectA);
    std::cout << "intersection of rectangle and rectA: " << intersection << std::endl;
    std::cout << "minimum area rectangle containing rectangle and rectA: " << minimum << std::endl;
    std::cout << "translated rectangle by amount of cv::Point2i(3,0) : " << translate << std::endl;
    std::cout << "enlarged rectangle by amount of cv::Size(1,1) : " << enlarged << std::endl;
    std::cout << "whether rectA and rectB are equal: " << equality << std::endl;
    std::cout << "whether rectA and RectB are inequal: " << inequality << std::endl;
    return 0;
}

```

## <span title="References: Learning OpenCV 3 - pages 47 and 48">Comments</span>

**cv::Rect** class has four data members of cv::Point and cv::Size (x, y, width, height)  
Rectangle class does not inherit from point and size classes so it does not carry their member functions and operators.
But it contains a few useful functions and overloaded operators.

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [02.01.03. cv::Size](./../../02.data_types/01.basics/03.size.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [02.01.05. cv::RotatedRect](./../../02.data_types/01.basics/05.rotated.md)

</div>
