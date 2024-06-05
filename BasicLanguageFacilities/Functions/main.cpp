#include <iostream>
#include "math.h"

// you can also place the definition before function call like below
// this form is used typically for inline functions and function templates
void Print(char ch) {
	for (int i = 0; i < 10; ++i) {
		std::cout << ch;
	}
	std::cout << std::endl;
}

int main() {
	int x, y;
	std::cin >> x >> y;
	int result = Add(x, y);
	std::cout << result << std::endl;

	Print('#');
	return 0;
}
