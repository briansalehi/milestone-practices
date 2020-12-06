# 02.03.09 cv::CV_Error

```cxx
#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    try {
    CV_Error(cv::Error::StsBadSize, "exception thrown as a sample");
    }
    catch (cv::Exception& exp) {
        std::cout << "error code " << exp.line << ": " << exp.err << std::endl;
    }

    try {
    int i;
    //CV_Error_(cv::Error::StsBadSize, "formated string exception %d");
    }
    catch (cv::Exception& exp) {
        std::cout << "error code " << exp.line << ": " << exp.err << std::endl;
    }

    return 0;
}

```

## <span title="References: Learning OpenCV 3 - page 63">Comments</span>

The macro **cv::CV_Error()** allows you to pass in an error code and a fixed C-Style character string, which it then packages up into **cv::Exception** that it then passed to **cv::error()** to be handled.

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [02.03.08. cv::CV_Assert](./../../02.data_types/03.utility_functions/08.assertions.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [02.03.10. cv::error](./../../02.data_types/03.utility_functions/10.error.md)

</div>
