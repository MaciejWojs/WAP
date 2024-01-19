/*
	Zaalokuj napis c-style składający się np. z 5 komórek.
	Spróbuj wpisać do niego najpierw 1 znak  za pomocą std::cin i go wypisać, potem 2 znaki itd. aż do 6.
	Co się stanie po przepełnieniu?
*/
#include <iostream>

int main() {
	char str[5];
	std::cout << "Podaj znaki: ";
	std::cin >> str;
	std::cout << str;
	return 0;
}
