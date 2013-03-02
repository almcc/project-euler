#ifndef BIG_INT_TEST_H
#define BIG_INT_TEST_H

#include <cppunit/extensions/HelperMacros.h>
#include <vector>

#include "BigInt.h"

using namespace std;

class BigIntTest : public CppUnit::TestFixture
{
  public:

    void setUp();

    void testCreateBigInt();
    void testGetAsString();
    void testAddTwoPlusTwo();
    void testAddBigNumbers();
    void testAddBigAndSmallNumber();
    void testAddingNumbersThatCarry();
    void testAddingHugeNumbers();
    //NEXT_TEST_DEC

    void tearDown();

    CPPUNIT_TEST_SUITE( BigIntTest );

    CPPUNIT_TEST( testCreateBigInt );
    CPPUNIT_TEST( testGetAsString );
    CPPUNIT_TEST( testAddTwoPlusTwo );
    CPPUNIT_TEST( testAddBigNumbers );
    CPPUNIT_TEST( testAddBigAndSmallNumber );
    CPPUNIT_TEST( testAddingNumbersThatCarry );
    CPPUNIT_TEST( testAddingHugeNumbers );
    //NEXT_TEST_ADD

    CPPUNIT_TEST_SUITE_END();

  private:

};

#endif
