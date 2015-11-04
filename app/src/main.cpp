// By Robert David Hernandez
// Github: Rhernandez513
// g++ -g -O2 -static -std=c++14 main.cpp -o main

#include "main.h"
#include <algorithm>
/* #include <iostream> */


int next_server_number(int input[], const std::size_t input_size) {

  if (input == nullptr) { return -1; }
  if (input_size == 0)  { return  1; }
 
  std::sort(input, input + input_size);

  int result = 1;

  for (size_t i = 0; i < input_size; ++i, ++result) {

    /* std::cout << "result : " << result << std::endl; */
    /* std::cout << "input[i]: " << input[i] << std::endl; */

    if (result != input[i]) { break; }
    if (i == input_size - 1) { result = input[i] + 1; break; }
  }
  return result;
}

int next_server_number(int input[]) {
  return next_server_number (input, 0);
}


// If Desired to run without GoogleTest, uncomment the main function below,
// and compile like so:
// g++ -I../include -g -O2 -static -std=c++14 main.cpp -o main
//
// (I used g++ version 5.2.1-22ubuntu2)
// Be sure to comment out "#include "gtest/gtest.h" " in "main.h"
//
// Expected values are on the right
//
//int main() {
//  int a [3] = { 1, 2, 3 };
//  int b [0] = {  };
//  int c [4] = { 1, 2, 4, 5 };
//  int d [4] = { 5, 4, 3, 2 };
//  std::cout << new_server_number(a, arr_size(a)) << std::endl; // 4
////  std::cout << new_server_number(nullptr) << std::endl;        // -1
////  std::cout << new_server_number(0) << std::endl;              // -1
//  std::cout << new_server_number(b) << std::endl;              // 1
//  std::cout << new_server_number(c, arr_size(c)) << std::endl; // 3
//  std::cout << new_server_number(d, arr_size(d)) << std::endl; // 1
//  return 0;
//

