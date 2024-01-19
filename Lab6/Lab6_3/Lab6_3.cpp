// (3) Napisz funkcję, która zwraca n-ty element ciągu fibonnaciego
#include <iostream>
#include <string>

unsigned long nFibonacciego(int n) {
	long poprzedni = 0, obecny = 1;
	for (int i = 1; i < n; i++) {
		obecny += poprzedni;
		poprzedni = obecny - poprzedni;
	}
	return obecny;
}

int pobierzZmiennaINT(std::string wiadomosc) {
	int zmienna;
	do {
		std::cout << wiadomosc;
		std::cin >> zmienna;
		if (!std::cin.fail()) break;
		std::cout << "Wprowadzono niepoprawne dane!\n";
		std::cin.clear();
		std::cin.ignore();
	} while (true);
	return zmienna;
}

int main()
{
	int n = pobierzZmiennaINT("Podaj liczbe n ciagu fibonacciego: ");
	long wynik = nFibonacciego(n);
	std::cout << "Wyraz " << n << " ciagu fibonacciego to " << wynik << std::endl;
}
