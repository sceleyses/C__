#include <stdio.h>
#include <math.h>


int main() {
    int x, y, z;
    printf("x, y, z:");
    scanf_s("%d %d %d", &x, &y, &z);
    int min_number, max_number;
    x = abs(x);
    y = abs(y);
    z = abs(z);

    int min_number_of_two, max_number_of_two;
    min_number_of_two = x < y ? x : y;
    max_number_of_two = x > y ? x : y;

    min_number = min_number_of_two < z ? min_number_of_two : z;
    max_number = max_number_of_two > z ? max_number_of_two : z;
    printf("min number: %d\n", min_number);
    printf("max number: %d\n", max_number);
}