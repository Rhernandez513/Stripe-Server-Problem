#include "io.h"
#include <iostream>

// GET INPUTS from STDIN
std::vector<std::string> Get_STDIN_Strings(void) {
  std::string line;
  std::vector<std::string> inputs;
  while(std::getline(std::cin, line)) { inputs.push_back(line); }
  return inputs;
}

