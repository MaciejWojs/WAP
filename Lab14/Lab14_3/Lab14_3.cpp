/*
	Napisz program wczytujący z klawiatury liczbę całkowitą reprezentującą rok
	, a następnie wypisujący informację o tym, czy jest to rok przestępny, czy nie.
*/
#include <iostream>
#include <string>
using string = std::string;

int pobierzDane(string wiadomosc) {
	int dane;
	do {
		std::cout << wiadomosc;
		std::cin >> dane;
		if (!std::cin.fail()) {
			break;
		}
		std::cout << "Podano zle dane!\n";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	} while (true);
	return dane;
}

int main() {
	int rok = pobierzDane("Podaj rok do sprawdzenia: ");
	if (rok % 4 == 0 && (rok % 100 != 0 || rok % 400 == 0)) std::cout << "Podany rok jest przetepny";
	else std::cout << "Podany rok jest nie  przetepny";
}
