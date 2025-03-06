#include <iostream>

int main() {
    int edad;

    std::cin >> edad;

    if (edad < 5) {
        std::cout << "!!Gratis¡¡" << std::endl;
    } else if (edad <= 18) {
        std::cout << "Paga $5" << std::endl;
    } else {
        std::cout << "Paga $10" << std::endl;
    }

    return 0;
}

