cmake_minimum_required(VERSION 3.8)



set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
SET(CMAKE_POSITION_INDEPENDENT_CODE ON)

add_subdirectory(googletest)
add_subdirectory(Washer_wiperCtrl)
add_subdirectory(Washer_Hdlr)
add_subdirectory(Wiper_Hdlr)
add_subdirectory(test)


enable_testing()
include_directories(Com)
include_directories(Core)
include_directories(Variant)
include_directories(Rte)
include_directories(Washer_wiperCtrl)
include_directories(Washer_Hdlr)
include_directories(Wiper_Hdlr)
