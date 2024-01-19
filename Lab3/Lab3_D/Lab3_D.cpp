#include <iostream>

int main()
{
	//Zadanie 4
	int f = 1, g = 2;
	std::cout << "zmienna f: " << f << std::endl;
	std::cout << "zmienna g: " << g << std::endl;
	f = f + g; //f = 3, g = 2
	g = f - g; //g = 1, f = 3
	f = f - g; // g = 1, f=2 
	std::cout << "zmienna f: " << f << std::endl;
	std::cout << "zmienna g: " << g << std::endl;
	system("pause");
}
