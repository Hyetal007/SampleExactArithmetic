add_library(rational "")

target_sources(
    rational
    PRIVATE
        rational.cpp
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/headers/rational.h
    )

target_include_directories(
    rational
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
    )
