#ifndef PROBLEM_24_TEST_H
#define PROBLEM_24_TEST_H

#include <cppunit/extensions/HelperMacros.h>

#include "Problem24.h"

class Problem24Test : public CppUnit::TestFixture
{
  public:

    void setUp();

    //NEXT_TEST_DEC

    void tearDown();

    CPPUNIT_TEST_SUITE( Problem24Test );

    //NEXT_TEST_ADD

    CPPUNIT_TEST_SUITE_END();

  private:

    Problem24* item;

};

#endif
