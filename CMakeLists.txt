cmake_minimum_required(VERSION 3.20)
project(HORCRUXES_HUNTER)

set(CMAKE_CXX_STANDARD 17)


add_executable(HORCRUXES_HUNTER
        main.c
        input.c
        graphique.c
        jeu.c
        menu.c
        entites.c
        save.c
        player.c
        tir.c
)

target_link_libraries(${PROJECT_NAME} -lmingw32 -lalleg44)