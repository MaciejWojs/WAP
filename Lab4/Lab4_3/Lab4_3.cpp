#include <iostream>

int main()
{
	int a;
	std::cout << "Sprawdzenie czy liczba jest parzysta w przedziale od 1 do 100\n";
	std::cout << "Podaj liczbe calkowita: ";
	std::cin >> a;

	if (a <= 100 && a % 2 == 0) {
		std::cout << "\nPodana liczba miesci sie w przedziale i jest parzysta\n";
	}
	else if (a > 100) {
		std::cout << "\nPodana liczba nie miesci sie w przedziale\n";
	}
	else {
		std::cout << "\nPodana liczba nie jest parzysta\n";
	}
	return 0;
}
