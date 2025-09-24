#include <stdio.h>

int main() {

    double a = 2+31;
    printf("2+31 = %.2lf;", a);
    double b = 45*54-11;
    printf("\n45*54-11 = %.2lf;", b);
    double c = 15/4;
    printf("\n15/4 = %.2lf;", c);
    double d = 67%5;
    printf("\n67%%5 = %.2lf;", d);
    double e = (2*45.1+3.3)/2;
    printf("\n(2*45.1+3.3)/2 = %.2lf;", e);

    return 0;
}