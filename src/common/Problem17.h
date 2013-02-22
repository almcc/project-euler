#ifndef PROBLEM_17_H
#define PROBLEM_17_H

#include <iostream>

using namespace std;

class Problem17
{
  friend class Problem17Test;

  public:
    Problem17();
    ~Problem17();
    int answer();

  private:

    string convert(int number);
    int letters(int number);
    int letters(int firstNumber, int lastNumber);

};

#endif
