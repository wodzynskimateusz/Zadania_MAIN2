#include <iostream>

int main() {

    std::cout << "Podaj dane wejsciowe" << std::endl;
    int liczbaPrzypadkow;
    std::cin >> liczbaPrzypadkow;

    // przechowuje dane wprowadzone przez uzytkownika
    int przypadki[liczbaPrzypadkow][2];
    for (int j = 0; j < liczbaPrzypadkow; ++j)
        std::cin >> przypadki[j][0] >> przypadki[j][1];

    // wykonuje zadanie na kazdym zestawie danych
    for (int k = 0; k < liczbaPrzypadkow; ++k) {

        int iloscWypuszczonychZwierzatek{0};
        int iloscKlatek = przypadki[k][0];
        int skokMalpki = przypadki[k][1];
        int klatki[iloscKlatek];

        // na pocztaku w kazdej klatce jest zwierze
        for (int i = 0; i < iloscKlatek; ++i)
            klatki[i] = 1;

        int nrKlatkiNaKtorejSiedziMalpka{0};
        while (klatki[nrKlatkiNaKtorejSiedziMalpka] == 1) {
            iloscWypuszczonychZwierzatek += 1;
            klatki[nrKlatkiNaKtorejSiedziMalpka] = 0;
            nrKlatkiNaKtorejSiedziMalpka = (nrKlatkiNaKtorejSiedziMalpka + skokMalpki) % iloscKlatek;
        }

        std::cout << "Ilosc zwierzatek wypuszczonych w serii "<< k+1 << " to " << iloscWypuszczonychZwierzatek << "." << std::endl;
    }


    return 0;
}

