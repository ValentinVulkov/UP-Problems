#include <iostream>

	
int main() {
	int num = 0;
	std::cout << "Enter a number: ";
	std::cin >>	num;

	bool gradeCheck = num == 2 || num == 3 || num == 4 || num == 5 || num == 6;

	std::cout << gradeCheck;
}