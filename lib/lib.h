//Para hacer cross platform los paths relativos
 //#ifdef _WIN32
 //    #define LIB_PATH "C:\\Users\\hernan\\Documents\\TP\lib\\"
 //#else
 //    #define LIB_PATH "../
 //#endif
#ifndef LIB_H
#define LIB_H
#include <stdint.h>

typedef enum {
    voltaje_correcto,
    voltaje_incorrecto
} estados_t;

typedef struct {
    uint8_t v; //voltaje actual
    uint8_t v_min;
    uint8_t v_max;
} voltaje_t;

void f_inicio_atmega(void);
estados_t f_voltaje_correcto(voltaje_t);
estados_t f_voltaje_incorrecto(voltaje_t);
#endif
