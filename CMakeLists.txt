cmake_minimum_required(VERSION 3.26)
project(shmup_game C)

set(CMAKE_C_STANDARD 11)

include(FindPkgConfig)

pkg_search_module(SDL2 REQUIRED sdl2)
pkg_search_module(SDL2_MIXER REQUIRED SDL2_mixer)
pkg_search_module(SDL2_IMAGE REQUIRED SDL2_image)
pkg_search_module(SDL2_TTF REQUIRED SDL2_ttf)


include_directories(
     ${SDL2_INCLUDE_DIRS}
     ${SDL2_MIXER_INCLUDE_DIRS}
     ${SDL2_IMAGE_INCLUDE_DIRS}
     ${SDL2_TTF_INCLUDE_DIRS}
)

add_executable(shmup_game main.c
        common.h
        defs.h
        draw.c
        draw.h
        init.c
        init.h
        main.h
        structs.h
        input.c
        input.h)

target_link_libraries(
        ${CMAKE_PROJECT_NAME}
        ${SDL2_LIBRARIES}
        ${SDL2_MIXER_LIBRARIES}
        ${SDL2_IMAGE_LIBRARIES}
        ${SDL2_TTF_LIBRARIES}
        m
)
