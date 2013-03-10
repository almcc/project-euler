#include "Problem24Test.h"

CPPUNIT_TEST_SUITE_REGISTRATION( Problem24Test );

void Problem24Test::setUp()
{
  this->item = new Problem24();
}

void Problem24Test::testGetPermutationsOf0And1()
{
  vector<string> output;
  this->item->getPermutations(&output, "0123");
  size_t actual = output.size();
  size_t expected = 24;
  CPPUNIT_ASSERT_EQUAL(expected, actual);
}

void Problem24Test::testCombineVector()
{
  vector<string> input;
  input.push_back("A");
  input.push_back("B");
  input.push_back("C");
  string actual = this->item->combineVectorString(input);
  string expected = "ABC";
  CPPUNIT_ASSERT_EQUAL(expected, actual);
}

void Problem24Test::testGetStringWithoutChar()
{
  string actual = this->item->getStringWithoutIndex("ABCD", (unsigned)1);
  string expected = "ACD";
  CPPUNIT_ASSERT_EQUAL(expected, actual);
}

void Problem24Test::testConvertStringVectorToIntVector()
{
  vector<string> input;
  input.push_back("0123");
  vector<int> actual = this->item->convertStringVectorToIntVector(input);
  int expected = 123;
  CPPUNIT_ASSERT_EQUAL(expected, actual.at(0));
}

//NEXT_TEST_DEF

void Problem24Test::tearDown()
{
  delete this->item;
}
