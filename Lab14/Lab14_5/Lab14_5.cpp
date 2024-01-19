// Napisz funkcję typu bo1ol, której argumentami są tablica oraz liczba jej elementów. Funkcja powinna ustalać, czy dane w tablicy są posortowane.

#include <iostream>
#include <string>
using string = std::string;
bool posortowana(const int rozmiar, const int *tablica) {
	bool wynik = true;
	if (!(rozmiar > 1 && rozmiar <= 2)) {
		for (int i = 0; i < rozmiar - 1; i++) {
			if (tablica[i] <= tablica[i + 1]) {
				continue;
			} else {
				wynik = false;
				break;
			}
		}
	} else {
		if (tablica[0] > tablica[1]) wynik = false;
	}
	return wynik;
}

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
	int rozmiar = pobierzDane("Podaj rozmiar tablicy: ");
	int *tab = new int[rozmiar];

	//std::cout << rozmiar;

	std::cout << "Wprowadz tablice: \n";
	for (int i = 0; i < rozmiar; i++) {
		string temp = '[' + std::to_string(i) + "]: ";
		tab[i] = pobierzDane(temp);
	}

	for (int i = 0; i < rozmiar; i++) {
		std::cout << tab[i] << std::endl;
	}

	(posortowana(rozmiar, tab)) ? std::cout << "Tablica jest posortowana" : std::cout << "Tablica nie jest posortowana";
	delete[] tab;
}