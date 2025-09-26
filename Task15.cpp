#include <stdio.h>
#include <stdint.h>

int count_common_ones(uint32_t m, uint32_t n);
int count_matching_bits(uint32_t m, uint32_t n);


int main() {
    uint32_t m, n;

    printf("Enter first 32-bit natural number m:");
    scanf("%u", &m);
    
    printf("Enter second 32-bit natural number n:");
    scanf("%u", &n);


    int common_ones = count_common_ones(m, n);
    uint32_t common_mask = m & n;

    int matching_bits = count_matching_bits(m, n);
    printf("\nBits that are 1 in both numbers: %d", common_ones);
    printf("\nBits that are 0 in both numbers: %d", count_matching_bits(~m, ~n));
    printf("\nBits that are different: %d", 32 - matching_bits);
    
    return 0;
}

int count_common_ones(uint32_t m, uint32_t n) {
    return __builtin_popcount(m & n);
}

int count_matching_bits(uint32_t m, uint32_t n) {
    return 32 - __builtin_popcount(m ^ n);
}
