# 01.02.04 edge detection

```cxx
#include <opencv2/opencv.hpp>
#include <iostream>

int main()
{
    int width = 800, height = 600;
    cv::Mat image, gray, pyramid, canny1, canny2;

    image = cv::imread("sample2.jpg");
    if (image.empty()) {
        std::cerr << "cannot load empty image" << std::endl;
        return 1;
    }

    cv::cvtColor(image, gray, cv::COLOR_BGR2GRAY);
    cv::pyrDown(gray, pyramid);
    cv::pyrDown(pyramid, pyramid);

    cv::Canny(gray, canny1, 10, 100, 3, true);
    cv::namedWindow("gray to canny image", cv::WINDOW_NORMAL);
    cv::resizeWindow("gray to canny image", width, height);
    cv::imshow("gray to canny image", canny1);

    cv::Canny(pyramid, canny2, 10, 100, 3, true);
    cv::namedWindow("pyramid to canny image", cv::WINDOW_NORMAL);
    cv::resizeWindow("pyramid to canny image", width, height);
    cv::moveWindow("pyramid to canny image", 600, 200);
    cv::imshow("pyramid to canny image", canny2);

    while (true) {
        if (cv::waitKey(30) == 27) break;
    }

    cv::destroyWindow("gray to canny image");
    cv::destroyWindow("pyramid to canny image");
    return 0;
}

```

## Comments *[not verified]*

We can combine what we have learned so far to do a better edge detection.  
Here we first gray-sampled the image, then used **cv::pyrDown()** function twice
to downscale the image by the factor of 4. And finally used **cv::Canny()** function
over it to make an edge detection.

We used Canny over gray-scaled only image and down-sampled image to make a visual comparison
of edge detection approaches.  
If you can compile and see it by yourself, you will see that definitely using down-sampling before Canny helps for better edge detection.

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [01.02.03. BGR to gray](./../../01.the_basics/02.transformation/03.bgr2gray.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [01.03. Using Devices](./../../01.the_basics/03.devices/00.README.md)

</div>
