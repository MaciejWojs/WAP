/*
	Zaalokuj  tablicę  dwuwymiarową  typu  std::string  pobierając  jej  wymiary  od użytkownika.
	Wypełnij tablicę zaalokowaną w poprzednim punkcie  wartościami string według schematu (w pdf do Lab 9)
	Wypisz tablicę w takiej formie jak na obrazku wyżej.
	Zwolnij zaalokowaną tablicę dwuwymiarową.
*/
#include <iostream>
#include <string>
using string = std::string;
int pobierzZmiennaINT(std::string wiadomosc) {
	int zmienna;
	do {
		std::cout << wiadomosc;
		std::cin >> zmienna;
		if (zmienna < 1) continue;
		if (!std::cin.fail()) break;
		std::cout << "Podano bledne dane!\n";
		std::cin.ignore();
		std::cout.clear();
	} while (true);
	return zmienna;
}

int main() {
	int wierszy = pobierzZmiennaINT("Podaj liczbe wierszy: ");
	int kolumn = pobierzZmiennaINT("Podaj liczbe kolumn: ");

	string ** tablica = new string * [wierszy];

	for (int i = 0; i < wierszy; i++) tablica[i] = new string[kolumn];

	for (int i = 0; i < wierszy; i++) {
		for (int j = 0; j < kolumn; j++) {
			string temp = '[' + std::to_string(i + 1) + "][" + std::to_string(1 + j) + "]";
			tablica[i][j] = temp;
		}
	}


	for (int i = 0; i <= wierszy; i++) {
		for (int j = 0; j <= kolumn; j++) {
			if (i == 0 && j == 0) {
				std::cout << "   ";
				continue;
			}
			if (i == 0) {
				std::cout << " " << (j) << " ";
				continue;
			}
			if (j == 0) {
				std::cout << " " << (i) << " ";
				continue;
			}
			std::cout << tablica[i - 1][j - 1] << " ";
		}
		std::cout << std::endl;
	}

	for (int i = 0; i < wierszy; i++) delete[] tablica[i];
	delete[] tablica;

	return 0;
}
