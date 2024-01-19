/*
	Napisz  program,  który zaalokuje  tablicę  liczb  całkowitych  (minimum  8),  wypełni  ją losowymi liczbami z zakresu 0-99,
	a następnie odwróci kolejność elementów w tablicy. Wypisz na ekranie tablicę przed i po zmianach.
*/
#include <ctime>
#include <iostream>
#include <string>
using string = std::string;
const int MIN_TAB = 8;

int pobierzDane(string wiadomosc) {
	int dane;
	do {
		std::cout << wiadomosc;
		std::cin >> dane;
		if (!std::cin.fail()) {
			if (dane < MIN_TAB && dane>INT16_MAX) {
				std::cout << "podana liczba nie moze byc mniejsza niz " << MIN_TAB << std::endl;
				continue;
			} else break;
		}
		std::cout << "Podano zle dane!\n";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	} while (true);
	return dane;
}

int main() {
	srand(time(NULL));
	int rozmiar = pobierzDane("Poddaj wielkosc tablicy: ");
	int *tablica = new int[rozmiar];
	int *tablica2 = new int[rozmiar];
	int *wskaznik = tablica;
	int *wskaznik2 = tablica2;

	for (int i = 0; i < rozmiar; i++) {
		*wskaznik = rand() % 100;
		wskaznik++;
	}

	wskaznik = tablica;

	for (int i = 0; i < rozmiar; i++) {
		std::cout << ' ' << *wskaznik;
		wskaznik++;
	}
	std::cout << std::endl;

	wskaznik = &tablica[rozmiar - 1];
	for (int i = 0; i < rozmiar; i++) {
		tablica2[i] = *wskaznik;
		if (i != rozmiar - 1) wskaznik--;
	}
	std::swap(tablica2, tablica);
	wskaznik = tablica;

	for (int i = 0; i < rozmiar; i++) {
		std::cout << ' ' << *wskaznik;
		wskaznik++;
	}
	std::cout << ' ' << std::endl;
	delete[] tablica;
	delete[] tablica2;
}
