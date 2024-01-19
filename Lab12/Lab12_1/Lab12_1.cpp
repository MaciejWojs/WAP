/*
	Napisz program, który obliczy wartość funkcji trygonometrycznych dla kąta pobranego od użytkownika. Kąt podajemy w stopniach.
*/
#include <iostream>
#include <iomanip>
#include <string>
#define _USE_MATH_DEFINES // Dokumentacja microsoft: https://learn.microsoft.com/pl-pl/cpp/c-runtime-library/math-constants?view=msvc-170
#include <math.h>


double pobierzDane(std::string wiadomosc) {
	double zmienna;
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

double stopnie_na_radiany(double katy) {
	return katy / 180.0 * M_PI; // Stała matematyczna zdefiniowana w math.h

}

int	main() {
	double radiany = stopnie_na_radiany(pobierzDane("Podaj wartosci kata: "));
	std::cout << std::fixed << std::setprecision(4) << "Wartosc sinusa: " << std::sin(radiany) << std::endl;
	std::cout << std::fixed << std::setprecision(4) << "Wartosc cosinusa: " << std::cos(radiany) << std::endl;
	std::cout << std::fixed << std::setprecision(4) << "Wartosc tangensa: " << std::tan(radiany) << std::endl;
}