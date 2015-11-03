#include "gtest/gtest.h"
#include "main.h"

TEST(ServerNumberTest, ThreeValues) {
  size_t size = 3;
  int data [size] = { 5, 3, 1 };
  EXPECT_EQ(2, next_server_number(data, size));
}


TEST(ServerNumberTest, FourValues) {
  size_t size = 4;
  int data [size] = { 5, 4, 1, 2 };
  EXPECT_EQ(3, next_server_number(data, size));
}

TEST(ServerNumberTest, NewServerAlloc) {
  size_t size = 3;
  int data [size] = { 3, 2, 1 };
  EXPECT_EQ(4, next_server_number(data, size));
}

TEST(ServerNumberTest, TwoValues) {
  size_t size = 2;
  int data [size] = { 2, 3 };
  EXPECT_EQ(1, next_server_number(data, size));
}

TEST(ServerNumberTest, BadInput) {
  size_t size = 0;
  int data [size] = { };
  EXPECT_EQ(1, next_server_number(data, size));
}
