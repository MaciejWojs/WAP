/*
	Napisz program, wypisujący n (n pobrane od użytkownika) liczb ciągu Fibonacciego. Wykonaj
	trzy programy. W każdym użyj innej pętli. Do wykonania zadania wystarczą elementy poznane
	do tej pory na zajęciach.
*/
#include <iostream>

int main()
{
	int n, poprzedni = 0, obecny = 1;
	std::cout << "Program, wypisujacy n liczb ciagu Fibonacciego.\nDziala on poprawnie dla wiecej niz 1 wyrazu\n";
	do {
		std::cout << "Podaj n: ";
		std::cin >> n;
		if (std::cin.fail() || n < 1)std::cout << "Wprowadzono bledne dane\n";
		std::cin.clear(), std::cin.ignore();
	} while (!n);

	std::cout << std::endl << n << " wyrazow ciagu Fibonacciego za pomoca petli for: ";

	for (int i = 1; i <= n; i += 2) {
		if (i == n || i - 1 == n) std::cout << poprzedni << ' ';
		else std::cout << poprzedni << ' ' << obecny << ' ';
		poprzedni += obecny;
		obecny += poprzedni;
	}

	std::cout << std::endl << n << " wyrazow ciagu Fibonacciego za pomoca petli while: ";
	int i = 1;
	poprzedni = 0, obecny = 1;
	while (i <= n) {
		if (i == n || i - 1 == n) std::cout << poprzedni << ' ';
		else std::cout << poprzedni << ' ' << obecny << ' ';
		i += 2;
		poprzedni += obecny;
		obecny += poprzedni;
	}

	std::cout << std::endl << n << " wyrazow ciagu Fibonacciego za pomoca petli do-while: ";
	i = 1, poprzedni = 0, obecny = 1;
	do
	{
		if (i == n || i - 1 == n) std::cout << poprzedni << ' ';
		else std::cout << poprzedni << ' ' << obecny << ' ';
		i += 2;
		poprzedni += obecny;
		obecny += poprzedni;
	} while (i <= n);
	std::cout << std::endl;
}