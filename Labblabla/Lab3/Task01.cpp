#include <stdio.h>

void part_a(unsigned n) {
    unsigned last_digit = n % 10;
    unsigned second_digit = (n / 10) % 10;
    unsigned first_digit = n / 100;
    printf("\n1st digit: %u, 2nd digit: %u, 3rd digit: %u", first_digit, second_digit, last_digit);
}

void part_b(unsigned n) {
    unsigned last_digit = n % 10;
    unsigned second_digit = (n / 10) % 10;
    unsigned first_digit = n / 100;
    unsigned sum = first_digit + second_digit + last_digit;
    printf("\nthe sum of the numbers of number %u = %u", n, sum);
}

void part_c(unsigned n) {
    unsigned last_digit = n % 10;
    unsigned second_digit = (n / 10) % 10;
    unsigned first_digit = n / 100;

    printf("\nthe number formed by reading a number from the back: %u%u%u", last_digit, second_digit, first_digit);
}
int main() {
    unsigned n;
    printf ( "Enter number: ");
    scanf ( "%u", &n);
    part_a(n);
    part_b(n);
    part_c(n);
    return 0;

}