#ifndef PROBLEM_24_H
#define PROBLEM_24_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Problem24
{
  friend class Problem24Test;
  public:
    Problem24();
    ~Problem24();
    string answer();
  private:
    void getPermutations(vector<string>* permutations, string parts);
    string combineVectorString(vector<string> parts);
    string getStringWithoutIndex(string input, unsigned index);
    vector<int> convertStringVectorToIntVector(vector<string> input);
};

#endif
