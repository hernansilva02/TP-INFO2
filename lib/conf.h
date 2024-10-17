/*
    definicion de puertos y funciones del mcu
*/
#ifndef CONF_H
#define CONF_H

#include "avr_api.h"
void f_systick(void);
void f_interrupt_handler(void);
void reactivar_interrupcion(void);

//Salida circuito comparador de voltaje (Entrada del MCU)
#define VOLTAJE_BAT_PORT avr_GPIO_D
#define VOLTAJE_BAT avr_GPIOD_IN_0
#define VOLTAJE_BAT_PIN avr_GPIO_PIN_0

//Circuito del LED indicador
#define LEDS_PORT avr_GPIO_B
#define LEDS avr_GPIOB_OUT_0
#define LEDS_PIN avr_GPIO_PIN_0

//Salida buzzer
#define BUZZ_PORT avr_GPIO_B
#define BUZZ avr_GPIOB_OUT_4
#define BUZZ_PIN avr_GPIO_PIN_4
#endif
