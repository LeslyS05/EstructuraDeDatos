#include <iostream>

int main() {
    int floreros_iniciales = 100;
    int filas_iniciales = 6;
    int filas_actuales = 11;
    int floreros_por_fila_iniciales = floreros_iniciales / filas_iniciales;
    int floreros_por_fila_actuales = floreros_por_fila_iniciales;
    int floreros_vendidos = floreros_iniciales - (filas_actuales * floreros_por_fila_actuales);
    int floreros_actuales = floreros_iniciales - floreros_vendidos;

    std::cout << "Salvador tiene " << floreros_actuales << " floreros para vender en la actualidad." << std::endl;

    return 0;
}
