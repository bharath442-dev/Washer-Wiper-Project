# cmake_minimum_required(VERSION 3.8)
 
# set(This Washer_wiperTest)
 
# # Define source files for the executable
# set(Sources
#    Washer_wiperTests.cpp
# )
 
# # Include directories
# include_directories(Washer_wiperCtrl)
# include_directories(Washer_Hdlr)
# include_directories(Wiper_Hdlr)
# add_executable(Washer_wiperTest ${Sources})
 
# #add_executable(${This} ${Sources})
# target_link_libraries(Washer_wiperTest PRIVATE
#     Washer_Hdlr
#     Wiper_Hdlr
#     Washer_wiperCtrl
#     gtest_main
#     gmock_main
#     gtest
#     gmock  
# )
# add_test(
#     NAME Washer_wiperTest
#     COMMAND Washer_wiperTest
# )


cmake_minimum_required(VERSION 3.10)

set(This Washer_wiperTest)

# Test source files
set(Sources
    Washer_wiperTests.cpp
)

# Create executable
add_executable(${This} ${Sources})

# Include directories
target_include_directories(${This} PRIVATE
    ${CMAKE_SOURCE_DIR}/Washer_wiperCtrl
    ${CMAKE_SOURCE_DIR}/Washer_Hdlr
    ${CMAKE_SOURCE_DIR}/Wiper_Hdlr
    ${CMAKE_SOURCE_DIR}/Com
    ${CMAKE_SOURCE_DIR}/Rte
)

# Link libraries
target_link_libraries(${This} PRIVATE
    washer_Hdlr
    wiper_Hdlr
    washer_wiperCtrl
    gtest
    gmock
    gtest_main
    gmock_main
)

# Register test
add_test(
    NAME ${This}
    COMMAND ${This}
)