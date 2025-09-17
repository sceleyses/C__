#include <stdio.h>


int main() {
    double x, res;
    printf("Enter the value of x: ");
    scanf("%lf", &x);

    res = x*(x*(x*(x + 1)+ 1))+x + 1;
    printf("The value of x is: %.2lf\n", res);
    return 0;

}