#include <stdio.h>
#include <math.h>

double eReLu(double a, double x) {
    if (x < 0) {
        return a * (exp(x) - 1);
    } else {
        return 0.0;
    }
}

double eReLu_derivative(double a, double x) {
    if (x < 0) {
        return a * exp(x);
    } else {
        return 0.0;
    }
}

int main() {
    int n;
    double a, x;
    printf("Choose what you whant to solve:\n1)eReLu(a,x)\n2)eReLu_derivative(a,x)\nEnter the number:");
    scanf("%d", &n);

    printf("\nEnter the value of a:");
    scanf("%lf", &a);
    printf("\nEnter the value of x:");
    scanf("%lf", &x);

    if (n == 1) {
        double answer = eReLu(a, x);
        printf("The answer is %lf\n", answer);
    }
    if (n == 2) {
        double answer = eReLu_derivative(a, x);
        printf("The answer is %lf\n", answer);
    }
}