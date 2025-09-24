#include <stdio.h>
#include <math.h>

int main() {
    double input_num;
    double sum = 0.0;
    double prod = 1.0;
    int count = 0;

    printf("Enter a sequence of non-zero numbers. Enter 0 to finish.\n");

    while (true) {
        printf("a[%d] = ", count);
        scanf("%lf", &input_num);


        if (input_num == 0.0) {
            break;
        }

        sum += input_num;
        prod *= input_num;
        count++;
    }


    if (count > 0) {
        double arithmetic_mean = sum / count;
        double geometric_mean = pow(prod, 1.0 / count);

        printf("Number of elements entered: %d\n", count);
        printf("Arithmetic mean: %.2f\n", arithmetic_mean);
        printf("Geometric mean: %.2f\n", geometric_mean);
    } else {
        printf("No numbers were entered.\n");
    }

    return 0;
}