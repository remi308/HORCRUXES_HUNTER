cmake_minimum_required(VERSION 3.20)
project(HORCRUXES_HUNTER)

set(CMAKE_CXX_STANDARD 17)


add_executable(HORCRUXES_HUNTER
        main.c
        bubble.c
        bubble.h
        game.c
        game.h
        menu.c
        menu.h
        save.c
        save.h
)