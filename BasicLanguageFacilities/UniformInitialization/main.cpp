#include <string>

int main() {

	// *********************************
	// Old sytle
	// *********************************

	int a1; // Uninitialized
	int a2 = 0; // Copy initialization
	int a3(5); // Direct initialization
	std::string s1;
	std::string s2("C++"); // Direct initialization

	char d1[8]; // Uninitialized
	char d2[8] = { '\0' }; // Copy initialization
	char d3[8] = {'a', 'b', 'c', 'd'}; // Aggregate initialization // Copy initialization
	char d4[8] = {"abcd"}; // Copy initialization

	// *********************************
	// New style (C++11)
	// *********************************

	int b1{}; // Value initialization
	// int b2(); // Most vexing parse
	int b3{ 5 }; // Direct initialization
	int b4 = 0; // Copy initialization

	char e1[8]{}; // Value initialization
	char e2[8]{ "Hello" }; // Direct initialization

	int *p1 = new int{}; // Value initialization
	char* p2 = new char[8] {}; // Value initialization
	char* p3 = new char[8] {"Hello"}; // Direct initialization


	delete p1;
	delete[] p2;
	delete[] p3;

	return 0;
}

/*
1. Value initialization => T obj{};
2. Direct initialization => T obj{v};
3. Copy initialization => T obj = v;
*/