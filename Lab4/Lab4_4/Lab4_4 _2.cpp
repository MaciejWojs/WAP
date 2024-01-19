#include <iostream>

int main()
{
    double a, indeks = 33106;
    std::cout << "Podaj liczbe: ";
    std::cin >> a;
    if (a < indeks) {
        std::cout << "Liczba " << a << "jest mniejsza od numeru indeksu (" << indeks << ')';
    }
    else {
        std::cout << "Liczba " << a << "jest wieksza od numeru indeksu (" << indeks << ')';
    }

}
