#include <iostream>

int main() {
    int total_recaudado = 7869;
    int total_politicos_invitados = 100;

    int senadores, congresistas, invitados;

    for (senadores = 0; senadores <= total_politicos_invitados; senadores++) {
        for (congresistas = 0; congresistas <= total_politicos_invitados - senadores; congresistas++) {
            invitados = total_politicos_invitados - senadores - congresistas;
            int total_recaudado_calculado = 75 * senadores + 99 * congresistas + 40 * invitados;
            if (total_recaudado_calculado == total_recaudado) {
                std::cout << "Senadores: " << senadores << std::endl;
                std::cout << "Congresistas: " << congresistas << std::endl;
                std::cout << "Invitados: " << invitados << std::endl;
                return 0;
            }
        }
    }

    std::cout << "No se encontró una solución válida." << std::endl;

    return 0;
}



