#include "gtest/gtest.h"

int next_server_number(int input[], std::size_t size);
int next_server_number(int input[]);

// Determines the size of an array similarly to 
// int size = sizeof(input) / sizeof(int);
// which fails for arrays passed as parameters
// As the function siganture decays to 
//
// int next_server_number(int * input, size_t size);
//
template <typename T, std::size_t N>
inline std::size_t arr_size(T const (&)[N]) { return N; }
