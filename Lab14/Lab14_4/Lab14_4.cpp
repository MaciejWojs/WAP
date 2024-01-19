/*
	Napisz  program  sprawdzający,  czy  dana  liczba  naturalna  jest  elementem  ciągu fibonacciego.
	Program powinien wczytywać liczbę ze standardowego wejścia i drukować na standardowe wyjście odpowiedni komunikat.
*/
#include <iostream>
#include <fstream>
#include <string>
using string = std::string;
string nazwaPliku = "fib.txt";

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

void stworzPlik() {
	int poprzedni = 0, nastepny = 1;
	std::fstream plik(nazwaPliku, std::ios::out | std::ios::app);
	if (!plik.is_open()) {
		std::cerr << "Nie mozna otworzyc pliku " << nazwaPliku << std::endl;
		exit(-1);
	} else {
		for (int i = 0; i <= 21; i++) {
			poprzedni += nastepny;
			nastepny += poprzedni;
			plik << poprzedni << std::endl;
			plik << nastepny << std::endl;
			//std::cout << poprzedni << std::endl;
			std::cout << "poprzedni: " << poprzedni << std::endl << "nastepny: " << nastepny << std::endl;
		}
	}
}


int main() {
	int liczba_do_sprawdzenia = pobierzDane("Podaj liczbe do sprawdzenia: ");

	int tablica[50]{}; //inicjalizacja tablicy samymi 0
	int *wskaznik = tablica;

	std::fstream plik(nazwaPliku, std::ios::in);
	if (!plik.is_open()) {
		stworzPlik();
	} else plik.close();

	plik.open(nazwaPliku, std::ios::in);
	while (plik >> *wskaznik) wskaznik++;
	plik.close();

	bool znazeliono = false;
	for (int i : tablica) {
		if (i < liczba_do_sprawdzenia) continue;
		if (i > liczba_do_sprawdzenia) break;
		if (i == liczba_do_sprawdzenia) znazeliono = true;
	}

	(znazeliono) ? std::cout << "Podana liczba jest wyrazem ciagu Fibonacciego" : std::cout << "Podana liczba nie jest wyrazem ciagu Fibonacciego";
}
