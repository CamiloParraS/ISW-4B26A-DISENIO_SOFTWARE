cmake_minimum_required(VERSION 3.10)

project(CircleProject VERSION 1.0 LANGUAGES CXX)

file(GLOB SOURCES CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp"
)

if(NOT SOURCES)
    message(FATAL_ERROR "No .cpp files were found in src/")
endif()

add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directories(${PROJECT_NAME} PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/include"
)