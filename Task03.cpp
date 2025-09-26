#include <stdio.h>
#include <stdint.h>

void task_3();

int main() {
    task_3();
}

void task_3() {
    uint64_t m;
    int j;

    printf("m=");
    scanf("%llu", &m);
    printf("j=");
    scanf("%d", &j);

    if (j < 0 || j > 63) {
        printf("incorrect input\n");
        return;
    }

    uint64_t mask = m & ~(1ULL << j);
    printf("%llu",mask);

}