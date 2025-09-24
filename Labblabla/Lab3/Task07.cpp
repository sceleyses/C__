#include <stdio.h>
#include <math.h>


void part_a() {
    int a, b, c;
    double x1, x2;
    printf("ax^2, bx, c = 0\ninput a, b, c:");
    scanf_s("%d %d %d", &a, &b, &c);

    double Discriminant = sqrt(b*b - 4*a*c);

    if (Discriminant > 1) {
        x1 = (-b + Discriminant) / (2*a);
        x2 = (-b - Discriminant) / (2*a);
        printf("x1 = %f, x2 = %f\n", x1, x2);

    }
    else if (Discriminant < 0.0) {
        printf("Infinity");

    }
    else {
        x1 = -b / (2*a);
        printf("x1 = %f\n", x1);
    }

}


void part_b() {
    int a, b, c;
    printf("ax^4 + bx^2 + c = 0\ninput a, b, c:");
    scanf_s("%d %d %d", &a, &b, &c);

    if (a == 0) {
        printf("Це не біквадратне рівняння (a ≠ 0)!\n");
        return;
    }

    double discriminant = b * b - 4 * a * c;

    if (discriminant < 0) {
        printf("Infinity");
    }
    else {
        double t1 = (-b + sqrt(discriminant)) / (2 * a);
        double t2 = (-b - sqrt(discriminant)) / (2 * a);

        //printf("t1 = %.2f, t2 = %.2f\n", t1, t2);

        int solutions_count = 0;
        double solutions[4];

        if (t1 >= 0) {
            if (t1 == 0) {
                solutions[solutions_count++] = 0;
            } else {
                solutions[solutions_count++] = sqrt(t1);
                solutions[solutions_count++] = -sqrt(t1);
            }
        }

        if (t2 >= 0 && t2 != t1) {
            if (t2 == 0) {
                int zero_exists = 0;
                for (int i = 0; i < solutions_count; i++) {
                    if (solutions[i] == 0) {
                        zero_exists = 1;
                        break;
                    }
                }
                if (!zero_exists) {
                    solutions[solutions_count++] = 0;
                }
            } else {
                solutions[solutions_count++] = sqrt(t2);
                solutions[solutions_count++] = -sqrt(t2);
            }
        }

        // Виводимо результати
        printf("the number of solutions: %d\n", solutions_count);

        if (solutions_count > 0) {
            printf("solutions: ");
            for (int i = 0; i < solutions_count; i++) {
                printf("x = %.2f", solutions[i]);
                if (i < solutions_count - 1) printf(", ");
            }
            printf("\n");
        }
    }
}

int main() {
    part_a();
    part_b();

}