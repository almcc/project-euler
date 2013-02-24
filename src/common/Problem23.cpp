#include "Problem23.h"


Problem23::Problem23()
{

}

Problem23::~Problem23()
{

}

int Problem23::answer()
{
  int sum = 0;
  int max = 28123;
  // int max = 200;
  set<int> abundantNumbers = this->getAbundantNumbers(1, max);

  for(int i = 1; i <= max; ++i)
  {
    int j = 1;
    bool found = false;
    while(j <= i/2 && !found)
    {
      if(abundantNumbers.count(j) != 0 && abundantNumbers.count(i-j) != 0)
      {
        found = true;
      }
      ++j;
    }

    if(!found)
    {
      sum += i;
    }
  }
  return sum;
}

vector<int> Problem23::getProperDivisors(int number)
{
  vector<int> divisors;

  for(int i = 1; i <= number/2; ++i)
  {
    if(number % i == 0)
    {
      divisors.push_back(i);
    }
  }

  return divisors;
}

int Problem23::getSum(vector<int> numbers)
{
  int sum = 0;
  for(unsigned i = 0; i < numbers.size(); ++i)
  {
    sum += numbers.at(i);
  }
  return sum;
}

numberType Problem23::getType(int number)
{
  numberType type;
  int sumOfProperDivisors = this->getSum(this->getProperDivisors(number));
  if( sumOfProperDivisors > number )
  {
    type = ABUNDANT;
  }
  else if ( sumOfProperDivisors < number)
  {
    type = DEFICIENT;
  }
  else
  {
    type = PERFECT;
  }
  return type;
}

set<int> Problem23::getAbundantNumbers(int min, int max)
{
  set<int> abundantNumbers;

  for( int i = min; i <= max; ++i)
  {

    if(this->getType(i) == ABUNDANT)
    {
      abundantNumbers.insert(i);
    }
  }

  return abundantNumbers;
}
