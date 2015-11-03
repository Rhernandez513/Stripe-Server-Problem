#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <cstring>
#include "string-manip.h"

// Split string on a delimiter
std::vector<std::string> tokenizer(const std::string & p_pcstStr, char delim) {
  std::vector<std::string> tokens;
  std::istringstream mySstream(p_pcstStr);
  std::string temp;
  while(std::getline(mySstream, temp, delim)) {
    tokens.push_back(temp);
  }
  return tokens;
} 

// Vector of strings to Vector of Ints
std::vector<int> strings_to_ints(std::vector<std::string> vec) {
  std::vector<int> tmp;
  for (int i = 0, len = vec.size(); i < len ; ++i) {
    tmp.push_back(std::stoi(vec[i]));
  }
  return tmp;
}

bool isInteger(const std::string & s) {

  if(s.empty() || ((!isdigit(s[0])) && (s[0] != '-') && (s[0] != '+'))) return false ;

  char * p ;
  strtol(s.c_str(), &p, 10) ;

  return (*p == 0) ;

}

// if d1 is earlier than d2
// returns a value less than 0
//
// 0 if both are the same date
//
// if d1 is later than d2.
// returns a value greater than 0
int date_cmp(const char *d1, const char *d2)
{
  int rc;
  // compare years
  rc = strncmp(d1 + 6, d2 + 6, 4);
  if (rc != 0)
    return rc;

  // compare months
  rc = strncmp(d1 + 3, d2 + 3, 2);
  if (rc != 0)
    return rc;

  // compare days
  return strncmp(d1, d2, 2);
}
