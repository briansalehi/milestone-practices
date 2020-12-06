# 02.04.02 creating an array

```cxx
#include <iostream>
#include <opencv2/core/core.hpp>

void details(const cv::Mat& matrix) {
    std::cout << "dimensions: " << matrix.dims << std::endl;
    std::cout << "rows: " << matrix.rows << std::endl;
    std::cout << "columns: " << matrix.cols << std::endl;
    std::cout << std::endl;
}

int main()
{
    cv::Mat empty_matrix;
    empty_matrix.create(3, 10, CV_32FC3);
    empty_matrix.setTo(cv::Scalar(0.1f, 0.0f, 0.1f));
    details(empty_matrix);

    cv::Mat filled_matrix(3, 10, CV_32FC3, cv::Scalar(0.1f, 0.0f, 0.1f));
    details(empty_matrix);
    
    return 0;
}

```

## <span title="References: Learning OpenCV 3 - page 73">Comments</span>

You can create an array by instanting a variable of type **cv::Mat**.
An array created in this manner has no size and no data type.
You can however, later ask it to allocate data by using a member function such
as **create()**.

#### **cv::Mat** constructors that do not copy data

```cxx
cv::Mat; // default constructor
cv::Mat(int rows, int cols, int type); // two dimensional array by type
cv::Mat(int rows, int cols, int type, const cv::Scalar& s); // two dimensional array by type with initialization value
cv::Mat(int rows, int cols, int type, void* data, size_t step=AUTO_STEP); // two dimensional array by type with preexisting data
cv::Mat(cv::Size sz, int type); // two dimensional array by type in size sz
cv::Mat(cv::Size sz, int type, const cv::Scalar& s); // two dimensional array by type with initialization value in size sz
cv::Mat(cv::size sz, int type, void* data, size_t step=AUTO_STEP); // two dimensional array by type with preexisting data in size sz
cv::Mat(int ndims, const int* sizes, int type); // multidimensional array by type
cv::Mat(int ndims, const int* sizes, int type, const cv::Scalar& s); // multidimensional array by type with initialization value
cv::Mat(int ndims, const int* sizes, int type, void* data, size_t step=AUTO_STEP); // multidimensional array by type with preexisting data
```

#### **cv::Mat** copy constructors that copy data from other **cv::Mat**s

```cxx
cv::Mat(const cv::Mat& mat); // copy constructor
cv::Mat(const cv::Mat& mat, const cv::Range& rows, const cv::Range& cols); // copy constructor that only copies a subset of rows and columns
cv::Mat(const cv::Mat& mat, const cv::Rect& roi); // copy constructor that only copies a subset of rows and columns by a region of interest
cv::Mat(const cv::Mat& mat, const cv::Range* ranges); // generalized region of interest copy constructor that uses an array of ranges to select from an n-dimensional array
cv::Mat(const cv::MatExpr& expr); // copy constructor that initializes m with the result of an algebraic expression of other matrices
```

#### **cv::Mat** template constructors

```cxx
cv::Mat(const cv::Vec<T,n>& vec, bool copyData=true); // construct a one-dimensional
cv::Mat(const cv::Matx<T,m,n>& vec, bool copyData=true); // constructor for a two-dimensional array of type T and size mxn from a cv::Matx of the same type
cv::Mat(const std::vector<T>& vec, bool copyData=true); // construct a one-dimensional array of type T from an STL vector containing elements of the same type
```

#### **cv::Mat** static functions that create cv::Mat

The class **cv::Mat** also provides a number of static member functions to create certain kinds of commonly used arrays. These include functions like **zeros()**, **ones()**, **eye()**, which construct a matrix full of zeros, ones, or an identity matrix, respectly.

```cxx
cv::Mat::zeros(rows, cols, type); // create a cv::Mat of size rowsxcols, which is full of zeros with a type (CV_32F, etc.)
cv::Mat::ones(rows, cols, type); // create a cv::Mat of size rowsxcols, which is full of ones with a type (CV_32F, etc.)
cv::Mat::eye(rows, cols, type); // create a cv::Mat of size rowsxcols, which is an identity matrix, with a type (CV_32F, etc.)
```

### Quick Access

<div class="previous_page" style="float:left;margin-left:20px;margin-right:20px">

#### &#8592; Previous Page

* [02.04.01. cv::Mat members](./../../02.data_types/04.images/01.mat.md)

</div>
<div class="next_page" style="float:right;margin-left:20px;margin-right:20px">

#### &#8594; Next Page

* [02.04.03. access array elements indivitually](./../../02.data_types/04.images/03.access_mat.md)

</div>
