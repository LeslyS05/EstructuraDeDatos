#include <iostream>
#include <vector>

using namespace std;

bool cumpleRequisito(int num) {
    int cuadrado = num * num;
    int divisor = 10;
    int numTemp = num;

    while (numTemp > 0) {
        if (numTemp % divisor != cuadrado % divisor)
            return false;
        
        numTemp /= 10;
        cuadrado /= 10;
    }

    return true;
}

int main() {
    vector<int> camiones;

    for (int i = 1; i < 500; i++) {
        if (cumpleRequisito(i)) {
            camiones.push_back(i);
        }
    }

    cout << "Son " << camiones.size() << " camiones que cumplen el requisito:" << endl;
    for (int i = 0; i < camiones.size(); i++) {
        int cuadrado = camiones[i] * camiones[i];
        cout << "(" << camiones[i] << " ^2 = " << cuadrado << ")" << endl;
    }

    return 0;
}

