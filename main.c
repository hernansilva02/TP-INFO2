#include "lib/lib.h"

int main(void) {
    estados_t estado = voltaje_correcto; //estado inicial
    estados_t (*arrStat[2])(void) = {f_voltaje_correcto, f_voltaje_incorrecto};

    f_inicio_mcu();

    while (1) {
        estado = (*arrStat[estado])();
    }

}
