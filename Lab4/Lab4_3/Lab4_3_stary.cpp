#include <iostream>

int main()
{
    int a;
    std::cout << "Sprawdzenie czy liczba jest pierwsza w przedziale od 1 do 100\n";
    std::cout << "Podaj liczbe calkowita: ";
    std::cin >> a;
    
    bool isLessOrEqual100 = (a <= 100);
    bool isPrimeNumberUpTo10 = (a == 2 || a == 3 || a == 5 || a == 7);
    bool isModuloNotEqualZero = ((a % 2 != 0) && (a % 3 != 0) && (a % 5 != 0) && (a % 7 != 0));
    
    if ( isLessOrEqual100 && ( isPrimeNumberUpTo10 || isModuloNotEqualZero)) {
        std::cout << "\nPodana liczba miesci sie w przedziale i jest liczba pierwsza\n";
    }
    else if (!isLessOrEqual100){
        std::cout << "\nPodana liczba nie miesci sie w przedziale\n";
    }
    else {
        std::cout << "\nPodana liczba nie jest liczba pierwsza\n";
    }
}
