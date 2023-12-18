cmake_minimum_required(VERSION 3.10)

project(qt_cmake)

# 自动把ui转换成c++ qtmake.ui > ui_qtcmake.h
# ui文件需要在索引这个头文件相同的目录下比如include文件下，
# 如果ui想单独一个文件夹下，需要如下配置
# set(CMAKE_AUTOUIC_SEARCH_PATHS "./ui")
set(CMAKE_AUTOUIC ON)
# 自动生成资源文件代码
set(CMAKE_AUTORCC ON)
#自动生成信号槽
set(CMAKE_AUTOMOC ON)

set(Qt5_DIR D:/Qt/Qt5.14.2/5.14.2/msvc2017_64/lib/cmake/Qt5)


# 导入QT的库
find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(${PROJECT_NAME} main.cpp mainwindow.ui ./mainwindow.h ./mainwindow.cpp)
target_link_libraries( ${PROJECT_NAME} Qt5::Widgets)

