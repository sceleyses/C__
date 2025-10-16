#include <stdio.h>
void task_1();

int main() {
    task_1();
}

void task_1() {
    unsigned char n; //8-ми бітова змінна

    printf("Input n=");
    scanf("%hhu", &n);
    printf("n=%hhu\n", n);

    if (n < 64) {
        unsigned long long m = 1UL << n;
        printf("%llu", m);
    } else {
        printf("Wrong input");
    }
}