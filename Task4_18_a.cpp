#include <stdio.h>

double solve(double x, double k);
double pow(double baze, double index);

int main() {
    double x, k;
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the value of k: ");
    scanf("%lf", &k);

    if (k == 1.0) {
        printf("Answer: %lf\n", x);
    }
    else if (k > 1.0) {
        printf("Answer: %.2lf\n", solve(x, k));
    }
    else {
        printf("Wrong value of k");
    }
}

double pow(double baze, double index) {
    double result = 1.0;

    for (int i; i <= index; i++) {
        result = result * baze;
    }

    return result;
}

double solve(double x, double k) {
    double answer;
    double index = 2*k-1;

    answer = pow(x, index)/(k*k - k);
    return answer;

}
