#include <string>

int main() {
	// =============================  Old style (98/2003) C++ Initialization =============================
	int a1; // Unitialized
	int a2 = 0; // Copy initialization
	int a3(5); // Direct initialization
	std::string s1;
	std::string s2("C++"); // Direct initialization

	char d1[8]; // Unitialized
	char d2[8] = { '\0' }; 
	char d3[8] = { 'a', 'b', 'c', 'd' }; // Aggregate initialization
	char d4[8] = { "abcd" };


	// =============================  Modern C++ style (C++11 and above) Initialization =============================
	int b1{}; // Value initialization
	// int b2(); // Most vexing parse (This creates a function called b2)
	int b3{ 5 }; // Direct initialization

	char e1[8]{}; 
	char e2[8]{ "Hello" };

	int *p1 = new int{};
	char *p2 = new char[8]{};
	char* p3 = new char[8]{ "Hello" };

	/* Generates error(narrowing conversion)
	 
	float f{};
	int i{ f };

	*/

	delete p1;
	delete [] p2;
	delete [] p3;

	return 0;
}

/*
1. Value initialization => T obj{};
2. Direct initialization => T obj{v};
3. Copy initialization => T obj = v;
*/

/*
1. It forces initialization
2. You can use direct initialization for array types
3. It prevents narrowing conversions
4. Uniform syntax for all types
*/