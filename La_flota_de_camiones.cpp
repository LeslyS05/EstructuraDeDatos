#include <iostream>
#include <cmath>

int main() {
    int count = 0;
    std::cout << "Los números de los camiones de la flota de 'La Tortuga' son: ";

    for (int i = 1; i < 500; i++) {
        int square = i * i;
        int lastDigit = square % 10;

        if (lastDigit == i) {
            std::cout << i << " ";
            count++;
        }
    }

    std::cout << std::endl;
    std::cout << "El número total de camiones en la flota es: " << count << std::endl;

    return 0;
}
