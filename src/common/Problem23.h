#ifndef PROBLEM_23_H
#define PROBLEM_23_H

#include <iostream>
#include <vector>
#include <math.h>
#include <set>

using namespace std;

enum numberType { DEFICIENT, PERFECT, ABUNDANT };

class Problem23
{
  friend class Problem23Test;
  public:
    Problem23();
    ~Problem23();
    int answer();

  private:
    vector<int> getProperDivisors(int number);
    int getSum(vector<int> numbers);
    numberType getType(int number);
    set<int> getAbundantNumbers(int min, int max);
};

#endif
