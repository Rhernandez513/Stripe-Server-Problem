#include "gtest/gtest.h"
#include "main.h"

TEST(FIRSTTEST, foobarfuncTEST) {
  EXPECT_EQ(4, foobarfunc(2));
}

TEST(FIRSTTEST, stringbarfuncTEST) {
  std::string a("Hello World!");
  EXPECT_EQ(a, stringbarfunc());
}

