#include <iostream>

bool esNarcisista(int valor) {
    int suma = 0;
    int num = valor;

    while (num != 0) {
        int digito = num % 10;
        suma += digito * digito * digito;
        num /= 10;
    }

    return suma == valor;
}

void CuboNarcisista() {
    for (int i = 100; i < 1000; i++) {
        if (esNarcisista(i)) {
            std::cout << i << " es un cubo narcisista" << std::endl;
        }
    }
}

int main() {
    CuboNarcisista();
    return 0;
}
