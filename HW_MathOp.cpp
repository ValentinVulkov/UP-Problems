#include <iostream>

int main() {
	int a = 0, b = 0;
	std::cout << "Enter a: ";
	std::cin >> a;
	std::cout << "Enter b: ";
	std::cin >> b;

	std::cout << "Result: " << (a + b) * (a + b) * (a + b) * (a + b) - (a - b) * (a - b);


	return 0;
}