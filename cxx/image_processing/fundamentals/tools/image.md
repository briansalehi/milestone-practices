# 01.01.01 image viewer

```cxx
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

int main()
{
    const char* filename = "sample.jpg";

    cv::Mat image = cv::imread(filename, -1);
    if (image.empty()) {
        std::cerr << "Incorrect input file" << std::endl;
    }
    cv::namedWindow("image viewer", cv::WINDOW_NORMAL);
    cv::resizeWindow("image viewer", 720, 480);
    cv::imshow("image viewer", image);
    cv::waitKey(0);
    cv::destroyWindow("image viewer");

    return 0;
}

```

## <span title="References: learning opencv 3 - pages 23 through 25">Comments</span>

This is a simple program to view images.

To explain this program line by line, first
we talk about the **cv** namespace.  
To use functions, objects and constants in
opencv, you must specify their namespace,
though I recommend you always specify it explicitly.  
That it, instead of using *using namespace cv*, just
specify *cv::* behind each opencv component.  
That way you will never end up having name conflicts.

**cv::imread()** function reads filename in its first
argument, and -1 to read the image colorful, 0 as black
and white.  
This function returns a structure of type **cv::Mat** in
return, and you store it as the loaded image.  
Wide variety of images are supported by this function,
eg: JPG, PNG, etc.  
After loading an image, always use exception handling in
case there's would problem.

**cv::namedWindow()** function creates a window with
a name above its bar, named by its first argument.  
It takes a *cv constant* such as **cv::WINDOW_AUTOSIZE**
to allow the **cv::imshow()** function resize it as much
as it's needed to fill the image in its real size.  
You can also use 0 or **cv::WINDOW_NORMAL**, which makes
the image fill in a normal window.

**cv::resizeWindow()** function, as its name indicates,
resizes the newly created window.  
It takes window name as its first argument and y and x as
its second and third arguments respectively.

**cv::imshow()** function will take an image structure of
type **cv::Mat** returned by **cv::imread()** function,
to fill in the newly created window as its second argument.  
If no window is created, it will create it by itself.  
First argument also takes the name of previously created
window to fill the image in or the window name to be created.

**cv::waitKey()** function waits for the user to hit a key.  

**cv::destroyWindow()** function, as its name indicates,
destroys the windows named previously by **cv::namedWindow()**
as its first argument.

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [01.01. Tools](./../../01.the_basics/01.tools/00.README.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [01.01.02. video player](./../../01.the_basics/01.tools/02.video.md)

</div>
