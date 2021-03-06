# 01.01.03 video trackbar slider

```cxx
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>
#include <fstream>

int g_slider_position = 0;
cv::VideoCapture g_video_cap;

void move_slider(int position, void*) {
    g_video_cap.set(cv::CAP_PROP_POS_FRAMES, position);
}

int main()
{
    g_video_cap.open("sample.mp4");

    int total_frames = (int)g_video_cap.get(cv::CAP_PROP_FRAME_COUNT);
    int frame_width = (int)g_video_cap.get(cv::CAP_PROP_FRAME_WIDTH);
    int frame_height = (int)g_video_cap.get(cv::CAP_PROP_FRAME_HEIGHT);
    std::cout << "reading " << total_frames << " frames in " \
        << frame_height << "x" << frame_width << std::endl;

    cv::namedWindow("video player", cv::WINDOW_NORMAL);
    cv::resizeWindow("video player", 720, 480);
    cv::createTrackbar("position", "video player", &g_slider_position, total_frames, move_slider);

    cv::Mat frame;
    while (true) {
        g_video_cap >> frame;
        if (frame.empty()) {
            std::cerr << "ran out of frames" << std::endl;
            break;
        }

        int current_position = g_video_cap.get(cv::CAP_PROP_POS_FRAMES);
        cv::setTrackbarPos("position", "video player", current_position);
        cv::imshow("video player", frame);

        if (cv::waitKey(10) == 27) {
            std::cerr << "user interrupted" << std::endl;
            break;
        }
    }

    cv::destroyWindow("video player");
    return 0;
}

```

## Comments *[not verified]*

To add a **trackbar slider** to the video player we have made previously,
a few more lines should be written.

First, to make this slider work on our player, it should have access to the
**video capture object** of type **cv::VideoCapture**, here called *g_video_cap*.  
So, we set *video* object globally accessible in our program.  
Besides, we need a global slider position variable so that we know where the slider is
set anywhere in our program.

Trackbar slider requires a function callback in order to move between frames
with it. Here we call it **move_slider** function.  
This function gets destination frame position as its first argument, and a
null pointer as its second argument.  
Then it uses **set** method of *g_video_cap* to move the slider position.  
This method takes an opencv constant **cv::PROP_CAP_POS_FRAMES** which indicates
the position of current frame where the slider is set on.
Then it takes the *position* of new frame
as its second argument to move the slider to it.

To move slider around, we need to have some information about how many frames does the video is contained of.  
So we use opencv constants to get these kind of information by using **get** method in video object right after
we opened the file.

Now, we open the video file and create a new window and resize it to the size of our interest.  
Then we create the taskbar slider by using **cv::createTaskbar** function which takes slider position name
as its first argument, the window name which the video will be played on as its second argument, the global
slider position variable as its third argument, number of total frames that video is contained of as fourth
argument, and finally **move_slider** callback function as its fifth argument to let the taskbar move slider.

Finally we create a loop to show video frames one by one until we run out of video frames.  
Between this loop, we need to move the slider one frame before the player actually shows next frame in window.
We do that by **cv::setTrackPos()** function which takes the position name, window name and slider position as
its three arguments respectively.

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [01.01.02. video player](./../../01.the_basics/01.tools/02.video.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [01.02. Transformation](./../../01.the_basics/02.transformation/00.README.md)

</div>
