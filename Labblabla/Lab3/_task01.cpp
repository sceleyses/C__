//#include <cstdint>
#include <stdio.h>
#include <math.h>

void task3_1a(unsigned n) {
    unsigned last_digit = n % 10;
    unsigned second_digit = (n / 10) % 10;
    unsigned first_digit = n / 100;
    printf("1st digit: %u, 2nd digit: %u, 3rd digit: %u", first_digit, second_digit, last_digit);
}

void task3_2(unsigned n) {
    unsigned last_digit = n % 10;
    unsigned second_digit = (n / 10) % 10;
    unsigned first_digit = n / 100;
    if ((last_digit == second_digit) ||
        (last_digit == first_digit) ||
        (first_digit == last_digit)) {
        return;
    }

    unsigned r1 = 100 * first_digit + 10 * second_digit + last_digit;
    unsigned r2 = 100 * first_digit + 10 * last_digit + second_digit;

    unsigned r3 = 100 * second_digit + 10 * first_digit + last_digit;
    unsigned r4 = 100 * second_digit + 10 * last_digit + first_digit;

    unsigned r5 = 100 * last_digit + 10 * second_digit + first_digit;
    unsigned r6 = 100 * last_digit + 10 * first_digit + second_digit;

    printf("%u, %u, %u, %u, %u, %u", r1, r2, r3, r4, r5, r6);
}

void task3_3(unsigned n) {
    int a, b, c;
    int res1;
    long long res2;

    int inp_corr = scanf_s("%d %d %d", &a, &b, &c);
    if (inp_corr != 3) {
        printf("Incorrect input");
        return;
    }

    res1 = (long long)a * b * c;
    printf("%lld\n", res1);

    res2 = (long long)a * b * c;
    printf("%lld\n", res2);
}
/*
*uint16_t mult_task3_4(uint8_t x, uint8_t y) {
*    return x * y;
*}
*
*void task3_4(unsigned n) {
*    uint8_t x, y;
*    scanf_s("%hhu %hhu", &x, &y);
*    uint16_t res = mult_task3_4(x, y);
*    printf("%hu\n", res);
*
*}
*/

void task3_5(unsigned n) {
    int x, y;
    printf("x, y:");
    scanf_s("%d %d", &x, &y);
    int min_number, max_number;
    min_number = x < y ? x : y; //if x<y return x else y
    max_number = x > y ? x : y;
    printf("min number: %d\n", min_number);
    printf("max number: %d\n", max_number);
}

void task3_6(unsigned n) {
    int x, y, z;
    printf("x, y, z:");
    scanf_s("%d %d %d", &x, &y, &z);
    int min_number, max_number;
    x = abs(x);
    y = abs(y);
    z = abs(z);

    int min_number_of_two, max_number_of_two;
    min_number_of_two = x < y ? x : y;
    max_number_of_two = x > y ? x : y;

    min_number = min_number_of_two < z ? min_number_of_two : z;
    max_number = max_number_of_two > z ? max_number_of_two : z;
    printf("min number: %d\n", min_number);
    printf("max number: %d\n", max_number);
/*
    if (x > y && x > z) {
        max_number = x;
    }
    else if (y > x && y > z) {
        max_number = y;
    }
    else if (z > x && z > y) {
        max_number = z;
    }

    if (x < y && x < z) {
        min_number = x;
    }
    else if (y < x && y < z) {
        min_number = y;
    }
    else if (z < x && z < y) {
        min_number = z;
    }

    printf("min number: %d\n", min_number);
    printf("max number: %d\n", max_number);
    */

}

void task3_7a(unsigned n) {
    int a, b, c;
    double x1, x2;
    printf("ax^2, bx, c = 0\n input a, b, c:");
    scanf_s("%d %d %d", &a, &b, &c);

    double Discriminant = sqrt(b*b - 4*a*c);
    printf("%d", Discriminant);

    if (Discriminant > 1) {
        x1 = (-b + Discriminant) / (2*a);
        x2 = (-b - Discriminant) / (2*a);
        printf("x1 = %f, x2 = %f\n", x1, x2);

    }
    else if (Discriminant < 0.0) {
        printf("Infinity");

    }
    else {
        x1 = -b / (2*a);
        printf("x1 = %f\n", x1);
    }

}

int main() {
    unsigned n;
    printf("n=");
    scanf ("%u", &n);

    if (n > 99 && n < 1000) {
        task3_1a(n);
        task3_2(n);
    }

    //task3_3(n);
    //task3_5(n);
    //task3_6(n);
    task3_7a(n);
    return 0;

}