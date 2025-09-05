#include <stdio.h>

double Rosenbrock2d(double x, double y) {
    double a = 100*(x*x-y);
    double b = x-1;
    return 100 * y*y +b*b;

}

int main() {
    printf("%lf\n", Rosenbrock2d(1, 1));
    printf("%lf\n", Rosenbrock2d(2, 4));
}