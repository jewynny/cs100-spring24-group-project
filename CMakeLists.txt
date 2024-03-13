CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
project(cs100-final)


ADD_EXECUTABLE(playlist
    src/main.cpp
    src/Playlist.cpp
    src/User.cpp
    src/Recommendations.cpp
)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE (tests
    test/test.cpp
    src/main.cpp
    src/Playlist.cpp
    src/User.cpp
    src/Recommendations.cpp
)