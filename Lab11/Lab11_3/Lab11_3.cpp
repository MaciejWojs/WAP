/*
	Napisz strukturę reprezentującą punkt na płaszczyźnie.
	Napisz funkcję która liczy odległość między tymi dwoma punktami.
*/
#include <iostream>
#include <string>
#include<cmath>
#include <iomanip>
using string = std::string;

double pobierzDane(string wiadomosc) {
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

struct punkt {
	double x, y;
	void stworzPunkt(string wiadomosc = "") {
		std::cout << wiadomosc << std::endl;
		this->x = pobierzDane("X: ");
		this->y = pobierzDane("Y: ");
	}

	void wyswietlWspolzedne(string wiadomosc = "") {
		std::cout << wiadomosc << std::endl;
		std::cout << std::setprecision(4) << "X: " << this->x << std::endl;
		std::cout << std::setprecision(4) << "Y: " << this->y << std::endl;
	}
};

double odlegloscPunktow(punkt punkt1, punkt punkt2) {
	return sqrt(pow(punkt2.x - punkt1.x, 2) + pow(punkt2.y - punkt1.y, 2));
}

int main() {
	punkt pkt1, pkt2;
	pkt1.stworzPunkt("Podaj wspolzedne 1 punktu: ");
	pkt2.stworzPunkt("Podaj wspolzedne 2 punktu: ");
	pkt1.wyswietlWspolzedne("Wspolzedne 1 punktu: ");
	pkt2.wyswietlWspolzedne("Wspolzedne 2 punktu: ");

	std::cout << std::setprecision(5) << "\nOdleglosc punktow: " << odlegloscPunktow(pkt1, pkt2) << std::endl;
}
