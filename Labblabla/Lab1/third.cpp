#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main() {
    double m1, m2, r, F;
    printf("Enter m1:");
    scanf("%lf", &m1);
    printf("Enter m2:");
    scanf("%lf", &m2);
    printf("Enter r:");
    scanf("%lf", &r);
    const double G = 6.67e-11;
    F = G * (m1 * m2)/pow(r, 2);
    printf("F = %lf", F);



}
