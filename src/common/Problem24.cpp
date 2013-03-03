#include "Problem24.h"


Problem24::Problem24()
{

}

Problem24::~Problem24()
{

}

string Problem24::answer()
{
  string answer;
  vector<string> stringPerms;
  this->getPermutations(&stringPerms, "0123456789");
  answer = stringPerms.at(999999);
  return answer;
}

void Problem24::getPermutations(vector<string>* permutations,
                                string parts)
{
  if(parts.size() == 2)
  {
    string first = parts.substr(0,1);
    string second = parts.substr(1,1);

    permutations->push_back(first + second);
    permutations->push_back(second + first);
  }
  else
  {
    for(unsigned j = 0; j < parts.size(); ++j)
    {
      string first = parts.substr(j,1);
      string rest = this->getStringWithoutIndex(parts, j);

      vector<string> nextSet;
      this->getPermutations(&nextSet, rest);

      for(unsigned i = 0; i < nextSet.size(); ++i)
      {
        string perm = first + nextSet.at(i);
        permutations->push_back(perm);
      }
    }
  }
}

string Problem24::combineVectorString(vector<string> parts)
{
  string returnValue;
  for(unsigned i = 0; i < parts.size(); ++i)
  {
    returnValue += parts.at(i);
  }
  return returnValue;
}

string Problem24::getStringWithoutIndex(string input, unsigned index)
{
  string returnValue;
  for(unsigned i = 0; i < input.size(); ++i)
  {
    if(i != index)
    {
      returnValue += input.substr(i,1);
    }
  }
  return returnValue;
}

vector<int> Problem24::convertStringVectorToIntVector(vector<string> input)
{
  vector<int> output;
  for(unsigned i = 0; i < input.size(); ++i)
  {
    output.push_back(atoi(input.at(i).c_str()));
  }
  return output;
}
