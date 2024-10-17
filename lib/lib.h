//Para hacer cross platform los paths relativos
 //#ifdef _WIN32
 //    #define LIB_PATH "C:\\Users\\hernan\\Documents\\TP\lib\\"
 //#else
 //    #define LIB_PATH "../
 //#endif
#ifndef LIB_H
#define LIB_H
typedef enum {
    voltaje_correcto,
    voltaje_incorrecto
} estados_t;

void f_inicio_mcu(void);
char leer_bat(void);
void interrupt_handler(void);
void activar_indicador_correcto(void); //activa la luz azul indicando que el voltaje de la bateria es correcto
void activar_indicador_luminico_incorrecto(void); //activa la luz roja indicando que el voltaje de la bateria es incorrecto
estados_t f_voltaje_correcto(void);
estados_t f_voltaje_incorrecto(void);
#endif
