//Napisz program, który posortuje tablicę za pomocą algorytmu bąbelkowego.
#include <iostream>
#include <ctime>
#include <string>
using string = std::string;

int pobierzDane(const string wiadomosc) {
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


void sortowanieBabelkowe(int *tab, const int rozmiar) {
	int *wskaznik;
	bool zmieniono = false;
	do {
		zmieniono = false;
		wskaznik = tab;
		for (int i = 0; i < rozmiar - 1; i++) {
			int temp;
			if (*wskaznik > *(wskaznik + 1)) {
				std::swap(*wskaznik, *(wskaznik + 1));
				zmieniono = true;
			}
			wskaznik++;
		}
	} while (zmieniono);
}


int main() {
	srand(time(NULL));

	int rozmiarTablicy = pobierzDane("Podaj rozmiar tablicy: ");
	int modyfikatorRand = pobierzDane("Podaj modyfikator randowomych wartosci (np. 100): ");

	int *tab = new int[rozmiarTablicy];

	for (int i = 0; i < rozmiarTablicy; i++) {
		tab[i] = rand() % modyfikatorRand;
	}

	std::cout << "Tablica przed sortowaniem:\n";
	for (int i = 0; i < rozmiarTablicy; i++) {
		std::cout << tab[i] << ' ';
	}
	std::cout << std::endl;
	std::cout << std::endl;

	sortowanieBabelkowe(tab, rozmiarTablicy);

	std::cout << "Tablica po sortowaniu:\n";
	for (int i = 0; i < rozmiarTablicy; i++) {
		std::cout << tab[i] << ' ';
	}
	std::cout << std::endl;

	delete[] tab;
}
