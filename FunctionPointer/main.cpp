#include <iostream>

void Print(int count, char ch) {
	using namespace std;
	for (int i = 0; i < count; ++i) {
		cout << ch;
	}
	cout << endl;
}

void EndMessage() {
	using namespace std;
	cout << "End of program" << endl;
}

int main() {
	atexit(EndMessage);

	Print(5, '#');
	
	void (*pfn) (int, char) = Print; // pfn can also be initialized like this: void (*pfn) (int, char) = &Print; the & operator is optional

	// 2 ways to invoke the function pointer:
	// a)
	(*pfn) (8, '@');
	// b)
	pfn(5, '+');

	using namespace std;
	cout << "End of main()" << endl;
	return 0;
}