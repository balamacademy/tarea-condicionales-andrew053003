#include <iostream>

int main() {
    char calificacion;

    std::cin >> calificacion;

    switch (calificacion) {
        case 'A': std::cout << "9" << std::endl; break;
        case 'B': std::cout << "8" << std::endl; break;
        case 'C': std::cout << "7" << std::endl; break;
        case 'D': std::cout << "6" << std::endl; break;
        case 'E': std::cout << "5" << std::endl; break;
        case 'F': std::cout << "4" << std::endl; break;
        default: std::cout << "Calificación inválida" << std::endl; break;
    }

    return 0;
}
