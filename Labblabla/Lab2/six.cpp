#include <stdio.h>
#include <math.h>

double perimeter(double a, double b, double c) {
    return a + b + c;
}

int main() {
    double x1, y1, x2, y2, x3, y3, S;
    printf("Please enter the coordinates of the A: ");
    scanf("%lf %lf", &x1, &y1);

    printf("\nPlease enter the coordinates of the B: ");
    scanf("%lf %lf", &x2, &y2);

    printf("\nPlease enter the coordinates of the C: ");
    scanf("%lf %lf", &x3, &y3);

    S = 1/2* abs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
    printf("S = %.2f\n", S);


}