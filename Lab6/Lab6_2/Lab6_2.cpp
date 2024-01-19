// (2) Napisz funkcję, która oblicza n-tą potęgę liczby m. Obie liczby to parametry funkcji.
#include <iostream>
#include <string>

int potegowanie(int a, int b) {
	int wynik = a;
	for (int i = 1; i < b; i++) wynik *= a;
	return wynik;
}

int pobierzZmiennaINT(std::string wiadomosc) {
	int a;
	do {
		std::cout << wiadomosc;
		std::cin >> a;
		if (!std::cin.fail()) break;
		std::cout << "Podano niepoprawne dane!\n";
		std::cin.clear();
		std::cin.ignore();
	} while (true);
	return a;
}

int main()
{
	int a = pobierzZmiennaINT("Podaj podstawe potegi: ");
	int b = pobierzZmiennaINT("Podaj wykladnik potegi: ");
	int wynik = potegowanie(a, b);

	std::cout << a << '^' << b << '=' << wynik;
}
