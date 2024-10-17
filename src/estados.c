#include "../lib/lib.h"
#include "../lib/conf.h"

estados_t f_voltaje_correcto(void) {
    char voltaje = leer_bat();
    if (voltaje) {
        activar_indicador_correcto();
        return voltaje_correcto; 
    }
    return voltaje_incorrecto;
}

estados_t f_voltaje_incorrecto(void) {
    char voltaje = leer_bat();
    if (!voltaje) {
    }
}
