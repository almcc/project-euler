#include "Problem17.h"

Problem17::Problem17()
{

}

Problem17::~Problem17()
{

}

string Problem17::convert(int number)
{
  string answer = "";

  switch(number)
  {
    case 0:  { answer = "zero"; break; }
    case 1:  { answer = "one"; break; }
    case 2:  { answer = "two"; break; }
    case 3:  { answer = "three"; break; }
    case 4:  { answer = "four"; break; }
    case 5:  { answer = "five"; break; }
    case 6:  { answer = "six"; break; }
    case 7:  { answer = "seven"; break; }
    case 8:  { answer = "eight"; break; }
    case 9:  { answer = "nine"; break; }
    case 10: { answer = "ten"; break; }
    case 11: { answer = "eleven"; break; }
    case 12: { answer = "twelve"; break; }
    case 13: { answer = "thirteen"; break; }
    case 14: { answer = "fourteen"; break; }
    case 15: { answer = "fifteen"; break; }
    case 16: { answer = "sixteen"; break; }
    case 17: { answer = "seventeen"; break; }
    case 18: { answer = "eighteen"; break; }
    case 19: { answer = "nineteen"; break; }
    case 20:  { answer = "twenty"; break; }
    case 30:  { answer = "thirty"; break; }
    case 40:  { answer = "forty"; break; }
    case 50:  { answer = "fifty"; break; }
    case 60:  { answer = "sixty"; break; }
    case 70:  { answer = "seventy"; break; }
    case 80:  { answer = "eighty"; break; }
    case 90:  { answer = "ninety"; break; }
  }

  if( answer == "" && number % 1000 == 0 )
  {
    answer = this->convert( number / 1000 ) + " thousand";
  }

  if( answer == "" && number % 100 == 0 )
  {
    answer = this->convert( number / 100 ) + " hundred";
  }

  if( answer == "" && number > 100 )
  {
    int low = number % 100;
    int high = number - low;
    answer = this->convert( high ) + " and " + this->convert( low );
  }

  if( answer == "" && number < 100 )
  {
    int low = number % 10;
    int high = number - low;
    answer = this->convert( high ) + " " + this->convert( low );
  }

  return answer;
}

int Problem17::letters(int number)
{
  string characters = this->convert( number );

  string::iterator endPos = std::remove(characters.begin(), characters.end(), ' ');
  characters.erase(endPos, characters.end());

  return characters.size();
}

int Problem17::letters(int firstNumber, int lastNumber)
{
  int sum = 0;
  for(int i = firstNumber; i <= lastNumber; ++i)
  {
    sum += this->letters(i);
  }
  return sum;
}

int Problem17::answer()
{
  return this->letters(1, 1000);
}
