#include <stdio.h>

#define N 100
void task1();

int main() {
    task1();

}

void task1() {
    int array[N] = {1, 2, 3, 4, 5};
    int n = sizeof(array) / sizeof(array[0]); // підрахування розміру масиву
    int counter = 0;

    double x;
    printf("x=");
    scanf_s("%lf", &x);
    for (int i = 0; i < n; i++) {
        if (array[i] < x) {
            counter++;
        }
    }
    printf("Answer: %d", counter);

}
