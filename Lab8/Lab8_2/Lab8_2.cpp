/*
	Napisz program alokujący następujące zmienne:
	int a = 0xAABBCCDD;
	int b = 0;
	unsigned int c = 0b1111;
	short d = 0xABCDEF89;
	short e = 0xFFFF;
	char f = 0xABCD;
	int g = 0xDEC0ADDE;
	bool h = true;

*/
#include <iostream>

int main() {
	int a = 0xAABBCCDD; //overflow dla wartosci  0xAABBCCDD = 2864434397 a MAX w int to 2,147,483,647 (HEX) -> 0x7FFFFFFF
	int b = 0;
	unsigned int c = 0b1111;
	short d = 0xABCDEF89;
	short e = 0xFFFF;
	char f = 0xABCD;
	int g = 0xDEC0ADDE;
	bool h = true;

	// Wskaźniki
	int * wskaznikNaA = &a;
	int * wskaznikNaB = &b;
	unsigned int * wskaznikNaC = &c;
	short * wskaznikNaD = &d;
	short * wskaznikNaE = &e;
	char * wskaznikNaF = &f;
	int * wskaznikNaG = &g;
	bool * wskaznikNaH = &h;

	std::cout << "Adres zmiennej a: " << wskaznikNaA << std::endl;
	std::cout << "Adres zmiennej b: " << wskaznikNaB << std::endl;
	std::cout << "Adres zmiennej c: " << wskaznikNaC << std::endl;
	std::cout << "Adres zmiennej d: " << wskaznikNaD << std::endl;
	std::cout << "Adres zmiennej e: " << wskaznikNaE << std::endl;
	std::cout << "Adres zmiennej f: " << (void *) wskaznikNaF << std::endl;
	std::cout << "Adres zmiennej g: " << wskaznikNaG << std::endl;
	std::cout << "Adres zmiennej h: " << wskaznikNaH << std::endl;

	std::cout << "Wartosc zmiennej a: " << *wskaznikNaA << std::endl;
	std::cout << "Wartosc zmiennej b: " << *wskaznikNaB << std::endl;
	std::cout << "Wartosc zmiennej c: " << *wskaznikNaC << std::endl;
	std::cout << "Wartosc zmiennej d: " << *wskaznikNaD << std::endl;
	std::cout << "Wartosc zmiennej e: " << *wskaznikNaE << std::endl;
	std::cout << "Wartosc zmiennej f: " << (int) *wskaznikNaF << std::endl;
	std::cout << "Wartosc zmiennej g: " << *wskaznikNaG << std::endl;
	std::cout << "Wartosc zmiennej h: " << *wskaznikNaH << std::endl;

	return 0;
}
