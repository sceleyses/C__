#include <stdio.h>

void part_a(int x) {
    x *= x;
    x *= x;
    printf("x = %d\n", x);
}

void part_b(int x) {
    int x2 = x * x;
    x *= x2;
    x *= x;
    printf("x = %d\n", x);
}

void part_c(int x) {
    int x2 = x * x;
    x2 *= x2;
    x2 *= x2;
    int x3 = x * x2;
    printf("x = %d\n", x3);
}

void part_d(int x) {
    int x2 = x * x;
    x2 *= x;
    int x3 = x2 * x2;
    x3 *= x3;
    int x4 = x3 * x2;
    printf("x = %d\n", x4);
}

void part_e(int x) {
    int x2 = x * x;
    int x3 = x2 * x;
    x3 *= x3;
    int x7 = x3 * x;
    x7 *= x7;
    x7 *= x7;
    printf("x = %d\n", x7);
}

void part_f(int x) {

    double result = x;
    result *= result;
    result *= result;
    result *= result;
    result *= result;
    result *= result;
    result *= result;
    printf("x = %e\n", result);
}

int main() {

    int x, p;
    printf("Enter x:");
    scanf("%d", &x);
    printf("Enter the power of x:");
    scanf("%d", &p);

    if (p == 4) {
        part_a(x);
    }
    else if (p == 6) {
        part_b(x);
    }
    else if (p == 9) {
        part_c(x);
    }
    else if (p == 15) {
        part_d(x);
    }
    else if (p == 28) {
        part_e(x);
    }
    else if (p == 64) {
        part_f(x);
    }
    return 0;
}