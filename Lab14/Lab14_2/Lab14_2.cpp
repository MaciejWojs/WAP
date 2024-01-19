/*
	Napisz program, który zaalokuje macierz minimum 5x5, wypełni ją losowymi liczbami z zakresu 0-99,
	a następnie:a.gdy x > y do komórki doda 1b.gdy x < y od komórki odejmie 1c.gdy x == y wyzeruje komórkę
*/
#include <ctime>
#include <iomanip>
#include <iostream>
#include <ostream>
#include <string>
using string = std::string;
const int MIN_TAB = 5;

int pobierzDane(string wiadomosc) {
	int dane;
	do {
		std::cout << wiadomosc;
		std::cin >> dane;
		if (!std::cin.fail()) {
			if (dane < MIN_TAB) {
				std::cout << "Podana liczba nie moze byc mniejsza niz " << MIN_TAB << std::endl;
				continue;
			} else break;
		}
		std::cout << "Podano zle dane!\n";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	} while (true);
	return dane;
}

struct Macierz {
	int **tablica, wierzszy, kolumn;
	Macierz() {
		this->wierzszy = pobierzDane("Podaj liczbe wierszy: ");
		this->kolumn = pobierzDane("Podaj liczbe kolumn: ");
		tablica = new int *[this->wierzszy];
		for (int i = 0; i < this->wierzszy; i++) {
			tablica[i] = new int[this->kolumn];
		}
		for (int i = 0; i < this->wierzszy; i++) {
			for (int j = 0; j < this->kolumn; j++) {
				tablica[i][j] = rand() % 100;
			}
		}

		std::cout << *this << std::endl;

		for (int i = 0; i < this->wierzszy; i++) {
			for (int j = 0; j < this->kolumn; j++) {
				if (i > j) {
					tablica[i][j] += 1;
				} else if (i < j) {
					tablica[i][j] -= 1;
				} else if (i == j) tablica[i][j] = 0;
			}
		}
	}

	friend std::ostream &operator<<(std::ostream &strumien, const Macierz macierz) {
		for (int i = 0; i < macierz.wierzszy; i++) {
			for (int j = 0; j < macierz.kolumn; j++) {
				strumien << std::setw(4) << macierz.tablica[i][j];
			}
			strumien << std::endl;
		}
		return strumien;
	}
};

int main() {
	srand(time(NULL));
	Macierz macierz;
	std::cout << macierz;
}
