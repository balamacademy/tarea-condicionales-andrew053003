#include <iostream>

int main() {
    int numero;
    
    std::cin >> numero;
    
    if (numero % 2 == 0) {
        std::cout << "Número es par." << std::endl;
    } else {
        std::cout << "Número es impar." << std::endl;
    }
    
    return 0;
}