//  Created by Namespace Wizard on 28/11/2020.

// To include assert we want the header cassert
#include <cassert>
#include <iostream>

// https://en.cppreference.com/w/cpp/error/assert
// https://en.cppreference.com/w/cpp/io/cin


bool divides(int smallNumber, int bigNumber)
{
  return (bigNumber % smallNumber) == 0;
}

// Euclids algorithm: for two numbers x,y where y > x:
// write y = a*x + remainder
// The greatest common divisor divides x, and divides y, so it must divide b
// If b = 0, then the divisor is x, otherwise it is the greatest divisor of
// b and x

int findGreatestCommonDivisor(int number, int secondNumber)
{
  if (number > secondNumber)
  {
    return findGreatestCommonDivisor(secondNumber, number);
  }
  
  // we know that secondNumber >= number.
  // assert will crash or break is it is ever false. Try deleting the part above and
  // see what happens if the first number is bigger...
  assert(number <= secondNumber);

  bool numberDividesSecondNumber = divides(number, secondNumber);
  int divisor = secondNumber / number;
  int remainder = secondNumber % number;
  std::cout <<  secondNumber << " = " << divisor << " * " << number << " + "
             << remainder << "\n";

  // This is a 'ternary' and has the form
  // y = expression ? a : b
  // if expression is true, then y is a, otherwise it is b.
  return numberDividesSecondNumber ? number : findGreatestCommonDivisor(remainder, number);
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

