#include "Problem22.h"


Problem22::Problem22()
{

}

Problem22::~Problem22()
{

}

int Problem22::answer()
{
  string filename = "/Users/Alastair/Github/project-euler/input/22/names.txt";
  vector<string> names = this->readFile(filename);
  vector<string> sortedNames = this->sortNames(names);
  int answer = this->lineScore(sortedNames);
  return answer;
}

int Problem22::letterScore(string letter)
{
  int score = 0;

  if(letter.size() == 1)
  {
    const char* letterChar = letter.c_str();
    int asciiValue = (int)*letterChar;

    if(asciiValue >= 65 && asciiValue <= 90)
    {
      score = asciiValue - 64;
    }
    else if(asciiValue >= 97 && asciiValue <= 122)
    {
      score = asciiValue - 96;
    }
  }

  return score;
}

int Problem22::wordScore(string word)
{
  int score = 0;
  for (unsigned i = 0; i < word.length(); ++i)
  {
    string letter = word.substr(i,1);
    score += this->letterScore(letter);
  }
  return score;
}

int Problem22::lineScore(vector<string> line)
{
  int score = 0;

  for(unsigned i = 0; i < line.size(); ++i )
  {
    score += (i+1) * this->wordScore(line.at(i));
  }

  return score;
}

vector<string> Problem22::readFile(string filename)
{
  vector<string> names;
  string line;

  ifstream myfile;
  myfile.open(filename.c_str(), ifstream::out);
  if(myfile.is_open())
  {
    getline(myfile, line);
    myfile.close();
  }
  else
  {
    cout << "Unable to open file." << endl;
  }

  char * token;
  char * lineChar = (char *)line.c_str();
  token = strtok(lineChar, ",");
  while( token != NULL )
  {
    string name = string(token);
    name = name.substr(1, name.size()-2); // Remove quotes.
    names.push_back(name);
    token = strtok(NULL, ",");
  }
  return names;
}

vector<string> Problem22::sortNames(vector<string> names)
{
  sort(names.begin(), names.end());
  return names;
}

