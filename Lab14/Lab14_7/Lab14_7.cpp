//Napisz program sortujący tablicę liczb za pomocą algorytmu przez wybieranie

#include <iostream>
#include <ctime>
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
		std::cin.ignore(std::numeric_limits<std::streamsize>::max());
	} while (true);
	return dane;
}

void sort(int *tab, const int rozmiar) {
	for (int i = 0; i < rozmiar - 1; i++) {
		int naj = tab[i + 1], najIndeks = i + 1;
		for (int j = i + 1; j < rozmiar; j++) {
			if (tab[j] < naj) {
				naj = tab[j];
				najIndeks = j;
			}
		}
		if (tab[i] > naj) std::swap(tab[i], tab[najIndeks]);
	}
}

int main() {
	srand(time(NULL));

	int rozmiarTablicy = pobierzDane("Podaj rozmiar tablicy: ");

	int *tab = new int[rozmiarTablicy];
	int *wskaznik = tab;

	for (int i = 0; i < rozmiarTablicy; i++) {
		*wskaznik = rand() % rozmiarTablicy;
		wskaznik++;
	}

	wskaznik = tab;

	std::cout << "Tablica przed posortowaniem: \n";
	for (int i = 0; i < rozmiarTablicy; i++) {
		std::cout << *wskaznik << ' ';
		wskaznik++;
	}
	wskaznik = tab;

	std::cout << std::endl;
	std::cout << std::endl;

	sort(tab, rozmiarTablicy);
	std::cout << "Tablica po sortowaniu:\n";
	for (int i = 0; i < rozmiarTablicy; i++) {
		std::cout << *wskaznik << ' ';
		wskaznik++;
	}
	wskaznik = tab;
	std::cout << std::endl;
}