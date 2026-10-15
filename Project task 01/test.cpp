#include "test.h"
void test(string expected, string test_name) {
	int number = mood_number * 3;
	bool flag = false;
	for (int i = 0; i < number; i++) {
		if (detect_mood() == expected) {
			flag = true;
			break;
		}
	}
	string actual = detect_mood();
	string msg = test_name + "-->";
	msg += flag ? "Pass" : "Fail";
	cout << msg << endl;
}



void run_all_tests() {
	test(happy_mood,"test01");
	test(good_mood, "test02");
	test(bad_mood, "test03");
	test(shouted_mood, "test04");
	test(nervos_mood, "test05");
}