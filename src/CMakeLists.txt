add_library(rational "")

target_sources(
    rational
    PRIVATE
        rational.cpp
        gcd.cpp
        integer.cpp
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/../headers/rational.h
        ${CMAKE_CURRENT_LIST_DIR}/../headers/gcd.h
        ${CMAKE_CURRENT_LIST_DIR}/../headers/integer.h
    )

target_include_directories(
    rational
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
    )
