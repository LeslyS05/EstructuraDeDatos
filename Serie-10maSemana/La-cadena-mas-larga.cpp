#include <iostream>

// Función para calcular la longitud de la cadena de números para un invitado dado
int calcularLongitudCadena(int numero) {
    int longitud = 0;
    while (numero != 4) {
        if (numero % 2 == 0) {
            numero /= 2;
        } else {
            numero = numero * 3 + 1;
        }
        longitud++;
    }
    return longitud;
}

int main() {
    int invitadoConCadenaMasLarga = 1;
    int longitudMaxima = calcularLongitudCadena(1);

    for (int i = 2; i <= 99; ++i) {
        int longitudActual = calcularLongitudCadena(i);
        if (longitudActual > longitudMaxima) {
            invitadoConCadenaMasLarga = i;
            longitudMaxima = longitudActual;
        }
    }

    std::cout << "El invitado con la cadena más larga es el número " << invitadoConCadenaMasLarga << " con una longitud de " << longitudMaxima << " números." << std::endl;

    return 0;
}
