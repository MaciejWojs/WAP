// Napisz program, który pobiera od użytkownika imię, następnie DOPISUJE je do pliku w nowej linii.
#include <fstream>
#include <iostream>
using string = std::string;
const string nazwaPliku = "plik3.txt";
int main() {
	string imie;
	std::cout << "Podaj imie: ";
	std::cin >> imie;

	std::fstream plik(nazwaPliku, std::ios::out | std::ios::app);
	plik << std::endl << imie;
	plik.close();
}
