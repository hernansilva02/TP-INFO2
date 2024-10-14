#ifdef _WIN32
    #define LIB_PATH "C:\\Users\hernan\Documents\TP\lib\"
#else
    #define LIB_PATH "../
#ifdef LIB_H
#define LIB_H
typedef enum {
    voltaje_correcto,
    voltaje_incorrecto
} estados_t

typedef struct {
    uint8_t v; //voltaje actual
    uint8_t v_min;
    uint8_t v_max;
} voltaje_t;

voltaje_t f_inicio_micro(void);
estados_t f_voltaje_correcto(voltaje_t);
estados_t f_voltaje_incorrecto(voltaje_t);
#endif
