#include "BigIntTest.h"

CPPUNIT_TEST_SUITE_REGISTRATION( BigIntTest );

void BigIntTest::setUp()
{

}

void BigIntTest::testCreateBigInt()
{
  BigInt myInt("12345678");
  size_t actual = myInt.bigInteger.size();
  size_t expected = 8;
  CPPUNIT_ASSERT_EQUAL(expected, actual);
}

void BigIntTest::testGetAsString()
{
  BigInt myInt("12345678");
  string actual = myInt.getInt();
  string expected = "12345678";
  CPPUNIT_ASSERT_EQUAL(expected, actual);
}

void BigIntTest::testAddTwoPlusTwo()
{
  BigInt first("2");
  BigInt second("2");
  BigInt sum = first + second;
  string actual = sum.getInt();
  string expected = "4";
  CPPUNIT_ASSERT_EQUAL(expected, actual);
}

void BigIntTest::testAddBigNumbers()
{
  BigInt first("134");
  BigInt second("435");
  BigInt sum = first + second;
  string actual = sum.getInt();
  string expected = "569";
  CPPUNIT_ASSERT_EQUAL(expected, actual);
}

void BigIntTest::testAddBigAndSmallNumber()
{
  BigInt first("34");
  BigInt second("435");
  BigInt sum = first + second;
  string actual = sum.getInt();
  string expected = "469";
  CPPUNIT_ASSERT_EQUAL(expected, actual);
}

void BigIntTest::testAddingNumbersThatCarry()
{
  BigInt first("999");
  BigInt second("999");
  BigInt sum = first + second;
  string actual = sum.getInt();
  string expected = "1998";
  CPPUNIT_ASSERT_EQUAL(expected, actual);
}

void BigIntTest::testAddingHugeNumbers()
{
  BigInt first("892758943674908576520935783");
  BigInt second("890734562089675249082931074685");
  BigInt sum = first + second;
  string actual = sum.getInt();
  string expected = "891627321033350157659452010468";
  CPPUNIT_ASSERT_EQUAL(expected, actual);
}

//NEXT_TEST_DEF

void BigIntTest::tearDown()
{

}
