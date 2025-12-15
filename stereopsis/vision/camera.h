#pragma once


class Camera {
public:
    ~Camera() = default;
    virtual void open_camera() = 0;
};
