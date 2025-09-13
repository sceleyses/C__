#include <stdio.h>
#include <math.h>

double perimeter(double a, double b, double c) {
    return a + b + c;
}
int main() {
    double a, b, c, s;
    printf("Enter 3 numbers: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    double perim = perimeter(a, b, c)/2;
    s = sqrt(perim*(perim - a)*(perim - b)*(perim - c));
    printf("S = %lf\n", s);

}