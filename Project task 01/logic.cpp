#include "logic.h"

string detect_mood() {
	int n = rand() % 5;
	string mood  =":)";
	switch (n) {
	case 0:mood = ":))"; break;
	case 1:mood = ":("; break;
	case 2:mood = ":/"; break;
	case 3:mood = ":()";break;
	}

	return mood;
}