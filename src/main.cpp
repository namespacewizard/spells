//  Created by Namespace Wizard on 28/11/2020.

#include <iostream>


// printNumber is a function which takes an int, called 'number' as a parameter
void printNumber(int number)
{
  std::cout << "The number is " << number << "\n";
}


int main(int argc, const char * argv[])
{
  // 'one' is the name of a variable and it is declared here
  // The type of the variable is an `int` and it is initialised with value 1
  int one = 1;
  
  // Here we call printNumber by passing our variable to the function
  printNumber(one);
  
  return 0;
}

