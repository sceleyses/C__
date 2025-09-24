#include <stdio.h>
#include <math.h>
#define N 5

int grater_Euler1(int array[N]);
void task3();

int main() {
    task3();
}

void task3() {

    int array[N];
    int num;
    for (int i = 0; i < N; i++) {
        printf("\nEnter number: ");
        scanf_s("%d", &num);
        array[i] = num;
    }

    for (int i = 0; i < N; i++) {
        printf("%d,", array[i]);
    }

    int result = grater_Euler(array);
    printf("\nThe euler result is: %d\n", result);

}

//int grater_euler1(int array[], size_t n) {}
//int grater_euler2(int* array_start, int* array_size) {}

int grater_Euler(int array[N]) {
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += array[i]> exp(1) ? 1 : 0;
    }
    return sum;
}
