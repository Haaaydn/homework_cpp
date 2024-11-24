#include <gtest/gtest.h>

#include "mediana.hpp"

TEST(Test, Simple1) { ASSERT_EQ(mediana(1, 2, 3), 2); }
TEST(Test, Simple2) { ASSERT_EQ(mediana(1, 1, 1), 1); }
TEST(Test, Simple3) { ASSERT_EQ(mediana(-10, 0, 10), 0); }
TEST(Test, Simple4) { ASSERT_EQ(mediana(-3, -2, -1), -2); }
TEST(Test, Simple5) { ASSERT_EQ(mediana(2, 2, 3), 2); }
