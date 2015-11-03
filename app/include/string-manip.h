#include <string>
#include <vector>

// Split string on a delimiter
std::vector<std::string> tokenizer(const std::string & p_pcstStr, char delim);

// Vector of strings to Vector of Ints
std::vector<int> strings_to_ints(std::vector<std::string> vec);

bool isInteger(const std::string & s);

// if d1 is earlier than d2
// returns a value less than 0
//
// 0 if both are the same date
//
// if d1 is later than d2.
// returns a value greater than 0
int date_cmp(const char *d1, const char *d2);
