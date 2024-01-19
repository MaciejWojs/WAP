/*
	(4) * Napisz funkcję, która zwraca n-ty element ciągu określonego wzorem (n oraz q pobierz od
	użytkownika, użyj rekurencji)
	a(n+1)=a(n)*q
*/
#include <iostream>
#include <string>

int pobierzZmiennaINT(std::string wiadomosc) {
	int zmienna;
	do
	{
		std::cout << wiadomosc;
		std::cin >> zmienna;
		if (!std::cin.fail()) break;
		std::cout << "Wprowadzono bledne dane!\n";
		std::cin.clear();
		std::cin.ignore();
	} while (true);
	return zmienna;
}

int ntyCiagu(int& a, int n, int q, int& licznik) {
	if (licznik < n && a != n) {
		licznik++;
		a *= q;
		ntyCiagu(a, n, q, licznik);
	}
	return a;
}

int main()
{
	//int a = pobierzZmiennaINT("Podaj pierwszy wyraz ciagu geometrycznego: ");
	int a = 1;
	int q = pobierzZmiennaINT("Podaj wartosc q: ");
	int n = pobierzZmiennaINT("Podaj n-ty wyraz ciagu geometrycznego do obliczenia: ");
	int licznik = 1;
	int wynik = ntyCiagu(a, n, q, licznik);

	std::cout << n << " wyraz tego ciagu wynnosi: " << wynik << std::endl;
}
