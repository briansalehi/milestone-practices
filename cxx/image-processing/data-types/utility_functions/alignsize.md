# 02.03.02 cv::alignSize

```cxx
#include <iostream>
#include <opencv2/core/core.hpp>

struct base {
public:
    base() = default;
    base(const int& A, const double& B): memberA{A}, memberB{B} {};
    ~base() = default;
private:
    int memberA;
    double memberB;
};

int main()
{
    base object(1,2);
    base* array = new base[4]{object, object, object, object};
    size_t align_size = cv::alignSize(sizeof(array), sizeof(object));

    std::cout << "size of buffer: " << sizeof(array) << std::endl;
    std::cout << "size of type: " << sizeof(object) << std::endl;
    std::cout << "align size: " << align_size << std::endl;
    size_t bs = sizeof(array);
    int n = sizeof(object);
    std::cout << "computed align size: " << ((bs + n-1) & -n) << std::endl;

    delete [] array;
    return 0;
} 

```

## <span title="References: Learning OpenCV 3 - page 61">Comments</span>

Given a number *n* (typically a return value from *sizeof()*), and a size for a buffer,
**cv::alignSize()** computes the size that this buffer should be in order to contain an integer number of objects of size *n*.
That is, the minimum number that is greater or equal to buffer size yet divisable by *n*.
The following formula is used:

```cxx
(bs + n-1) & -n
```

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [02.03.01. cv::alignPtr](./../../02.data_types/03.utility_functions/01.alignptr.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [02.03.03. cv::allocate &lpar;will be removed&rpar;](./../../02.data_types/03.utility_functions/03.allocate.md)

</div>
