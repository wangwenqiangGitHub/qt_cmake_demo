cmake_minimum_required(VERSION 3.10)

project(qt_cmake)

set(CMAKE_AUTOUIC ON)
# 自动把ui转换成c++ qtmake.ui > ui_qtcmake.h

# 自动生成资源文件代码
set(CMAKE_AUTORCC ON)

#自动生成信号槽
set(CMAKE_AUTOMOC ON)

add_executable(${PROJECT_NAME} main.cpp mainwindow.ui ./mainwindow.h ./mainwindow.cpp)
	# ./qtcmake.h ./qtcmake.cpp)


# set(Qt5_DIR E:\Qt\6.2.4\msvc2019_64\lib\cmake\Qt5)
# set(Qt5_DIR E:/Qt/6.2.4/msvc2019_64/lib/cmake/Qt6)

set(Qt5_DIR D:/Qt/Qt5.14.2/5.14.2/msvc2017_64/lib/cmake/Qt5)
# 导入QT的库
find_package(Qt5 COMPONENTS Widgets REQUIRED)

target_link_libraries(
  ${PROJECT_NAME} Qt5::Widgets
  )

# cmake -S . -B --build
# cmake -B build
# windeployqt.exe /mnt/d/Qt/Qt5.14.2/5.14.2/msvc2017_64/bin/windeployqt.exe
