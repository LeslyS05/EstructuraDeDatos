#include <iostream>

int main() {
    int n;
    std::cout << "Ingrese el número de términos de la serie Fibonacci que desea generar: ";
    std::cin >> n;

    int t1 = 0, t2 = 1;
    std::cout << "Serie Fibonacci de " << n << " términos: ";

    for (int i = 1; i <= n; ++i) {
        std::cout << t1 << " ";

        int sum = t1 + t2;
        t1 = t2;
        t2 = sum;
    }

    return 0;
}
