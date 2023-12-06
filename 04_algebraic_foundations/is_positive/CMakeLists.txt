cmake_minimum_required(VERSION 3.0.2)
project(is_positive)

set(CMAKE_BUILD_TYPE "Release")

find_package(CGAL REQUIRED)
find_package(Python3 REQUIRED COMPONENTS Development NumPy)
# add_executable(${PROJECT_NAME} collinear.cpp)
add_executable(${PROJECT_NAME} is_positive.cpp)
target_link_libraries(${PROJECT_NAME} CGAL::CGAL Python3::Python Python3::NumPy)
target_include_directories(${PROJECT_NAME} PUBLIC  ${PROJECT_SOURCE_DIR}
                                                   ${Python3_INCLUDE_DIRS} 
                                                   ${Python3_NumPy_INCLUDE_DIRS})