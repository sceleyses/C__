#include <stdio.h>
#include <math.h>

int main() {
    double r, h;
    printf("Enter base radius: ");
    scanf("%lf", &r);
    printf("Enter height: ");
    scanf("%lf", &h);

    double V = (1.0/3.0) * M_PI * pow(r, 2) * h;

    printf("Volume is %.2f\n", V);
    return 0;
}