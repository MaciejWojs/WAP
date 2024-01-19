#include <iostream>

int main()
{
	//Zadanie 3
	float d, e;
	std::string czyTakaSama;
	std::cout << "Podaj pierwsza liczbe: ";
	std::cin >> d;
	std::cout << "Podaj druga liczbe: ";
	std::cin >> e;
	czyTakaSama = d == e ? "Taka sama" : "rozna";
	std::cout << czyTakaSama << std::endl;
	system("pause");
}