//  Created by Namespace Wizard on 28/11/2020.

#include <iostream>

// https://www.w3schools.com/cpp/cpp_for_loop.asp

// printNumber is a function which takes an int, called 'number' as a parameter.
// The return type is a boolean, or bool, which is either true or false.
bool divides(int smallNumber, int bigNumber)
{
  return (bigNumber % smallNumber) == 0;
}


// The function called 'isPrime' will return a boolean, or bool,
// which has the value true or false
bool isPrime(int number)
{
  for (int divisor = 2; divisor < number; divisor++)
  {
    if (divides(divisor, number))
    {
      // a smaller number divides 'number' so it is not prime
      return false;
    }
  }

  // we couldn't find a smaller number to divide number
  return true;
}


int main(int argc, const char * argv[])
{
  int largestPrimeToFind = 20;
  
  // The for loop initializes 'int number = 2;'
  // During each loop, the if statement checks if the 'number' is prime
  for (int number = 2; number <= largestPrimeToFind; number++)
  {
    if (isPrime(number))
    {
      std::cout << number << " is prime\n";
    }
    else
    {
      std::cout << number << " is not prime\n";
    }
  }
  
  return 0;
}

