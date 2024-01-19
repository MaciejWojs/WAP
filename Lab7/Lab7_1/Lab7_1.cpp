/*
	Napisz program, który zwraca ilość dni we wskazanym miesiącu (użyj funkcji oraz typu wyliczeniowego)
*/

#include <iostream>
#include <string>

enum class miesiac_numer {
	STYCZEN = 1,
	LUTY,
	MARZEC,
	KWIECIEN,
	MAJ,
	CZERWIEC,
	LIPIEC,
	SIERPIEN,
	WRZESIEN,
	PAZDZIERNIK,
	LISTOPAD,
	GRUDZIEN,
};

enum class miesiac_dni {
	STYCZEN = 31,
	LUTY = 28,
	MARZEC = 31,
	KWIECIEN = 30,
	MAJ = 31,
	CZERWIEC = 30,
	LIPIEC = 31,
	SIERPIEN = 31,
	WRZESIEN = 30,
	PAZDZIERNIK = 31,
	LISTOPAD = 30,
	GRUDZIEN = 31,
};

int podajZmiennaINT(std::string wiadomosc) {
	int zmienna;
	do {
		std::cout << wiadomosc;
		std::cin >> zmienna;
		if (zmienna < 1 || zmienna > 12) {
			std::cout << "Podana liczba nie jest numerem miesiaca\n";
			std::cin.clear();
			std::cin.ignore();
			continue;
		}
		if (!std::cin.fail()) break;
		else {
			std::cout << "Podano zle dane\n";
			std::cin.clear();
			std::cin.ignore();
		}
	} while (true);
	return zmienna;
}

int liczbaDniWMiesiacu(int miesiac) {
	int zmienna;
	switch (miesiac) {
		case (int) miesiac_numer::STYCZEN:
			zmienna = (int) miesiac_dni::STYCZEN;
			break;
		case (int) miesiac_numer::LUTY:
			zmienna = (int) miesiac_dni::LUTY;
			break;
		case (int) miesiac_numer::MARZEC:
			zmienna = (int) miesiac_dni::MARZEC;
			break;
		case (int) miesiac_numer::KWIECIEN:
			zmienna = (int) miesiac_dni::KWIECIEN;
			break;
		case (int) miesiac_numer::MAJ:
			zmienna = (int) miesiac_dni::MAJ;
			break;
		case (int) miesiac_numer::CZERWIEC:
			zmienna = (int) miesiac_dni::CZERWIEC;
			break;
		case (int) miesiac_numer::LIPIEC:
			zmienna = (int) miesiac_dni::LIPIEC;
			break;
		case (int) miesiac_numer::SIERPIEN:
			zmienna = (int) miesiac_dni::SIERPIEN;
			break;
		case (int) miesiac_numer::WRZESIEN:
			zmienna = (int) miesiac_dni::WRZESIEN;
			break;
		case (int) miesiac_numer::PAZDZIERNIK:
			zmienna = (int) miesiac_dni::PAZDZIERNIK;
			break;
		case (int) miesiac_numer::LISTOPAD:
			zmienna = (int) miesiac_dni::LISTOPAD;
			break;
		case (int) miesiac_numer::GRUDZIEN:
			zmienna = (int) miesiac_dni::GRUDZIEN;
			break;
		default:
			zmienna = 0;
	}
	return zmienna;
}

int main() {
	std::cout << "Liczba dni w miesiacu: " << liczbaDniWMiesiacu(podajZmiennaINT("Podaj numer miesiaca: ")) << std::endl;
}
