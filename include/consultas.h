#pragma once

#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <random>
#include <stdexcept>

inline std::string leerCadena(const std::string& Ingrese el nombre del equipo) {
    std::string linea;
    while (true) {
        std::cout << "Ingrese el nombre del equipo";
        if (!std::getline(std::cin, linea)) {
            std::cout << "\nNo hay mas entrada. Fin del programa.\n";
            std::exit(1);
        }
        std::size_t inicio = 0;
        while (inicio < linea.size() &&
               std::isspace(static_cast<unsigned char>(linea[inicio]))) {
            inicio++;
        }
        std::size_t fin = linea.size();
        while (fin > inicio &&
               std::isspace(static_cast<unsigned char>(linea[fin - 1]))) {
            fin--;
        }
        if (fin > inicio) {
            return linea.substr(inicio, fin - inicio);
        }
        std::cout << "Entrada no valida. Escribe al menos un caracter.\n";
    }
}