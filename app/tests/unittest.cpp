#include "gtest/gtest.h"
#include "main.h"

TEST(ServerNumberTest, ThreeValues) {
  const std::size_t size = 3;
  int data [size] = { 5, 3, 1 };
  EXPECT_EQ(2, next_server_number(data, size));
}


TEST(ServerNumberTest, FourValues) {
  const std::size_t size = 4;
  int data [size] = { 5, 4, 1, 2 };
  EXPECT_EQ(3, next_server_number(data, size));
}

TEST(ServerNumberTest, NewServerAlloc) {
  const std::size_t size = 3;
  int data [size] = { 3, 2, 1 };
  EXPECT_EQ(4, next_server_number(data, size));
}

TEST(ServerNumberTest, TwoValues) {
  const std::size_t size = 2;
  int data [size] = { 2, 3 };
  EXPECT_EQ(1, next_server_number(data, size));
}

TEST(ServerNumberTest, BadInput) {
  const std::size_t size = 0;
  int data [size] = { };
  EXPECT_EQ(1, next_server_number(data, size));
}

TEST(ServerNumberTest, NullInput) {
  const std::size_t size = 0;
  EXPECT_EQ(-1, next_server_number(nullptr, size));
}

TEST(ServerNumberTest, ZeroInput) {
  EXPECT_EQ(-1, next_server_number(0));
}

/**************************************/

TEST(ArraySizeTest, ThreeVals) {
  const std::size_t size = 3;
  int data [size] = { 1, 2, 3 };
  EXPECT_EQ(size, arr_size(data));

}

