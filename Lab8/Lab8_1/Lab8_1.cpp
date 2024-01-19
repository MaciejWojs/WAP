/*
	Napisz program, który tworzy zmienne i odpowiadające im wskaźniki dla wartości typu po czym wypisuje adres oraz wyłuskaną wartość:
	int
	short
	unsigned short
	float
	double
	std::string
	bool
*/
#include <iostream>
#include <string>

int main() {
	int a = 144921;
	int * a1 = &a;

	short b = -34;
	short * b1 = &b;

	unsigned c = 255;
	unsigned * c1 = &c;

	unsigned short d = 123;
	unsigned short * d1 = &d;

	float e = 34.112;
	float * e1 = &e;

	double f = 1.1231;
	double * f1 = &f;

	bool g = true;
	bool * g1 = &g;

	std::string h = "TEST";
	std::string * h1 = &h;

	std::cout << "Wartosc: " << *a1 << " zapisana na adresie " << std::hex << a1 << std::endl;
	std::cout << "Wartosc: " << *b1 << " zapisana na adresie " << std::hex << b1 << std::endl;
	std::cout << "Wartosc: " << *c1 << " zapisana na adresie " << std::hex << c1 << std::endl;
	std::cout << "Wartosc: " << *d1 << " zapisana na adresie " << std::hex << d1 << std::endl;
	std::cout << "Wartosc: " << *e1 << " zapisana na adresie " << std::hex << e1 << std::endl;
	std::cout << "Wartosc: " << *f1 << " zapisana na adresie " << std::hex << f1 << std::endl;
	std::cout << "Wartosc: " << *g1 << " zapisana na adresie " << std::hex << g1 << std::endl;
	std::cout << "Wartosc: " << *h1 << " zapisana na adresie " << std::hex << h1 << std::endl;
}
