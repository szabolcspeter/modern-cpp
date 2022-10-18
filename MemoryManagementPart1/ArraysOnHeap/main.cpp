#include <iostream>

int main() {
	int *p = new int[5];
	for (int i{ 0 }; i < 5; ++i) {
		p[i] = i;
	}
	delete [] p;
	p = nullptr;

	// We can use uniform initialization with new
	int *p1 = new int[5]{1, 2, 3, 4, 5};
	delete [] p1;
	p1 = nullptr;

	char *p2 = new char[4];
	strcpy_s(p2, 4, "C++");
	std::cout << p2 << std::endl;
	delete [] p2;
	p2 = nullptr;

	return 0;
}