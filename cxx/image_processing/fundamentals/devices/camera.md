# 01.03.01 live camera as input stream

```cxx
#include <iostream>
#include <opencv2/highgui/highgui.hpp>

int main()
{
    cv::VideoCapture capture;
    capture.open(0);
    if (!capture.isOpened()) {
        std::cerr << "failed to get input stream from camera" << std::endl;
        return 1;
    }

    cv::namedWindow("capture", cv::WINDOW_NORMAL);
    cv::resizeWindow("capture", 800, 600);

    cv::Mat frame;
    while (true) {
        capture >> frame;
        if (frame.empty()) {
            std::cerr << "hit empty frame" << std::endl;
            return 2;
        }

        cv::imshow("capture", frame);
        if (cv::waitKey(10) == 27) {
            std::cerr << "user interrupted" << std::endl;
            return 3;
        }
    }

    cv::destroyWindow("capture");
    return 0;
}

```

## Comments *[not verified]*

**cv::VideoCapture** will not only accepts video files as input stream, but it also can
take 0 instead of filename to get your system's default camera as input stream.

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [01.03. Using Devices](./../../01.the_basics/03.devices/00.README.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [01.03.02. write to output video file](./../../01.the_basics/03.devices/02.writer.md)

</div>
