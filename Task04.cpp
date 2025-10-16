#include <stdio.h>
#include <stdint.h>

uint16_t multiply8bit(uint8_t a, uint8_t b) {
    return (uint16_t)a * (uint16_t)b;
}

int main() {
    uint16_t result = multiply8bit(10, 20);
    printf("Result: %u\n", result); // 200
    return 0;
}