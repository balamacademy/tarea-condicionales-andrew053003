#include <iostream>

#include <iostream>

int main() {
    int anio;

    std::cin >> anio;

    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        std::cout << "Es bisiesto" << std::endl;
    } else {
        std::cout << "No es bisiesto" << std::endl;
    }

    return 0;
}