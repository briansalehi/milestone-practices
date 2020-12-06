# 03.02.09 cv::putText

```cxx
#include <iostream>
#include <string>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

int main()
{
    cv::Mat image(cv::Size(500, 400), 0, cv::Scalar(255,255,255));
    std::string text = "this string will be printed on image";
    cv::putText(
        image, // image to be drawn on
        text, // text to draw
        cv::Point2i(10, 30), // center, top left corner of text box
        cv::FONT_HERSHEY_PLAIN, // font style
        1.3, // font size (multiplied by)
        cv::Scalar(0,0,0), // color in BGR form
        1, // thickness
        8, // correctedness
        false
    );

    cv::namedWindow("preview", cv::WINDOW_AUTOSIZE);
    cv::moveWindow("preview", 0, 0);
    cv::imshow("preview", image);
    while (true) if (cv::waitKey(0) == 27) break;
    cv::destroyWindow("preview");
    return 0;
}

```

## <span title="References: Learning OpenCV 3 - pages 165 and 166">Comments</span>

This function is OpenCV's one main text drawing routine.

```cxx
void cv::putText(
    cv::Mat&    img, // image to be drawn on
    const std::string&  text, // write this
    cv::Point   origin, // upper-left corner of text box
    int     fontFace, // font style
    double  fontScale, // font size
    cv::Scalar  color, // color in BGR form
    int     thickness = 1, // thickness of line
    int     lineType = 8 // correctedness 4 or 8
    bool    bottomLeftOrigin = false // true= origin at lower left
);
```

Font styles are macros of type int:

```
cv::FONT_HERSHEY_SIMPLEX
cv::FONT_HERSHEY_PLAIN
cv::FONT_HERSHEY_DUPLEX
cv::FONT_HERSHEY_COMPLEX
cv::FONT_HERSHEY_TRIPLEX
cv::FONT_HERSHEY_COMPLEX_SMALL
cv::FONT_HERSHEY_SCRIPT_SIMPLEX
cv::FONT_HERSHEY_SCRIPT_COMPLEX
```

Special styles:

```cxx
cv::FONT_HERSHEY_ITALIC
```

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [03.02.08. cv::LineIterator](./../../03.operations/02.drawing/08.lineiterator.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [03.02.10. cv::getTextSize](./../../03.operations/02.drawing/10.gettextsize.md)

</div>
