#include <iostream>

int main()
{
	std::cout << "Hello, World\n" << 45 << " " << 8.2f << std::endl;

	int age{ 0 };
	std::cout << "Tell me your age: ";
	std::cin >> age;
	std::cout << "Your age is: " << age << std::endl;

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	char buff[512];
	std::cout << "What is your name? ";
	/*std::cin >> buff;*/
	std::cin.getline(buff, 64, '\n');
	std::cout << "Your name is: " << buff << std::endl;

	return 0;
}