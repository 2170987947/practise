cmake_minimum_required(VERSION 3.22)
project(practise)

set(CMAKE_CXX_STANDARD 14)

include_directories(220905)

#add_executable(practise
#        220905/hello.cpp
#        leetcode/editor/cn/fei-bo-na-qi-shu-lie-lcof.cpp
#        leetcode/editor/cn/shu-zu-zhong-zhong-fu-de-shu-zi-lcof.cpp
#        leetcode/editor/cn/Sulution.cpp
#        )


add_executable(shu-zu-zhong-zhong-fu-de-shu-zi-lcof leetcode/editor/cn/shu-zu-zhong-zhong-fu-de-shu-zi-lcof.cpp)
add_executable(fei-bo-na-qi-shu-lie-lcof leetcode/editor/cn/fei-bo-na-qi-shu-lie-lcof.cpp)
add_executable(hello 220905/hello.cpp)
add_executable(er-wei-shu-zu-zhong-de-cha-zhao-lcof leetcode/editor/cn/er-wei-shu-zu-zhong-de-cha-zhao-lcof.cpp)