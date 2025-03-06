#include <iostream>

int main() {
    int edad;
    
    std::cin >> edad;
    
    if (edad >= 18) {
        std::cout << "Eres mayor." << std::endl;
    } else {
        std::cout << "No eres mayor." << std::endl;
    }
    
    return 0;
}