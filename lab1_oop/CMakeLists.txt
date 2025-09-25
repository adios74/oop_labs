add_executable(lab1_oop lab1_main.cpp src/lab1_func.cpp)

add_executable(lab1_tests test/lab1_tests.cpp src/lab1_func.cpp)
target_link_libraries(lab1_tests GTest::gtest_main)