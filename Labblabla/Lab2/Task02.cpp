#include <math.h>
#include <stdio.h>

int main() {
    double a, b, c;
    printf("Enter the first side of the triangle:");
    scanf("%lf", &a);
    printf("Enter the second side of the triangle:");
    scanf("%lf", &b);

    c = a*a + b*b;
    c = sqrt(c);

    printf("The third side of triangle is: %.2lf\n", c);
}