// Main.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "triangulos.h"
int main() {
    int lado1, lado2, lado3;

    std::cout << "Ingrese la longitud del primer lado: ";
    std::cin >> lado1;

    std::cout << "Ingrese la longitud del segundo lado: ";
    std::cin >> lado2;

    std::cout << "Ingrese la longitud del tercer lado: ";
    std::cin >> lado3;

    std::string tipoTriangulo = Triangulo::determinarTipo(lado1, lado2, lado3);

    std::cout << "El triángulo es de tipo: " << tipoTriangulo << std::endl;

    return 0;
}