#include <CppUTest/CommandLineTestRunner.h>
#include <CppUTest/TestHarness.h>
#include <CppUTest/MemoryLeakDetectorMallocMacros.h>
#include <CppUTest/MemoryLeakDetectorNewMacros.h>
#include <iostream>
#include "FrontBoek.h"
#include "SingleLed.h"
#include "LichtStrip.h"
#include "Led.h"
#include "LichtEffect.h"

using namespace std;

TEST_GROUP(led) {};

TEST(led, test1) {
	SingleLed s1("24");
	SingleLed s2("18");
	SingleLed s3("17");

	s1.init();
	s2.init();
	s3.init();

	//s1.zetAan();
	//s2.zetAan();
	//s3.zetAan();

	//cout<<"Lichtstrip st1 aanmaken"<<endl;;
	LichtStrip st1(s1);
	LichtStrip st2(s2);

	st2.voegToe(s3);
	st1.voegToe(st2);

	st1.zetAan();
	usleep(1000000);
	st1.zetUit();

	//cout<<"Connecties: "; st1.geefConnecties();
	st1.verwijder(st2);

	STRCMP_EQUAL("24", st1.lichten[0]->geefConnecties().c_str());

}

/* The definition of a TEST_GROUP, the name is sample */
//TEST_GROUP(FirstTestGroup)
//{
//	void setup(){
//		cout<<"Before the test"<<endl;
//	}
//
//	void teardown(){
//		cout<<"After the test"<<endl;
//	}
//
//};
//
//
//TEST_GROUP(boekengroep){};
//
//TEST(boekengroep, front){
//	FrontBoek fb1("L&B", "lab");
//	STRCMP_EQUAL("L&B", fb1.naamSchrijver().c_str());
//};
//
//TEST(boekengroep, verhoog){
//	FrontBoek fb1("L&B", "lab");
//	STRCMP_EQUAL("lab", fb1.naamTitel().c_str());
//}
//
//TEST(boekengroep, memory){
//	FrontBoek fb1("L&B", "lab");
//	FrontBoek* fb2 = fb1.maakKopie();
//}
//
//
//

//
///* The definition of a belonging to the TEST_GROUP TEST, the name is ret_int_success */
//TEST(FirstTestGroup, FirstTest)
//{
//    FAIL("Fail me!");
//}
//
///* The definition of a belonging to the TEST_GROUP TEST, the name is ret_int_failed */
//TEST(FirstTestGroup, SecondTest)
//{
//    STRCMP_EQUAL("hello", "world");
//
//}
int main(int argc, char *argv[]) {
	MemoryLeakWarningPlugin::turnOnNewDeleteOverloads();
	return CommandLineTestRunner::RunAllTests(argc, argv);
	//return 0;
}
