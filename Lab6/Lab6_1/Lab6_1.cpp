// (1) Napisz funkcję, która sprawdza czy podana w parametrze liczba jest pierwsza
#include <iostream>
#include <string>

int pobierzZmiennaINT(std::string wiadomosc) {
	int zmienna;
	do
	{
		std::cout << wiadomosc;
		std::cin >> zmienna;
		if (!std::cin.fail()) break;
		std::cout << "Wprowadzono zle dane!\n";
		std::cin.clear();
		std::cin.ignore();
	} while (true);
	return zmienna;
}

bool isPrimary(int a) {
	int dzielniki = 0;
	if (a < 2) return false;
	for (int i = 1; i <= a; i++)
		if (a % i == 0) dzielniki++;
	return (dzielniki == 2) ? true : false;
}

bool isPrimary2(int a) {
	if ((a >= 2 && a % 2 != 0 && a % 3 != 0 && a % 5 != 0 && a % 7 != 0) || (a == 2 || a == 3 || a == 5 || a == 7))
		return true;
	else return false;
}

int main()
{
	int a = pobierzZmiennaINT("Podaj liczbe do sprawdzenia: ");

	std::cout << "Sposob 1: liczba " << a << ' ';
	(isPrimary(a)) ? std::cout << "jest pierwsza" : std::cout << "nie jest pierwsza";
	std::cout << std::endl;

	std::cout << "Sposob 2: liczba " << a << ' ';
	(isPrimary2(a)) ? std::cout << "jest pierwsza" : std::cout << "nie jest pierwsza";
	std::cout << std::endl;

	return 0;
}