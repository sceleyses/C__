#include <complex>
#include <stdio.h>
#include <math.h>

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double area(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    double Ax, Ay, Bx, By, Cx, Cy;
    printf("Enter coordinates of A: ");
    scanf("%lf %lf", &Ax, &Ay);
    printf("Enter coordinates of B: ");
    scanf("%lf %lf", &Bx, &By);
    printf("Enter coordinates of C: ");
    scanf("%lf %lf", &Cx, &Cy);

    double AB = distance(Ax, Ay, Bx, By);
    double BC = distance(Bx, By, Cx, Cy);
    double CA = distance(Cx, Cy, Ax, Ay);

    double result = area(AB, BC, CA);
    printf("Area is %.2f\n", result);
}