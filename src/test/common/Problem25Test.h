#ifndef PROBLEM_25_TEST_H
#define PROBLEM_25_TEST_H

#include <cppunit/extensions/HelperMacros.h>
#include <iostream>

#include "Problem25.h"

using namespace std;

class Problem25Test : public CppUnit::TestFixture
{
  public:

    void setUp();

    void test1stFibonacci();
    void test7thFibonacci();
    void test12thFibonacci();
    //NEXT_TEST_DEC

    void tearDown();

    CPPUNIT_TEST_SUITE( Problem25Test );

    CPPUNIT_TEST( test1stFibonacci );
    CPPUNIT_TEST( test7thFibonacci );
    CPPUNIT_TEST( test12thFibonacci );
    //NEXT_TEST_ADD

    CPPUNIT_TEST_SUITE_END();

  private:

    Problem25* item;

};

#endif
