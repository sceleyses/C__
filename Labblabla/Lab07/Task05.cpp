#include <stdio.h>

#define N 5
int odd(int array[N]);
int even(int array[N]);
void task5();

int main() {
    task5();

}

void task5() {
    int array[N];
    for (int i = 0; i < N; i++) {
        printf("\nEnter number %d: ", i + 1);
        scanf_s("%d", &array[i]);
    }

    printf("\n\nOdd numbers: %d", odd(array));
    printf("\n\nEven numbers: %d", even(array));

}

int odd(int array[N]) {
    int odd_num = 0;
    for (int i = 0; i < N; i++) {
        if (array[i] % 2) {
            continue;
        } else {
            odd_num++;
        }
    }
    return odd_num;
}

int even(int array[N]) {
    int even_num = 0;
    for (int i = 0; i < N; i++) {
        if (array[i] % 2) {
            even_num++;
        }

    }
    return even_num;
}