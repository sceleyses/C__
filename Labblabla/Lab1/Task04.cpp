#include <stdio.h>
#include <math.h>

int main() {
    double m1, m2, r;
    printf("Please enter a value of m1 and m2: ");
    scanf("%lf %lf", &m1, &m2);
    printf("Please enter a value of r: ");
    scanf("%lf", &r);

    const double gamma = 6.673e-11;
    double F = gamma * m1 * m2 / (r * r);

    printf("F = %e\n", F);

    return 0;
}