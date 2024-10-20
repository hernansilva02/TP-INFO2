#include "../lib/conf.h"
#include "../lib/avr_Timers.h"
#include "../lib/lib.h"
#include <avr/interrupt.h>

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
    init_gpio(buzz);

    //config del timer
    systick.timernumber = avr_TIM0;
    systick.time_ms = 1;
    systick.avr_systick_handler = f_systick;
    init_Systick_timer(systick);

    sei();
}

void activar_indicador_correcto(void) {
    LEDS = 1;
}

void activar_indicador_luminico_incorrecto(void) {
    LEDS = 0;
}

char leer_bat(void) {
    char voltaje = VOLTAJE_BAT;
    return voltaje;
}

void activar_buzz(void) {
    BUZZ = 1;
    if (time_buzz == 2000) {
        BUZZ = 0;
        time_buzz = 0;
    }
    return;
}
