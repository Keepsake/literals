ks_add_unit_test(test-literals
  SOURCES
    test_literals.cpp
  LIBS
    PRIVATE
      GTest::gtest_main
      ks-literals
)
