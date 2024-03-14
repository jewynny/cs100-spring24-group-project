CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
project(cs100-final)


ADD_EXECUTABLE(playlist
    src/main.cpp
    src/Playlist.cpp
    src/User.cpp
    src/Recommendations.cpp
)

add_subdirectory(googletest)
enable_testing()

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

ADD_EXECUTABLE(runalltests
    test/test.cpp
    src/Playlist.cpp
    src/User.cpp
    src/Recommendations.cpp
)

target_link_libraries(runalltests gtest gtest_main)
add_test(NAME GoogleTest COMMAND runalltests)