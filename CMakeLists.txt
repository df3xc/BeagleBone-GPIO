cmake_minimum_required(VERSION 2.8)

project(gpiommap)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)

set_source_files_properties(src/gpio.c PROPERTIES LANGUAGE CXX )

add_library(gpiommap src/gpio.c)

set_target_properties(gpiommap PROPERTIES LINKER_LANGUAGE CXX)

install(TARGETS gpiommap DESTINATION bin/)


