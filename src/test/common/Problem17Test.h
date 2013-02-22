#ifndef PROBLEM_17_TEST_H
#define PROBLEM_17_TEST_H

#include <cppunit/extensions/HelperMacros.h>

#include "Problem17.h"

class Problem17Test : public CppUnit::TestFixture
{
  public:

    void setUp();

    void testConvert();
    void testConvertSingleDigit();
    void testConvertTenToTwenty();
    void testConvertMultiplesOfTenUpToNinty();
    void testConvertTwentyOne();
    void testConvertTwentyTwo();
    void testConvertUpToNintyNine();
    void testConvertOneHundred();
    void testConvertTwoHundred();
    void testConvertOneHundredAndOne();
    void testConvertOneHundredAndTwo();
    void testConvertUpToNineHundredAndNinityNine();
    void testConvertOneThousand();
    void testLettersInThree();
    void testLettersInThreeHundredAndFortyTwo();
    void testLettersInMoreThanOneNumber();
    void testAnswer();

    void tearDown();

    CPPUNIT_TEST_SUITE( Problem17Test );

    CPPUNIT_TEST( testConvert );
    CPPUNIT_TEST( testConvertSingleDigit );
    CPPUNIT_TEST( testConvertTenToTwenty );
    CPPUNIT_TEST( testConvertMultiplesOfTenUpToNinty );
    CPPUNIT_TEST( testConvertTwentyOne );
    CPPUNIT_TEST( testConvertTwentyTwo );
    CPPUNIT_TEST( testConvertUpToNintyNine );
    CPPUNIT_TEST( testConvertOneHundred );
    CPPUNIT_TEST( testConvertTwoHundred );
    CPPUNIT_TEST( testConvertOneHundredAndOne );
    CPPUNIT_TEST( testConvertOneHundredAndTwo );
    CPPUNIT_TEST( testConvertUpToNineHundredAndNinityNine );
    CPPUNIT_TEST( testConvertOneThousand );
    CPPUNIT_TEST( testLettersInThree );
    CPPUNIT_TEST( testLettersInThreeHundredAndFortyTwo );
    CPPUNIT_TEST( testLettersInMoreThanOneNumber );
    CPPUNIT_TEST( testAnswer );

    CPPUNIT_TEST_SUITE_END();

  private:

    Problem17* problem;

};

#endif
