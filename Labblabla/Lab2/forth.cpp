#include <stdio.h>
#include <math.h>
/*
 * y = x^5 + x^3 + x
 * x(x^3(x+1)+1)
 */

double f1(double x) {
    double x2 = x*x;
    double y = x*(x2*x*(x + 1) + 1);
    return y;
}

int main() {
    double x, y;
    printf("Enter x: ");
    scanf("%lf", &x);
    printf("%lf\n", f1(x));
}