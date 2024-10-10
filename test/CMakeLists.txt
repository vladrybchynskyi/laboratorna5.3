cmake_minimum_required(VERSION 3.30.4)

set(This labor5_3test)

set(Sources
   labor5_3test.cpp
)

add_executable(${This} ${Sources})
target_link_libraries(${This} PUBLIC
    gtest_main
    laborw5_3
)

add_test(
    NAME ${This}
    COMMAND ${This}
)
