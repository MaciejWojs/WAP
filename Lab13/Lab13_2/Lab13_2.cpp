/*
	Napisz program, który wczytuje listę zakupów z pliku tekstowego (każda linia to produkt) w formacie:
	produkt ilość cena_jednostkowa np.
		maslo 2 6.89
	Następnie oblicz koszt zakupów.
*/
#include <fstream>
#include <iostream>
#include <istream>
#include <ostream>
#include <string>
using string = std::string;
const string nazwaPliku = "plik2.txt";

struct Linia {
	string nazwa;
	int ilosc;
	double cena;
	friend std::istream &operator>>(std::istream &strumien, Linia &linia) {
		strumien >> linia.nazwa;
		strumien >> linia.ilosc;
		strumien >> linia.cena;
		return strumien;
	}
	friend std::ostream &operator<<(std::ostream &strumien, const Linia &linia) {
		strumien << "Nazwa: " << linia.nazwa << std::endl << "Ilosc: " << linia.ilosc << std::endl << "Cena: " << linia.cena << std::endl << std::endl;
		return strumien;
	}
};

struct ListaZakupow {
	Linia *lista;
	double cenaFinalna = 0;
	int wiersze = 0;

	ListaZakupow() {
		std::fstream plik(nazwaPliku, std::ios::in);
		if (!plik.is_open()) {
			std::cerr << "Blad otwierania plinu: " << nazwaPliku << std::endl;
			exit(1);
		}

		string linia;
		while (getline(plik, linia)) {
			if (linia.empty()) continue;
			wiersze++;
		}
		plik.close();
		plik.open(nazwaPliku, std::ios::in);
		//std::cout << wiersze;

		lista = new Linia[wiersze];
		for (int i = 0; i < wiersze; i++) {
			plik >> lista[i];
		}

		for (int i = 0; i < wiersze; i++) {
			cenaFinalna += (lista[i].cena * lista[i].ilosc);
		}
		plik.close();
	}

	friend std::ostream &operator<<(std::ostream &strumien, const ListaZakupow &listaZakupow) {
		strumien << "Lista zakupow: \n";
		for (int i = 0; i < listaZakupow.wiersze; i++) {
			strumien << listaZakupow.lista[i];
		}
		strumien << "Cena calkowita listy zakupow: " << listaZakupow.cenaFinalna << std::endl;
		return strumien;
	}

	~ListaZakupow() {
		delete[] this->lista;
	}
};

int main() {
	ListaZakupow listaZakupow;
	std::cout << listaZakupow;
}