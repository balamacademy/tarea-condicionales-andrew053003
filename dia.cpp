#include <iostream>

int main() {
    int dia;


    std::cin >> dia;

    switch (dia) {
        case 1: std::cout << "Lunes" << std::endl; break;
        case 2: std::cout << "Martes" << std::endl; break;
        case 3: std::cout << "Miercoles" << std::endl; break;
        case 4: std::cout << "Jueves" << std::endl; break;
        case 5: std::cout << "Viernes" << std::endl; break;
        case 6: std::cout << "Sabado" << std::endl; break;
        case 7: std::cout << "Domingo" << std::endl; break;
        default: std::cout << "No existe el dia" << std::endl; break;
    }

    return 0;
}