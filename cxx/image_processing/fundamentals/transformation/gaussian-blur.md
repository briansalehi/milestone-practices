# 01.02.01 gaussian blur convolution filter

```cxx
#include <opencv2/opencv.hpp>

int main()
{
    int width = 800, height = 600;
    cv::Mat image;
    image = cv::imread("sample.jpg", -1);
    if (image.empty()) {
        std::cerr << "image file did not load" << std::endl;
        return 2;
    }

    cv::namedWindow("raw image", cv::WINDOW_NORMAL);
    cv::resizeWindow("raw image", width, height);
    cv::imshow("raw image", image);

    cv::Mat filtered;
    cv::GaussianBlur(image, filtered, cv::Size(5,5), 3, 3);
    cv::GaussianBlur(filtered, filtered, cv::Size(5,5), 3, 3);

    cv::namedWindow("filtered image", cv::WINDOW_NORMAL);
    cv::resizeWindow("filtered image", width, height);
    cv::moveWindow("filtered image", 600, 200);
    cv::imshow("filtered image", filtered);

    while (true) {
        if (cv::waitKey(30) == 27) break;
    }

    cv::destroyWindow("filtered image");
    cv::destroyWindow("raw image");
    return 0;
}

```

## Comments *[not verified]*

There is nothing new in this code except **cv::GaussianBlur()** function
and **cv::moveWindow()**.

First, we created two image structures of type **cv::Mat**, one to open
the sample image and the other to store the blurred image in it.

Notice how we used **cv::GaussianBlur()** function, it takes the image we
give as the source and takes second argument of type **cv::Mat** as the destination
of filtered source, **cv::Size()** function as third argument to specify the size of
blocks of pixels being filtered by Gaussian convolution filter, and two constants as
forth and fifth arguments.

Then I used **cv::moveWindow()** function to move the destination image to avoid
windows overlaps.

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [01.02. Transformation](./../../01.the_basics/02.transformation/00.README.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [01.02.02. pyramid downsampling](./../../01.the_basics/02.transformation/02.down-sampling.md)

</div>
