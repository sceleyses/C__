#include <stdio.h>

int main() {
    int n;
    double derangement = 0.0;
    double term = 1.0;

    printf("Enter a natural number n that is smaller than 25: ");
    scanf("%d", &n);

    derangement = 1.0;

    for (int i = 1; i <= n; i++) {
        term = term * (-1.0) / i;
        derangement += term;
    }

    term = 1.0;
    double res = 0.0;

    double ser_term;
    int sign = 1;

    for (int k = 0; k <= n; k++) {
        ser_term = 1.0;
        for (int j = k + 1; j <= n; j++) {
            ser_term *= j;
        }

        res += sign * ser_term;
        sign = -sign;
    }

    printf("The subfactorial of !%d is: %.0f\n", n, res);
    return 0;
}