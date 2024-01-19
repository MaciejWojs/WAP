/*
	Zadanie 1
		a. Pobierz od użytkownika liczbę, następnie zaalokuj tablicę intów o takim rozmiarze.
		b. Wypełnij tablicę kolejnymi liczbami z przedziału [1, rozmiar]
		c. Wypisz wcześniej utworzoną i wypełnioną tablicę w jednej linii oddzielając każdy
		element przecinkiem.
		d. Zwolnij zaalokowaną tablicę.
*/
#include <iostream>
#include <string>
int pobierzZmiennaINT(std::string wiadomosc) {
	int zmienna;
	do {
		std::cout << wiadomosc;
		std::cin >> zmienna;
		if (zmienna < 0) continue;
		if (!std::cin.fail()) break;
		std::cout << "Podano bledne dane!\n";
		std::cin.ignore();
		std::cout.clear();
	} while (true);
	return zmienna;
}
int main() {
	int rozmiar = pobierzZmiennaINT("Podaj liczbe wieksza od zera: ");
	int * tablica = new int[rozmiar];
	for (int i = 0; i < rozmiar; i++) {
		tablica[i] = (1 + i);
	}

	for (int i = 0; i < rozmiar; i++) {
		if (i == (rozmiar - 1)) std::cout << tablica[i];
		else std::cout << tablica[i] << ", ";
	}
	delete[] tablica;
}
