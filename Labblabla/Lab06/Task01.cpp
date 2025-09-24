#include <stdio.h>
void task_1();

int main() {
    int task_index = 1;
    if (task_index == 1) {
        task_1();
    }
}

void task_1() {
    unsigned char n;
    printf("Input n=");
    scanf("%hhu", &n);
    printf("n=%hhu\n", n);

    if (n < 64) {
        unsigned long long m = 1UL << n;
        printf("%llx", m);
    }
}