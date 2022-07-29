cmake_minimum_required(VERSION 3.19)
project(vectorkit_app)

set(CMAKE_CXX_STANDARD 14)

set(SOURCES
        main.cpp
        src/VectorND.cpp
        src/Vector1D.cpp src/Vector2D.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directories(vectorkit_app
        PRIVATE ${PROJECT_SOURCE_DIR}/include)