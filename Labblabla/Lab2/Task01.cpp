#include <stdio.h>
#include <math.h>

int main() {
    double x;
    float res;
    printf("Enter x: ");
    scanf("%lf", &x);

    res = cosh(x);
    printf("Cosh(%.2f) = %.2f\n", x, res);
}