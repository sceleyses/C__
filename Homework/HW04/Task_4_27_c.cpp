#include <stdio.h>
#include <math.h>

int main() {
    double epsilon;
    printf("Enter the value of epsilon: ");
    scanf("%lf", &epsilon);

    double r = 0.0;
    double P = 1.0;
    double pi_old = 0.0;
    double pi_new = 3.0;

    do {
        pi_old = pi_new;
        r = sqrt(2.0 + r);
        double a = r / 2.0;
        P *= a;
        pi_new = 2.0 / P;
    } while (fabs(pi_new - pi_old) >= epsilon);

    printf("Value of pi: %.10lf\n", pi_new);
    return 0;
}