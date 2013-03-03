#include "Problem25Test.h"

CPPUNIT_TEST_SUITE_REGISTRATION( Problem25Test );

void Problem25Test::setUp()
{
  this->item = new Problem25();
}

//NEXT_TEST_DEF

void Problem25Test::tearDown()
{
  delete this->item;
}
