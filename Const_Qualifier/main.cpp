#include <iostream>

void Print(const int *ptr) {
	using namespace std;
	cout << *ptr << endl;
	// *ptr = 700; This is compile time error, because declaration of ptr is const int*
}

int main() {
	using namespace std;
	/*float radius = 0;
	cin >> radius;
	const float PI = 3.14159f;
	float area = PI * radius * radius;
	float circumference = PI * 2 * radius;
	cout << "Area is: " << area << endl;
	cout << "Circumference is: " << circumference << endl;*/

	const int CHUNK_SIZE = 512;
	const int *ptr = &CHUNK_SIZE; // ptr is a pointer to an integer of type constant (*ptr is constant, but ptr is NOT)
	int x = 10;
	ptr = &x;
	// *ptr = 1; This is compile time error, because declaration of ptr is const int*

	const int *const ptr2 = &CHUNK_SIZE;
	// ptr2 = &x; This is compile time error, because ptr2 is a constant pointer

	Print(&x);
	cout << "main->x: " << x << endl;

	return 0;
}