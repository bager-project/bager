#include <stdio.h>
#include "pico/stdlib.h"
#include <bager_lib.h>

#define GPIO_ON 1
#define GPIO_OFF 0

#define LED_PIN 25

int main()
{
    stdio_init_all();

    init_led();

    printf("B.A.G.E.R.\n");

    loop_led();
}
