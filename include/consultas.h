#pragma once

#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <random>
#include <stdexcept>

#include "utilerias.h"
#include "torneo.h"

inline std::string aMinusculas(std::string texto) {
    for (std::size_t i = 0; i < texto.size(); i++) {
        texto[i] = static_cast<char>(std::tolower(static_cast<unsigned char>(texto[i])));
    }
    return texto;
}
void imprimirConsulta() {
    std::string nombre = leerCadena("Nombre del equipo: ");

}
