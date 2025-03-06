#include <iostream>
#include <sstream>

int main() {
    std::string entrada;
    int num1, num2;
    
    std::getline(std::cin, entrada);
    
    for (char &c : entrada) {
        if (c == ',') {
            c = ' ';
        }
    }

    std::istringstream iss(entrada);
    iss >> num1 >> num2;

    if (num2 == 0) {
        std::cout << "Error: No se puede dividir por cero." << std::endl;
    } else {
        int residuo = num1 % num2;
        
        if (residuo == 0) {
            std::cout << "La división es exacta." << std::endl;
        } else {
            std::cout << "La división No es exacta." << std::endl;
        }
    }

    return 0;
}

