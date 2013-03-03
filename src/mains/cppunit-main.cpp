#include <iostream>
#include "cppunit/extensions/TestFactoryRegistry.h"
#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/XmlOutputter.h"
#include "cppunit/BriefTestProgressListener.h"
#include "cppunit/TestResultCollector.h"
#include "cppunit/TestResult.h"
#include "cppunit/CompilerOutputter.h"

#include "Problem17Test.h"
#include "Problem22Test.h"
#include "Problem23Test.h"
#include "Problem24Test.h"
#include "BigIntTest.h"
#include "Problem25Test.h"


using namespace std;
using namespace CppUnit;

/**
 * Runs the unit tests in CLI mode printing to the screen.
 * @return success == 0
 */
int runCli()
{
  TextUi::TestRunner runner;
  TestFactoryRegistry &registry = TestFactoryRegistry::getRegistry();
  runner.addTest( registry.makeTest() );
  bool wasSucessful = runner.run( "", false );
  return wasSucessful ? 0 : 1 ;
}

int runCli(string testSuite)
{
  TextUi::TestRunner runner;
  if(testSuite == "Problem17Test")
  {
    runner.addTest( Problem17Test::suite() );
  }
  else if(testSuite == "Problem22Test")
  {
    runner.addTest( Problem22Test::suite() );
  }
  else if(testSuite == "Problem23Test")
  {
    runner.addTest( Problem23Test::suite() );
  }
  else if(testSuite == "Problem24Test")
  {
    runner.addTest( Problem24Test::suite() );
  }
  else if(testSuite == "BigIntTest")
  {
    runner.addTest( BigIntTest::suite() );
  }
  else if(testSuite == "Problem25Test")
  {
    runner.addTest( Problem25Test::suite() );
  }

  bool wasSucessful = runner.run( "", false );
  return wasSucessful ? 0 : 1 ;
}

/**
 * Runs the unit tests, producing the results in a xml file and printing to the screen.
 * @param  outputFile Xml file to place output.
 * @return            0.
 */
int runXml(string outputFile)
{
  TestResult controller;
  TestResultCollector result;
  controller.addListener(&result);

  TextUi::TestRunner runner;
  runner.addTest( TestFactoryRegistry::getRegistry().makeTest() );
  runner.run( controller );

  ofstream xmlFileOut(outputFile.c_str());
  XmlOutputter xmlOut(&result, xmlFileOut);
  xmlOut.write();

  return 0;
}



/**
 * Main function parses command line args and either runs required mode or prints usage information.
 * @param  argc Number of arguments
 * @param  argv Array of arguments
 * @return      success == 0
 */
int main( int argc, char **argv)
{
  int returnValue = 0;

  if(argc == 1)
  {
    returnValue = runCli();
  }
  else if (argc == 2 && string(argv[1]) == "--xml")
  {
    returnValue = runXml(string("cppunit-results.xml"));
  }
  else if (argc == 3 && string(argv[1]) == "--xml")
  {
    returnValue = runXml(argv[2]);
  }
  else if (argc == 3 && string(argv[1]) == "--suite")
  {
    returnValue = runCli(argv[2]);
  }
  else
  {
    cout << "Usage: " << argv[0] << " [--xml]" << " [output_file.xml]"<< endl;
    cout << "Usage: " << argv[0] << " [--suite TestSuiteName]"<< endl;
    returnValue = 1;
  }

  return returnValue;
}



