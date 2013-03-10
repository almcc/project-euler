#ifndef PROBLEM_23_TEST_H
#define PROBLEM_23_TEST_H

#include <cppunit/extensions/HelperMacros.h>
#include <iostream>
#include <vector>
#include <set>
#include "Problem23.h"

using namespace std;

class Problem23Test : public CppUnit::TestFixture
{
  public:

    void setUp();

    void testGetDivisorsOf1();
    void testGetDivisorsOf2();
    void testGetDivisorsOf28();
    void testGetSum();
    void testGetSumOf();
    void testGetType();
    void testGetType12();
    void testGetAbundantNumbers();
    void testGetAbundantNumbersInc12();
    //NEXT_TEST_DEC

    void tearDown();

    CPPUNIT_TEST_SUITE( Problem23Test );

    CPPUNIT_TEST( testGetDivisorsOf1 );
    CPPUNIT_TEST( testGetDivisorsOf2 );
    CPPUNIT_TEST( testGetDivisorsOf28 );
    CPPUNIT_TEST( testGetSum );
    CPPUNIT_TEST( testGetSumOf );
    CPPUNIT_TEST( testGetType );
    CPPUNIT_TEST( testGetType12 );
    CPPUNIT_TEST( testGetAbundantNumbers );
    CPPUNIT_TEST( testGetAbundantNumbersInc12 );
    //NEXT_TEST_ADD

    CPPUNIT_TEST_SUITE_END();

  private:

    Problem23* item;

};

#endif
