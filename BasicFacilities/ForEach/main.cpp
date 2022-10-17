#include <iostream>

int main() {
	using namespace std;
	
	int arr[]{ 1, 2, 3, 4, 5 };
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	for (const auto &x : arr) {
		cout << x << " ";
	}
	cout << endl;

	for (auto x : { 1,2,3,4 }) {
		cout << x << " ";
	}
	cout << endl;

	int *beg = &arr[0];
	int *end = &arr[5];

	while (beg != end) {
		std::cout << *beg << ' ';
		++beg;
	}
	cout << endl;

	// New C++11 function
	int *beg1 = std::begin(arr);
	int *end1 = std::end(arr);

	while (beg1 != end1) {
		std::cout << *beg1 << ' ';
		++beg1;
	}
	cout << endl;

	//==========================
	// This range based for loop
	for (auto x : arr) {
		cout << x << " ";
	}

	// is expanded to this:
	// this is how range based for loop is internally implemented
	auto &&range = arr;
	auto beg2 = std::begin(range);
	auto end2 = std::end(range);

	for (; beg2 != end2; ++beg2) {
		auto v = *beg2;
	}

	return 0;
}