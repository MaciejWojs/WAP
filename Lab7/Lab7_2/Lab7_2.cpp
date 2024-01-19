/*
	Napisz program, który konwertuje liczbę w systemie (DEC/HEX/BIN) na liczbę (DEC/HEX/BIN).
	Rodzaj liczby wejściowej i wyjściowej podaj do funkcji za pomocą typu wyliczeniowego.
*/
#include <iostream>
#include <string>
using std::string;

enum class konwersja {
	DEC, HEX, BIN
};

string podajZmiennaSTRING(string wiadomosc) {
	string temp;
	do {
		std::cout << wiadomosc;
		std::cin >> temp;
		if (!std::cin.fail()) break;
		else {
			std::cout << "Podano zle dane\n";
			std::cin.clear();
			std::cin.ignore();
		}
	} while (true);

	return 	temp;
}

int podajZmiennaINT(string wiadomosc) {
	int temp;
	do {
		std::cout << wiadomosc;
		std::cin >> temp;
		if (!std::cin.fail()) break;
		else {
			std::cout << "Podano zle dane\n";
			std::cin.clear();
			std::cin.ignore();
		}
	} while (true);

	return 	temp;
}

int podajNumerOperacji(string wiadomosc) {
	int temp;
	do {
		temp = podajZmiennaINT(wiadomosc);
		std::cout << "\nPodaj liczbe 0, 1 lub 2\n";
	} while (temp != (int) konwersja::DEC && temp != (int) konwersja::HEX && temp != (int) konwersja::BIN);
	return temp;
}

konwersja operacja(int ktoraOperacja) {
	konwersja system = konwersja::DEC;
	switch (ktoraOperacja) {
		case 0:
			system = konwersja::DEC;
			break;
		case 1:
			system = konwersja::HEX;
			break;
		case 2:
			system = konwersja::BIN;
			break;
		default:
			system = konwersja::DEC;
			break;
	}
	return system;
}

string decToBin(string a) {
	int i = std::stoi(a);
	string temp = "";
	for (i; i != 0; i /= 2) temp += std::to_string(i % 2);
	return temp;
}

string binReverse(string temp) {
	string wynik = "";
	for (int i = temp.length() - 1; i >= 0; i--) wynik += temp[i];
	return wynik;
}

string binToHexFix(string temp) {
	if (temp.length() % 4 != 0) {
		for (int i = temp.length(); i % 4 != 0; i++) temp += '0';
	}
	return temp;
}

string binToDec(string temp) {
	int suma = 0;
	string wynik = "";
	temp = binReverse(temp);
	for (int i = 0, j = 1; i <= temp.length() - 1; j *= 2, i++) {
		if (temp[i] == '0')continue;
		else suma += j;
	}
	return std::to_string(suma);
}

string binToHex(string temp) {
	string wynik = "", bity = "";
	for (int i = 0; i < temp.length(); i += 4) {
		for (int j = i; j < i + 4; j++)bity += temp[j];
		switch (std::stoi(bity)) {
			case 0:
				wynik += '0';
				break;
			case 1:
				wynik += '1';
				break;
			case 10:
				wynik += '2';
				break;
			case 11:
				wynik += '3';
				break;
			case 100:
				wynik += '4';
				break;
			case 101:
				wynik += '5';
				break;
			case 110:
				wynik += '6';
				break;
			case 111:
				wynik += '7';
				break;
			case 1000:
				wynik += '8';
				break;
			case 1001:
				wynik += '9';
				break;
			case 1010:
				wynik += 'A';
				break;
			case 1011:
				wynik += 'B';
				break;
			case 1100:
				wynik += 'C';
				break;
			case 1101:
				wynik += 'D';
				break;
			case 1110:
				wynik += 'E';
				break;
			case 1111:
				wynik += 'F';
				break;
		}
		bity = "";
	}
	return wynik;
}

string hexToBin(string temp) {
	string wynik = "";
	for (int i = 0; i < temp.length(); i++)
		switch (temp[i]) {
			case '0':
				wynik += "0000";
				break;
			case '1':
				wynik += "0001";
				break;
			case '2':
				wynik += "0010";
				break;
			case '3':
				wynik += "0011";
				break;
			case '4':
				wynik += "0100";
				break;
			case '5':
				wynik += "0101";
				break;
			case '6':
				wynik += "0110";
				break;
			case '7':
				wynik += "0111";
				break;
			case '8':
				wynik += "1000";
				break;
			case '9':
				wynik += "1001";
				break;
			case 'a':
			case 'A':
				wynik += "1010";
				break;
			case 'b':
			case 'B':
				wynik += "1011";
				break;
			case 'c':
			case 'C':
				wynik += "1100";
				break;
			case 'd':
			case 'D':
				wynik += "1101";
				break;
			case 'e':
			case 'E':
				wynik += "1110";
				break;
			case 'f':
			case 'F':
				wynik += "1111";
				break;
		}
	return wynik;
}

string obliczanie(konwersja typLiczbyWejsciowej, konwersja typLiczbyDocelowej, string liczbaWejsciowa) {
	string temp = "", wynik = "";
	switch (typLiczbyWejsciowej) {
		default:
		case konwersja::DEC:
			switch (typLiczbyDocelowej) {
				default:
				case konwersja::DEC:
					wynik += liczbaWejsciowa;
					break;
				case konwersja::HEX:
					temp = binReverse(binToHexFix(decToBin(liczbaWejsciowa)));
					wynik = binToHex(temp);
					break;
				case konwersja::BIN:
					temp = decToBin(liczbaWejsciowa);
					wynik = binReverse(temp);
					break;
			}
			break;
		case konwersja::HEX:
			switch (typLiczbyDocelowej) {
				case konwersja::DEC:
					wynik = binToDec(hexToBin(liczbaWejsciowa));
					break;
				default:
				case konwersja::HEX:
					wynik += liczbaWejsciowa;
					break;
				case konwersja::BIN:
					wynik = hexToBin(liczbaWejsciowa);
					break;
			}
			break;
		case konwersja::BIN:
			switch (typLiczbyDocelowej) {
				case konwersja::DEC:
					wynik = binToDec(liczbaWejsciowa);
					break;
				case konwersja::HEX:
					wynik = binToHex(binReverse(binToHexFix(binReverse(liczbaWejsciowa))));
					break;
				default:
				case konwersja::BIN:
					wynik += liczbaWejsciowa;
					break;
					break;
			}
	}
	return wynik;
}

int main() {
	string liczbaWejsciowa = podajZmiennaSTRING("Podaj liczbe wejsciowa: ");
	std::cout << "(0 -> DEC, 1 -> HEX, 2 -> BIN)\n";
	konwersja typLiczbyWejsciowej = operacja(podajNumerOperacji("Podaj numer systemu dla liczby wejsciowej: "));
	konwersja typLiczbyDocelowej = operacja(podajNumerOperacji("Podaj numer systemu  dla liczby docelowej: "));
	string wynik = obliczanie(typLiczbyWejsciowej, typLiczbyDocelowej, liczbaWejsciowa);
	std::cout << wynik << std::endl;

	std::cout << "Naciśnij Enter, aby zakończyć program...";
	std::cin.get();
}