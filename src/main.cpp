//  Created by Namespace Wizard on 28/11/2020.

// cmath is a 'library' that adds in mathematics functions
#include <cmath>
#include <iostream>
// vector is part of the standard library and stores a sequence of elements
#include <vector>

// https://en.cppreference.com/w/cpp/numeric/math/sqrt
// https://en.cppreference.com/w/cpp/container/vector

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


// The function 'findPrimes' returns a std::vector of primes
// \param largestPrimeToFind is the largest prime that will
// be held in the vector
std::vector<int> findPrimes(int largestPrimeToFind)
{
  // The vector is called 'primes' and holds types 'int'
  // here it is empty. Although we don't know how many primes
  // the vector needs to hold, it can expand. This is called
  // dynamic memory as it can change size.
  std::vector<int> primes;

  for (int number = 2; number <= largestPrimeToFind; number++)
  {
    if (isPrime(number))
    {
      // push_back is a function that adds an element to the 'vector'
      primes.push_back(number);
    }
  }
  
  return primes;
}


int main(int argc, const char * argv[])
{
  int largestPrimeToFind = 20;
  std::vector<int> primes = findPrimes(largestPrimeToFind);
  
  // Type 'size_t' is a positive 'int'
  for (size_t index = 0; index < primes.size(); index++)
  {
    // the vector has a series of elements. The elements are accessed
    // by the square brackets. primes[0] is the first element, primes[1]
    // is the second element, etc.
    std::cout << primes[index] << " is prime\n";
  }
  
  return 0;
}

