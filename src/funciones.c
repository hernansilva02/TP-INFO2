#include "../lib/conf.h"
#include "../lib/avr_api.h"

void f_inicio_mcu(void) {
    GpioInitStructure_AVR  voltaje_bat, leds, buzz;
    SystickInitStructure_AVR systick;

    voltaje_bat.modo = avr_GPIO_mode_Input;
    voltaje_bat.port = VOLTAJE_BAT_PORT;
    voltaje_bat.pines = VOLTAJE_BAT_PIN;
    init_gpio(voltaje_bat);

    leds.modo = avr_GPIO_mode_Output;
    leds.port = LEDS_PORT;
    leds.pines = LEDS_PIN;
    init_gpio(leds);

    buzz.modo = avr_GPIO_mode_Output;
    buzz.port = BUZZ_PORT;
    buzz.pines = BUZZ_PIN;

    systick.timernumber = avr_TIM0;
    systick.time_ms = 2000;
    systick.avr_systick_handler = f_systick;
}

void leer_bat(void) {
    char voltaje = VOLTAJE_BAT;
}

