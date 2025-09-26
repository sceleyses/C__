#include <stdio.h>

void task_2();

int main() {
    task_2();
}

void task_2() {
    int k;
    unsigned n,m;
    printf("n=");
    scanf("%u",&n);
    printf("k=");
    scanf("%d",&k);

    m = n | (1 << k);
    printf("%llu",m);
}
