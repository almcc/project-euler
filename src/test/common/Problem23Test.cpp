#include "Problem23Test.h"

CPPUNIT_TEST_SUITE_REGISTRATION( Problem23Test );

void Problem23Test::setUp()
{
  this->item = new Problem23();
}

void Problem23Test::testGetDivisorsOf1()
{
  vector<int> actual = this->item->getProperDivisors(1);
  CPPUNIT_ASSERT_EQUAL(size_t(0), actual.size());
}

void Problem23Test::testGetDivisorsOf2()
{
  vector<int> actual = this->item->getProperDivisors(2);
  CPPUNIT_ASSERT_EQUAL(size_t(1), actual.size());
  CPPUNIT_ASSERT_EQUAL(1, actual.at(0));
}

void Problem23Test::testGetDivisorsOf28()
{
  vector<int> actual = this->item->getProperDivisors(28);
  CPPUNIT_ASSERT_EQUAL(size_t(5), actual.size());
  CPPUNIT_ASSERT_EQUAL(14, actual.at(4));
  CPPUNIT_ASSERT_EQUAL(7, actual.at(3));
  CPPUNIT_ASSERT_EQUAL(4, actual.at(2));
  CPPUNIT_ASSERT_EQUAL(2, actual.at(1));
  CPPUNIT_ASSERT_EQUAL(1, actual.at(0));
}

void Problem23Test::testGetSum()
{
  vector<int> input;
  input.push_back(1);
  int actual = this->item->getSum(input);
  int expected = 1;
  CPPUNIT_ASSERT_EQUAL(expected, actual);
}

void Problem23Test::testGetSumOf()
{
  vector<int> input;
  input.push_back(1);
  input.push_back(2);
  input.push_back(3);
  input.push_back(4);
  input.push_back(5);

  int actual = this->item->getSum(input);
  int expected = 15;
  CPPUNIT_ASSERT_EQUAL(expected, actual);
}

void Problem23Test::testGetType()
{
  numberType actual = this->item->getType(28);
  numberType expected = PERFECT;
  CPPUNIT_ASSERT_EQUAL(expected, actual);
}

void Problem23Test::testGetType12()
{
  numberType actual = this->item->getType(12);
  numberType expected = ABUNDANT;
  CPPUNIT_ASSERT_EQUAL(expected, actual);
}

void Problem23Test::testGetAbundantNumbers()
{
  set<int> numbers = this->item->getAbundantNumbers(0, 0);
  CPPUNIT_ASSERT_EQUAL((size_t)0, numbers.size());
}

void Problem23Test::testGetAbundantNumbersInc12()
{
  set<int> numbers = this->item->getAbundantNumbers(0, 12);
  CPPUNIT_ASSERT_EQUAL((size_t)1, numbers.size());
}

void Problem23Test::testAnswer()
{
  int actual = this->item->answer();
  int expected = 4179871;
  CPPUNIT_ASSERT_EQUAL(expected, actual);
}

//NEXT_TEST_DEF

void Problem23Test::tearDown()
{
  delete this->item;
}
