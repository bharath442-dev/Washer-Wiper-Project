# project(wiper_Hdlr C CXX)

# set(Sources
# ${CMAKE_CURRENT_SOURCE_DIR}/wiper_Hdlr.c
#  ../washer_wiperCtrl/washer_wiperCtrl.c 
# )
# set(Headers
# ${CMAKE_CURRENT_SOURCE_DIR}/wiper_Hdlr.h
# )

# add_library(wiper_Hdlr wiper_Hdlr.c
# Direction_Hdlr.h)
# include_directories(washer_wiperCtrl)
# include_directories(Rte)
# target_sources(wiper_Hdlr PRIVATE ${Sources})


cmake_minimum_required(VERSION 3.10)

project(wiper_Hdlr C CXX)

set(Sources
    ${CMAKE_CURRENT_SOURCE_DIR}/Wiper_Hdlr.c
)

set(Headers
    ${CMAKE_CURRENT_SOURCE_DIR}/Wiper_Hdlr.h
)

add_library(wiper_Hdlr STATIC ${Sources})

target_include_directories(wiper_Hdlr PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/../Washer_wiperCtrl
    ${CMAKE_CURRENT_SOURCE_DIR}/../Rte
)