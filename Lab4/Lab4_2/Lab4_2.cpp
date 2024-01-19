#include <iostream>

int main()
{
	double a, b;
	char znak;
	std::cout << "Podaj pierwsza liczbe: ";
	std::cin >> a;

	std::cout << "Podaj druga liczbe: ";
	std::cin >> b;

	std::cout << "Podaj znak wykonywanej operacji(+, -, /, *): ";
	std::cin >> znak;

	std::cout << "\n----------------- Kalkulator (switch) --------------------\n";
	switch (znak) {
	case '+':
		std::cout << ' ' << a << std::endl;
		std::cout << znak << std::endl;
		std::cout << ' ' << b << std::endl;
		std::cout << "-----------------\n";
		std::cout << ' ' << a + b << std::endl;;
		break;
	case '-':
		std::cout << ' ' << a << std::endl;
		std::cout << znak << std::endl;
		std::cout << ' ' << b << std::endl;
		std::cout << "-----------------\n";
		std::cout << ' ' << a - b << std::endl;
		break;
	case '/':
		if (a == 0 || b == 0) {
			std::cout << "Nie dziel przez 0";
			break;
		}
		std::cout << ' ' << a << std::endl;
		std::cout << znak << std::endl;
		std::cout << ' ' << b << std::endl;
		std::cout << "-----------------\n";
		std::cout << ' ' << a / b << std::endl;
		break;
	case '*':
		std::cout << ' ' << a << std::endl;
		std::cout << znak << std::endl;
		std::cout << ' ' << b << std::endl;
		std::cout << "-----------------\n";
		std::cout << ' ' << a * b << std::endl;
		break;
	default:
		std::cout << "Blad\n";
	}

	std::cout << "\n----------------- Kalkulator (if) --------------------\n";
	if (znak == '+') {
		std::cout << ' ' << a << std::endl;
		std::cout << znak << std::endl;
		std::cout << ' ' << b << std::endl;
		std::cout << "-----------------\n";
		std::cout << ' ' << a + b << std::endl;;
	}
	else if (znak == '-') {
		std::cout << ' ' << a << std::endl;
		std::cout << znak << std::endl;
		std::cout << ' ' << b << std::endl;
		std::cout << "-----------------\n";
		std::cout << ' ' << a - b << std::endl;
	}
	else if (znak == '/') {
		if (a == 0 || b == 0) {
			std::cout << "Nie dziel przez 0";
		}
		std::cout << ' ' << a << std::endl;
		std::cout << znak << std::endl;
		std::cout << ' ' << b << std::endl;
		std::cout << "-----------------\n";
		std::cout << ' ' << a / b << std::endl;
	}
	else if (znak == '*') {
		std::cout << ' ' << a << std::endl;
		std::cout << znak << std::endl;
		std::cout << ' ' << b << std::endl;
		std::cout << "-----------------\n";
		std::cout << ' ' << a * b << std::endl;
	}
	else {
		std::cout << "Blad\n";
	}
}
