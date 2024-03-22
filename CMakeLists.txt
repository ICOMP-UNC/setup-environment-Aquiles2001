cmake_minimum_required(VERSION 3.25 FATAL_ERROR)

project(
    "CMakeProjectTemplate"
    VERSION 0.1.0
    DESCRIPTION "CMake C Project Template for OP II" 
    LANGUAGES C
)

set(CMAKE_C_STANDARD 17)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

file(GLOB_RECURSE SOURCES "src/*.c")

add_executable(${PROJECT_NAME} ${SOURCES})

add_subdirectory(lib/libdyn)
add_subdirectory(lib/libsta)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/lib/libdyn/include)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/lib/libsta/include)

target_link_libraries(${PROJECT_NAME} StaticCLib DynamicCLib)