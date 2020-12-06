#include <iostream>
#include <typeinfo>
#include <string>
#include <opencv2/core/core.hpp>

template <typename _Tp>
constexpr void show(const std::string& description, const _Tp& object) {
    std::cout << description << ": " << object << std::endl;
}

int main()
{
    // cv::Rect is an alias for cv::Rect_<int>
    cv::DataType<cv::Rect> rect_type;
    std::cout << "data type: cv::Rect" << std::endl;

    // enumeration
    show("generic_type", rect_type.generic_type);
    //show("depth", rect_type.depth);
    show("channels", rect_type.channels);
    show("fmt", rect_type.fmt);
    //show("type", rect_type.type);

    return 0;
}
