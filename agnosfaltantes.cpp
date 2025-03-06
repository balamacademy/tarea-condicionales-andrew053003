#include <iostream>
#include <sstream>

int main() {
    std::string entrada;
    int anio_actual, anio_ingresado;
    
    std::getline(std::cin, entrada);

    for (char &c : entrada) {
        if (c == ',') {
            c = ' ';
        }
    }

    std::istringstream iss(entrada);
    iss >> anio_actual >> anio_ingresado;

    int diferencia = anio_ingresado - anio_actual;

    if (diferencia > 0) {
     
        std::cout << "Faltan " << diferencia << " agnos" << std::endl;
    } else if (diferencia < 0) {
    
        std::cout << "Han pasado " << -diferencia << " agnos" << std::endl;
    } else {
        
        std::cout << "Es el mismo agno" << std::endl;
    }
    
    return 0;
}
