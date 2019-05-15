add_library(rational "")
add_library(integer "")

target_sources(
    rational
    PRIVATE
        rational.cpp
        gcd.cpp
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/../headers/rational.h
        ${CMAKE_CURRENT_LIST_DIR}/../headers/gcd.h

    integer
    PRIVATE
        integer.cpp
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/../headers/integer.h
    )

target_include_directories(
    rational
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}

    integer
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
    )