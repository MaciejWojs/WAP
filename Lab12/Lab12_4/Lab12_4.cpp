/*
	Napisz program, któryzaalokuje macierz (tablicę dwuwymiarową)
	i wypełni ją losowymi liczbami z zakresu podanego przez użytkownika.
	Macierz po wypełnieniu należy wypisać na ekranie w formie macierzy.
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
using string = std::string;

int pobierzDane(string wiadomosc) {
	int dane;
	do {
		std::cout << wiadomosc;
		std::cin >> dane;
		if (!std::cin.fail()) {
			if (dane < 1) {
				std::cout << "Podana liczba nie moze byc mniejsza od 1!\n";
				continue;
			} else break;
		}
		std::cout << "Podano zle dane!\n";
		std::cin.clear(), std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	} while (true);
	return dane;
}

struct Macierz {
	int wiersze, kolumny, **macierz;

	Macierz(int wiersze = 0, int kolumny = 0) {
		if (wiersze == 0 || kolumny == 0) {
			this->wiersze = pobierzDane("Podaj liczbe wierszy: ");
			this->kolumny = pobierzDane("Podaj liczbe kolumn: ");
		} else {
			this->wiersze = wiersze;
			this->kolumny = kolumny;
		}
		this->macierz = new int *[this->wiersze];
		for (int i = 0; i < this->wiersze; i++) {
			this->macierz[i] = new int[this->kolumny];
		}
		uzupelnijMacierzRandom();
	}

	void wyswietlMacierz(string wiadomosc = "") {
		std::cout << std::endl << wiadomosc << std::endl;
		int rozmiar_dynamiczny = najElement();
		for (int i = 0; i < this->wiersze; i++) {
			for (int j = 0; j < this->kolumny; j++) {
				std::cout << std::setw(std::to_string(rozmiar_dynamiczny).length() + 2) << this->macierz[i][j];
			}
			std::cout << std::endl;
		}
	}

	~Macierz() {
		std::cout << "\nZwalnianie pamieci po obiekcie\n";
		for (int i = 0; i < this->wiersze; i++) delete[]this->macierz[i];
		delete[] this->macierz;
	}

	private:
	void uzupelnijMacierzRandom() {
		int a = pobierzDane("Podaj a: ");
		int b = pobierzDane("Podaj b: ");
		if (a > b) std::swap(a, b);
		for (int i = 0; i < this->wiersze; i++) {
			for (int j = 0; j < this->kolumny; j++) {
				this->macierz[i][j] = rand() % (a - b) + a + 1;
			}
		}
	}

	int najElement() {
		int najwiekszy = 0;
		for (int i = 0; i < this->wiersze; i++) {
			for (int j = 0; j < this->kolumny; j++) {
				if (this->macierz[i][j] > najwiekszy) najwiekszy = this->macierz[i][j];
			}
		}
		return najwiekszy;
	}
};

int main() {
	srand(time(NULL));
	Macierz macierz;
	macierz.wyswietlMacierz("Automatycznie uzupełniona macierz: ");
}