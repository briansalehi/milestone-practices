# 01.01.02 video player

```cxx
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>
#include <string>

int main()
{
    cv::VideoCapture video;
    video.open("sample.mp4");
    cv::namedWindow("video viewer", 0);
    cv::resizeWindow("video viewer", 720, 480);

    cv::Mat frame;
    while (true) {
        video >> frame;
        if (frame.empty()) {
            std::cerr << "ran out of frames" << std::endl;
            break;
        }

        cv::imshow("video viewer", frame);
        if (cv::waitKey(33) == 27) {
            std::cerr << "user interrupted" << std::endl;
            return 1;
        }
    }

    return 0;
}

```

## <span title="References: learning opencv 3 - pages 25 and 26">Comments</span>

A video file can be opened just the way an image is read,
with a small difference. Videos are contained of frames of
images. That is, we need a loop to show all video frames as
images in a window.

**cv::VideoCapture** is an object which holds a video structure,
here called *video*.  
After creating video structure, we need to open a video file.  
**open()** is a method in **cv::VideoCapture** object, which
takes video filename in its argument.

Creation of window is discussed in **image viewer** program
previously.  
We open a window, resize it to an acceptable scale.

Then we create an image structure of type **cv::Mat**
and redirect the video frames one by one to this structure.  
Frames should be checked if they are empty, indicating that
there are no frames left to read. so we break the loop.

We use **cv::waitKey()** function here to wait for 33 mili
seconds, if user hits a key between this time interval, the
loop will break and program exits as user interrupted.  
Notice how we compared the value returned by **cv::waitKey()**.

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [01.01.01. image viewer](./../../01.the_basics/01.tools/01.image.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [01.01.03. video trackbar slider](./../../01.the_basics/01.tools/03.trackbar.md)

</div>
