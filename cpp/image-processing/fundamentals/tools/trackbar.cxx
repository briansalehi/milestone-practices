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
