#include <iostream>

inline int Square(int x) {
	return x * x;
}

// define Square(x) x*x     Macros are error prone:  int result = Square(val + 1); It gives 11

int main() {
	using namespace std;
	int val{ 5 };
 	int result = Square(val + 1);
	cout << result << endl;
	return 0;
}


// Assembly debug in Visual Studio: 1) set a breakpoint at function call 2) Debug -> Windows -> Disassembly
// Enable Inline Functions: Project properties -> C/C++ -> Optimization -> Inline Function Expansion -> Any suitable