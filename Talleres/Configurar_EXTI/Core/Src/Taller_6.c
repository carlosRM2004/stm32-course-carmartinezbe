#include "stm32f411xe.h"
#include "stm32f4xx.h"
#include <stdint.h>

//Definición de vbles
volatile uint8_t cambio = 0; //vble que indica el cambio de estado
uint8_t parpadeos = 0;

void init_GPIO(void);
void init_EXTI(void);
void init_TIMER(void);

int main (void) {
    void init_GPIO(void);
    void init_EXTI(void);
    void init_TIMER(void);

    while (1) {

    }
}

