#include "logic.h"

string detect_mood() {
	int n = rand() % 5;
	string mood =good_mood;
	switch (n) {
	case 0:mood = happy_mood; break;
	case 1:mood = bad_mood; break;
	case 2:mood = nervos_mood; break;
	case 3:mood = shouted_mood; break;
	}

	return mood;
}