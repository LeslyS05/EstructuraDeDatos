#include <iostream>

int invertirNumero(int numero) {
    int invertido = 0;

    while (numero != 0) {
        int digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero /= 10;
    }

    return invertido;
}

int main() {
    int numero;
    std::cout << "Ingrese un número: ";
    std::cin >> numero;

    int numeroInvertido = invertirNumero(numero);

    std::cout << "Número invertido: " << numeroInvertido << std::endl;

    return 0;
}
