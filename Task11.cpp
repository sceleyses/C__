#include <stdio.h>
#include <stdint.h>


int main() {
    unsigned long long m;
    int k;

    printf("Enter number m:");
    scanf("%llu", &m);

    printf("\nEnter number of bits k: ");
    scanf("%d", &k);


    unsigned long long left= m & ((1ULL << (8 - k)) - 1);
    printf("\nAfter setting left %d bits to zero:", k);
    printf("\nDecimal: %llu", left);
    printf("\nOctal: %llo", left);

    // 2. Set right k bits to zero
    unsigned long long right = m & (~0ULL << k);
    printf("\n\nAfter setting right %d bits to zero:", k);
    printf("\nDecimal: %llu", right);
    printf("\nOctal: %llo\n", right);

    return 0;
}