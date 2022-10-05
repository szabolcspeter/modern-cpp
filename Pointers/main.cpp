#include <iostream>

int main() {
	using namespace std;
	int x = 10;
	//cout << &x << "\n";
	int *ptr = &x;
	/*cout << ptr << "\n";*/
	*ptr = 5; // ASSIGN 5 TO ADDRESS OF x (to memory cell that pointer "ptr" points to)
	cout << x << "\n";
	int y = *ptr; // READ A VALUE FROM ADDRESS OF x (from memory cell that pointer "ptr" points to)
	cout << y << "\n";


	int *p = nullptr;
	// cout << *p << "\n"; // Cannot read  from nullptr (Exception thrown: read access violation.)
	// *p = 10; // Cannot write nullptr (Exception thrown: write access violation.)

	return 0;
}