#pragma once

#include "camera.h"
#include <opencv2/opencv.hpp>

class CVCamera : public Camera {
public:
    CVCamera(int id);
    ~CVCamera();

    void open_camera() override;
    void fetch();
private:
    int id_;

    cv::VideoCapture cap_;
    cv::Mat frame_;
};
