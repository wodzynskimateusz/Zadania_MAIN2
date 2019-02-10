#include <iostream>
#include <cmath>

int main() {

//    PROSTOPADLOSCIAN

    std::cout << "Podaj trzy liczy oznaczajace dlugosci bokow oraz wysokosc" << std::endl;
    int a, b, h;
    std::cin >> a >> b >> h;

    std::cout << "Objetosc prostopdaloscianu o podanych dlugosciach bokow to " << a * b * h << std::endl;
    std::cout << "Pole powierzchni prostopdaloscianu o podanych dlugosciach bokow to " << 2 * (a * b + a * h + b * h)
              << std::endl;

//    STOL

    std::cout << "Podaj dane wejsciowe" << std::endl;
    int bok1, bok2, krzeslo;
    std::cin >> bok1 >> bok2 >> krzeslo;

    int liczbaKrzeselNaBok1, liczbaKrzeselNaBok2, ogolnaLiczbaKrzesel;

    if (bok1 > 0 && bok2 > 0 && krzeslo > 0) {
        liczbaKrzeselNaBok1 = bok1 / krzeslo;
        liczbaKrzeselNaBok2 = bok2 / krzeslo;

        if (liczbaKrzeselNaBok1 == 0 || liczbaKrzeselNaBok2 == 0)
            ogolnaLiczbaKrzesel = 0;
        else if (liczbaKrzeselNaBok1 == 1)
            ogolnaLiczbaKrzesel = liczbaKrzeselNaBok2;
        else if (liczbaKrzeselNaBok1 > 1 && liczbaKrzeselNaBok2 == 1)
            ogolnaLiczbaKrzesel = liczbaKrzeselNaBok1;
        else
            ogolnaLiczbaKrzesel = 2 * liczbaKrzeselNaBok2 + 2 * (liczbaKrzeselNaBok1 - 2);

        if (ogolnaLiczbaKrzesel == 0)
            std::cout << "Niestety podane wymiary nie daja mozliwosci ustawienia krzesel" << std::endl;
        else
            std::cout << "Liczba krzesel, ktore zmieszcza sie przy stole to " << ogolnaLiczbaKrzesel << "." << std::endl;
    } else
        std::cout << "Podano niewlasciwe wartosci";




    return 0;
}