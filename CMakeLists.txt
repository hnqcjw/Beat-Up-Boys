cmake_minimum_required(VERSION 3.10)
project(MySFMLProject)

find_package(SFML 2.6 REQUIRED graphics window system)

include_directories(${SFML_INCLUDE_DIR})

add_executable(MySFMLApp main.cpp render.cpp)

target_link_libraries(Beat-Up-Boys sfml-graphics sfml-window sfml-system)
