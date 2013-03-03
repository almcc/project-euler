#ifndef BIG_NUMBER_H
#define BIG_NUMBER_H

#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <algorithm>


using namespace std;

class BigNumber
{
friend class BigNumberTest;
  public:
    BigNumber(string integer);
    BigNumber(vector<int> integer);
    ~BigNumber();
    string getInt();

    BigNumber operator+ (const BigNumber &rhs);

  private:
    vector<int> bigInteger;
};

#endif
