#include <iostream>

int main()
{
	//Zadanie 1
	int a, b;
	std::cout << "Podaj pierwsza liczbe: ";
	std::cin >> a;
	std::cout << "Podaj druga liczbe: ";
	std::cin >> b;
	std::cout << "Wynik calkowity: " << a / b;
	std::cout << "\nReszta dzielenia: " << a % b << std::endl;
	system("pause");
}