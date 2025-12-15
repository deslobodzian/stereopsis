load("@rules_cc//cc:cc_library.bzl", "cc_library")
load("@rules_cc//cc:cc_test.bzl", "cc_test")

cc_library(
    name = "vision",
    srcs = ["cv_camera.cc"],
    hdrs = ["camera.h", "cv_camera.h"],
    visibility = ["//visibility:public"],
    deps = [
        "@opencv"
    ]
)

