#include "cv_camera.h"

CVCamera::CVCamera(int id) : id_(id) {}

CVCamera::~CVCamera() {
    cap_.release();
}

void CVCamera::open_camera() {
    cap_.open(id_, cv::CAP_ANY);
    cap_.set(cv::CAP_PROP_FRAME_WIDTH, 1920);
    cap_.set(cv::CAP_PROP_FRAME_HEIGHT, 1080);
    cap_.set(cv::CAP_PROP_FPS, 30);
}

void CVCamera::fetch() {
    cap_.read(frame_);
}


