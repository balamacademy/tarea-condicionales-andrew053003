#include <iostream>
#include <iomanip>
#include <sstream>

int main() {
    std::string entrada;
    double precio_unitario, precio_bruto, precio_final;
    int cantidad;
    const double IVA = 0.15;
    const double DESCUENTO = 0.05;

    std::getline(std::cin, entrada);


    for (char &c : entrada) {
        if (c == ',') {
            c = ' ';
        }
    }

    std::istringstream iss(entrada);
    iss >> precio_unitario >> cantidad;


    precio_bruto = (precio_unitario * cantidad) * (1 + IVA);

    
    if (precio_bruto > 1000) {
        precio_final = precio_bruto * (1 - DESCUENTO);
    } else {
        precio_final = precio_bruto;
    }
    
    std::cout << "Pagar $" << static_cast<int>(precio_final) << std::endl;

    return 0;
}