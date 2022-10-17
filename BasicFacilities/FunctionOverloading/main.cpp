#include <iostream>
#include "func.h"

int main() {
	using namespace std;
	int result = Add(3, 5);
	cout << result << endl;
	Add(3.1, 6.2);
	const int x = 1;
	Print(&x); // This calls Print(const int *x)

	int y = 5;
	Print(&y);

	return 0;
}