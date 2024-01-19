/*
	Napisz program, który wypisze wszystkie liczby z  zakresu m do n,
	dla  których wartość pierwiastka kwadratowego jest liczbą całkowitą.
*/
#include<cmath>
#include <iostream>
#include <string>

int pobierzDane(std::string wiadomosc) {
	int zmienna;
	do {
		std::cout << wiadomosc;
		std::cin >> zmienna;
		if (!std::cin.fail()) {
			break;
		}
		std::cout << "Podano zle dane!\n";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	} while (true);
	return zmienna;
}

void wypisz(int &m, int &n) {
	if (m > n) std::swap(m, n);

	for (int i = m; i <= n; i++) {
		double temp = std::sqrt(i);
		if (temp == (int) temp) std::cout << i << std::endl;
	}
}

int main() {
	int m = pobierzDane("Podaj m: ");
	int n = pobierzDane("Podaj n: ");
	wypisz(m, n);
}
