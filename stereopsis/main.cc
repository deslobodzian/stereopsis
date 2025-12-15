#include <iostream>
#include "vision/cv_camera.h"

int main() {
    CVCamera cam(0);
    cam.open_camera();
    cam.fetch();
    std::cout << "Test" << std::endl;
}
