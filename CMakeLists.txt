cmake_minimum_required(VERSION 3.20)
project(HORCRUXES_HUNTER)

set(CMAKE_CXX_STANDARD 17)

add_executable(HORCRUXES_HUNTER main.c
        player.c
        input.c
        player.h)

target_link_libraries(${PROJECT_NAME} -lmingw32  -lalleg44)