#include <iostream>

void Bolas() {
    int capas = 0, bolas = 0, sobrantes = 0, BolasTotal = 10000;

    for (int i = 1; (bolas + i * i) <= BolasTotal; i++) {
        capas = i;
        bolas += (i * i);
    }

    sobrantes = BolasTotal - bolas;

    std::cout << "\n\tCantidad de capas: " << capas;
    std::cout << "\n\tCantidad de Bolas sobrantes: " << sobrantes;
}

int main() {
    std::cout << "\n---Creando una piramide de base cuadrada con 10,000 bolas---" << std::endl;
    Bolas();

    return 0;
}
