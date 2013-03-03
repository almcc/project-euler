#include "BigNumberTest.h"

CPPUNIT_TEST_SUITE_REGISTRATION( BigNumberTest );

void BigNumberTest::setUp()
{

}

void BigNumberTest::testCreateBigNumber()
{
  BigNumber myInt("12345678");
  size_t actual = myInt.bigInteger.size();
  size_t expected = 8;
  CPPUNIT_ASSERT_EQUAL(expected, actual);
}

void BigNumberTest::testGetAsString()
{
  BigNumber myInt("12345678");
  string actual = myInt.getInt();
  string expected = "12345678";
  CPPUNIT_ASSERT_EQUAL(expected, actual);
}

void BigNumberTest::testAddTwoPlusTwo()
{
  BigNumber first("2");
  BigNumber second("2");
  BigNumber sum = first + second;
  string actual = sum.getInt();
  string expected = "4";
  CPPUNIT_ASSERT_EQUAL(expected, actual);
}

void BigNumberTest::testAddBigNumbers()
{
  BigNumber first("134");
  BigNumber second("435");
  BigNumber sum = first + second;
  string actual = sum.getInt();
  string expected = "569";
  CPPUNIT_ASSERT_EQUAL(expected, actual);
}

void BigNumberTest::testAddBigAndSmallNumber()
{
  BigNumber first("34");
  BigNumber second("435");
  BigNumber sum = first + second;
  string actual = sum.getInt();
  string expected = "469";
  CPPUNIT_ASSERT_EQUAL(expected, actual);
}

void BigNumberTest::testAddingNumbersThatCarry()
{
  BigNumber first("999");
  BigNumber second("999");
  BigNumber sum = first + second;
  string actual = sum.getInt();
  string expected = "1998";
  CPPUNIT_ASSERT_EQUAL(expected, actual);
}

void BigNumberTest::testAddingHugeNumbers()
{
  BigNumber first("892758943674908576520935783");
  BigNumber second("890734562089675249082931074685");
  BigNumber sum = first + second;
  string actual = sum.getInt();
  string expected = "891627321033350157659452010468";
  CPPUNIT_ASSERT_EQUAL(expected, actual);
}

//NEXT_TEST_DEF

void BigNumberTest::tearDown()
{

}
