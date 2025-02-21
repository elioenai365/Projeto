// Bibliotecas d prejeto
#include <stdio.h> // Padrao de entrada e saida
#include "pico/stdlib.h"// Entrada e saida do pico
#include "hardware/i2c.h"// biblioteca i²c
#include "hardware/adc.h"// Analogico em Digital
#include "ssd1306.h"// Bibliteca do visor

// Bloco de pinos que serão trabalhados 

#define I2C_SDA 4     // GPIO4 para SDA
#define I2C_SCL 5     // GPIO5 para SCL

#define JOYSTICK_X 26 // ADC0 (GPIO26)
#define JOYSTICK_Y 27 // ADC1 (GPIO27)

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define SQUARE_SIZE 8



int main()
{
    stdio_init_all();

    while (true) {
        printf("Hello, world!\n");
        sleep_ms(1000);
    }
}
