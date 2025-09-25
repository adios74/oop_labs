add_executable(lab1_oop lab1_main.cpp lab1_func.cpp)

add_executable(lab1_tests lab1_tests.cpp lab1_func.cpp)
target_link_libraries(lab1_tests GTest::gtest_main)