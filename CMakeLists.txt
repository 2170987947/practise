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
add_executable(fan-zhuan-lian-biao-lcof leetcode/editor/cn/fan-zhuan-lian-biao-lcof.cpp)
add_executable(he-bing-liang-ge-pai-xu-de-lian-biao-lcof leetcode/editor/cn/he-bing-liang-ge-pai-xu-de-lian-biao-lcof.cpp)
add_executable(dui-cheng-de-er-cha-shu-lcof leetcode/editor/cn/dui-cheng-de-er-cha-shu-lcof.cpp)
add_executable(da-yin-cong-1dao-zui-da-de-nwei-shu-lcof leetcode/editor/cn/da-yin-cong-1dao-zui-da-de-nwei-shu-lcof.cpp)
add_executable(er-cha-shu-de-jing-xiang-lcof leetcode/editor/cn/er-cha-shu-de-jing-xiang-lcof.cpp)
add_executable(shun-shi-zhen-da-yin-ju-zhen-lcof leetcode/editor/cn/shun-shi-zhen-da-yin-ju-zhen-lcof.cpp)
add_executable(bao-han-minhan-shu-de-zhan-lcof leetcode/editor/cn/bao-han-minhan-shu-de-zhan-lcof.cpp)
add_executable(cong-shang-dao-xia-da-yin-er-cha-shu-ii-lcof leetcode/editor/cn/cong-shang-dao-xia-da-yin-er-cha-shu-ii-lcof.cpp)