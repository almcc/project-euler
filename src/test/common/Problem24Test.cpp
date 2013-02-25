#include "Problem24Test.h"

CPPUNIT_TEST_SUITE_REGISTRATION( Problem24Test );

void Problem24Test::setUp()
{
  this->item = new Problem24();
}

//NEXT_TEST_DEF

void Problem24Test::tearDown()
{
  delete this->item;
}
