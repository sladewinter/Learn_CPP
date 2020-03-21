#include <iostream>
#include "classes.h"

int main()
{

	Fraction f1;
	std::cout << "Enter fraction 1 (numerator / denominator): ";
	std::cin >> f1;

	Fraction f2;
	std::cout << "Enter fraction 2 (numerator / denominator): ";
	std::cin >> f2;

	std::cout << f1 << " * " << f2 << " is " << f1 * f2 << '\n'; // note: The result of f1 * f2 is an r-value

	return 0;
}
