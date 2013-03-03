#include "Problem25.h"

Problem25::Problem25()
{

}

Problem25::~Problem25()
{

}

int Problem25::answer()
{
  return this->nthFibonacciWithSize(1000);
}

int Problem25::nthFibonacciWithSize(unsigned n)
{
  int returnValue = 0;
  if(n > 1)
  {
    BigNumber a("1");
    BigNumber b("1");

    bool found = false;
    int i = 3;
    while(!found)
    {
      BigNumber next = a + b;
      a = b;
      b = next;

      if(b.getInt().size() >= n)
      {
        found = true;
        returnValue = i;
      }

      ++i;
    }
  }
  else
  {
    returnValue = 1;
  }

  return returnValue;
}
