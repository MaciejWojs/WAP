/*
	Napisz funkcję która:
		a. przyjmuje dwa parametry:
			i. napis w formie std::string
			ii. separator w formie znaku char
		b. dzieli podany w parametrze łańcuch względem podanego znaku na części je wyświetla

	funkcja(”1,2,3,4,5”, ‘,’) -> wyświetli w osobnych liniach: „1” potem „2” potem „3” itp
*/
#include <iostream>
#include <string>
using string = std::string;

void podzial(string wiadomosc, char sep) {
	for (int i = 0; i < wiadomosc.length(); i++) {
		if (wiadomosc[i] == sep) continue;
		std::cout << wiadomosc[i] << std::endl;
	}
}

int main() {
	string przyklad;
	std::cout << "Podaj napis: ";
	std::cin >> przyklad;
	char sep;
	std::cout << "Podaj znak separatora: ";
	std::cin >> sep;
	podzial(przyklad, sep);
}