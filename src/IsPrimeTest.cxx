/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/XmlPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::XmlPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::XmlPrinter >( tmp, argc, argv );
    return status;
}
bool suite_IsPrimeTest_init = false;
#include "/var/www/html/codeit/workspace/IsPrime/src/IsPrimeTest.h"

static IsPrimeTest suite_IsPrimeTest;

static CxxTest::List Tests_IsPrimeTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_IsPrimeTest( "/var/www/html/codeit/workspace/IsPrime/src/IsPrimeTest.h", 6, "IsPrimeTest", suite_IsPrimeTest, Tests_IsPrimeTest );

static class TestDescription_suite_IsPrimeTest_test_Unit_Test_1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_IsPrimeTest_test_Unit_Test_1() : CxxTest::RealTestDescription( Tests_IsPrimeTest, suiteDescription_IsPrimeTest, 16, "test_Unit_Test_1" ) {}
 void runTest() { suite_IsPrimeTest.test_Unit_Test_1(); }
} testDescription_suite_IsPrimeTest_test_Unit_Test_1;

static class TestDescription_suite_IsPrimeTest_test_Unit_Test_2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_IsPrimeTest_test_Unit_Test_2() : CxxTest::RealTestDescription( Tests_IsPrimeTest, suiteDescription_IsPrimeTest, 25, "test_Unit_Test_2" ) {}
 void runTest() { suite_IsPrimeTest.test_Unit_Test_2(); }
} testDescription_suite_IsPrimeTest_test_Unit_Test_2;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
