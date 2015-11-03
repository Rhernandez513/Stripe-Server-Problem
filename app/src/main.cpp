#include "main.h"
#include <algorithm>

int next_server_number(int input[], size_t size) {

  // If no valid input
  if (!(input)) { return 1; }
  if (!(size)) { return 1; }

  int result, min, max, flag;

  flag = 0;
  min = max = result = 1;

  // This method can only be used for arrays not passed as parameters
  // as the function siganture decays to 
  // int next_server_number(int * input, size_t size);
  //
  // int len = sizeof(input) / sizeof(int);


  std::vector<int> checkedValues;

  for (unsigned i = 0; i < size; ++i) {

    // Running minimum and maximum values
    max = std::max(input[i], max);
    min = std::min(input[i], min);

    // Potential Server to provision
    flag = min + 1;

    checkedValues.push_back(input[i]);

    // If the server to provision is already in the array, invalid flag chosen
    for (unsigned j = 0; j < size; ++j ) {
      if (flag == checkedValues[j]) { flag = -1; }
    } 
  } // end for

  // if the chosen flag is "valid" assign to result, else assign to current
  // max plus 1 in case a new server needs to be provisioned
  if (flag != (-1)) { result = flag; }
  else { result = max + 1; }

  return result;
}
