/*
	Napisz program, który zsumuje wszystkie liczby parzyste w zadanym przedziale [n, m] i ją
	wypisze, gdzie n i m pobrane są od użytkownika. Jeżeli suma osiągnie wartość większą niż 100
	program ma zostać przerwany a suma wypisana.
*/
#include <iostream>

int main()
{
	int n, m, suma = 0;

	std::cout << "Program, ktory zsumuje wszystkie liczby parzyste w zadanym przedziale [n, m] i wypisze wynik\n";
	do {
		std::cout << "Podaj liczbe calkowita N: ";
		std::cin >> n;
		if (!std::cin.fail()) break;
		std::cout << std::endl;
		std::cin.clear(), std::cin.ignore();
	} while (true);

	do {
		std::cout << "Podaj liczbe calkowita M: ";
		std::cin >> m;
		if (m <= n) {
			std::cout << "\nLiczba M nie moze byc mniejsza lub rowna N\n";
			continue;
		}
		if (!std::cin.fail()) break;
		std::cout << std::endl;
		std::cin.clear(), std::cin.ignore();
	} while (true);

	for (int i = n; i <= m; i++) {
		if (suma > 100) break;
		if (i % 2 == 0) suma += i;
	}
	std::cout << "Wynik: " << suma << std::endl;
}
