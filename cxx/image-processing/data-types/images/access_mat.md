# 02.04.03 access array elements indivitually

```cxx
#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    cv::Mat mat = cv::Mat::eye(3, 3, CV_32FC1);
    std::cout << mat << std::endl;
    std::cout << "\n(2,2): " << mat.at<float>(2,2) << std::endl;
    return 0;
}

```

## <span title="References: Learning OpenCV 3 - pages 78 through 81">Comments</span>

The basic means of direct access is the template member function **at<>**.

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [02.04.02. creating an array](./../../02.data_types/04.images/02.create_mat.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [03. Operations](./../../03.operations/00.README.md)

</div>
