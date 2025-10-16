#include <stdio.h>
#include <math.h>

double exp_tail(double x, unsigned n) {
    double y=1, t=1;
    for (unsigned i=0; i<= n; i++) {
        t*=(x/i);
        y+=t;
    }
    return y;
}

int main() {
    double x;
    unsigned n;
    do {
        printf("x = ");
        scanf("%lf", &x);
        printf("n = ");
        scanf("%u", &n);
        //exp_tail(x, n);
    } while (getchar() != 'k');//(fabs(x)>=1)
}