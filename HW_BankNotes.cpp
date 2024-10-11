#include <iostream>

int main() {
	int n = 0;

	std::cout << "Enter a number: ";
	std::cin >> n;

	int hundred = 0, fifty = 0, twenty = 0, ten = 0, five = 0, two = 0, one = 0;

	hundred = n / 100;
	n -= hundred * 100;
	fifty = n / 50;
	n -= fifty * 50;
	twenty = n / 20;
	n -= twenty * 20;
	ten = n / 10;
	n -= ten * 10;
	five = n / 5;
	n -= five * 5;
	two = n / 2;
	n -= two * 2;
	one = n;


	std::cout << hundred << "x100lv " << fifty << "x50lv " 
			  << twenty << "x20lv " << ten << "x10lv " 
			  << five << "x5lv " << two << "x2lv " 
			  << one << "x1lv ";


	return 0;
}