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

ssd1306_t oled;

// Função para mapear valores do ADC para coordenadas da tela
uint8_t map_adc_to_screen(uint16_t adc_value, uint8_t max_screen) {
    return (adc_value * max_screen) / 4095;
}


int main()
{
    stdio_init_all();

    // Inicializa I2C
    i2c_init(i2c0, 400 * 1000);  // 400kHz
    gpio_set_function(I2C_SDA, GPIO_FUNC_I2C);
    gpio_set_function(I2C_SCL, GPIO_FUNC_I2C);
    gpio_pull_up(I2C_SDA);
    gpio_pull_up(I2C_SCL);

     // Inicializa display SSD1306
     ssd1306_init(&oled, 128, 64, 0x3C, i2c0);

    while (true) {
        printf("Hello, world!\n");
        sleep_ms(1000);
    }
}
