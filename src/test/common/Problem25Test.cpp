#include "Problem25Test.h"

CPPUNIT_TEST_SUITE_REGISTRATION( Problem25Test );

void Problem25Test::setUp()
{
  this->item = new Problem25();
}

void Problem25Test::test1stFibonacci()
{
  int actual = this->item->nthFibonacciWithSize((unsigned)1);
  int expected = 1;
  CPPUNIT_ASSERT_EQUAL(expected, actual);
}

void Problem25Test::test7thFibonacci()
{
  int actual = this->item->nthFibonacciWithSize((unsigned)2);
  int expected = 7;
  CPPUNIT_ASSERT_EQUAL(expected, actual);
}

void Problem25Test::test12thFibonacci()
{
  int actual = this->item->nthFibonacciWithSize((unsigned)3);
  int expected = 12;
  CPPUNIT_ASSERT_EQUAL(expected, actual);
}

void Problem25Test::testAnswer()
{
  int actual = this->item->answer();
  int expected = 4782;
  CPPUNIT_ASSERT_EQUAL(expected, actual);
}

//NEXT_TEST_DEF

void Problem25Test::tearDown()
{
  delete this->item;
}
