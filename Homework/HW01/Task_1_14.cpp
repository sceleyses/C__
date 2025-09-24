#include <stdio.h>


int main() {

    double a, t1, v, S, t2;
    printf ("Enter the value of acceleration:");
    scanf ("%lf", &a);
    printf ("Enter the value of time in seconds:");
    scanf ("%lf", &t1);
    printf ("Enter the value of velocity:");
    scanf ("%lf", &v);

    S = (a*t1*t1)/2;
    t2 = v/a;

    printf ("In %.2f seconds the body will travel %2.f meters.\n", t1, S);
    printf ("It will reach a speed of %2.f m/s in %2.f seconds.", v, t2);
}