#include <iostream>
#include <string>

int main()
{
	//Znak
	char Char;
	std::cout << "Please provide a character: ";
	std::cin >> Char;
	std::cout << "You have typed: " << Char << std::endl;

	//Znak dodatni
	unsigned char unsigned_char;
	std::cout << "Please provide an unsigned character: ";
	std::cin >> unsigned_char;
	std::cout << "You have typed: " << unsigned_char << std::endl;

	//liczba całkowita
	int integer;
	std::cout << "Please provide an integer: ";
	std::cin >> integer;
	std::cout << "You have typed: " << integer << std::endl;

	//liczba całkowita dodatnia
	unsigned int unsigned_int;
	std::cout << "Please provide an unsigned int: ";
	std::cin >> unsigned_int;
	std::cout << "You have typed: " << unsigned_int << std::endl;
	
	//liczba zmiennoprzecinkowa
	float Float;
	std::cout << "Please provide a float number (ex. 2.46): ";
	std::cin >> Float;
	std::cout << "You have typed: " << Float << std::endl;

	//liczba zmiennoprzecinkowa (dokladniejsza)
	double Double;
	std::cout << "Please provide a double number (ex. -4.7689): ";
	std::cin >> Double;
	std::cout << "You have typed: " << Double << std::endl;

	//napis (a dokladniej to łańcuch znakow)
	std::string example_string;
	std::cout << "Please provide a string: ";
	std::cin >> example_string;
	std::cout << "You have typed: " << example_string << std::endl;

	//boolean (wartość prawda/fałsz)
	bool boolean;
	std::cout << "Please provide an boolean value (true or false): ";
	std::cin >> boolean;
	std::cout << "You have typed: " << boolean << std::endl;

	system("pause");
	return 0;
}