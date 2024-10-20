#include "../lib/conf.h"

volatile int time_buzz = 0;

void f_systick(void) {
    time_buzz++;
}
