//  Created by Namespace Wizard on 28/11/2020.

// cmath is a 'library' that adds in mathematics functions
#include <cmath>
#include <iostream>

// https://en.cppreference.com/w/cpp/numeric/math/sqrt

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
  // Here we call a function 'sqrt' from the cmath library
  // 'std' is for standard as the function is within the namespace 'std'
  int squareRootOfNumber = std::sqrt(number);
  for (int divisor = 2; divisor <= squareRootOfNumber; divisor++)
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

