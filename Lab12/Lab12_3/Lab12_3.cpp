/*
	Napisz program, który dla podanego a,b,c obliczy miejsca zerowe funkcji kwadratowe
*/
#include <iostream>
#include <cmath>
#include<string>
#define delta(a, b, c) (pow(b, 2) + (-4*a*c))
double pobierzDane(std::string wiadmosc) {
	double dane;
	do {
		std::cout << wiadmosc;
		std::cin >> dane;
		if (!std::cin.fail()) break;
		std::cout << "Podano zle dane!\n";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	} while (true);
	return dane;
}

void oblicz(double &a, double &b, double &c) {
	if (delta(a, b, c) < 0) std::cout << "Brak miejsc zerowych";
	else if (delta(a, b, c) == 0) {
		std::cout << "Miejsce zerowe: " << (-b) / (2 * a);
	} else {
		std::cout << "Miejsce zerowe (1): " << (-b - sqrt(delta(a, b, c))) / (2 * a) << std::endl;
		std::cout << "Miejsce zerowe (2): " << (-b + sqrt(delta(a, b, c))) / (2 * a) << std::endl;
	}

}
int main() {
	double a = pobierzDane("Podaj a: ");
	double b = pobierzDane("Podaj b: ");
	double c = pobierzDane("Podaj c: ");
	oblicz(a, b, c);
}
