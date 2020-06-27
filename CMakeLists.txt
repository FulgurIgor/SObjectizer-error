cmake_minimum_required(VERSION 3.12)

project(Server)

enable_language(CXX)
set(CMAKE_CXX_STANDARD 17)

set (SOURCES
src/main.cpp
)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

find_package(sobjectizer CONFIG REQUIRED)

add_executable       (${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} sobjectizer::StaticLib)