/*
    definicion de puertos y funciones del mcu
*/
#ifndef CONF_H
#define CONF_H
#define LOW 0
#define HIGH 1

#include "avr_Gpio.h"
void f_systick(void);

extern volatile int time_buzz;

//Salida circuito comparador de voltaje (Entrada del MCU)
#define VOLTAJE_BAT_PORT avr_GPIO_D
#define VOLTAJE_BAT_PIN avr_GPIO_PIN_0
#define VOLTAJE_BAT avr_GPIOD_IN_0

//Circuito del LED indicador
#define LEDS_PORT avr_GPIO_B
#define LEDS_PIN avr_GPIO_PIN_0
#define LEDS avr_GPIOB_OUT_0

//Salida buzzer
#define BUZZ_PORT avr_GPIO_B
#define BUZZ_PIN avr_GPIO_PIN_4
#define BUZZ avr_GPIOB_OUT_4
#endif
