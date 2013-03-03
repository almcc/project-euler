#ifndef PROBLEM_25_H
#define PROBLEM_25_H

#include <iostream>

#include "BigNumber.h"

using namespace std;

class Problem25
{
  friend class Problem25Test;
  public:
    Problem25();
    ~Problem25();
    int answer();
    int nthFibonacciWithSize(unsigned size);
};

#endif
