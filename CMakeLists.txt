CMAKE_MINIMUM_REQUIRED(VERSION 3.10)
PROJECT(Beat-Up-Boys)

FIND_PACKAGE(SFML 2.6 REQUIRED graphics window system)

INCLUDE_DIRECTORIES(${SFML_INCLUDE_DIR})

ADD_EXECUTABLE(Beat-Up-Boys main.cpp)

TARGET_LINK_LIBRARIES(Beat-Up-Boys sfml-graphics sfml-window sfml-system)
