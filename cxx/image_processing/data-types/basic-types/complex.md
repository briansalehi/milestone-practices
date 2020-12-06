# 02.01.08 cv::Complex

```cxx
#include <iostream>
#include <opencv2/core/core.hpp>

void show(const std::string& name, const cv::Complexf& complex) {
    std::cout << name << ": ";
    std::cout << complex << std::endl;
}

int main()
{
    // default constructor
    cv::Complexf complexA;

    // member access
    complexA.re = 1;
    complexA.im = 2;
    show("complexA", complexA);

    // copy constructor
    cv::Complexf complexB(complexA);
    show("complexB", complexB);

    // value constructor
    cv::Complexf complexC(1,2);
    show("complexC", complexC);

    // methods
    cv::Complexf conj = complexA.conj();
    std::cout << "conjugate: " << conj << std::endl;

    return 0;
}

```

## Comments

no comments

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [02.01.07. cv::Vec](./../../02.data_types/01.basics/07.vector.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [02.02. Helper Objects](./../../02.data_types/02.helper_objects/00.README.md)

</div>
