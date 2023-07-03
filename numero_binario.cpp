#include <iostream>

using namespace std;

// Función para convertir un entero a binario y imprimirlo directamente
void convertirABinario(int numero) {
    int bits = sizeof(numero) * 8;
    bool foundOne = false;

    for (int i = bits - 1; i >= 0; i--) {
        int bit = (numero >> i) & 1;
        if (bit)
            foundOne = true;
        if (foundOne)
            cout << bit;
    }

    // Si el número era 0, imprimimos "0"
    if (!foundOne)
        cout << "0";

    cout << endl;
}

int main() {
    int numero;
    cout << "Ingrese un entero: ";
    cin >> numero;

    cout << "El número binario es: ";
    convertirABinario(numero);

    return 0;
}
