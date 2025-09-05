#include <stdio.h>
#include <math.h>
/*
 *floor
 *ceil
 *round округлює як в математиці
 *hypot(a,b) знаходить гіпотенузу
 */


int main() {
    double x;
    int r1, r2;
    printf("Enter a number: ");
    scanf("%lf", &x);
    r1 = (int)x; //оператор перетворення типів
    r2 = round(x);
    printf("%d", r2);

}