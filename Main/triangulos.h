#pragma once


#include <iostream>
#include <cmath>


class Triangulo {
public:
    static std::string determinarTipo(int lado1, int lado2, int lado3);
};

std::string Triangulo::determinarTipo(int lado1, int lado2, int lado3) {
    if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0) {
        return "Inválido";  // Al menos uno de los lados es negativo o cero
    }
    else if (lado1 + lado2 <= lado3 || lado1 + lado3 <= lado2 || lado2 + lado3 <= lado1) {
        return "Inválido";  // La suma de dos lados no es mayor que el tercero
    }
    else if (lado1 == lado2 && lado2 == lado3) {
        return "Equilátero";  // Todos los lados son iguales
    }
    else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        return "Isósceles";  // Dos lados son iguales
    }
    else {
        return "Escaleno";  // Ningún lado es igual a otro
    }
}