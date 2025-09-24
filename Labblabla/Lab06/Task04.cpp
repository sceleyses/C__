#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

void task_4();

int main() {
    task_4();
}

void task_4() {
    uint32_t n, m;
    printf("n=");
    scanf("%" SCNu32, &n);
    uint32_t b0 = n & 0xFFU;
    uint32_t b3 = (n >> 24);
    uint32_t b1 = (n>>8) & 0xFFU;
    uint32_t b2 = (n>>16) & 0xFFU;

    m = (b0 << 24) | (b2 << 16) | (b1 << 8) | b3;
    printf("%" PRIu32 "\n", m);


}