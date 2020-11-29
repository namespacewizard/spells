//  Created by Namespace Wizard on 28/11/2020.

#include <iostream>

// https://en.cppreference.com/w/cpp/algorithm/find
// https://en.cppreference.com/w/cpp/io/cin


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
    if (divides(i, number) && divides(i, secondNumber))
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

