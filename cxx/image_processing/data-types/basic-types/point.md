# 02.01.01 cv::Point

```cxx
#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    // default constructor
    cv::Point2d point;

    // two dimensional point having type of int
    cv::Point2i A(1,1);

    // copy constructor
    cv::Point3i B(A);

    // member access
    std::cout << "point position: (" << B.x << "," << B.y << "," << B.z << ")" << std::endl;
    
    // dot product
    cv::Point2i C(1,1);
    int d = A.dot(C);
    double dd = A.ddot(C);
    std::cout << "int type distance from point A to B: " << d << std::endl;
    std::cout << "double type distance from point A to B: " << dd << std::endl;

    return 0;
}

```

## <span title="References: Learning OpenCV 3 - pages 44 and 45">Comments</span>

Of OpenCV basic types, point classes are the simplest template classes.  
There are two and three dimensional point templates.  
Point classes are instantiated with aliases of having specific types and dimensions.  
Such aliases are: **cv::Point{2,3}{b,w,s,i,d,f}**  
Samples:

* cv::Point2i
* cv::Point2f
* cv::Point3d

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [02.01. Basic Data Types](./../../02.data_types/01.basics/00.README.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [02.01.02. cv::Scalar](./../../02.data_types/01.basics/02.scalar.md)

</div>
