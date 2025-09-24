#include <stdio.h>
#include <math.h>

int main() {
    double n, x;
    printf("Enter the value of n: ");
    scanf("%lf", &n);
    for (int i = 1; x < n; i++) {
        x = pow(2, i);
    }
    printf("%lf", x);
}