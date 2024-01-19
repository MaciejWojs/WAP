//Napisz program, który wczyta dane z powyższego obrazka do tablicy dwuwymiarowej. Wypisz tę tablice na ekranie.
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
using string = std::string;
const string nazwa = "plik1.txt";

struct Macierz {
	int wierszy;
	int kolumn;
	int **tablica;
	std::fstream plik;
	Macierz() {
		std::fstream plik;
		plik.open(nazwa, std::ios::in);

		if (!plik.is_open()) {
			std::cerr << "Bład otwierania plinu: " << nazwa << std::endl;
			exit(1);
		}


		int ilosc_lini = 0;
		string a;
		while (getline(plik, a)) {
			if (std::empty(a)) continue;
			ilosc_lini++;
			//std::cout << "a: " << a << ' ';
		}
		ilosc_lini--;
		std::cout << "obliczonych wierszy: " << ilosc_lini << std::endl;
		plik.close();


		plik.open(nazwa, std::ios::in);
		if (!plik.is_open()) {
			std::cerr << "Bład otwierania plinu: " << nazwa << std::endl;
			exit(1);
		}

		int ilosc_kolumn = 0;
		a = "";
		getline(plik, a);
		getline(plik, a);
		//std::cout << a << std::endl;

		for (size_t i = 0; i < a.length(); i++) {
			if (a[i] != ' ')continue;
			ilosc_kolumn++;
		}
		if (a[a.length() - 1] != ' ') ilosc_kolumn++;

		std::cout << "obliczonych kolumn (z pierwszego wiersza macierzy): " << ilosc_kolumn << std::endl;
		plik.close();
		plik.open(nazwa, std::ios::in);

		plik >> wierszy;
		plik >> kolumn;
		if (ilosc_lini < wierszy || ilosc_kolumn < kolumn) {
			plik.close();
			std::cerr << "wierszy lub kolumn w pliku jest mniej niz zadeklarowano!\n";
			exit(1);
		} else if (ilosc_lini > wierszy && kolumn == ilosc_kolumn) std::cout << "\nW pliku jest wiecej danych ktore moglyby byc wyswietlone\n";

		std::cout << "Pobranych wierszy: " << wierszy << " \nPobranych kolumn: " << kolumn << std::endl << std::endl;

		tablica = new int *[this->wierszy];
		for (int i = 0; i < this->wierszy; i++) tablica[i] = new int[this->kolumn];
		for (int i = 0; i < this->wierszy; i++) {
			for (int j = 0; j < this->kolumn; j++) {
				plik >> tablica[i][j];
				if (plik.fail()) break;
			}
		}
		//plik >> tablica[i][j];

		plik.close();
		for (int i = 0; i < this->wierszy; i++) {
			for (int j = 0; j < this->kolumn; j++) {
				std::cout << std::setw(5) << tablica[i][j];
			}
			std::cout << std::endl;
		}
		//std::cout << wierszy << ' ' << kolumn << std::endl;
	}
	~Macierz() {
		for (int i = 0; i < this->wierszy; i++) delete[] tablica[i];
		delete[] tablica;
	}
};

int main() {
	Macierz  macierz;
}