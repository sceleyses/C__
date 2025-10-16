#include <stdio.h>

int main() {
    double t = 1;
    double y = 0;
    double x, n;
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the value of n: ");
    scanf("%lf", &n);

    for (int i = 1; i <= n; i++) {
        t*=x;
        y += i*t;
    }
    printf("%lf\n", y);
}