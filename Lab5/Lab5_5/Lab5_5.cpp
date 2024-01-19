/*
	Napisz program, który wypisuje liczby nieparzyste w zadanym przedziale [n, m] gdzie n i m
	pobrane są od użytkownika. NIE MOŻESZ SKORZYSTAĆ Z OPERATORA %
*/
#include <iostream>

int main()
{
	int n, m;

	std::cout << "Wypisanie liczb nieparzystych w zadanym przedziale [N, M]\n";

	do {
		std::cout << "Podaj liczbe N: ";
		std::cin >> n;
		if (!std::cin.fail()) break;
		std::cout << std::endl;
		std::cin.clear(), std::cin.ignore();
	} while (true);

	do
	{
		std::cout << "Podaj liczbe M: ";
		std::cin >> m;
		if (m < n) {
			std::cout << "Liczba m nie moze byc mniejsza od n\n";
			continue;
		}
		if (!std::cin.fail()) break;
		std::cout << std::endl;
		std::cin.clear(), std::cin.ignore();
	} while (true);

	std::cout << "Sposob nr. 1 (podzielenie i dodanie do siebie wynikow): ";
	for (int i = n; i <= m; i++) {
		int test = i / 2;
		test += test;
		if (test != i) std::cout << i << ' ';
		else continue;

	}
	std::cout << std::endl << std::endl;

	std::cout << "Sposob nr. 2: ";
	for (int i = n; i <= m; i++) {
		if (i & 1) std::cout << i << ' ';
		else continue;
	}
	std::cout << std::endl;

}