#include <iostream>

struct Point {
	int x;
	int y;
};

void DrawLine(Point start, Point end) {
	std::cout << start.x << std::endl;
}

int main() {
	return 0;
}