//  Created by Namespace Wizard on 28/11/2020.

// cmath is a 'library' that adds in mathematics functions
#include <cmath>
#include <iostream>
// vector is part of the standard library and stores a sequence of elements
#include <vector>

// https://en.cppreference.com/w/cpp/io/cin
// https://en.cppreference.com/w/cpp/numeric/math/sqrt
// https://en.cppreference.com/w/cpp/container/vector


// printNumber is a function which takes an int, called 'number' as a parameter.
// The return type is a boolean, or bool, which is either true or false.
bool divides(int smallNumber, int bigNumber)
{
  bool dividesNumber = (bigNumber % smallNumber) == 0;
  if (dividesNumber)
  {
    std::cout << smallNumber << " divides " << bigNumber << ". ";
  }
  else
  {
    std::cout << smallNumber << " does not divide " << bigNumber << ". ";
  }
  return (bigNumber % smallNumber) == 0;
}


int findGreatestCommonDivisor(int number, int secondNumber)
{
  if (number > secondNumber)
  {
    return findGreatestCommonDivisor(secondNumber, number);
  }
  
  // we know that secondNumber >= number
  int greatestCommonDivisor = 1;
  
  // Test all the numbers between 1 and number
  for (int i = 1; i <= number; i++)
  {
    bool dividesFirstNumber = divides(i, number);
    bool dividesSecondNumber = divides(i, secondNumber);
    if (dividesFirstNumber && dividesSecondNumber)
    {
      greatestCommonDivisor = i;
    }
    std::cout << "\n";
  }
  
  return greatestCommonDivisor;
}


int main(int argc, const char * argv[])
{
  int number;
  std::cout << "Click here and type in a number, then press return.\n";
  std::cin >> number;

  // The '&&' sign stands for 'and'
  // if the number is bigger than one and is even, we say "67you typed in..."
  if (number >= 1)
  {
    int secondNumber;
    std::cout << "Now type in a second number, then press return.\n";
    std::cin >> secondNumber;
    if (secondNumber >= 1)
    {
      int greatestCommonDivisor = findGreatestCommonDivisor(number, secondNumber);
      std::cout << "The greatest common divisor of " << number << " and "
                 << secondNumber << " is " << greatestCommonDivisor << "\n";
    }
    else
    {
      std::cout << "That is not a number\n";
    }
  }
  else
  {
    std::cout << "That is not a number\n";
  }
  
  return 0;
}

