#include <gtest/gtest.h>
#include "lab1_func.h"
#include <string>

TEST(Lab1Test, Test1) {
    std::string stroka = "ab";
    char* s = (char*)malloc(stroka.size());
    EXPECT_EQ(change(stroka, s), 0);
    EXPECT_EQ(s[0], 'b');
    EXPECT_EQ(s[1], 'a');
    free(s);
}

TEST(Lab1Test, Test2) {
    std::string stroka = "df";
    char* s = (char*)malloc(stroka.size());
    EXPECT_EQ(change(stroka, s), 1);
    free(s);
}

TEST(Lab1Test, Test3) {
    std::string stroka = "a b";
    char* s = (char*)malloc(stroka.size());
    EXPECT_EQ(change(stroka, s), 1);
    free(s);
}

TEST(Lab1Test, Test4) {
    std::string stroka = "acb";
    char* s = (char*)malloc(stroka.size());
    EXPECT_EQ(change(stroka, s), 0);
    EXPECT_EQ(s[0], 'b');
    EXPECT_EQ(s[1], 'c');
    EXPECT_EQ(s[2], 'a');
    free(s);
}

TEST(Lab1Test, Test5) {
    std::string stroka = "";
    char* s = (char*)malloc(stroka.size());
    EXPECT_EQ(change(stroka, s), 1);
    free(s);
}

TEST(Lab1Test, Test6) {
    std::string stroka = "bbtcc";
    char* s = (char*)malloc(stroka.size());
    EXPECT_EQ(change(stroka, s), 1);
    free(s);
}

TEST(Lab1Test, Test7) {
    std::string stroka = "abcabc";
    char* s = (char*)malloc(stroka.size());
    EXPECT_EQ(change(stroka, s), 0);
    EXPECT_EQ(s[0], 'b');
    EXPECT_EQ(s[1], 'a');
    EXPECT_EQ(s[2], 'c');
    EXPECT_EQ(s[3], 'b');
    EXPECT_EQ(s[4], 'a');
    EXPECT_EQ(s[5], 'c');
    free(s);
}

TEST(Lab1Test, Test8) {
    std::string stroka = "aabacbaa";
    char* s = (char*)malloc(stroka.size());
    EXPECT_EQ(change(stroka, s), 0);
    EXPECT_EQ(s[0], 'b');
    EXPECT_EQ(s[1], 'b');
    EXPECT_EQ(s[2], 'a');
    EXPECT_EQ(s[3], 'b');
    EXPECT_EQ(s[4], 'c');
    EXPECT_EQ(s[5], 'a');
    EXPECT_EQ(s[6], 'b');
    EXPECT_EQ(s[7], 'b');
    free(s);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

// запуск: g++-14 lab1_tests.cpp lab1_func.cpp -lgtest -pthread -o tests
// ./tests