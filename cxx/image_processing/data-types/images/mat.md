# 02.04.01 cv::Mat members

```cxx
#include <iostream>
#include <opencv2/highgui.hpp>

int main()
{
    cv::Mat image = cv::imread("../../samples/girl.jpg");
    if (image.empty()) {
        std::cerr << "failed to open image file" << std::endl;
        return 1;
    }

    std::cout << image.flags << std::endl;
    std::cout << image.dims << std::endl;

    if (image.dims == 2) {
        std::cout << image.rows << std::endl;
        std::cout << image.cols << std::endl;
    }
    return 0;
}

```

## <span title="References: Learning OpenCV 3 - pages 72 and 73">Comments</span>

The **cv::Mat** class can be used for arrays of any number of dimensions.

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [02.04. Images and Large Array Types](./../../02.data_types/04.images/00.README.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [02.04.02. creating an array](./../../02.data_types/04.images/02.create_mat.md)

</div>
