#ifndef CLASSNAME_H
#define CLASSNAME_H

#include <iostream>;
#include <vector>;
#include <fstream>;
#include <string>;

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