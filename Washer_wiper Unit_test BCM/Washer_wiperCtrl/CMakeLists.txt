# project(washer_wiperCtrl C CXX)

# set(Sources
# ${CMAKE_CURRENT_SOURCE_DIR}/washer_wiperCtrl.c
# ../washer_Hdlr/washer_Hdlr.c
# ../wiper_Hdlr/wiper_Hdlr.c
# )
# set(Headers
# ${CMAKE_CURRENT_SOURCE_DIR}
# /washer_Hdlr.h
# /wiper_Hdlr.h  
# )
# add_library(washer_wiperCtrl)
# include_directories(washer_Hdlr)
# include_directories(wiper_Hdlr)
# include_directories(Rte)
# target_sources(Direction_IndCtrl PRIVATE ${Sources})



cmake_minimum_required(VERSION 3.10)

project(washer_wiperCtrl C CXX)

set(Sources
    ${CMAKE_CURRENT_SOURCE_DIR}/Washer_wiperCtrl.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../Washer_Hdlr/Washer_Hdlr.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../Wiper_Hdlr/Wiper_Hdlr.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../Com/Com.c
)


set(Headers
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/../Washer_Hdlr
    ${CMAKE_CURRENT_SOURCE_DIR}/../Wiper_Hdlr
    ${CMAKE_CURRENT_SOURCE_DIR}/../Rte
    ${CMAKE_CURRENT_SOURCE_DIR}/../Com
)

add_library(washer_wiperCtrl STATIC ${Sources})

target_include_directories(washer_wiperCtrl PUBLIC
    ${Headers}
)