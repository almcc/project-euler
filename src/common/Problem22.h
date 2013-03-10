#ifndef PROBLEM_22_H
#define PROBLEM_22_H

#include <iostream>
#include <vector>
#include <fstream>
#include <string.h>
#include <algorithm>

using namespace std;

class Problem22
{
  friend class Problem22Test;

  public:
    Problem22();
    ~Problem22();
    int answer();

  private:
    int letterScore(string letter);
    int wordScore(string word);
    int lineScore(vector<string> line);
    vector<string> readFile(string filename);
    vector<string> sortNames(vector<string> names);
};

#endif
