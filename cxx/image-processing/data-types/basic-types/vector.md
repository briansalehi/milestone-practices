# 02.01.07 cv::Vec

```cxx
#include <iostream>
#include <opencv2/core/core.hpp>

template <typename Vector>
void show(const std::string& name, const Vector& vector) {
    std::cout << name << std::endl;
    std::cout << vector << std::endl;
    std::cout << std::endl;
}

int main()
{
    // default constructor
    cv::Vec3i vecA;
    show<cv::Vec3i>("vecA", vecA);

    // value constructor
    vecA = cv::Vec3i(2,1,0);
    show<cv::Vec3i>("vecA after value assignment", vecA);

    cv::Vec3i vecB(1,2,0);
    show<cv::Vec3i>("vecB", vecB);

    // member access
    int element = vecB[0];
    std::cout << "first element: " << element << std::endl;

    // methods
    cv::Vec3i cross = vecA.cross(vecB);
    std::cout << "cross section of A to B: " << cross << std::endl;

    return 0;
}

```

## Comments

no comments

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [02.01.06. cv::Matx](./../../02.data_types/01.basics/06.matrix.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [02.01.08. cv::Complex](./../../02.data_types/01.basics/08.complex.md)

</div>
