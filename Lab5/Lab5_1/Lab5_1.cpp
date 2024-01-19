//Napisz program, który wypisze n do potęgi m gdzie n i m pobrane są od użytkownika.
#include <iostream>

int main()
{
	long long podstawa_potegi, wykladnik_potegi, wynik;
	do {
		std::cout << "Podaj liczbe calkowita (postawe potegi): ";
		std::cin >> podstawa_potegi;
		if (!std::cin.fail()) break;
		std::cin.clear(), std::cin.ignore();
		std::cout << std::endl;
	} while (true);

	do {
		std::cout << "Podaj liczbe calkowita (wykladnik potegi): ";
		std::cin >> wykladnik_potegi;
		if (!std::cin.fail()) break;
		std::cout << std::endl;
		std::cin.clear(), std::cin.ignore();
	} while (true);

	wynik = (wykladnik_potegi != 0) ? podstawa_potegi : 1;
	for (int i = 1; i < wykladnik_potegi; i++) wynik *= podstawa_potegi;
	std::cout << "Wynik potegowania: " << podstawa_potegi << '^' << wykladnik_potegi << '=' << wynik << std::endl;
	return 0;
}
