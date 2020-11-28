//  Created by Namespace Wizard on 28/11/2020.

#include <iostream>

// https://www.w3schools.com/cpp/cpp_conditions.asp


// printNumber is a function which takes an int, called 'number' as a parameter
bool divides(int smallNumber, int bigNumber)
{
  return (bigNumber % smallNumber) == 0;
}


int main(int argc, const char * argv[])
{
  // try changing these numbers...
  int smallNumber = 3;
  int bigNumber = 6;
  
  // The if statement checks whether the 'expression' in the brackets is true
  // and if it is, the code progresses inside the loop
  if (divides(smallNumber, bigNumber))
  {
    std::cout << smallNumber << " divides " << bigNumber << "\n";
  }
  else
  {
    std::cout << smallNumber << " does not divide " << bigNumber << "\n";
  }
  
  return 0;
}

