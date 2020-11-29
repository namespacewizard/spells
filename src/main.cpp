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


// Returns the first of two primes which will add up to the parameter 'evenNumber'
int findGoldbachPrime(int evenNumber)
{
  std::vector<int> primes = findPrimes(evenNumber);
  for (size_t index = 0; index < primes.size(); index++)
  {
    int firstPrime = primes[index];
    int possiblePrime = evenNumber - firstPrime;
    
    // We haver already stored the prime numbers less than 'evenNumber'.
    // Use a for loop to check the stored primes instead
    for (size_t secondIndex = index; secondIndex < primes.size(); secondIndex++)
    {
      if (primes[secondIndex] == possiblePrime)
      {
        return firstPrime;
      }
    }
  }
  
  // this will never happen
  return -1;
}


int main(int argc, const char * argv[])
{
  int evenNumber;
  std::cout << "Click here and type in an even number, then press return.\n";
  std::cin >> evenNumber;
  
  bool isBiggerThanOne = evenNumber > 1;
  bool isEven = evenNumber % 2 == 0;
  // The '&&' sign stands for 'and'
  // if the number is bigger than one and is even, we say "67you typed in..."
  if (isBiggerThanOne && isEven)
  {
    // Every even number is the sum of two primes (Goldbach's conjecture).
    // Let's use a function to find them
    std::cout << "You typed in " << evenNumber << ". \n";
    int smallerPrime = findGoldbachPrime(evenNumber);
    int largerPrime = evenNumber - smallerPrime;
    
    std::cout << "This is the sum of " << smallerPrime << " plus " << largerPrime << ".\n";
  }
  else
  {
    std::cout << "That is not an even number\n";
  }
  
  return 0;
}

