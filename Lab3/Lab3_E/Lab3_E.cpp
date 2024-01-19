#include <iostream>

int main()
{
    //Zadanie 5
    int miesiac, dzien, alternatywa_bitowa;
    bool petla1 = true, petla2 = true;
    do {
        std::cout << "\nPodaj nr miesiaca: ";
        std::cin >> miesiac;
        if (std::cin.fail() || miesiac > 12 || miesiac < 1) {
            std::cin.clear();
            std::cin.ignore();
            std::cout << "\nWprowadzone dane nie sa numerem miesiaca \n";
        }
        else {
            petla1 = false;
        }
    } while (petla1);

    do {
        std::cout << "Podaj nr dnia: ";
        std::cin >> dzien;
        if (std::cin.fail() || dzien > 7 || dzien < 1) {
            std::cin.clear();
            std::cin.ignore();
            std::cout << "\nWprowadzone dane nie sa numerem dnia \n";
        }
        else {
            petla2 = false;
        }
    } while (petla2);

    std::cout << "\nNumer miesiaca: " << miesiac << std::endl;
    std::cout << "Numer dnia: " << dzien << std::endl;
    alternatywa_bitowa =  dzien | miesiac;
    std::cout << "\nNegacja bitowa aternatywy bitowej: " << ~alternatywa_bitowa << std::endl;
    //std::cout << "\nNegacja bitowa numeru miesiaca: " << ~miesiac << std::endl;
    //std::cout << "Negacja bitowa numeru dnia: " << ~dzien << std::endl;
    system("pause");
}