cmake_minimum_required(VERSION 3.1)

project(PAMSI2)

include_directories(${CMAKE_SOURCE_DIR}/code)

add_executable(${PROJECT_NAME} ${CMAKE_SOURCE_DIR}/code/main.cpp)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_SOURCE_DIR}/data $<TARGET_FILE_DIR:${PROJECT_NAME}>)