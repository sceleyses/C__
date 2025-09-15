#include <stdio.h>
#include <math.h>

double softSign(double x) {
    return x / (1 + abs(x));
}

double softSign_derivative(double x) {
    return 1 / pow((1 + abs(x)), 2);
}

int main() {
    double x;
    printf("Enter the value of x: ");
    scanf("%lf", &x);

    double result = softSign(x);
    double derivative = softSign_derivative(x);

    printf("The function is %.2f\n", result);
    printf("The function's derivative is %.2f\n", derivative);

}
