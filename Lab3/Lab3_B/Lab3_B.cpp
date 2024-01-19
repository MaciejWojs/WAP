#include <iostream>
#include <string>


int main()
{
	//Zadanie 2
	int c;
	std::string test;
	std::cout << "Podaj liczbe: ";
	std::cin >> c;
	test = c % 2 == 0 ? "Liczba jest parzysta\n" : "Liczba nie jest parzysta\n";
	std::cout << test;
	system("pause");
}