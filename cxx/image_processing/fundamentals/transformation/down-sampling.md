# 01.02.02 pyramid downsampling

```cxx
#include <opencv2/opencv.hpp>
#include <iostream>

int main()
{
    int width = 800, height = 600;
    cv::Mat image;
    image = cv::imread("sample.jpg", -1);
    if (image.empty()) {
        std::cerr << "attempted to load an empty image" << std::endl;
        return 1;
    }

    cv::namedWindow("raw image", cv::WINDOW_NORMAL);
    cv::resizeWindow("raw image", width, height);
    cv::imshow("raw image", image);

    cv::Mat downsampled;
    cv::pyrDown(image, downsampled);
    cv::pyrDown(downsampled, downsampled);

    cv::namedWindow("x4 downsampled image", cv::WINDOW_NORMAL);
    cv::resizeWindow("x4 downsampled image", width, height);
    cv::moveWindow("x4 downsampled image", 600, 200);
    cv::imshow("x4 downsampled image", downsampled);

    while (true) {
        if (cv::waitKey(30) == 27) break;
    }

    cv::destroyWindow("raw image");
    cv::destroyWindow("x4 downsampled image");
    return 0;
}

```

## Comments *[not verified]*

We will now use a function that uses Gaussian filtering to **downsapmle**
an image by a factor of 2.
That is, we are creating an image where was sampling every other pixel of the source image.

If we downsample the image several times, we form a **scale space**,
also known as an **image pyramid**, that is commonly used in computer
vision to handle the changing scales in which a scene or object is observed.

**Downsampling** is a common process used in signal processing,
specifically known as **Nyquist-Shannon** sampling theorm.  
Such sampling introduces high frequencies into the resulting signal, in this case an image.  
To avoid this, we want to first run a high-pass filter over the signal to
*band-limit* its frequencies so that they are all below the sampling frequency.

In opencv, this **Gaussian blurring** and **downsampling** is accomplished
by the function **cv::pryDown()**, which we implemented in this code.

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [01.02.01. gaussian blur convolution filter](./../../01.the_basics/02.transformation/01.gaussian-blur.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [01.02.03. BGR to gray](./../../01.the_basics/02.transformation/03.bgr2gray.md)

</div>
