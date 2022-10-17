#include <iostream>

void Print(const int &ref) {
	using namespace std;
	cout << ref << endl;
	// ref = 10; This is a compile time error
}


int main() {
	using namespace std;
	const int &ref = 5; // It is possibble to create a const reference to a literal
	int x = 5;
	Print(x);
	Print(10);

	return 0;
}
