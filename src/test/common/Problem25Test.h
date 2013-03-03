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

    //NEXT_TEST_DEC

    void tearDown();

    CPPUNIT_TEST_SUITE( Problem25Test );

    //NEXT_TEST_ADD

    CPPUNIT_TEST_SUITE_END();

  private:

    Problem25* item;

};

#endif
