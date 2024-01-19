/*
	Napisz program, który pobiera od użytkownika dane osobowe dla n osób i zapisuje je w obiektach umieszczonych w tablicy.
	Gdy użytkownik wprowadzi wszystkie osoby wypisz ich dane na ekranie
*/
#include <iostream>
#include <string>
using string = std::string;

int pobierzINT(string wiadomosc) {
	int zmienna;
	do {
		std::cout << wiadomosc;
		std::cin >> zmienna;
		if (!std::cin.fail()) {
			if (zmienna < 1) {
				std::cout << "Podana zmienna nie moze byc mniejsza od 1!\n";
				continue;
			} else break;
		}
		std::cout << "Wprowadzono bledne dane!\n";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	} while (true);
	return zmienna;
}

struct ludz {
	string imie, nazisko;
	unsigned wiek = 0;

	void pobierzDaneOsobowe() {
		std::cout << "Podaj imie: ";
		std::cin >> this->imie;
		char temp = this->imie.front();
		this->imie.front() = std::toupper(temp);
		std::cout << "Podaj nazwisko: ";
		std::cin >> this->nazisko;
		temp = this->nazisko.front();
		this->nazisko.front() = std::toupper(temp);
		this->wiek = pobierzINT("Podaj wiek: ");
	}

	void przedstawSie() {
		std::cout << "\nJestem " << this->imie << ' ' << this->nazisko << std::endl;
		std::cout << "Mam " << this->wiek << " lat.\n\n";
	}
};


ludz *stworzTablice(int &rozmiar) {
	ludz *tablica = new ludz[rozmiar];
	return tablica;
}

void zwolnijTablice(ludz *tablica) {
	delete[] tablica;
}

int main() {
	int ilosc = pobierzINT("Podaj ilosc danych ktore chcesz wrpowadzic: ");
	ludz *tablica = stworzTablice(ilosc);
	ludz *wskaznik = tablica;

	for (int i = 0; i < ilosc; i++) {
		ludz czlowiek;
		czlowiek.pobierzDaneOsobowe();
		*wskaznik = czlowiek;
		if (i < ilosc - 1) wskaznik++;
	}
	wskaznik = tablica;

	for (int i = 0; i < ilosc; i++) {
		wskaznik->przedstawSie();
		if (i < ilosc - 1) wskaznik++;
	}

	zwolnijTablice(tablica);
}