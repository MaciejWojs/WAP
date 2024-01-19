/*
  Stwórz string typu std::string, pobierz do niego wartość od użytkownika za pomocą std::cin,
  a następnie wypisz literka po literce (każda w nowej linii).
  Podpowiedź: łańcuchy znaków to tablice
*/
#include <iostream>
#include <string>

int main() {
	std::string napis;
	std::cout << "Podaj napis: ";
	std::cin >> napis;
	for (int i = 0; i < napis.length(); i++) std::cout << napis[i] << std::endl;
}
