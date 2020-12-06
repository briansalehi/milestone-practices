# 01.02.03 BGR to gray

```cxx
#include <opencv2/opencv.hpp>
#include <iostream>

int main()
{
    int width = 600, height = 400;
    cv::Mat image, gray, canny;

    image = cv::imread("sample2.jpg");
    if (image.empty()) {
        std::cerr << "cannot load empty image" << std::endl;
        return 1;
    }

    cv::namedWindow("raw image", cv::WINDOW_NORMAL);
    cv::resizeWindow("raw image", width, height);
    cv::imshow("raw image", image);

    cv::cvtColor(image, gray, cv::COLOR_BGR2GRAY);
    cv::namedWindow("gray image", cv::WINDOW_NORMAL);
    cv::resizeWindow("gray image", width, height);
    cv::moveWindow("gray image", 606, 0);
    cv::imshow("gray image", gray);

    cv::Canny(gray, canny, 10, 100, 3, true);
    cv::namedWindow("canny image", cv::WINDOW_NORMAL);
    cv::resizeWindow("canny image", width, height);
    cv::moveWindow("canny image", 303, 350);
    cv::imshow("canny image", canny);

    while (true) {
        if (cv::waitKey(30) == 27) break;
    }

    cv::destroyWindow("raw image");
    cv::destroyWindow("gray image");
    cv::destroyWindow("canny image");
    return 0;
}

```

## Comments *[not verified]*

For edge detection we use Canny edge detector function **cv::Canny()** here.  
The edge detector generates an image that is full size of the input image
but needs to be only single channel image to write to,
so we convert the input image to a gray-scale, single-channel image first,
using **cv::cvtColor()** with the flag to convert blue, green, red (BGR)
images to gray-scale, **cv::COLOR_BGR2GRAY**.

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [01.02.02. pyramid downsampling](./../../01.the_basics/02.transformation/02.down-sampling.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [01.02.04. edge detection](./../../01.the_basics/02.transformation/04.edge-detection.md)

</div>
