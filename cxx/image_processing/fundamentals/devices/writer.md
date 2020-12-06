# 01.03.02 write to output video file

```cxx
#include <iostream>
#include <opencv2/opencv.hpp>

int main()
{
    cv::VideoCapture capture;
    capture.open("input.mp4");
    if (!capture.isOpened()) {
        std::cerr << "failed to open video file" << std::endl;
        return 1;
    }

    cv::namedWindow("capture", cv::WINDOW_NORMAL);
    cv::resizeWindow("capture", 800, 600);
    cv::namedWindow("polar", cv::WINDOW_NORMAL);
    cv::resizeWindow("polar", 800, 600);
    cv::moveWindow("polar", 600, 300);

    double fps = capture.get(cv::CAP_PROP_FPS); // frame per second
    int width = capture.get(cv::CAP_PROP_FRAME_WIDTH); // frame width
    int height = capture.get(cv::CAP_PROP_FRAME_HEIGHT); // frame height
    cv::Size size(width, height); // frame size

    cv::VideoWriter writer;
    int fourcc = writer.fourcc('M','J','P','G'); // codec
    writer.open("output.avi", fourcc, fps, size);

    cv::Mat bgr_frame, polar_frame;
    while (true) {
        capture >> bgr_frame;
        if (bgr_frame.empty()) {
            std::cerr << "ran out of frames" << std::endl;
            return 2;
        }

        cv::imshow("capture", bgr_frame);
        cv::logPolar(bgr_frame, polar_frame, cv::Point2f(bgr_frame.cols/2, bgr_frame.rows/2), 40, cv::WARP_FILL_OUTLIERS);

        cv::imshow("polar", polar_frame);
        writer << polar_frame;

        if (cv::waitKey(10) == 27) {
            std::cerr << "user interrupted" << std::endl;
            return 3;
        }
    }

    cv::destroyWindow("polar");
    cv::destroyWindow("capture");
    return 0;
}

```

## Comments *[not verified]*

We want to get a video file as input stream, and write the log polar version of it into an output file.  
To achieve this goal a few more lines are added to the code.  
**cv::VideoWriter** writes to a video file the same way **cv::VideoCapture** reads from a video file.  
But it needs a few more parameters to make the output file.  
First it gets output file name.  
then it gets the codec integer number as second argument. This will specify the way output video frames are compressed.  
Codec numbers can be achieved by **cv::VideoCapture.fourcc()** function, which itself gets four arguments each having type **char**.  
We give this function four characters of **MJPG** representing the **JPG** image files.  
Third argument of **cv::VideoWriter** is frames per second, and fourth argument of type **cv::Size** which we worked with in earlier practices.  

Now that the output file stream is ready, we put each frame of the input video to the frame, log polarize it and the write it to the output file.  
To do that, **cv::logPolar()** function is used, which takes 5 arguments. First input frame, second output frame, third argument is of type **cv::Point2f()** return type, and two other as constants.

Now by running this program, input video will be shown on a window, its polarized version will be on second window, meanwhile it will be written to the output video file.

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [01.03.01. live camera as input stream](./../../01.the_basics/03.devices/01.camera.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [02. Data Types](./../../02.data_types/00.README.md)

</div>
