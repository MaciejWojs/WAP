#include <iostream>

int main()
{
    double a, indeks = 33106;
    std::cout << "Podaj liczbe: ";
    std::cin >> a;
    if (a < 0) {
        std::cout << "Liczba jest ujemna";
    }
    else if (a > indeks){
        std::cout << "Liczba " << a << "jest wieksza od numeru indeksu (" << indeks << ')';
    }

}
