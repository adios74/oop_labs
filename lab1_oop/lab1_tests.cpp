#include <gtest/gtest.h>
#include "lab1_func.h"
#include <string>

TEST(Lab1Test, ProstoiTest) {
    std::string stroka = "ab";
    char* nov_stroka = (char*)malloc(stroka.size());
    EXPECT_EQ(change_bukv(stroka, nov_stroka), 0);
    EXPECT_EQ(nov_stroka[0], 'b');
    EXPECT_EQ(nov_stroka[1], 'a');
    free(nov_stroka);
}

TEST(Lab1Test, Privet1) {
    std::string stroka = "df";
    char* nov_stroka = (char*)malloc(stroka.size());
    EXPECT_EQ(change_bukv(stroka, nov_stroka), 1);
    free(nov_stroka);
}

TEST(Lab1Test, Privet2) {
    std::string stroka = "a b";
    char* nov_stroka = (char*)malloc(stroka.size());
    EXPECT_EQ(change_bukv(stroka, nov_stroka), 1);
    free(nov_stroka);
}

TEST(Lab1Test, DefaultTest1) {
    std::string stroka = "acb";
    char* nov_stroka = (char*)malloc(stroka.size());
    EXPECT_EQ(change_bukv(stroka, nov_stroka), 0);
    EXPECT_EQ(nov_stroka[0], 'b');
    EXPECT_EQ(nov_stroka[1], 'c');
    EXPECT_EQ(nov_stroka[2], 'a');
    free(nov_stroka);
}

TEST(Lab1Test, VoidTest) {
    std::string stroka = "";
    char* nov_stroka = (char*)malloc(stroka.size());
    EXPECT_EQ(change_bukv(stroka, nov_stroka), 1);
    free(nov_stroka);
}

TEST(Lab1Test, Bashmak) {
    std::string stroka = "bbtcc";
    char* nov_stroka = (char*)malloc(stroka.size());
    EXPECT_EQ(change_bukv(stroka, nov_stroka), 1);
    free(nov_stroka);
}

TEST(Lab1Test, LongTest) {
    std::string stroka = "abcabc";
    char* nov_stroka = (char*)malloc(stroka.size());
    EXPECT_EQ(change_bukv(stroka, nov_stroka), 0);
    EXPECT_EQ(nov_stroka[0], 'b');
    EXPECT_EQ(nov_stroka[1], 'a');
    EXPECT_EQ(nov_stroka[2], 'c');
    EXPECT_EQ(nov_stroka[3], 'b');
    EXPECT_EQ(nov_stroka[4], 'a');
    EXPECT_EQ(nov_stroka[5], 'c');
    free(nov_stroka);
}

TEST(Lab1Test, DefaultTest2) {
    std::string stroka = "aabacbaa";
    char* nov_stroka = (char*)malloc(stroka.size());
    EXPECT_EQ(change_bukv(stroka, nov_stroka), 0);
    EXPECT_EQ(nov_stroka[0], 'b');
    EXPECT_EQ(nov_stroka[1], 'b');
    EXPECT_EQ(nov_stroka[2], 'a');
    EXPECT_EQ(nov_stroka[3], 'b');
    EXPECT_EQ(nov_stroka[4], 'c');
    EXPECT_EQ(nov_stroka[5], 'a');
    EXPECT_EQ(nov_stroka[6], 'b');
    EXPECT_EQ(nov_stroka[7], 'b');
    free(nov_stroka);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
