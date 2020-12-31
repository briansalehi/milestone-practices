# 02.02.06 cv::InputArray, cv::OutputArray, cv::noArray

```cxx
#include <opencv2/core/core.hpp>

int main()
{
    //cv::InputArray input_array;
    //cv::OutputArray output_array;
    cv::InputArray no_array = cv::noArray();

    return 0;
}

```

## <span title="References: Learning OpenCV 3 - pages 59 and 60">Comments</span>

Related to **cv::InputArray** is the special function **cv::noArray()** that returns a cv::InputArray**.
The returned object can be passed to any input requiring **cv::InputArray** to indicate that this input is not being used.
Certain functions also have optional output arrays, where you may pass **cv::noArray()** when you do not need the corresponding output.

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [02.02.05. cv::DataType](./../../02.data_types/02.helper_objects/05.datatype.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [02.03. Utility Functions](./../../02.data_types/03.utility_functions/00.README.md)

</div>
