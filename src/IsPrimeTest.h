#include <cxxtest/TestSuite.h>


extern char isPrimeMain(int argc, const char** argv);

class IsPrimeTest : public CxxTest::TestSuite
{

public:
	void setUp() {
	}

	void tearDown(){
	}

	void test_Unit_Test_1(){
	
	const char* largv[] = {"1", "5"};

	
	TS_ASSERT_EQUALS('Y', isPrimeMain(2, largv));
	
	}
	
	void test_Unit_Test_2(){
	
	const char* largv[] = {"1", "8"};

	TS_ASSERT_EQUALS('N', isPrimeMain(2, largv));
	
	}
}; 