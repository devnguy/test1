#include <iostream>

#include "inputValidation.hpp"

int main() 
{
  int a = getInt();
  int b = getInt();
  int sum = a + b;

  std::cout << a << " + " << b << " = " << sum << std::endl;

  return 0;
}
