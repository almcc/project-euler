#ifndef PROBLEM_22_TEST_H
#define PROBLEM_22_TEST_H

#include <cppunit/extensions/HelperMacros.h>

#include "Problem22.h"

class Problem22Test : public CppUnit::TestFixture
{
  public:

    void setUp();

    void testLetterScoreA();
    void testLetterScoreZeroForBadInput();
    void testWordScoreBob();
    void testWordScoreBlankWord();
    void testLineScore();
    void testSortNames();
    //NEXT_TEST_DEC

    void tearDown();

    CPPUNIT_TEST_SUITE( Problem22Test );

    CPPUNIT_TEST( testLetterScoreA );
    CPPUNIT_TEST( testLetterScoreZeroForBadInput );
    CPPUNIT_TEST( testWordScoreBob );
    CPPUNIT_TEST( testWordScoreBlankWord );
    CPPUNIT_TEST( testLineScore );
    CPPUNIT_TEST( testSortNames );
    //NEXT_TEST_ADD

    CPPUNIT_TEST_SUITE_END();

  private:

    Problem22* item;

};

#endif
