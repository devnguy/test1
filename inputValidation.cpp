#include <iostream>
#include <string>

#include "inputValidation.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;


int getInt() 
{
  string input;
  bool isInvalid = false;

  do {
    if (isInvalid) {
      cout << "Invalid input" << endl;
      isInvalid = false;
    }
    // 1. Prompt user for input
    cout << "Enter an integer: ";
    // 2. Get user input as string
    getline(cin, input);

    if (!checkDigits(input)) {
      isInvalid = true;
    }

  // 3. While input is invalid, let user know it was invalid and prompt again
  } while (isInvalid);
  
  // 4. Else valid input is found. Convert from string to int and return
  return stoi(input);
}


// FUNCTION 2: Checker
bool checkDigits(string input)
{
  if (input.empty() || input == "-") {
    return false;
  }
  // 1. Iterate through each char of the string
  for (int i = 0, size = input.size(); i < size; ++i) {
  // 2. If just one char is NOT a digit, return false
    if ((i != 0 || input[i] != '-') && !isdigit(input[i])) {
      return false;
    }
  }
  // 3. Else, the string is a valid int, return true
  return true;
}
