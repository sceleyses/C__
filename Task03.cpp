#include <stdio.h>
#include <math.h>

void part_a(double x, unsigned n) {
    double t = 1; // t = x**i
    double y = 1;

    for ( unsigned i = 1; i <= n; i++) {
        t *= x;
        y += t;
    }
    printf("y= %lf", y);
    return;
}

void part_b(double x, double y, unsigned n){
    double p = x;
    double t = y;
    double z;
    for ( unsigned i = 1; i <= n; i++) {
        p *= p;
        t *= x;
        z += p*t;
    }
    printf("z= %lf", z);

}

int main() {
    double x,y,t;
    unsigned n;

    printf("x =");
    scanf("%lf", &x);
    printf("n =");
    scanf("%u", &n);
    printf("y =");
    scanf("%lf", &y);

    part_a(x, n);
    part_b(x, y, n);
}