#include <stdio.h>
#include <math.h>

int main() {
    double x;
    printf("x=");
    scanf("%lf", &x);
    printf("x! = 1");

    for (int i = 2; i <= x; i++) {
        printf("*%u",i);
    }

}