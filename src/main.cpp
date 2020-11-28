//  Created by Namespace Wizard on 28/11/2020.

#include <iostream>

// https://www.w3schools.com/cpp/cpp_for_loop.asp


int main(int argc, const char * argv[])
{
  int bigNumber = 10;
  
  // The for loop initializes 'int number = 1;'
  // Each loop it tests if 'number < bigNumber', if so it keeps on going
  // and each time it goes round it, it does 'number = number + 1'
  for (int number = 1; number <= bigNumber; number = number + 1)
  {
    std::cout << "printing " << number << "\n";
  }
  
  return 0;
}

