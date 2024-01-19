/*
	Z pomocą dokumentacji (strona wcześniej) zademonstruj użycie tych elementów:
	operator[]
	at()
	back()
	front()
*/
#include <iostream>
#include <string>

int main() {
	std::string str = "Wiadomosc do zaprezentowania metod stringa";

	std::cout << str << std::endl;
	std::cout << "Piaty znak w stringu: " << str[4] << std::endl;
	std::cout << "str.at(3): " << str.at(3) << std::endl;
	std::cout << "str.back(): " << str.back() << std::endl;
	str.back() = 'D';
	std::cout << "str.back() = 'D': " << str.back() << std::endl;

	std::cout << "str.front(): " << str.front() << std::endl;
	str.front() = 'F';
	std::cout << "str.front() = 'F' " << str.front() << std::endl;
	return 0;
}
