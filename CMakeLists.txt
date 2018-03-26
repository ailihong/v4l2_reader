cmake_minimum_required (VERSION 2.6)
project (camera)
set(CMAKE_CXX_FLAGS "-std=c++11 ")

find_package(OpenCV REQUIRED)

include_directories(${camera_SOURCE_DIR} ${OpenCV_INCLUDE_DIRS})

add_executable (open_camera live.cpp video_capture.cpp)
target_link_libraries (open_camera ${OpenCV_LIBRARIES})
