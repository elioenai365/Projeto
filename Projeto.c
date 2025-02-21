// Bibliotecas d prejeto
#include <stdio.h> // Padrao de entrada e saida
#include "pico/stdlib.h"// Entrada e saida do pico
#include "hardware/i2c.h"// biblioteca i²c
#include "hardware/adc.h"// Analogico em Digital
#include "ssd1306.h"// Bibliteca do visor




int main()
{
    stdio_init_all();

    while (true) {
        printf("Hello, world!\n");
        sleep_ms(1000);
    }
}
