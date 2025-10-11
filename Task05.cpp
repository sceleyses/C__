#include <stdio.h>
#include <math.h>

double rosenbrock2d(double x, double y) {
    return 100 * pow((x*x - y), 2) + pow((x - 1), 2);
}

int main() {

    for (int i = 0; i < 3; i++) {
        double x = i;
        double y = i+2;
        double result = rosenbrock2d(x, y);

        printf("Test case %d:\n", i + 1);
        printf("x = %.0f, y = %.0f\n", x, y);
        printf("Rosenbrock2d(%.0f, %.0f) = %.0f\n\n", x, y, result);
    }
}