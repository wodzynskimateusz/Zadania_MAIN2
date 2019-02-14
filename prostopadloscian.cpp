#include <iostream>

int main() {

    std::cout << "Podaj trzy liczy oznaczajace dlugosci bokow oraz wysokosc" << std::endl;
    int a, b, h;
    std::cin >> a >> b >> h;

    std::cout << "Objetosc prostopdaloscianu o podanych dlugosciach bokow to " << a * b * h << std::endl;
    std::cout << "Pole powierzchni prostopdaloscianu o podanych dlugosciach bokow to " << 2 * (a * b + a * h + b * h)
              << std::endl;

    return 0;
}
