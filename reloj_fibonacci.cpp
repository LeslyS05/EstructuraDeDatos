#include <iostream>
#include <cmath>

// Calcular término n-ésimo de Fibonacci
int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    float total_minutes = 0;
    int hours = 24;

    for (int n = 1; n <= hours; n++) {
        int fn = fibonacci(n - 1);
        int potencia = std::pow(2, n);
        float minutes = static_cast<float>(fn) / potencia;
        total_minutes += minutes;
        std::cout << "Hora: " << n << " se atrasa " << minutes << " minutos." << std::endl;
    }

    std::cout << "El reloj se atrasará " << total_minutes << " minutos en 24 horas." << std::endl;

    return 0;
}
