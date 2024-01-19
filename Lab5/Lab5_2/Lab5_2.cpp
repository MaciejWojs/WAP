//Napisz program, który wypisuje liczby parzyste w zadanym przedziale [n, m] gdzie n i m pobrane są od użytkownika.
#include <iostream>
int main()
{
	int n, m;
	std::cout << "Program, ktory wypisuje liczby parzyste w zadanym przedziale [N, M]\n";
	do {
		std::cout << "Podaj liczbe calkowita N: ";
		std::cin >> n;

		if (!std::cin.fail()) break;

		std::cout << std::endl << "Podano zle dane\n";
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

		std::cout << std::endl << "Podano zle dane\n";
		std::cin.clear(), std::cin.ignore();
	} while (true);

	std::cout << "Liczby parzyste w przedziale <" << n << "; " << m << "> to: ";
	for (int i = n; i <= m; i++) {
		if (i % 2 == 0) std::cout << i << ' ';
		else continue;
	}
	std::cout << std::endl;
}
