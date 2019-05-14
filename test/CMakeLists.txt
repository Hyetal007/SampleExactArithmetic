add_executable(
    unit_tests
    rational_add.cpp
    rational_subtract.cpp
    )

target_link_libraries(
    unit_tests
    gtest_main
    rational
    )

add_test(
  NAME
    add_test
  COMMAND
    ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR}/unit_tests
  )

add_test(
  NAME
    subtract_test
  COMMAND
    ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR}/unit_tests
  )
