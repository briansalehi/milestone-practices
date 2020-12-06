# 02.01.02 cv::Scalar

```cxx
#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    // default constructor
    cv::Scalar scalar;

    // value constructor
    cv::Scalar vectorA (1,1,1,1);

    // copy constructor
    cv::Scalar vectorB(vectorA);

    // element-wise multiplication
    cv::Scalar multiplied = vectorA.mul(cv::Scalar(2,2,2,2));

    // returns cv::Scalar(s1, -s2, -s3, -s4)
    cv::Scalar conjugated = vectorA.conj();

    // returns true if s1 == s2 == s3 == 0
    bool isreal = vectorA.isReal();

    // conversion operator
    std::cout << "vector A: " << vectorA << std::endl;
    std::cout << "vector A multiplied to cv::Scalar(2,2,2,2) : " << multiplied << std::endl;
    std::cout << "conjugated vector A: " << conjugated << std::endl;
    std::cout << "if vector A is real: " << isreal << std::endl;

    return 0;
}

```

## <span title="References: Learning OpenCV 3 - pages 45 and 46">Comments</span>

**cv::Scalar** template class is a four-dimensional point class having members of double-precision floating point numbers.  
There are some function members supporting four-dimensional operations, a few of them used in this sample.  
There's no need to cast cv::Scalar to cv::Vec becuase it is directly inherited from a vector class and has all of the properties of a vector.

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [02.01.01. cv::Point](./../../02.data_types/01.basics/01.point.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [02.01.03. cv::Size](./../../02.data_types/01.basics/03.size.md)

</div>
