#include "Problem22Test.h"

CPPUNIT_TEST_SUITE_REGISTRATION( Problem22Test );

void Problem22Test::setUp()
{
  this->item = new Problem22();
}

void Problem22Test::testLetterScoreA()
{
  int actual;
  int expected;

  actual = this->item->letterScore("A");
  expected = 1;
  CPPUNIT_ASSERT_EQUAL(expected, actual);

  actual = this->item->letterScore("a");
  expected = 1;
  CPPUNIT_ASSERT_EQUAL(expected, actual);
}

void Problem22Test::testLetterScoreZeroForBadInput()
{
  int actual;
  int expected;

  actual = this->item->letterScore("");
  expected = 0;
  CPPUNIT_ASSERT_EQUAL(expected, actual);

  actual = this->item->letterScore("aa");
  expected = 0;
  CPPUNIT_ASSERT_EQUAL(expected, actual);

  actual = this->item->letterScore("`");
  expected = 0;
  CPPUNIT_ASSERT_EQUAL(expected, actual);

  actual = this->item->letterScore("{");
  expected = 0;
  CPPUNIT_ASSERT_EQUAL(expected, actual);

  actual = this->item->letterScore("[");
  expected = 0;
  CPPUNIT_ASSERT_EQUAL(expected, actual);

  actual = this->item->letterScore("@");
  expected = 0;
  CPPUNIT_ASSERT_EQUAL(expected, actual);
}

void Problem22Test::testWordScoreBob()
{
  int actual = this->item->wordScore("Bob");
  int expected = 19;
  CPPUNIT_ASSERT_EQUAL(expected, actual);
}

void Problem22Test::testWordScoreBlankWord()
{
  int actual = this->item->wordScore("");
  int expected = 0;
  CPPUNIT_ASSERT_EQUAL(expected, actual);
}

void Problem22Test::testLineScore()
{
  vector<string> line;
  line.push_back("MARY");
  line.push_back("PATRICIA");
  line.push_back("LINDA");

  int actual = this->item->lineScore(line);
  int expected = 331;
  CPPUNIT_ASSERT_EQUAL(expected, actual);
}

void Problem22Test::testSortNames()
{
  string mary = "MARY";
  string patricia = "PATRICIA";
  string linda = "LINDA";

  vector<string> line;
  line.push_back(mary);
  line.push_back(patricia);
  line.push_back(linda);

  vector<string> actual = this->item->sortNames(line);

  CPPUNIT_ASSERT_EQUAL(mary, actual.at(1));
  CPPUNIT_ASSERT_EQUAL(patricia, actual.at(2));
  CPPUNIT_ASSERT_EQUAL(linda, actual.at(0));

}

//NEXT_TEST_DEF

void Problem22Test::tearDown()
{
  delete this->item;
}
