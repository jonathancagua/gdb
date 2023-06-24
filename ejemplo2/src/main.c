#include <stdio.h>
#include <stdint.h>
#include "../componente/include/suma.h"

uint16_t resta(uint16_t a, uint16_t b);

int main() {
    uint16_t a = 10;
    uint16_t b = 5;

    uint16_t resultado_suma = suma(a, b);
    uint16_t resultado_resta = resta(a, b);

    printf("Resultado de la suma: %hu\n", resultado_suma);
    printf("Resultado de la resta: %hu\n", resultado_resta);

    return 0;
}

uint16_t resta(uint16_t a, uint16_t b) {
    return a - b;
}
