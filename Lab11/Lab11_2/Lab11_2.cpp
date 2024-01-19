/*
	Stwórz struktury reprezentujące kilka figur geometrii płaskiej.
	Dla każdej struktury napisz funkcję, która oblicza pole tej figury.
*/
#include <iostream>
#include <string>
#include <cmath>
#include<iomanip>
using string = std::string;

double pobierzDane(string wiadomosc) {
	double zmienna;
	do {
		std::cout << wiadomosc;
		std::cin >> zmienna;
		if (!std::cin.fail()) {
			if (zmienna < 1) {
				std::cout << "Podana zmienna nie moze byc mniejsza od 1!\n";
				continue;
			} else break;
		}
		std::cout << "Podano zle dane!\n";
		std::cin.clear();
		//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin.ignore();
	} while (true);
	return zmienna;
}

struct prostokat {
	double a, b;

	void stworzProstokat() {
		this->a = pobierzDane("Podaj dlugosc boku a prostokata: ");
		this->b = pobierzDane("Podaj dlugosc boku b prostokata: ");
	}

	double pole() {
		return this->a * this->b;
	}
	double obwod() {
		return (2 * a + 2 * b);
	}
	void wyswietl_Pole_Obwod_Prostokata() {
		std::cout << std::endl << std::endl;
		std::cout << std::setprecision(5) << "Obwod prostokata: " << this->obwod() << std::endl;
		std::cout << std::setprecision(5) << "Pole prostokata: " << this->pole() << std::endl;
	}
};

struct kwadrat {
	double a;

	void stworzKwadrat() {
		this->a = pobierzDane("Podaj dlugosc boku a kwadratu: ");
	}

	double pole() {
		return std::pow(this->a, 2);
	}
	double obwod() {
		return (this->a * 4);
	}
	void wyswietl_Pole_Obwod_Kwadratu() {
		std::cout << std::endl << std::endl;
		std::cout << std::setprecision(5) << "Obwod kwadratu: " << this->obwod() << std::endl;
		std::cout << std::setprecision(5) << "Pole kwadratu: " << this->pole() << std::endl;
	}
};

int main() {
	prostokat p1;
	kwadrat k1;
	p1.stworzProstokat();
	k1.stworzKwadrat();
	p1.wyswietl_Pole_Obwod_Prostokata();
	k1.wyswietl_Pole_Obwod_Kwadratu();
}