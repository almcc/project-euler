#include "Problem17Test.h"

CPPUNIT_TEST_SUITE_REGISTRATION( Problem17Test );

void Problem17Test::setUp()
{
  this->problem = new Problem17;
}

void Problem17Test::testConvert()
{
  string converstion = this->problem->convert(1);
  string expected = "one";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);
}

void Problem17Test::testConvertSingleDigit()
{
  string converstion;
  string expected;

  converstion = this->problem->convert(0);
  expected = "zero";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(1);
  expected = "one";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(2);
  expected = "two";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(3);
  expected = "three";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(4);
  expected = "four";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(5);
  expected = "five";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(6);
  expected = "six";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(7);
  expected = "seven";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(8);
  expected = "eight";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(9);
  expected = "nine";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);
}

void Problem17Test::testConvertTenToTwenty()
{
  string converstion;
  string expected;

  converstion = this->problem->convert(10);
  expected = "ten";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(11);
  expected = "eleven";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(12);
  expected = "twelve";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(13);
  expected = "thirteen";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(14);
  expected = "fourteen";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(15);
  expected = "fifteen";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(16);
  expected = "sixteen";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(17);
  expected = "seventeen";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(18);
  expected = "eighteen";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(19);
  expected = "nineteen";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);
}

void Problem17Test::testConvertMultiplesOfTenUpToNinty()
{
  string converstion;
  string expected;

  converstion = this->problem->convert(0);
  expected = "zero";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(10);
  expected = "ten";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(20);
  expected = "twenty";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(30);
  expected = "thirty";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(40);
  expected = "forty";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(50);
  expected = "fifty";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(60);
  expected = "sixty";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(70);
  expected = "seventy";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(80);
  expected = "eighty";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(90);
  expected = "ninety";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);
}

void Problem17Test::testConvertTwentyOne()
{
  string converstion = this->problem->convert(21);
  string expected = "twenty one";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);
}

void Problem17Test::testConvertTwentyTwo()
{
  string converstion = this->problem->convert(22);
  string expected = "twenty two";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);
}

void Problem17Test::testConvertUpToNintyNine()
{
  string converstion;
  string expected;

  converstion = this->problem->convert(0);
  expected = "zero";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(11);
  expected = "eleven";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(22);
  expected = "twenty two";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(33);
  expected = "thirty three";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(44);
  expected = "forty four";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(55);
  expected = "fifty five";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(66);
  expected = "sixty six";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(77);
  expected = "seventy seven";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(88);
  expected = "eighty eight";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(99);
  expected = "ninety nine";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);
}

void Problem17Test::testConvertOneHundred()
{
  string converstion = this->problem->convert(100);
  string expected = "one hundred";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);
}

void Problem17Test::testConvertTwoHundred()
{
  string converstion = this->problem->convert(200);
  string expected = "two hundred";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);
}

void Problem17Test::testConvertOneHundredAndOne()
{
  string converstion = this->problem->convert(101);
  string expected = "one hundred and one";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);
}

void Problem17Test::testConvertOneHundredAndTwo()
{
  string converstion = this->problem->convert(102);
  string expected = "one hundred and two";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);
}

void Problem17Test::testConvertUpToNineHundredAndNinityNine()
{
  string converstion;
  string expected;

  converstion = this->problem->convert(111);
  expected = "one hundred and eleven";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(222);
  expected = "two hundred and twenty two";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(333);
  expected = "three hundred and thirty three";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(444);
  expected = "four hundred and forty four";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(555);
  expected = "five hundred and fifty five";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(666);
  expected = "six hundred and sixty six";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(777);
  expected = "seven hundred and seventy seven";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(888);
  expected = "eight hundred and eighty eight";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);

  converstion = this->problem->convert(999);
  expected = "nine hundred and ninety nine";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);
}

void Problem17Test::testConvertOneThousand()
{
  string converstion = this->problem->convert(1000);
  string expected = "one thousand";
  CPPUNIT_ASSERT_EQUAL(expected, converstion);
}

void Problem17Test::testLettersInThree()
{
  int converstion = this->problem->letters(3);
  int expected = 5;
  CPPUNIT_ASSERT_EQUAL(expected, converstion);
}

void Problem17Test::testLettersInThreeHundredAndFortyTwo()
{
  int converstion = this->problem->letters(342);
  int expected = 23;
  CPPUNIT_ASSERT_EQUAL(expected, converstion);
}

void Problem17Test::testLettersInMoreThanOneNumber()
{
  int converstion = this->problem->letters(1, 5);
  int expected = 19;
  CPPUNIT_ASSERT_EQUAL(expected, converstion);
}

void Problem17Test::testAnswer()
{
  int converstion = this->problem->answer();
  int expected = 21124;
  CPPUNIT_ASSERT_EQUAL(expected, converstion);
}

void Problem17Test::tearDown()
{
  delete this->problem;
}
