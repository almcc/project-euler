#ifndef BIG_INT_H
#define BIG_INT_H

#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <algorithm>


using namespace std;

class BigInt
{
  friend class BigIntTest;
  public:
    BigInt(string integer);
    BigInt(vector<int> integer);
    ~BigInt();
    string getInt();

    BigInt operator+ (const BigInt &rhs);

  private:
    vector<int> bigInteger;
};

#endif
