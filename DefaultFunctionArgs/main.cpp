#include <iostream>

void CreateWindow(const char* title, int x = -1, int y = -1, int width = -1, int height = -1);

void CreateWindow(const char* title, int x, int y, int width, int height) {
	using namespace std;
	cout << "title: " << title << endl;
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
	cout << "width: " << width << endl;
	cout << "height: " << height << endl;
}

int main() {
	CreateWindow("Notepad", 10, 10, 100, 100);
	CreateWindow("Notepad", 10, 10);
	CreateWindow("Notepad");

	return 0;
}