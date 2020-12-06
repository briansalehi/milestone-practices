# 02.02.04 cv::Exception

```cxx
#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    try {
    // see cv::Error::Code in ../opencv2/core/base.hpp for more error codes
    CV_Error(cv::Error::StsDivByZero, "this line throws an exception");
    }
    catch (cv::Exception& exp) {
        std::cout << exp.code << ": " << exp.file << " (" << exp.func << ": " << exp.line << "): " << exp.err << std::endl;
    }

    try {
    int line = 1;
    //CV_Error_(cv::Error::StsBadSize, "this line (%d) throws an exception in fprint format string", line);
    }
    catch (cv::Exception& exp) {
        std::cout << exp.code << ": " << exp.file << " (" << exp.func << ": " << exp.line << "): " << exp.err << std::endl;
    }

    CV_Assert(1 == 1);
    CV_DbgAssert( 1 == 1 );

    return 0;
}

```

## Comments

no comments

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [02.02.03. cv::Range](./../../02.data_types/02.helper_objects/03.range.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [02.02.05. cv::DataType](./../../02.data_types/02.helper_objects/05.datatype.md)

</div>
