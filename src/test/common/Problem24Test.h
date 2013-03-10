#ifndef PROBLEM_24_TEST_H
#define PROBLEM_24_TEST_H

#include <cppunit/extensions/HelperMacros.h>
#include <vector>
#include <string>

#include "Problem24.h"

using namespace std;

class Problem24Test : public CppUnit::TestFixture
{
  public:

    void setUp();

    void testGetPermutationsOf0And1();
    void testCombineVector();
    void testGetStringWithoutChar();
    void testConvertStringVectorToIntVector();
    //NEXT_TEST_DEC

    void tearDown();

    CPPUNIT_TEST_SUITE( Problem24Test );

    CPPUNIT_TEST( testGetPermutationsOf0And1 );
    CPPUNIT_TEST( testCombineVector );
    CPPUNIT_TEST( testGetStringWithoutChar );
    CPPUNIT_TEST( testConvertStringVectorToIntVector );
    //NEXT_TEST_ADD

    CPPUNIT_TEST_SUITE_END();

  private:

    Problem24* item;

};

#endif
