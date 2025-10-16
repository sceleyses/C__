#include <stdio.h>

int main() {

    double a;
    printf("Enter a number: ");
    scanf("%lf", &a);
    printf("-%.2lf -%.2lf -%.2lf", a, a, a);
    printf("\n%.2lf | %.2lf | %.2lf", a, a, a);
    printf("\n-%.2lf -%.2lf -%.2lf", a, a, a);

    return 0;
}