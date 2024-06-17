cmake_minimum_required(VERSION 3.22)

project(test-actions)

add_subdirectory(lib)

add_executable(
    main
    main.cpp
    test1.cpp
)

target_link_libraries(main PUBLIC gtest)