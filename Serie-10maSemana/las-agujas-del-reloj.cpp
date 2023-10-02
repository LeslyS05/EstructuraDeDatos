#include <iostream>

int main() {
    int count = 0; // Contador para contar las superposiciones de agujas

    for (int hora = 0; hora < 24; hora++) {
        for (int minuto = 0; minuto < 60; minuto++) {
            int angulo = abs((30 * hora - (11 * minuto) / 2)); // Cálculo del ángulo
            if (angulo == 0) {
                count++;
                std::cout << "Superposición a las " << hora << ":" << (minuto < 10 ? "0" : "") << minuto << " horas." << std::endl;
            }
        }
    }

    std::cout << "Total de superposiciones en un día: " << count << std::endl;

    return 0;
}




