#include "BigInt.h"


BigInt::BigInt(string integer)
{
  for(int i = integer.size() - 1; i >=0 ; --i)
  {
    string part = integer.substr(i,1);
    this->bigInteger.push_back(atoi(part.c_str()));
  }
}

BigInt::BigInt(vector<int> integer) : bigInteger(integer)
{
}

BigInt::~BigInt()
{

}

string BigInt::getInt()
{
  string integer;
  bool firstNonZeroFound = false;
  for (int i = this->bigInteger.size() - 1; i >= 0; --i)
  {
    int part = this->bigInteger.at(i);

    if(part == 0 && !firstNonZeroFound)
    {
    }
    else if (part != 0 && !firstNonZeroFound)
    {
      firstNonZeroFound = true;
      stringstream out;
      out << part;
      integer += out.str();
    }
    else
    {
      stringstream out;
      out << part;
      integer += out.str();
    }


  }
  return integer;
}

BigInt BigInt::operator+ (const BigInt &rhs)
{
  vector<int> lhsParts = this->bigInteger;
  vector<int> rhsParts = rhs.bigInteger;
  vector<int> sumParts;

  unsigned size = std::max(lhsParts.size(), rhsParts.size());

  lhsParts.resize(size + 1, 0);
  rhsParts.resize(size + 1, 0);
  sumParts.resize(size + 1, 0);

  for(int i = size - 1; i >= 0; --i)
  {
    sumParts.at(i) = rhsParts.at(i) + lhsParts.at(i);
  }

  for(int i = 0; i < sumParts.size() - 1; ++i)
  {
    int part = sumParts.at(i);
    if(part > 9)
    {
      int actualPart = part % 10;
      int carry = (part - actualPart)/10;
      sumParts.at(i) = actualPart;
      sumParts.at(i + 1) += carry;
    }
  }

  BigInt sum(sumParts);
  return sum;
}
