#include <stdio.h>
#include <math.h>

int main() {

    double x;
    printf("Enter a real number x: ");
    scanf("%lf", &x);

    double int_part;
    double frac_part = modf(x, &int_part);

    printf("Integer part: %.0lf\n", int_part);
    printf("Fractional part: %.3lf\n", frac_part);
    printf("Ceil: %.0lf\n", ceil(x));
    printf("Floor: %.0lf\n", floor(x));
    printf("Rounded: %.0lf\n", round(x));

    return 0;
}