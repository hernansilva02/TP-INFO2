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

void f_inicio_atmega(void);
estados_t f_voltaje_correcto(void);
estados_t f_voltaje_incorrecto(void);
#endif
