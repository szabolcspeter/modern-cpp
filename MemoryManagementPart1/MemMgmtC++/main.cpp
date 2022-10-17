#include <iostream>

int main() {
	int *p = new int(5);
	*p = 6;
	std::cout << *p << std::endl;
	delete p;
	p = nullptr;

	return 0;
}