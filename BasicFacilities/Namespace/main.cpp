#include <iostream>

// namespaces help avoid name clashes
namespace Avg {
	float Calculate(float x, float y) {
		return (x + y) / 2;
	}
}

namespace Basic {
	float Calculate(float x, float y) {
		return x + y;
	}
}

// namespaces help modularizing code
namespace Sort {

	void QuickSort() {}

	void InsertionSort() {}

	void MergeSort() {}

	//This is a nested namespace
	namespace Comparision {
		void Less() {}

		void Greater() {}
	}
}

// This is an unnamed namespace
// Types defined here are only visible in the scope in which the namespace itself is declared (main.cpp).
namespace {
	void InternalFunction() {}
}

int main() {
	using namespace Avg;
	Calculate(3.9f, 8.2f);

	//using namespace Basic;
	// using Basic::Calculate;
	Basic::Calculate(8.1f, 9.23f);

	using namespace Sort::Comparision;
	Less();
	Sort::Comparision::Greater();

	InternalFunction();
	return 0;
}