#include <stdio.h>


double cross_product(double Ax, double Ay, double Bx, double By, double Cx, double Cy) {
    return (Bx - Ax) * (Cy - Ay) - (By - Ay) * (Cx - Ax);
}

void is_point_inside(double Px, double Py,
    double Ax, double Ay,
    double Bx, double By,
    double Cx, double Cy) {

    double D1 = cross_product(Ax, Ay, Bx, By, Px, Py); // AB * AP
    double D2 = cross_product(Bx, By, Cx, Cy, Px, Py); // BC * BP
    double D3 = cross_product(Cx, Cy, Ax, Ay, Px, Py); // CA * CP

    if (D1 > 0.0 && D2 > 0.0 && D3 > 0.0) {
        printf("Point is in the triangle\n");
    } else if (D1 < 0.0 && D2 < 0.0 && D3 < 0.0) {
        printf("Point is in the triangle\n");
    } else if (D1 == 0.0 || D2 == 0.0 || D3 == 0.0) {
        printf("Point is on the side of triandle triangle\n");
    }
    else {
        printf("Point is not in the triangle\n");
    }
}

int main() {
    double Ax, Ay, Bx, By, Cx, Cy, Px, Py;
    printf("Enter the coordinates of P (x, y) :");
    scanf("%lf %lf", &Px, &Py);
    printf("Enter the coordinates of A (x, y) :");
    scanf("%lf %lf", &Ax, &Ay);
    printf("Enter the coordinates of B (x, y) :");
    scanf("%lf %lf", &Bx, &By);
    printf("Enter the coordinates of C (x, y) :");
    scanf("%lf %lf", &Cx, &Cy);

    is_point_inside(Px, Py, Ax, Ay, Bx, By, Cx, Cy);


}