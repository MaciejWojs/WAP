#include <iostream>

int main()
{
	int a;
	std::cout << "Podaj liczbe calkowita: ";
	std::cin >> a;

	if (a % 2 == 0) {
		std::cout << "Ta liczba jest parzysta (if)" << std::endl;
	}
	else {
		std::cout << "Ta liczba jest nie parzysta (if)" << std::endl;
	}

	switch (a % 2) {
	case 0:
		std::cout << "Ta liczba jest parzysta (switch)" << std::endl;
		break;
	case 1:
		std::cout << "Ta liczba jest nie parzysta (switch)" << std::endl;
		break;
	default:
		std::cout << "To nie jest liczba" << std::endl;
		break;
	}

}