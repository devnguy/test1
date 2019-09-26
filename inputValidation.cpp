#include <iostream>
#include <string>

#include "inputValidation.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;


// FUNCTION 1: Get int
  // 1. Prompt user for input
  // 2. Get user input as string
  // 3. While input is invalid, let user know it was invalid and prompt again
  // 4. Else valid input is found. Convert from string to int and return

// FUNCTION 2: Checker
  // 1. Iterate through each char of the string
  // 2. If just one char is NOT a digit, return false
  // 3. Else, the string is a valid int, return true