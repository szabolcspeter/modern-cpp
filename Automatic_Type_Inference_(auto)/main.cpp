#include <iostream>

int Sum(int x, int y) {
	return x + y;
}

int main() {
	auto i{ 10 };
	auto j{ 5 };
	auto sum{ i + 4.3f };

	auto result = Sum(i, j);
	
	static auto y{ 2 };

	const int x = 10;
	auto var{ x }; // var is not const, however x is const.
	const auto var2{ x }; // var2 is const

	auto &var3{ x }; // var3 is const int&

	auto var4{ &x }; // var4 is const int* ; you don't need to specifiy "*" during declaration

	auto list = { 1, 2, 3, 4 }; // list is std::initializer_list<int>  !!! brace initializer is on the right side of assignment operator (=) 

	return 0;
}

// auto is very useful when working with lambda expressions and templates