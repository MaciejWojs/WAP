//Napisz program sortujący tablicę liczb za pomocą algorytmu przez wybieranie

#include <iostream>
#include <ctime>
const int rozmiarTablicy = 10;

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
	int tab[rozmiarTablicy] = {};
	int *wskaznik = tab;

	for (int i = 0; i < rozmiarTablicy; i++) {
		*wskaznik = rand() % 100;
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