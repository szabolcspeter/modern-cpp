#include <iostream>

int main() {
	using namespace std;
	// Referent
	int x = 10;
	// Reference
	int &ref = x;

	cout << "  x: " << x << endl;
	cout << "ref: " << ref << endl;

	cout << "  x: " << &x << endl;
	cout << "ref: " << &ref << endl;

	int y = 20;
	ref = y;
	cout << "  x: " << x << endl;
	cout << "ref: " << ref << endl;

	return 0;
}