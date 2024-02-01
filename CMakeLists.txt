cmake_minimum_required(VERSION 3.26)
project(clox C)

set(CMAKE_C_STANDARD 17)

set(SOURCES src/chunk.c src/memory.c
        src/debug.c
        src/value.c)
set(
        INCLUDES
        include/clox/common.h include/clox/chunk.h include/clox/memory.h
        include/clox/debug.h
        include/clox/value.h
)

add_executable(clox src/main.c ${SOURCES} ${INCLUDES})
target_include_directories(
        clox PRIVATE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/clox>
        $<INSTALL_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)
