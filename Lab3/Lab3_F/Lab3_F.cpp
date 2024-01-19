#include <iostream>

int main()
{
    //Zadanie 6
    int rok_urodzenia, rok_obecny, roznica_symetryczna;
    bool petla1 = true, petla2 = true;
    
    std::cout << "\nPodaj rok urodzenia: ";
    std::cin >> rok_urodzenia;
    
    std::cout << "Podaj rok obecny: ";
    std::cin >> rok_obecny;

    std::cout << "\nRok urodzenia: " << rok_urodzenia << std::endl;
    std::cout << "Rok obecny: " << rok_obecny << std::endl;
    roznica_symetryczna = rok_urodzenia ^ rok_obecny;
    std::cout << "\nNegacja bitowa roznicy symetrycznej roku urodzenia i roku obecnego: " << ~roznica_symetryczna << std::endl;
    system("pause");
}
