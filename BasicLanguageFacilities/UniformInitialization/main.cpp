#include <string>

int main()
{
	// ===============================================================================================================================
	// Old style initialization: (C++98 & C++03)
	// ===============================================================================================================================

	int a1; // Uninitalized
	int a2 = 0; // Copy initialization
	int a3(5); // Direct initialization

	std::string s1; // default constructor call
	std::string s2("C++"); //Direct initialization

	char d1[8]; // Uninitalized
	char d2[8] = { '\0' }; // Copy initialization
	char d3[8] = { 'a', 'b', 'c', 'd' }; // Aggregate initialization. Also Copy initialization
	char d4[8] = { "abcd" }; // Copy initialization

	// ===============================================================================================================================
	// New style initialization: (C++11 and above)
	// ===============================================================================================================================

	int b1{}; // Value initialization
	// int b2(); // Most vexing parse
	int b3{ 5 }; // Direct initialization

	char e1[8]{}; // Value initialization
	char e2[8]{ "Hello" }; // Direct initialization

	int* p1 = new int{}; // Value initialization. This sets default value
	delete p1;

	char* p2 = new char[8] {}; // Value initialization. This sets all the elements of the array to default value
	delete[] p2;

	char* p3 = new char[8] {"abcd"}; // Direct initialization
	delete[] p3;

	// Narrowing conversion error
	/*float f{};
	int i{ f };*/

	return 0;
}