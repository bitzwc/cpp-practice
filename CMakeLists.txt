cmake_minimum_required(VERSION 3.16)
project(cpp-practice)

set(CMAKE_CXX_STANDARD 20)

# 读取源文件，生成可执行文件
add_executable(${PROJECT_NAME} src/base/cppad.cpp)

# ?
target_link_libraries(${PROJECT_NAME} ipopt)