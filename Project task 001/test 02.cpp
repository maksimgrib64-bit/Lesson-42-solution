#include <iostream>
#include <ctime>
using namespace std;
int get_random_number(int total) {
	return rand() % (total + 1);
}
int main() {
	srand(time(NULL));
	cout << time(NULL);

	int total;
	for (int i = 0; i < total * 2; i++) {

		cout << get_random_number(total) << " ";
	}


	return 0;
}
