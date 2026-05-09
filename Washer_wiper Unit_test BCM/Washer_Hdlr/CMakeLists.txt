# project(washer_Hdlr C CXX)

# set(Sources
# ${CMAKE_CURRENT_SOURCE_DIR}/washer_Hdlr.c
#  ../washer_wiperCtrl/washer_wiperCtrl.c 
# )
# set(Headers
# ${CMAKE_CURRENT_SOURCE_DIR}/washer_Hdlr.h
# )

# add_library(washer_Hdlr washer_Hdlr.c
# washer_Hdlr.h)
# include_directories(washer_wiperCtrl)
# include_directories(Rte)
# target_sources(washer_Hdlr PRIVATE ${Sources})



cmake_minimum_required(VERSION 3.10)

project(washer_Hdlr C CXX)

set(Sources
    ${CMAKE_CURRENT_SOURCE_DIR}/Washer_Hdlr.c
)

add_library(washer_Hdlr STATIC ${Sources})

target_include_directories(washer_Hdlr PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/../Washer_wiperCtrl
    ${CMAKE_CURRENT_SOURCE_DIR}/../Wiper_Hdlr
    ${CMAKE_CURRENT_SOURCE_DIR}/../Rte
    ${CMAKE_CURRENT_SOURCE_DIR}/../Com
)